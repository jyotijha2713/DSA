#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *a= (int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        a[i]=i+1;
        printf("%d ",a[i]);
    }
    printf("\n");
    int *b = (int*)realloc(a,(n/2)*(sizeof(int)));
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}