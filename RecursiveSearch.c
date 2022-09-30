#include <stdio.h>
#include <stdlib.h>

int recursiveSearch(int arr[], int startindex, int endindex, int element){
   if (endindex >= startindex){
      int middle = startindex + (endindex - startindex )/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] > element)
         return recursiveSearch(arr, startindex, middle-1, element);
      return recursiveSearch(arr, middle+1, endindex, element);
   }
   return -1;
}
int main(void){
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = 7;
   int element = 5;
   int found_index = recursiveSearch(arr, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
