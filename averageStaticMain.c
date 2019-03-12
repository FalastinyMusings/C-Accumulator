/*
 * This file contains the function asciiToInteger().
 *
 * @author:        Mohammad Hammad
 * Course:         COMP B13
 * Created on:     March 11, 2019
 * Source File:    averageStaticMain.c
 */
#include <stdio.h>

double accumulator(double number, double *sum, int *count); // Method to add number to sum and increment count

int main() {                                                // Main method
    double number, average, sum = 0, total = 0;             // Number is the variable passed from scanf to accumulator, average is the average of all numbers, sum is sum of all, and total holds sum      
    int count = 0;                                          // Count keeps a running total of the numbers read

    while(scanf("%lf", &number) == 1){                      // Scanf scans the stdin for a double and passes it to number, returning 1 if a number is found. While loop continues until no double is detected and 0 is returned
        total = accumulator(number, &sum, &count);          // Calls the accumulator method passing the double from scanf, as well as sum and count pointers to be modified
    }
    
    average = total / count;                                // Calculates the average based on final values after completion of while loop
    
    printf("Average = %lf/%i = %.6lf", total, count, average);  // Print statement demonstrating values obtained through method
    return 0;                                               // Return 0 upon successful completion of main()
}