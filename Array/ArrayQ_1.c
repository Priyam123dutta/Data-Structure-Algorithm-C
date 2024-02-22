// Write a program to read and display n numbers using array

#include <stdio.h>

void display(int*, int);

int main()
{
    int i, n;
    printf("Enter the number of entry: ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array is: \n");
    display(array, n);
    return 0;
}

void display(int* array, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
