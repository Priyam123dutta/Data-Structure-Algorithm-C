// Write a program to find the mean of n numbers using array

#include <stdio.h>

float mean(int*, int);

int main()
{
    int n, i;
    printf("Enter the number of entry: ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The mean of the numbers is: %.2f", mean(array, n));
    return 0;
}

float mean(int* array, int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += array[i];
    }
    float resMean = (float)sum/n;
    return resMean;
}
