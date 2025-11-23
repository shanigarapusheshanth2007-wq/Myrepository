/*Write a C program using nested for loops to display a diamond-shaped number pattern based on a given integer n.
The numbers should increase from 1 up to the row number and then decrease symmetrically.
For example, if n = 4, the output should be:

Sample output:
Enter the number: 4                                                              
   1                                                                            
  121                                                                           
 12321                                                                          
1234321                                                                         
 12321                                                                          
  121                                                                           
   1  
*/
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
  
        
    for(int i=1;i<=2*n-1;i++){
    
        for(int j=1;j<=2*n-1;j++){
 int D;
 if(i>=n&&j<=n){D=(i-n)+(n-j);}
  else if(i>=n&&j>=n){D=(i-n)+(j-n);}
  else if(i<=n&&j<=n){D=(n-i)+(n-j);}
  else {D=(n-i)+(j-n);}
  int number=n-D;
  if(D<n) printf("%d",number);
  else printf(" ");
        }
        printf("\n");
    }
  
    return 0;
}