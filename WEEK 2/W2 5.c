#include<stdio.h>
int main(){
    
    int m1[2][2];
    int m2[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    int ans[2][2];
    int sans[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            ans[i][j]=0;
        }
    }

    for(int i=0;i<2;i++){//row of m1
        for(int j=0;j<2;j++){//col of m3
        for(int k=0;k<2;k++){
            ans[i][j]+=m1[i][k]*m2[k][j];
        }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sans[i][j]=m1[i][j]+m2[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",sans[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}