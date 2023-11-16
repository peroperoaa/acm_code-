#include <bits/stdc++.h>
using namespace std;
#define _ 0
const int N=5e6+10;
int a[N];

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,oput;cin>>n>>oput;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int cnt=-1;
	for(int i=0;i<n;i++)
	{
			cnt++;
		if(oput==cnt)
		{
			cout<<a[i];
			return (0^_^0);
		}
	}
}