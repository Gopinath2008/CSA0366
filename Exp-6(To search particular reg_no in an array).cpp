#include<stdio.h>
int main()
{
	int i,n,search,a[i],flag=0;
	printf("Enter the number of elements in  array:");
	scanf("%d",&n);
	printf("Enter the Reg_no in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element in an array:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag++;
		}
	}
	if(flag>0)
	printf("The search element %d found in the array:",search);
	else
	printf("The search element %d not found in the array:",search);
}
