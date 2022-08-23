#include<iostream>
using namespace std;
int sumf(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+= i;
    }
    cout<<"sum:"<<sum;
    return 0;
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    sumf(num);
    return 0;
}