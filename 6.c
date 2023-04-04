#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0, n=0, gr;
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

    printf("Inputted Element are: ");
    for(i=0; i<n; i++)
    {
         printf(" %d ",*(ptr+i));
    }
    gr= *ptr;
    for(i=0; i<n; i++)
    {
        if(gr < *(ptr+i))
             gr= *(ptr+i);
    }
    printf("Largest number is %d \n",gr);
    free(ptr);
    return 0;
}
