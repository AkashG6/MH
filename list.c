#include<stdio.h>
#include "list.h"

int main()
{
	int n;
		
    struct list *array = createList();
	struct list *array1 = createList();	
	struct list *array2 = createList();

    printf("Enter 1:");
	scanf("%d",&n);
	
	if(n==1)
	{
		
	    insertInt_first(array, 23);
	    insertInt_last(array, 56);
	    insertInt_at(array, 1, 323);
	    
	    insertChar_first(array1, 'a');
	    insertChar_last(array1, 'b');
	    insertChar_at(array1, 1, 'c');
	    
	    insertFloat_first(array2, 23.909);
	    insertFloat_last(array2, 12.098);
	    insertFloat_at(array2, 1, 89.4534);

		printf("Array:-");
		display_int(array);
		
		printf("\nArray1:- ");
		display_char(array1);
		
		printf("\nArray2:- ");
		display_float(array2);
		
		
		int c=count_list(array);
	    int c1=count_list(array1);
	    int c2=count_list(array2);
	    
	    printf("\nCount=%d\n",c);
	    printf("\nCount1=%d\n",c1);
		printf("\nCount2=%d\n",c2);					
	}	
}
