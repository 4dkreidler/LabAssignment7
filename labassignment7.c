#include <stdio.h>
#include <stdlib.h> 


void bubbleSort(int arr[], int n)
{
  int temp;
  int countSwap[9]={0};
  int swapTotal=0; 

  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n-i-1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

        countSwap[j]++;
        countSwap[j+1]++;
        temp=countSwap[j];
        countSwap[j]=countSwap[j+1];
        countSwap[j+1]=temp; 

        swapTotal++; 
      }
    }
  } 

  for(int i=0; i<n; i++)
    printf("%d : %d\n", arr[i], countSwap[i]);
  printf("%d \n\n", swapTotal);
}

void selectionSort(int arr[], int n)
{
  int i, j, min, temp, swapTotal=0;
  int countSwap[9] = {0};

  for (i = 0; i < n-1; i++)
  {
    min = i;
    
    for (j = i+1; j < n; j++){
      if (arr[j] < arr[min])
        min = j;
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;

    countSwap[i]++;
    countSwap[min]++;
    temp=countSwap[i];
    countSwap[i]=countSwap[min];
    countSwap[min]=temp; 

    swapTotal++; 

  }

  for(int i=0; i<n; i++)
    printf("%d : %d\n", arr[i], countSwap[i]);
  printf("%d \n\n", swapTotal);
}

int main(void)
{
  int arr1[] = {97 , 16,  45,  63,  13,  22,  7,  58,  72}; 
  int arr2[] = { 90,  80,  70,  60,  50,  40,  30,  20,  10}; 

  printf("array1 bubble sort: \n");
  bubbleSort(arr1, 9);
  printf("array2 bubble sort: \n");
  bubbleSort(arr2, 9);

  int array1[] = {97 , 16,  45,  63,  13,  22,  7,  58,  72}; 
  int array2[] = { 90,  80,  70,  60,  50,  40,  30,  20,  10};

  printf("array1 selection sort: \n");
  selectionSort(array1, 9);
  printf("array2 selection sort: \n");
  selectionSort(array2, 9);

  return 0; 
}