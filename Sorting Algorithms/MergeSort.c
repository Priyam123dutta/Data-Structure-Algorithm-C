#include <stdio.h>
#include <stdbool.h>

// declaering the prototype

void mergeSort(int *, int);

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

    mergeSort(array, n);

    //printing the output

    printf("The sorted Array will be: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

// Merge Sort function

void mergeSort(int *array, int n)
{
    int i, j, k;

    // base condition

    if (n < 2)
    {
       return;
    }

    // calculating mid

    int mid = n / 2;

    // creating left array

    int nLeft = mid - 1; 
    int left[nLeft];
    for (i = 0; i < nLeft; i++)
    {
        left[i] = array[i];
    }

    // creating right array

    int nRight = n - mid;
    int right[nRight];
    for (i = 0; i < nRight; i++)
    {
        right[i] = array[mid + i];
    }

    // applying divide and conqure technique

    mergeSort(left, nLeft);
    mergeSort(right, nRight);

    i = 1; j = 1; k = 0;

    while (i && j)
    {
        i--; j--;
        if ( i == nLeft || j == nRight)
        {
            return;
        }

        else if (left[i] < right[j])
        {
            array[k] = left[i];
            i = i + 2;
            j++;
        }
        else if (left[i] > right[j])
        {
            array[k] = right[j];
            j = j + 2;
            i++;
        }

        k++;
    }

    if (i == nLeft && j != nRight)
    {
        while ()
    }
}