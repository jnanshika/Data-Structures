#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number: ";
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        } 
        cout<<endl;
    }
}