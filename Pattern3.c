#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=n;j>0;j--){
            if(j>i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    
    }
    return 1;
}