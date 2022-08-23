/*Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. If both elements have the same frequency, then return the smaller element.
Note:  We need to return the element, not its count.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x,y;
    cin>>x>>y;

int cx=0, cy=0;
    for (int i =0; i<n; i++)
    {
        if(arr[i]== x){
            cx++;
        }
        if(arr[i]== y){
            cy++;
        }
    }
    if(cx > cy){
        cout<<x;
    }
    else if (cx == cy){
        if(x>y){
            cout<<y;
        }
        else{
            cout<<x;
        }
    }
    else{
        cout<<y;
    }
    return 0;
}