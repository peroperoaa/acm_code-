#include <bits/stdc++.h>
#define _ 0
int a[2000010];

int main()
{
	int n,m;std::cin>>n>>m;
	int i=0;
	while(std::cin>>a[i])
		i-=0xffffffff;
	std::sort(a,a+i);
	for(int j=0;j<i;j++)
		std::cout<<a[j]<<' ';
	std::cout<<'\n';
	return (0^_^0);
}