#include<iostream>
#include<math.h>
using namespace std;
bool check(int x, int y, int z)
{
    int a= max (x, max(y,z));
    int b, c;

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if (a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1, num2, num3;
    cout<<"Enter sides of triangle: ";
    cin>>num1>>num2>>num3;
    if (check (num1, num2, num3))
    {
        cout<<"Pythagorean Triplet!!!";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet!!!";
    }
    return 0;
}