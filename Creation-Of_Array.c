// creating and displaying an Array using c programming
#include<stdio.h>
#include<stdlib.h>


struct Array{
    int *A;       
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    printf("\n elements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d \n",arr.A[i]);
    }
}
 int main(){
     struct Array arr;
     int n,i;
     printf("Enter the size of an array \n");     // defines overall size of an Array
     scanf("%d",&arr.size);
     arr.A=(int *)malloc(arr.size*sizeof(int)); // creation of array in heap
     printf("Enter the number of elements \n ");  // defines the length of an array
     scanf("%d",&n);
     printf("Enter the all elements\n");
     for(i=0;i<n;i++){
         scanf("%d",&arr.A[i]);
     }
     arr.length=n;
     display(arr);
     return 0;
 }
