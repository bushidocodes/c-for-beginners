/**
 * Purpose: Demonstrate iterating through a 2D array by calculating Weather Averages by Year and Month
 * Author: Sean McBride
 * Date: 12/14/2018
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12
#define START_YEAR 2013
#define YEARS 5 /* The number of consecutive years of rainfall data starting at START_YEAR */

int main(void)
{
    // Rainfall data for 2013 to 2015
    float rain[YEARS][MONTHS] = {
        {2.81, 2.71, 3.48, 3.06, 3.99, 3.78, 3.73, 2.93, 3.72, 3.4, 3.17, 3.05},
        {2.71, 2.61, 3.58, 3.66, 3.89, 3.88, 3.83, 2.33, 3.82, 3.44, 2.44, 3.35},
        {2.41, 2.71, 2.48, 3.09, 3.29, 3.58, 3.75, 2.73, 3.26, 3.43, 3.32, 3.03},
        {2.31, 2.21, 3.38, 2.06, 3.49, 3.28, 3.33, 2.43, 3.82, 3.42, 3.47, 3.25},
        {2.11, 2.81, 3.58, 3.46, 3.59, 3.72, 3.23, 2.94, 3.52, 3.5, 3.47, 2.01}};
    float yearlyAverages[YEARS] = {};
    float overallAverage = 0;
    float monthlyAverages[MONTHS] = {};
    float scratch = 0;
    int monthIdx, yearIdx;

    // Calculate Yearly Averages
    // is there a way to check the capacity of an array?
    for (yearIdx = 0; yearIdx < YEARS; ++yearIdx)
    {
        scratch = 0;
        for (monthIdx = 0; monthIdx < MONTHS; ++monthIdx)
        {
            scratch += rain[yearIdx][monthIdx];
        }
        yearlyAverages[yearIdx] = scratch / MONTHS;
    }
    printf("YEAR\tRAINFALL (inches)\n");
    for (yearIdx = 0; yearIdx < YEARS; ++yearIdx)
    {
        printf("%d\t%.1f\n", START_YEAR + yearIdx, yearlyAverages[yearIdx]);
    }
    // Calculate Overall Averages
    scratch = 0;
    for (yearIdx = 0; yearIdx < YEARS; ++yearIdx)
    {
        scratch += yearlyAverages[yearIdx];
    }
    overallAverage = scratch / YEARS;
    printf("\nThe yearly average is %.1f inches.\n\n", overallAverage);

    // Calculate Monthly Averages
    for (monthIdx = 0; monthIdx < MONTHS; monthIdx++)
    {
        scratch = 0;
        for (yearIdx = 0; yearIdx < YEARS; yearIdx++)
        {
            scratch += rain[yearIdx][monthIdx];
        }
        monthlyAverages[monthIdx] = scratch / YEARS;
    }
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJune\tJuly\tAug\tSep\tOct\tNov\tDec\n");
    for (monthIdx = 0; monthIdx < MONTHS; ++monthIdx)
    {
        printf(monthIdx < MONTHS - 1 ? "%.1f\t" : "%.1f\n", monthlyAverages[monthIdx]);
    }
}