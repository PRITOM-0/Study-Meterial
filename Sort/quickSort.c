#include<stdio.h>

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

    //----------sorting function-----------------
    printf("\nArray After  Sorting: ");
    printArray(array, num);
    printf("\n**********************************\n");
}
