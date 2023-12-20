#include<stdio.h>

int array(int x[100],int y)
{
	int sum=0,i;
	for(i=0;i<y;i++)
	{
		sum+=x[i];
	}
	return sum;
}

void main()
{
	int i,n;
	
	printf("Enter size of array:-");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	printf("sum of array is :%d",array(a,n));
}
