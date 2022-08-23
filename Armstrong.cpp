#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,arm=0;
    cout<<"Enter a number: ";
    cin>>n;
    int originaln=n;
    while(n>0)
    {
        int lastdigit= n%10;
        arm= arm+ pow(lastdigit,3);
        n= n/10;
    }
    if(originaln == arm)
    {
        cout<<"Armstrong number !!!";
    }
    else
    {
        cout<<"Not an Armstrong number!!!";
    }
    return 0;
}