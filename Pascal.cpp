#include<iostream>
using namespace std;
int fact(int n)
{
    int factn=1;
    for(int i=1; i<=n; i++)
    {
        factn= factn* i;
    } 
    return factn;
}
int main()
{
    int n;
    cout<<"Enter values of n ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            int ans = fact(i)/ (fact(j) * fact(i-j));
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}