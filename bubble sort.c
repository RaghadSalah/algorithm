#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}


void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)

for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d  ", arr[i]);
printf("\n");
}


int main()
{
int arr[] = {6, 8, 10, 15, 56, 9, 12};
int n = 7;
printf("array before sorting: \n");
printArray(arr,n);
bubbleSort(arr, n);
printf("Sorted array: \n");
printArray(arr, n);
return 0;
}
