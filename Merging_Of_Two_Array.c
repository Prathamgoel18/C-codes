#include <stdio.h>

int main() {
    int i,j,k,n,m;
    k=m+n;
    int a[m],b[n],c[m+n];
    printf("Enter number of elements in an array A\n");
    scanf("%d",&m);
    printf("Enter number of elements in an array B\n");
    scanf("%d",&n);
    printf("Enter elements of an array\n");
    printf("Elements of an array A\n");
    for(i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements of an array B\n");
    for(j=1;j<=n;j++){
        scanf("%d",&b[j]);
    }
    while(i<m){
        c[k]=a[i];
        k=k+1;
        i=i+1;
    }
    while(j<n){
        c[k]=b[i];
        k=k+1;
        j=j+1;
    }
    while(i<m&&j<n){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i=i+1;
            k=k+1;
        }
        else{
            c[k]=b[i];
            j=j+1;
            k=k+1;
        }
    }
    printf("Merged Array:");
    for(k=0;k<=m+n;k++){
        printf("%d",c[k]);
    }
    return 0;
}