#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0, n=0, max,min;
    printf("Enter size of n: ");
    scanf("%d",&n);

    ptr= (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation failed \n");
        return 0;
    }

    printf("\n Enter the %d values \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }

    printf("Inputted Element are:");
    for(i=0; i<n; i++)
    {
         printf(" %d ",*(ptr+i));
    }
    max= *ptr;
    min= *ptr;
    for(i=0; i<n; i++)
    {
        if(max < *(ptr+i))
             max= *(ptr+i);
        if(min > *(ptr+i))
             min= *(ptr+i);
    }
    printf("\nMaximum number is %d ",max);
    printf("\nMinimum number is %d ",min);
    free(ptr);
    return 0;
}
