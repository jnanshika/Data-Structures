#include<iostream>
#include<conio.h>
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
    printf("Enter length of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to find: ");
    scanf("%d", &key);
    int pos=BinarySearch(a,n,key);
    printf("The number is found at position: %d",pos+1);
    return 0;
}