#include <stdio.h>
#include <stdbool.h>

// declaering the prototype

void bubbleSort(int *, int);

// declearing main

int main()
{
    // taking input size

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // taking inputs

    int array[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &array[i]);
    }

    // doing the sorting 

    bubbleSort(array, n);

    //printing the output

    printf("The sorted Array will be: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

//creating a swap function

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// The Bubble Sort function

void bubbleSort(int *array, int n)
{
    bool flag = false;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            printf("The array is already sorted!");
            break;
    }
}