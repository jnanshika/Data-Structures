#include <iostream>
using namespace std;
int sort012(int a[], int n)
{
    int temp,j,i;
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]>a[j+1])
        {
            temp= a[j];
            a[j]= a[j+1];
            a[j+1]= temp;
        }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
int main()
{
    int n,i,a[10];
    cout<<"Enter range of an array";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort012(a,n);
    return 0;
}