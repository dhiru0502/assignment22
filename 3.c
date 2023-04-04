#include<stdio.h>
int main()
{
    int *ptr;
    int i=0, n=0, sum=0;
    printf("Enter size of n: ");
    scanf("%d",&n);

    ptr= (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation failed \n");
        return 0;
    }
    printf("\n The entered %d values \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0; i<n; i++)
    {
        sum= sum + *(ptr+i);
    }
    printf("Sum is %d \n",sum);
    free(ptr);
    return 0;
}
