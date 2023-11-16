#include <bits/stdc++.h>
using namespace std;
#define _ 0
const int N=1e3+10;
vector<int> a;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());

	cout<<a.size()<<'\n';
	for(int i:a)
		cout<<i<<' ';
	return (0^_^0);
}