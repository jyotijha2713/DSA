#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int *a = (int*)calloc(n,sizeof(int));
    int i;
    //calloc intializes the value at each block of memory allocated, to 0.
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //assigning values to each memory block would update the value at that memory block.
    for(i=0;i<n;i++){
        a[i]=i+1;
        printf("%d ",a[i]);
    }
}