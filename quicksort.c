//Quicksort.
#include<stdio.h>

int pIndex;
quicksort(int *a,int start,int end)
{
	if(start<end)
	{
		partition(a,start,end);
	
		quicksort(a,start,pIndex-1);
		quicksort(a,pIndex+1,end);
	}
}

partition(int *a,int start,int end)
{
	int temp,i,pivot;
	
	pivot=a[end];
	pIndex=start;

	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[pIndex];
			a[pIndex]=temp;

			pIndex++;	
		}
	}
	temp=a[end];
	a[end]=a[pIndex];
	a[pIndex]=temp;

	return(pIndex);
}

void main()
{        int size;
printf("enter size\n");
scanf("%d",&size);
	int a[size];
	int i;
printf("enter values \n");
for(i=0;i<size;i++)
{scanf("%d",&a[i]);}		
	quicksort(a,0,size-1);

	printf("-----------------------------------------------\n");
	printf("The sorted array is:");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
		printf("------------------------------------------------\n");
}
