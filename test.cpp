#include<stdio.h>
#include"matrix.h"
int main()
{
  int r,c;
  float a[5][5],b[5][5],ad[5][5],sb[5][5],co[5][5],in[5][5];
  printf("Enter the Row and column in Matrix (Max 5): ");
  scanf("%d%d",&r,&c);
  read_mat((float **)a,r,c);
  read_mat((float **)b,r,c);

  add_mat((float **)ad,(float **)a,(float **)b,r,c);
  printf("\nAddition of MAtrix \n" );
  print_mat((float **)ad,r,c);
  sub_mat((float **)sb,(float **)a,(float **)b,r,c);
  printf("\nSub. of MAtrix \n" );
  print_mat((float **)sb,r,c);
  if(r==c)
  {
    cofactor_mat((float **)co,(float **)a,r);
    printf("\nCofactor of MAtrix \n" );
    print_mat((float **)co,r,r);
    inverse_mat((float **)in,(float **)a,r);
    printf("\nInverse of MAtrix A\n" );
    print_mat((float **)in,r,r);
    inverse_mat((float **)in,(float **)b,r);
    printf("\nInverse of MAtrix B\n" );
    print_mat((float **)in,r,r);
  }

  return 0;
}
