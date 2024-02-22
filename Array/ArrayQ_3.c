// Write a programme to find the second largest of n numbers using an array

#include <stdio.h>
#include <limits.h>

int second_max(int*, int);

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
    printf("The Second Maximum among the numbers is: %d", second_max(array, n));
    return 0;
}

int second_max(int* array, int n)
{
    int max = INT_MIN, secMax = INT_MIN, i;
    for(i = 0; i < n; i++)
    {
        if(max < array[i])
        {
            secMax = max;
            max = array[i];
            
        }
    }
    return secMax;
}