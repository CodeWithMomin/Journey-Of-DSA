#include<stdio.h>
int size;
int reverse(int A[size],int B[size])
{
    int i,j;
    for(i=size-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0;i<size;i++)
    {
        A[i]=B[i];
    }
}
int main()
{
    
    int i,j;
    printf("enter the size of an array \n");
    scanf("%d",&size);
    int A[size];
    int B[size];
    printf("enter the array elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    reverse(A,B);
    for(int i=0;i<size;i++)
    {
        printf("%d",A[i]);
    }
}
