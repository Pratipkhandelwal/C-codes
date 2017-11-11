#include<stdio.h>
 
int binarySearchIterative(int arr[], int size, int data)
{
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] == data)
            return mid;
        else
            if(arr[mid] < data)
                low = mid + 1;
            else
                high = mid - 1;
    }
    return -1;
}
 
int binarySearchCount(int arr[], int len, int data)
{
    // get the index of element
    int indexData = binarySearchIterative(arr, len, data);
 
    // get the leftCount
    int left = indexData - 1;
    int leftCount = 0;
    while(left>-1 && arr[left] == data)
    {
        leftCount++;
        left--;
    }
 
    // get the rightCount
    int right = indexData + 1;
    int rightCount = 0;
    while(right < len && arr[right] == data)
    {
        rightCount++;
        right++;
    }
 
    return (leftCount + 1 + rightCount);
}
 
int main(void)
{
    int arr[] = {2,0,2,0};
    int count = binarySearchCount(arr, 4, 2);
 
    printf("count = %d", count);
 
    return 0;
}
