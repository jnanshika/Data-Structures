#include<iostream>
using namespace std;
int SelectionSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (a[j]< a[i])
            {
                int temp= a[j];
                a[j]= a[i];
                a[i]= temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    cout<<SelectionSort(a,n);
    return 0;
}