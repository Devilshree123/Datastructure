#include<stdio.h>

void display(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
}
int deletion( int arr[] , int size , int index )
{
    
    for (int i = index ; i < size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100] = {7 , 8 , 12 , 27 , 88};
    int size = 5;
    display(arr , size );
    deletion(arr , 5 , 2 );
    size -= 1;
    display(arr , size );
    return 0;
}