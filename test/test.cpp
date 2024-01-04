#include <cstdio>
#include <cstring>
 void change(char *a)
 {
 	for(int i=0;i<strlen(a);i++)
 	{
 		if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
	}
 }
int isp=1,cnt,rom;
char word[100];
char str[100];
int main()
{
	scanf("%s",word);
	change(word);
	int i=0;
	while(scanf("%s",&str)!=EOF)
	{
		change(str);
		if(!strcmp(str,word)&&isp==1)
		{
			cnt++;
			isp=0;
			rom=i;
		}
		else if(!strcmp(str,word)&&isp==0)cnt++;
		i++;
	}
	if(isp!=1)printf("%d %d",cnt,rom);
	else printf("-1");
	return 0;
}