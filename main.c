#include <stdio.h>
#include "sort.h"
#define LEN 8

int main(void)
{
    int source[LEN],temp[LEN];
    int i ;
    
    printf("Please input the numbers of you want to sort:");
    for (i = 0;i < LEN;i++)
    {
        scanf("%d",&source[i]);
    }

    printf("this is the result of quicksort:");
    quicksort(source,0,LEN-1);
    for (i = 0;i < LEN;i++)
    {
        printf("%d ",source[i]);
    }
    printf("\n");

    printf("this is the result of mergesort:");
    mergesort(source,0,LEN-1,temp);
    for (i = 0;i < LEN;i++)
    {
        printf("%d ",source[i]);
    }
    printf("\n");
    
}
