#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *p = (int*)malloc(n*sizeof(int));//array of size n
    int i;
    //malloc does not initialize the value at the memory block and hence printing the values without initialization would give garbage value.
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    //assigning values to each index of the array and then printing.
    for(i=0;i<n;i++){
        p[i]=i+1;
        printf("%d ",p[i]);
    }
}