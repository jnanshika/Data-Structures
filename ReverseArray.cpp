#include <iostream>
using namespace std;
int main()
{
    int i,temp,a[5]={1,2,3,4,5},start=0,n=5;
    cout<<"Elements of array:";
    for ( i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    int end=n-1;
    while( start< end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]= temp;
        start++;
        end--;
    }
    cout<<"Reversed array";
    for ( i=0; i<n ; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}