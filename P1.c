//Write a program to declare and initialize variables of different data types.
#include<stdio.h>
#include "ds.h"

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int age = 25; //uses 4 bytes
    float pi = 3.14; //uses 4 bytes
    char grade = 'A'; //uses 1 byte
    double largePi = 3.1415926535; //uses 8 bytes
    int arr[5] = {1,2,3,4,5},sum=0;
    char string[100] = "";
    char *str[100];

    

    // scanf("%s",&str);
    // printf("%f",age*pi);
    // printf("%s",&str);
    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    //     sum += arr[i];
    // }
    // printf("%d",sum);
    greet();

    


    return 0;
}



void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}