#include<iostream>
using namespace std;
int main()
{
    int n,reverse;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        int lastdigit= n%10;
        reverse= reverse*10 + lastdigit;
        n= n/10;
    }
    cout<<"Reverse Number: "<<reverse;
    return 0;
}