#include "sortings.h"
int main(int argc, char const *argv[])
{
    int arr[5] = {10,2,300,4,50};

    QuickSort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
