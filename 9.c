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
    return 0;
}
