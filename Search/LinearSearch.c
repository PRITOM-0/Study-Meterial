#include <stdio.h>

int linearSearch(int array[], int size, int item)
{
    for(int i=0;i<size;i++){
        if(array[i]==item){
            return i;
        }
    }
    return -1;
}
int main()
{
    printf("\n**********************************");
    int num,item,index;
    while (1)
    {
        
        printf("\nEnter number of elements : ");
        scanf("%d", &num);
        int array[num];
        printf("Now enter %d array elements: ", num);
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }
        printf("----------------------------------\n");
        printf("Enter the search item: ");
        scanf("%d", &item);
        //----------Searching function-----------------

        index = linearSearch(array, num, item);

        //----------Searching function-----------------
        if (index >= 0)
        {
            printf("Your searching item %d found in %d position !!!",item,index+1);
        }
        else
        {
            printf("\nYour searching item %d not found !!! try again...",item);
        }
        printf("\n**********************************");
    }
    return 0;
}
