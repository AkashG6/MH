//matrix.h file
#ifndef _matrix_h
#define _matrix_h

/**/
void read_mat(float **, int ,int );
void add_mat(float **,float **,float **,int ,int );
void print_mat(float **,int ,int );
void sub_mat(float **,float **,float **,int ,int );
void mul_arr(float **,float **,float **,int ,int ,int ,int );
void transpose_mat(float **,float **,int );
float determinant_mat(float **,int );
void cofactor_mat(float **,float **,int );
void inverse_mat(float **,float **,int );

//==========================================================
/*Taking Input From the User */
void read_mat(float **a,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
		printf("Enter Element %d %d : ",i+1,j+1);
        scanf("%f",((a+i)+j));
      }
    }
}
//=======================================================
/*ADDING MATRIX */
void add_mat(float **m1,float **m2,float **m3,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        *(*(m3+i)+j) =  (*(*(m1+i)+j) + *(*(m2+i)+j));
      }
    }
}
//=================================================
/*DISPLAY MATRIX */
void print_mat(float **m,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
            printf(" %f ",*(*(m+i)+j));
         }
        printf("\n");
        }
}
//===================================================
/*SUBTRACTING MATRIX */
void sub_mat(float **m1,float **m2,float **m3,int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
      {
      for(j=0;j<c;j++)
      {
          *(*(m3+i)+j) =  (*(*(m1+i)+j) - *(*(m2+i)+j));
       }
      }
}
//===================================================
/*Matrix MULTIPLICATION */
void mul_arr(float **m1,float **m2,float **m3,int m,int n,int p,int q)
{
    int i,j,k;
    if(n==p)
    {
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          for (k=0;k<p;k++)
          {
            *(*(m3+i)+j) = *(*(m3+i)+j) + (*(*(m1+i)+k) * *(*(m2+k)+j));
          }
        }
      }
    }
    else
    {
      printf("ERROR!! COLUMNS in First Matrix is Not Equal to Rows in Second Matrix");
    }
}
//=================================================
/*calculate Transpose*/
void transpose_mat(float **mt,float **m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
           *(*(mt+i)+j)=*(*(m+j)+i);
         }
     }
}
//=================================================
/*For calculating Determinant of the Matrix */
float determinant_mat(float **a,int k)
{
  float s = 1, det = 0, **b;
  int i, j, m, n, c;
  if (k == 1)
    {
     return (**a);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                *(*(b+i)+j) = 0;
                if (i != 0 && j != c)
                 {
                   *(*(b+m)+n) = *(*(a+i)+j);
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (*(*(a+0)+c) * determinant_mat(b, k - 1));
          s = -1 * s;
        }
    }
    return (det);
}
//========================================
/*  COFACTOR MATRIX  */
float powerup(int e,int q)
{
  int i,re=1;
  for (i=0;i<q;i++)
  {
     re=re*e;
  }
  return re;
}
void cofactor_mat(float **fac,float **num,int f)
{
 float **b;
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
          for (j = 0;j < f; j++)
          {
            if (i != q && j != p)
            {
              *(*(b+m)+n) = *(*(num+i)+j);
              if (n < (f - 2))
                  n++;
              else
              {
                  n = 0;
                  m++;
              }
            }
         }
      }
      *(*(fac+q)+p) = powerup(-1, q + p) * determinant_mat(b, f - 1);
    }
  }
}
//=======================================================
/* Inverse of MATRIX*/
void inverse_mat(float **inverse,float **m,int n)
{
  int i,j;
  float **b,**fac,d;
  cofactor_mat(fac,m,n);
  transpose_mat(b,fac,n);
  d = determinant_mat(m, n);
  for (i = 0;i < n; i++)
    {
     for (j = 0;j < n; j++)
       {
        *(*(inverse+i)+j) = *(*(b+i)+j) / d;
        }
    }
}
//===========================================================


#endif
