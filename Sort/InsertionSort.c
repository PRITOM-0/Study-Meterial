#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void insertionSort(int array[],int num){
    int i,j;
    for(i=1;i<num;i++){
        j=i;
        while ((j-1)>=0 && array[j-1]>array[j])
        {
           swap(&array[j-1],&array[j]);
           j--;
        }
        
    }
}
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    } 
}
int main(){

    int num;
    printf("\n----------------------------------\n");
    printf("Enter number of elements : ");
    scanf("%d",&num);
    int array[num];
    printf("Now enter %d array elements: ",num);
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    printf("**********************************\n");
    printf("Array Before Sorting: ");
    printArray(array,num);
    //----------sorting function-----------------
    insertionSort(array,num);
    //----------sorting function-----------------
    printf("\nArray After  Sorting: ");
    printArray(array, num);
    printf("\n**********************************\n");
}
