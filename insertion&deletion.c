#include<stdio.h>
#include<stdlib.h>
struct Array {
    int *A;
    int size;
    int length;
};
int display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for(i=0;i<arr.length;i++)
{
    printf("%d",arr.A[i]);
}
}

void insert(struct Array * arr){
    int i,index,x;
      printf("enter the new element \n");
    scanf("%d",&x);
    printf("enter the position \n");
    scanf("%d",&index);
  
    if(index<0 || index>arr->length)
    {
        printf("invlaid position : please enter the valid position \n");
        return;
    }
    else
    {
         for(i=arr->length;i>index;i--)
    {
        arr->A[i]=arr->A[i-1];
        
    }
    arr->length++;
    arr->A[i]=x;
    }
   
    
}
void itemDelete(struct Array *arr)
{
    int i,index;
    printf("enter the position\n");
    scanf("%d",&index);
    if(index<0 || index>arr->length)
    {
        printf("invlaid position : please enter the valid position \n");
        return;
    }
    else
    {
        for(i=index;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    }
}
int main(){
    struct Array arr;
    int n;
    int i;
    printf("entrt the size of an array\n");
    scanf("%d",&arr.size);
     arr.A=(int *)malloc(arr.size*sizeof(int));
     printf("enter the number of elements\n");
     scanf("%d",&n);
     arr.length=n;
     printf("Enter all the elements \n");
     for(i=0;i<n;i++){
         scanf("%d",&arr.A[i]);
     }
     
     //insert(&arr);
    itemDelete(&arr);
     display(arr);
}
