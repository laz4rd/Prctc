#include <stdio.h>

void main()
{
    int arr[]={8,4,9,0,2,1};
    int a    = 6;
    int i,j,temp;

    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array in ascending order\n");
    for(i=0;i<a;i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}