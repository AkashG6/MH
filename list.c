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
	    
	    insertInt_last(array, 11);
	    insertInt_last(array, 97);
	    insertInt_last(array, 13);
	    
	    
	    insertInt_at(array, 0, 211);
        insertInt_at(array, 1, 1234);
        insertInt_at(array, 5, 769);
        
        replaceInt_at(array, 3, 23);
        
        insertChar_last(array1, 'a');
        insertChar_last(array1, 'b');
        insertChar_last(array1, 'c');
        
        replaceChar_at(array1, 1, 'z');
        insertChar_at(array1, 2, 'k');
        
        
        insertFloat_last(array2, 12.0);
        insertFloat_last(array2, 1.0);
        insertFloat_last(array2, 3.4234);
        
        replaceFloat_at(array2, 1, 923.23);
        insertFloat_at(array2, 2, 234.23);
        

		printf("Array:-");
		display_int(array);
		
		printf("\nArray1:- ");
		display_char(array1);
		
		printf("\nArray2:- ");
		display_float(array2);
		
		
		int c=count_list(array);
	    int c1=count_list(array1);
	    int c2=count_list(array1);
	    
	    printf("\nCount=%d\n",c);
	    printf("\nCount1=%d\n",c1);
		printf("\nCount2=%d\n",c2);					
	}	
}
