#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,r,c,sum=0,sum1=0,a[10][10],abD=0;
  printf("Enter the number of rows and columns:\n");
  scanf("%d %d",&i,&j);
  printf("Enter the elements in matrix:\n");
  for(r=0;r<i;r++)
    {
      for(c=0;c<j;c++)
        {
          scanf("%d",&a[r][c]);
        }
    }
  for(r=0;r<i;r++)
    {
      for(c=0;c<j;c++)
        {
          if(r==c)
          {
            sum=sum+a[r][c];
          }
          if(r+c==i-1)
          {
            sum1=sum1+a[r][c];
          }
        }
    }
  printf("The sum of diagonals is %d %d\n",sum,sum1);
  abD = abs(sum-sum1);
  printf("Difference is %d",abD);
  return 0;
}
/*
Enter the number of rows and columns:
3 3
Enter the elements in matrix:
1 2 3      
9 8 7
6 5 4
The sum of diagonals is 13 17
Difference is 4
*/