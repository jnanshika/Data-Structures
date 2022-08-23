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
    int n,r;
    cout<<"Enter values of n and r: ";
    cin>>n>>r;
    int ans = fact(n)/ (fact(r) * fact(n-r));
    cout<<ans;
    return 0;
}