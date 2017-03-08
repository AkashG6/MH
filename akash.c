#include <stdio.h>
#include"bin.h"

int main()
{
	
	int i,n;
	printf("Enter size\n");
	scanf("%d",&n);
	int array[n];

	printf("enter no.\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&array[i]);
	}

	array[n] = *ones_complement(array,n);

	for (i = 0; i < n; i++)
	{
		printf("%d",array[i]);
	}
}

