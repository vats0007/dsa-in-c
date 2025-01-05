#include "ds.h"
int main(int argc, char const *argv[])
{
    //Array
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr,size);

    //Stack
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    displayStack();
    push(99);
    push(20);
    push(10);
    displayStack();
    pop();
    displayStack();

    NewLine();
    //Queue
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    displayQueue();
    NewLine();
    dequeue();
    dequeue();
    enqueue(2000);
    enqueue(3000);
    displayQueue();



    return 0;
}
