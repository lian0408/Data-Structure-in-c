#include <stdio.h>

void bubbleSort(int arr[], int n) {


  for (int step = 0; step < n - 1; ++step) {
      
  
    for (int i = 0; i < n - step - 1; ++i) {
      

      if (arr[i] > arr[i + 1]) {
        
       
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);

  }
  printf("\n");
}

int main() {
  int size;
  int a[20] =  {2,4,6,8,10,1,3,5,7,9,19,17,15,13,11,12,14,16,18,20};
  int b[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
  int c[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

   size = sizeof(a) / sizeof(a[0]);
   bubbleSort(a, size);   
   printArray(a, size);
   
   size = sizeof(b) / sizeof(b[0]);
   bubbleSort(b, size);
   printArray(b, size);
   
   size = sizeof(c) / sizeof(c[0]);
   bubbleSort(c, size);
   printArray(c, size);
}
