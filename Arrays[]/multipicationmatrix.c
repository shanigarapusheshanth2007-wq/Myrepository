#include<stdio.h>
int main(){
int a[3][3],b[3][3],y[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
 for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){

        for(int k=0;k<3;k++){

           y[i][j]=y[i][j]+a[i][k]*b[k][j];
        }   
    }
    
}
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%2d",y[i][j]);
        }
        printf("\n");
    }
return 0;

}