#include <stdio.h>
#include <stdlib.h>
void PrintArray(int arr[],int n)
{
    for(int i = 0;i<(n*2);i++)
   {printf("%d",arr[i]);
   printf("\n");
   }
}
void ScanArray(int arr[],int n)
{
    for(int i =0;i<n;i++)
   {
       printf("index %d =  ",i);
       scanf("%d", &arr[i]);

   }
}
int Merge(int MergeArr[],int arr1[],int arr2[],int n)
{
 for(int i = 0; i<n;i++)
  MergeArr[i] = arr1[i];
  for(int i = 0 ; i<n;i++)
    MergeArr[i+ n]= arr2[i];
}
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}


void bubbleSort(int arr[],int n)
{ n = n*2;
int i, j;
for (i = 0; i < n-1; i++)

for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
int main()
{   int n =5;
   int arr1[n],arr2[n],MergeArr[n*2];
   printf("enter the elements of the first array: \n");
   ScanArray(arr1,n);
   printf("enter the elements of the second array: \n ");
   ScanArray(arr2,n);
   Merge(MergeArr,arr1,arr2,n);
    printf("the unsorted merge array: \n");
      PrintArray(MergeArr,n);
   bubbleSort(MergeArr,n);
    printf("the sorted merge array: \n");
      PrintArray(MergeArr,n);

    return 0;
}
