#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<n; i++)
    {
        int current= a[i];
        int j=i-1;
        while(a[j]> current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]= current;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}