#include <stdio.h>

int main()
{
    int arr[]={7,5,3,8,2,1};
    int a=6;
    int i,j,temp,minIndex;

    for(i=0;i<a-1;i++)
    {
        minIndex=i;
        for(j=i+i;j<a;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }

    for(i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
}