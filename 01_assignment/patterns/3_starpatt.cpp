#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:: ";
    cin>>n;
    //int i,j,k;
    for(int i=n;i>=1;i--)
    {
        // for(j=1;j<=n-i;j++)
        // {
        //     cout<<"  ";
        // }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}