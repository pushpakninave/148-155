
#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <set>
#include <map>

using namespace std;

int main() {
    // Vector
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Vector: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // List
    list<int> l = {10, 20, 30, 40, 50};
    cout << "List: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Set
    set<int> st = {1, 2, 3, 4, 5};
    cout << "Set: ";
    for (set<int>::iterator it = st.begin(); it != st.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Map
    map<string, int> m = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
    cout << "Map: ";
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ":" << it->second << " ";
    }
    cout << endl;

    return 0;
}
