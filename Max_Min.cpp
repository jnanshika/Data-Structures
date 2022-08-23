#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int i,n,maxNo,minNo;
    cout<<"Enter length of array";
    cin>>n;
    int a[n];
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    maxNo=INT_MIN, minNo=INT_MAX;
    for(i=0; i<n; i++)
    {
        maxNo= max(maxNo, a[i]);
        minNo= min(minNo, a[i]);
    }
    cout<<"\n Max element"<<maxNo<<endl;
    cout<<"Min element"<<minNo;
    return 0;
}