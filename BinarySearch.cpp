#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int key)
{
    int start=0, end=n-1; 
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(a[mid] < key)
        {
            start= mid+1;
        }
        else if(a[mid]> key)
        {
            end= mid-1; 
        }
        else if( a[mid]== key)
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int i,n,key;
    cout<<"Enter length of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter values of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number you want to find: ";
    cin>>key;
    int pos=BinarySearch(a,n,key);
    cout<<"The no. if found at position:"<<pos+1;
    return 0;
}