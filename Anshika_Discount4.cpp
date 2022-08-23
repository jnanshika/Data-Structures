#include <bits/stdc++.h>
using namespace std;
#define V 3

int travllingSalesmanProblem(int b[][V] , int s)
{
	vector<int> vertex;
	for (int i = 0; i < V; i++)
		if (i != s)
			vertex.push_back(i);
	int min_path = INT_MAX;
	do 
    {
		int current_pathweight = 0;
		int k = s;
		for (int i = 0; i < vertex.size(); i++) 
        {
			current_pathweight += b[k][vertex[i]];
			k = vertex[i];
		}
		current_pathweight += b[k][s];
		min_path = min(min_path, current_pathweight);
	} while ( next_permutation(vertex.begin(), vertex.end()));
	return min_path;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int b[m][V],s=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<V; j++)
        {
            cin>>b[i][j];
        }
    }
	int price= travllingSalesmanProblem(b, s);
    char coupon= 'y';
    if(coupon == 'y')
    {
        price= price /2;
    }
    cout<<price;
	return 0;
}
