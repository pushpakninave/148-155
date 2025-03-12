#!/bin/bash

# File to store student records
student_file="student.txt"

# Log file to store errors
log_file="log1.txt"

# Function to calculate total, percentage, and grade
calculate_stats() {
    local roll_no="$1"
    local name="$2"
    local hindi_marks="$3"
    local maths_marks="$4"
    local physics_marks="$5"

    local total_marks=$((hindi_marks + maths_marks + physics_marks))
    local percentage=$((total_marks * 100 / 300))
    local grade=""

    if [ $percentage -ge 90 ]; then
        grade="A"
    elif [ $percentage -ge 80 ]; then
        grade="B"
    elif [ $percentage -ge 70 ]; then
        grade="C"
    elif [ $percentage -ge 60 ]; then
        grade="D"
    else
        grade="F"
    fi

    echo "Roll No: $roll_no"
    echo "Name: $name"
    echo "Total Marks: $total_marks"
    echo "Percentage: $percentage%"
    echo "Grade: $grade"
}

# Function to add student record
add_student_record() {
    local roll_no="$1"
    local name="$2"
    local hindi_marks="$3"
    local maths_marks="$4"
    local physics_marks="$5"

    # Check if roll number already exists
    if grep -q "^$roll_no," "$student_file"; then
        echo "$roll_no,exists" >> "$log_file"
        return
    fi

    # Check if marks are in the valid range
    if [ $hindi_marks -lt 1 -o $hindi_marks -gt 99 ] || \
       [ $maths_marks -lt 1 -o $maths_marks -gt 99 ] || \
       [ $physics_marks -lt 1 -o $physics_marks -gt 99 ]; then
        echo "$roll_no,$name,$hindi_marks,$maths_marks,$physics_marks,marks out of range" >> "$log_file"
        return
    fi

    # Add the record to the student file
    echo "$roll_no,$name,$hindi_marks,$maths_marks,$physics_marks" >> "$student_file"

    # Calculate and display the statistics
    calculate_stats "$roll_no" "$name" "$hindi_marks" "$maths_marks" "$physics_marks"
}

# Example usage
add_student_record "101" "John Doe" 85 92 78
add_student_record "102" "Jane Smith" 75 80 85
add_student_record "101" "Alice Johnson" 92 88 90  # Duplicate roll number
add_student_record "103" "Bob Williams" 105 85 90  # Marks out of range
