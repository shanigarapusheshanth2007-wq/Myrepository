#include<stdio.h>
int main()
{
   int a[3][3]={
{ 1,2,3},
{2,3,4},
{3,4,5}
   };
   int b[3][3]={
{0,1,2},
{2,3,4},
{2,5,6}
   };
   for(int i=0;i<3;i++){

for(int j=0;j<3;j++){
int y[3][3];
    y[i][j]=a[i][j]+b[i][j];

    printf("%d  ",y[i][j]);
}
printf("\n");
}
return 0;}