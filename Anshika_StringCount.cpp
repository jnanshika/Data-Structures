#include <iostream>
#include<strings.h>
using namespace std;
int main()
{
    int count= 0;
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    int len= s.length();
    for(int i=0; i<len; i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            i++;
            if (s[i]== 'c' || s[i] == 'C')
            {
                i++;
                if(s[i]== 'e' || s[i] == 'E')
                {
                    count+=1;
                }
            }
        }
    }
    cout<<"No of times ace is present: "<<count;
    return 0;
}