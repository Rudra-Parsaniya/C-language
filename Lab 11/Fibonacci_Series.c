#include<stdio.h>
void main(){
    int n1=1,n2=1,n3,n,i;
    printf("Enter value of n    :   ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}