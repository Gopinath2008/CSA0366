#include<stdio.h>
int main()
{
	int n,a[]={10,20,30,40,50,60,70,80};
	n=sizeof(a)/sizeof(a[0]);
	if(n>=5)
	{
		printf("5th iterated element is %d",a[4]);
	}
	else
	{
		printf("Array dosen't have atleast 5 elements.\n");
	}
}
