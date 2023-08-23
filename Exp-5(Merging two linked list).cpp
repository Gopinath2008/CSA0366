#include<stdio.h>
int main()
{
	int i,j,k,size1,size2;
	i=j=k=0;
	int list1[]={1,3,5,7,9};
	size1=sizeof(list1)/sizeof(list1[0]);
	int list2[]={2,4,6,8,10};
	size2=sizeof(list2)/sizeof(list2[0]);
	int mergedlist[size1+size2];
	int mergedsize=size1+size2;
	while(i<size1 && j<size2)
	{
		if(list1[i]<list2[j])
		{
			mergedlist[k++]=list1[i++];
		}
		else
		{
			mergedlist[k++]=list2[j++];
		}
	}
	while(i<size1)
	{
		mergedlist[k++]=list1[i++];
	}
	while(j<size2)
	{
		mergedlist[k++]=list2[j++];
	}
	printf("Merged list:");
	for(i=0;i<mergedsize;i++)
	{
		printf("%d ",mergedlist[i]);
	}
	return 0;	
}
