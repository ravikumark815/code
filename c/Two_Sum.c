/*
Problem Statement:
Given a list of numbers and a number k, return two numbers from the list that add up to k.
If there are none such numbers, you can return False

Examples:
    Input: [10, 15, 3, 7], k=17
    Output: [10,7]

Author: 
https://www.github.com/ravikumark815

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void twoSum(int arr[], int n, int k) 
{ 
    int i,j;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((arr[i] + arr[j]) == k)
            {
                printf("[%d, %d]", arr[i], arr[j]);
                return;
            }
    printf("\nNo integers add up to %d\n", k);
}

int main()
{
    int n=0, k;
    clock_t tstart, tend;
    double tdiff;


    printf("\n~~~~~~~ Two Sum ~~~~~~~\n");
    
    while(n<2)
    {
        printf("\nEnter the number of integers in array (Min:2): ");
        scanf("%d", &n);
    }
    
    int arr[n];
    for (int i=0; i < n; i++)
    {
        printf("\nEnter Integer#%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the key: ");
    scanf("%d", &k);
    
    tstart = clock();
    twoSum(arr, n, k);
    tend = clock();
    
    tdiff = (double)(tend-tstart) / CLOCKS_PER_SEC;
    printf("\n~~~~~~~ Time Taken: %f ~~~~~~~\n\n", tdiff);
    
    return 0;
}