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
    } 
}
void insertionSort(int *arr , int size){
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
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
    display(arr , size);
    return 0;
}