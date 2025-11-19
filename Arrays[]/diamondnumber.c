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