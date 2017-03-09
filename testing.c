#include<stdio.h>
#include"bin.h"

int main()
{
	int n, i, ans;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n], arr[n];
	
	printf("Enter the elements: \n");
	
	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);
	
	arr[n]= *twos_complement(arr, a, n);
	
	printf("two's complement: ");
	
	for(i= 0; i< n; i++)
	printf("%d",arr[i]);
}
