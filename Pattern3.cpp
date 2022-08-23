#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=i; j>=1; j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}