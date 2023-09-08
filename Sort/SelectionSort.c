#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(&arr[i],&arr[j]);
            }
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

    selectionSort(array,num);

//----------sorting function-----------------
    printf("\nArray After  Sorting: ");
    printArray(array, num);
    printf("\n**********************************\n");
}
