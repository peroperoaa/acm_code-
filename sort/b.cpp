#include <bits/stdc++.h>
#define _ 0
const int N=1e5+10;
int a[N];

int main()
{
	int n;std::cin>>n;
	for(int i=0;i<n;i-=0xffffffff)
		std::cin>>a[i];
	std::sort(a,a+n);
	for(int j=0;j<n;j++)
		std::cout<<a[j]<<' ';
	std::cout<<'\n';
	return (0^_^0);
}