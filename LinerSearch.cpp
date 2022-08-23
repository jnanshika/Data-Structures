#include<iostream>
using namespace std;
int LinerSearch(int a[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if (key== a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int i,n,key;
    cout<<"Enter no. of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of an array:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>key;
    cout<<LinerSearch(a,n,key);
    return 0;
}