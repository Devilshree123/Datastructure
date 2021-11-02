#include<stdio.h>
void getArray(int *arr , int size){
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
    printf("\n");
}
void insertionSort(int *arr , int size){
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }  
}
int main()
{
    int size;
    printf("Enter the size of the array ; ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array \n");
    getArray(arr , size);
    insertionSort(arr , size);
    display(arr , size);
    return 0;
}