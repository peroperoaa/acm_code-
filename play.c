#include <stdio.h>
int flag = 0;
int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    int ans = 0;
    int a = 1, b = 1;
    for(int i = 3; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}
void print_fn(int m, int n)
{
    for(int i = 0; i <= 25; i++)
    {
        if(fib(i) < n && fib(i) > m)
        {
            if(!flag)
            {
                flag = 1;
                printf("%d", fib(i));
            }
            else
            {
                printf(" %d", fib(i));
            }
        }
    }
    if(flag == 0)
        printf("No Fibonacci number");
}
int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    print_fn(m,n);
    return 0;
}