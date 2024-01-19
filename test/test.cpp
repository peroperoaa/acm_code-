#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+10;
char a[MAXN],s[MAXN];
char ch;
int u;
void find_printf(char *a,char *s){
	int m=0;
	char *p=a;
	int flag=0,count=0;//flag用来标记字符串a是否出现第一次，cont用来表示读取到字符串s的下标
	int length=strlen(a);
	int count1;
	while(*s!='\0')
	{ 
		if(*s==*p)
		{
			p++;
			if((*p=='\0'&&*(s+1)==' ')||(*p=='\0'&&*(s+1)=='\0'))//字符串p(也是a)被读完一遍；
			{
				m++;
				p=a;
				if(flag==0) 
				{
					flag=1;	
					count1=count-length+1;
				}
			}
		}
		else
		{
			while(1)
			{
				if(*s==' '||*s=='\0')
				{
					break;
				}
				s++;
				count++;
			}
			p=a;//刷新指针,令p=a[0]。
		}
		s++;//读取下一位。
		count++;//保存s的下标。
	}
	if(flag==0)
	{
		printf("-1");
		return;
	}
	else
	{
		printf("%d %d",m,count1);
		return;
	}
	
}
int main(){
	scanf("%s", a);
    getchar();
    gets(s);
	int length1=strlen(a),length2=strlen(s);
	for(int i=0;i<length1;i++)
	{
		a[i]=tolower(a[i]);

	}
	for(int i=0;i<length2;i++)
	{
		s[i]=tolower(s[i]);
	}
	find_printf(a,s);
	return 0;
}