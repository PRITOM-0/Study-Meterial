#include<stdio.h>

void marge(int arr[],int firstIndex,int midIndex,int lastIndex){
    int leftArraySize=midIndex-firstIndex+1;
    int rightArraySize=lastIndex-midIndex;
    int Ar1[leftArraySize],Ar2[rightArraySize];
    for(int i=firstIndex,x=0;i<=midIndex;i++){
        Ar1[x++]=arr[i];
    }
    for(int i=midIndex+1,x=0;i<=lastIndex;i++){
        Ar2[x++] = arr[i];
    }
    int leftIndex=0,rightIndex=0;
    while (leftIndex<leftArraySize && rightIndex<rightArraySize)
    {
        if(Ar1[leftIndex]<=Ar2[rightIndex]){
            arr[firstIndex++]=Ar1[leftIndex++];
        }
        else{
            arr[firstIndex++] = Ar2[rightIndex++];
        }
    }
    while (leftIndex < leftArraySize)
    {
        arr[firstIndex++] = Ar1[leftIndex++];
    }
    while (rightIndex < rightArraySize)
    {
        arr[firstIndex++] = Ar2[rightIndex++];
    }
}

void margeSort(int arr[],int firstIndex,int lastIndex){
    int midIndex=firstIndex+(lastIndex-firstIndex)/2;
    if(firstIndex<lastIndex){
        margeSort(arr,firstIndex,midIndex);
        margeSort(arr,midIndex+1,lastIndex);

        marge(arr,firstIndex,midIndex,lastIndex);
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
    margeSort(array,0,num-1);
    //----------sorting function-----------------
    printf("\nArray After  Sorting: ");
    printArray(array, num);
    printf("\n**********************************\n");
}
