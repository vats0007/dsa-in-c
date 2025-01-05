#ifndef ds
#define ds

#include<stdio.h>

#define MAX 100

void greet(){
    printf("Hello and welcome to my world");
}

//Factorial
int factorial(int n){

    if(n==0){
        return 1;
    }else{
        return n* factorial(n-1);
    }
}

//Array
void printArr(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    
}

//Stack
int stack[MAX];
int top = -1;

void push(int value){
    if(top >= MAX - 1){
        printf("Stack Overflow\n");
    }else{
        top++;
        stack[top] = value;
    }
}

int pop(){
    if(top < 0){
        printf("Stack is Empty\n");
        return -1;
    }else{
        top--;
        return stack[top+1];
    }
}

void displayStack(){
    if(top < 0){
        printf("Stack is Empty");
    }else{
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

//Queue
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value){
    if(rear >= MAX - 1){
        printf("Queue is full\n");
    }else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

int dequeue(){
    if(rear < front || front == -1){
        printf("Queue is Empty\n");
        return -1;
    }else{
        front++;
        return queue[front-1];
    }
}

void displayQueue(){
    if(rear<front || front == -1){
        printf("Queue is Empty\n");
    }else{
        for(int i = front; i <= rear; i++){
            printf("%d ",queue[i]);
        }
    }
}

//New Line
void NewLine(){
    printf("\n");
}





#endif