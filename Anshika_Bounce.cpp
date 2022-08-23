#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, X; 
    cin >> N >> X;
    int li[N + 1];
    li[0] = 0;
    for (int i = 0; i < N; ++i) 
    {
        int value; 
        cin >> value;
        li[i + 1] = li[i] + value;
    }
    int ans = 0;
    for (int i = 0; i <= N; ++i) 
    {
        if (li[i] <= X) 
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
