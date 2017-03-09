// Header file for Binary functions bin.h
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

//converting binary numbers to decimal
int bin_to_dec(int a[], int n)
{
	//array must be stored in such a way that MSB is at index 0 and LSB at index n-1
	//n is the length of the array
	
	int i, dec= 0;
	
	for(i= n-1; i>= 0; i--)
	{
		if(a[i] > 1 || a[i]< 0)
		{
			printf("Error: invalid binary number passed to function dec_to_bin()\n"); //the function will throw an error if the binary number is invalid.
			exit(0);
		}    
		
		dec= dec+ a[i]*pow(2,i); 
	}
	
	return dec;
}


// gives 1's complement of a binary number
int * ones_complement(int a[],int array[],int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i]=array[i];
	}
	
	for (i = 0; i < n; i++)
	{
		if (array[i]==1)
		{
			a[i]=0;
		}
		else if (array[i]==0)
		{
			a[i]=1;
		}
		else
		{
			printf("Error: invalid binary number passed to function ones_complement()\n"); //the function will throw an error if the binary number is invalid.
			exit(0);
		}
	}

	return (a); 

}

// decimal to binary conversion
int * dec_to_bin(int array[],int nb,int n)
{
	if (n<0)
	{
		printf("Error: cannot pass negative number to function dec_to_bin()\n");
		exit(0);
	}

	int i,j;
	for (i = nb-1; i >=0 ; i--)
	{
		array[i]=n%2;
		n=n/2;
	}
	if (n>=1)
	{
		printf("Error: insufficient size of destination array\n");
		exit(0);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%d",array[i] );
	}
	printf("\n");

	return array;
}

