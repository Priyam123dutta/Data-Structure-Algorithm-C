#include <stdio.h>

// declearing the prototype

void selectionSort(int *, int);

// delearing main 

int main()
{
    // taking input size

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

// creating array

    int array[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

// doing the sorting

    selectionSort(array, n);

// printing output

    printf("The sorted array will be: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    
    return 0;
}


// creating a Swap function

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// The selection Sort function

void selectionSort(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                swap(&array[j], &array[i]);
            }
        }
    }
}
