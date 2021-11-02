#include<stdio.h>

void getdata(int arr[] , int n)
{
    printf("Enter the elements in the array \n");
    for (int i = 0; i < n+1; i++)
    {
            scanf("%d",&arr[i]);
    }  
}

int binarySearch(int arr[] , int n , int key)
{
    int low = 0;
    int high = n;
    while(low<=high)
    {
        int mid = (high + low)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }    
    }
    return -1;
}
int main()
{
    int n,key;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    getdata(arr , n);
    printf("Enter the elemen you want to search in the array : ");
    scanf("%d",&key);
    int x = binarySearch(arr , n , key);
    printf("The elemt %d is at %d index in the array ",key,x);

    return 0;
}