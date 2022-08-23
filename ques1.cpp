#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6}, n=3, arr2[6],j=0;
    //output: [1,4,2,5,3,6]
    for(int i=0; i<6;i++)
    {
        if(i%2 != 0)
        {
            arr2[j]= arr[n];
            n++;
            j++; 
        }   
        else
        {
            arr2[j]= arr[i];
            j++;
        }
        cout<<arr2[i]<<"\t";
    }
    //for (int i=0; i<6; i++)
    //{
    //    cout<<arr2[i]<<" ";
    //}
    return 0;
}