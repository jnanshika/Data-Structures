#include<iostream>
using namespace std;
int fact(int n)
{
    int factn=1;
    for(int i=1; i<=n; i++)
    {
        factn= factn* i;
    }
    cout<<"Factorial of "<<n<<" is "<<factn; 
    return 0;
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    fact(num);
    return 0;
}