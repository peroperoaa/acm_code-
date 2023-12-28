#include<stdio.h>
int a[1010][1010], ans[1010][1010];
void solve(void)
{
	int n, m;
	scanf("%d %d", &m, &n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		scanf("%d", &a[i][j]);
	m %= n;
	for(int i = 0; i < n; i++)
	{
		for(int j = n - m; j < n; j++)
			ans[i][j - n + m] = a[i][j];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - m; j++)
			ans[i][j + n - m + 1] = a[i][j];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%d ", ans[i][j]);
		if(i != n - 1)
			printf("\n");
	}
		
}
int main()
{
	int t = 1;
	while (t--)
		solve();
	return 0;
}