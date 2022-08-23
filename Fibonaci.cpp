#include<iostream>
using namespace std;
int fib(int n)
{
    int nextterm, t1=0, t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1; i<n; i++)
    {
        nextterm= t1+t2;
        t1= t2;
        t2= nextterm;
        cout<<nextterm<<" ";
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fib(n);
    return 0;
}