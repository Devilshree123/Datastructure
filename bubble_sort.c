#include<stdio.h>

void getArray(int *arr , int size){
    printf("Enter the elements in the array \n");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }  
}

void display(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
}

int bubbleSort(int *arr , int size){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size-1; i++)
    {
        printf("PASS = %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }  
        }
        if (isSorted)
        {
            return 1;
        }   
    }
}

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    getArray(arr , size);
    display(arr , size);
    bubbleSort(arr , size);
    display(arr , size);
    return 0;
}