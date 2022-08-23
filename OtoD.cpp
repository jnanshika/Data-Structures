#include<iostream>
using namespace std;

int OctalToDecimal(int n)
{
    int ans=0,base =1;
    while(n>0)
    {
        int lastdigit = n%10;
        ans+= lastdigit *base;
        base*= 8;
        n/=10; 
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<OctalToDecimal(n);
    return 0;
}