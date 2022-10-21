#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;


	for (i = 0; i < n-1; i++)
	{

		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

	
		swap(&arr[min_idx], &arr[i]);
	}
}


void printArray(int array[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d  ", array[i]);
	printf("\n");
}

int main()
{
  	int size;
  	int a[20] = {2,4,6,8,10,1,3,5,7,9,19,17,15,13,11,12,14,16,18,20};
  	int b[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
  	int c[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

  	size = sizeof(a) / sizeof(a[0]);
  	selectionSort(a, size);   
  	printArray(a, size);
  	
  	size = sizeof(b) / sizeof(b[0]);
  	selectionSort(b, size);
  	printArray(b, size);
  	 
  	size = sizeof(c) / sizeof(c[0]);
  	selectionSort(c, size);
  	printArray(c, size);
}
