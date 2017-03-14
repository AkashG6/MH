//Header file for array related operations (one dimensional arrays(lists) and two dimensional arrays(matrices))

//Finding minimum element in an array of integer values
int array_min(int a[], int n) {
  int c, min, index;
 
  min = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }
 
  return a[index];
}


//Finding minimum element in an array of float values
float array_min(float a[], int n) {
  int c, index;
  float min;
 
  min = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }
 
  return a[index];
}

//Finding maximum element in an array of integer values
int array_max(int a[], int n) {
  int c, max, index;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return a[index];
}


//Finding maximum element in an array of float values
float array_max(float a[], int n) {
  int c, index;
  float max;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return a[index];
}

//Searching for an element in an array of integer values
int array_search(int a[], int n, int find) {
   int c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
        printf("Value found at index %d\n",c);
         return c;
   }
    printf("Value not found in the array\n");
    return -1;
}

//Sorting elements in the array in ascending order
 void array_asc_sort(int a[], int n)
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] >= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }           

//Sorting elements in the array in descending order
 void array_desc_sort(int a[], int n)
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] <= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }           

