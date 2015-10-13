//
//  main.c
//  largestVectorSum
//
//  Created by Randy Ram on 9/18/15.
//  Copyright (c) 2015 Randy Ram. All rights reserved.
//

#include <stdio.h>


void maxSumNSquared(int arr[], int size)
{
    int max = 0;
    int start = 0, end = 0;
    int i, j;
    for (i = 0; i < size; i++) {
        int sum = 0;
        for(j = i; j < size; j++)
        {
            sum += arr[j];
            //printf("INDEX:%d %d\n", i, sum);
            if (sum > max)
            {
                max = sum;
                start = i;
                end = j;
            }
        }
    }
    printf("Max Sum: %d\n", max);
    printf("Starting Index: %d. Number: %d\n", start, arr[start]);
    printf("Ending Index: %d. Number: %d", end, arr[end]);
}


void maxSumN(int arr[], int size)
{
    int maxSum = 0;
    int bestSumSoFar = arr[0];
    int startingPos = 0;
    int maxEndingPos = 0;
    int maxStartingPos = 0;
    int i;
    for(i = 1; i < size; i++)
    {
       if(bestSumSoFar >= 0)
       {
           bestSumSoFar += arr[i];
           if (bestSumSoFar > maxSum)
           {
               maxSum = bestSumSoFar;
               maxStartingPos = startingPos;
               maxEndingPos = i;
           }
       }
        else
        {
            bestSumSoFar = arr[i];
            startingPos = i;
            if (bestSumSoFar > maxSum)
            {
                maxSum = bestSumSoFar;
                maxStartingPos = i;
                maxEndingPos = i;
            }
        }
    }
    printf("Max Sum: %d\n", maxSum);
    printf("Starting Index: %d\n", maxStartingPos);
    printf("Ending Index: %d\n", maxEndingPos);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {-3, 5, 7, -8, -8, -2, 4, 9, -3, 2};
    //maxSumNSquared(arr, 10);
    maxSumN(arr, 10);
}
