#ifndef sortings
#define sortings

#include <stdio.h>

//swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// BubbleSort
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int isSwap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

// SelectionSort
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(&arr[smallestIndex],&arr[i]);
    }
}

// MergeSort
void merge(int arr[], int left, int mid, int right)
{
    // creating 2 arrays to merge
    int n1 = mid + 1 - left;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        rightArr[i] = arr[mid + i + 1];
    }

    // merging into original with sorting
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // for remaining elements
    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

//QuickSort
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot){
            i++;
        }
       while (i <= j && arr[j] > pivot){
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
    
}
void QuickSort(int arr[],int low,int high){
    if(low < high){
        int pivotIndex = partition(arr,low,high);

        QuickSort(arr, low, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, high);
    }
}


#endif