#include<stdio.h>
int linearsearch(int arr[] , int size , int element )
{
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    } 
        return -1;
}
int main()
{
    int arr[100] = {2,3,4,5,6,43,23,4556,65,43,208 };
    int size = sizeof(arr)/sizeof(int);
    int element = 4556;
    int x = linearsearch(arr , size , element);
    printf("The element %d was found at index %d",element , x);
    return 0;
}