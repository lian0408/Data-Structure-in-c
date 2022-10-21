#include <stdlib.h>
#include <stdio.h>
void print(int arr[], int n)

{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[], int n)
{
    int aux[n];
  
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
    }

    
}
 
int main(void)
{
    int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n);
    print(arr, n);
 
    return 0;
}
