#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[],int size){
    int flag;
    for(int i=0;i<size-1;i++){
        flag = 0;
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(!flag)break;
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
    bubbleSort(array,num);
    //----------sorting function-----------------
    printf("\nArray After  Sorting: ");
    printArray(array, num);
    printf("\n**********************************\n");
}
