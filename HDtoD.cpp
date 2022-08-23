#include<bits/stdc++.h>
using namespace std;

int HexaDecimalToDecimal(string  n)
{
    int ans=0,base =1, s= n.size();
    for(int i= s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i]<= '9')
        {
            ans+= base*(n[i]- '0');
        }
        else if( n[i] >= 'A' && n[i] <= 'F')
        {
            ans += base*( n[i]- 'A' + 10);
        }
        base *= 16;

    }
    return ans;
}

int main()
{
    string n;
    cin>>n;
    cout<<HexaDecimalToDecimal(n);
    return 0;
}