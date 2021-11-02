#include<stdio.h>

void getArray(int *arr , int size ){
    for (int i = 0; i < size; i++)
    {
            scanf("%d",&arr[i]);
    }   
}
void display(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
            printf("%d",arr[i]);
            printf("\t");
    }
}                                                               // 5 4 1 9 
void selectionSort(int *arr , int size){
    int min;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min])    
            {
                min = j;
            }  
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array : \n");
    getArray(arr , size);
    selectionSort(arr , size);
    display(arr , size);
    return 0;
}