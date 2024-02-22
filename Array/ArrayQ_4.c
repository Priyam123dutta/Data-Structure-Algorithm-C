// Write a program to detect a duplicate number and print it's position

#include<stdio.h>

int duplicate(int*, int);

int main()
{
    int i, n, ;
    printf("Enter the number of entry: ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    duplicate(array, n);
    printf("%d is duplicate %d times at position ")
}