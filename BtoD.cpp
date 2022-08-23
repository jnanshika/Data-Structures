#include<iostream>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans=0, base=1;
    while(n>0)
    {
        int lastdigit= n%10;
        ans += lastdigit *x;
        x*=2;
        n /=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<< BinaryToDecimal(n) ;
    return 0;
}