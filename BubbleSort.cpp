#include<iostream>
using namespace std;
int BubbleSort(int a[], int n)
{
    int n1=n;
    //int counter=1;
    //while(counter< n)
    while(n>0)
    {
        //for(int i=0; i<n-counter; i++)
        for(int i=0; i<n-1; i++)
        {
            if ( a[i]> a[i+1])
            {
                int temp= a[i];
                a[i]= a[i+1];
                a[i+1]= temp;
            }
        }
        n--;
        //counter++;
    }
    for(int i=0; i<n1; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
int main()
{
    int i, n;
    cout<<"Enter no. of elemets: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<BubbleSort(a,n)<<" ";
    return 0;
}