#include<stdio.h>
#include<string.h>

int length()
{
	char a[40];
	int len=0;
	printf("Enter any string: ");
	gets(a);
	
	len=strlen(a);
	return len;
}

void main()
{
	int ans;
	ans=length();
	printf("lenth is : %d",ans);
}
