#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        a[i]=i+1;
        printf("%d ",a[i]);
    }
    printf("\n");
    int *b = (int*)realloc(a,2*n*(sizeof(int)));
    for(i=0;i<2*n;i++){
        printf("%d ",b[i]);
    }
}