/******************************************************************************
 * Copyright (C) 2025 by Basil Kaikoni - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Basil Kaikoni and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief  This file contains the implementation of statistical analysis functions
 *
 * This file provides the implementation for performing various statistical operations on an array
 *
 * @author Basil Kaikoni
 * @date 2025-11-03
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)

void print_array(const unsigned char*  Arr,const unsigned int size ){
    printf("Array elements are:\n");
    for(unsigned int i=0;i<size;i++){
        printf("%u ",Arr[i]);
    }
    printf("\n");
}

unsigned char find_median(const unsigned char*  Arr,const unsigned int size ){
    sort_array(Arr, size);
    if(size % 2 == 0){
        return (Arr[size/2 - 1] + Arr[size/2]) / 2;
    } else {
        return Arr[size/2];
}
}

unsigned char find_mean(const unsigned char*  Arr,const unsigned int size ){
    unsigned int sum = 0;
    for(unsigned int i=0;i<size;i++){
        sum += Arr[i];
    }
    return sum / size;
}

unsigned char find_maximum(const unsigned char*  Arr,const unsigned int size ){
    unsigned char max = Arr[0];
    for(unsigned int i=1;i<size;i++){
        if(Arr[i] > max){
            max = Arr[i];
        }
    }
    return max;
}   

unsigned char find_minimum(const unsigned char*  Arr,const unsigned int size ){
    unsigned char min = Arr[0];
    for(unsigned int i=1;i<size;i++){
        if(Arr[i] < min){
            min = Arr[i];
        }
    }
    return min;
}

void sort_array( unsigned char* Arr , const unsigned int size ){
    for(unsigned int i=0;i<size-1;i++){
        for(unsigned int j=0;j<size-i-1;j++){
            if(Arr[j] < Arr[j+1]){
                unsigned char temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
    return Arr;
}

void print_statistics(const unsigned char*  Arr,const unsigned int size ){
    print_array(Arr, size);
    sort_array(Arr, size);
    unsigned char min = find_minimum(Arr, size);
    unsigned char max = find_maximum(Arr, size);
    unsigned char mean = find_mean(Arr, size);
    unsigned char median = find_median(Arr, size);

    printf("Statistics:\n");
    printf("Minimum: %u\n", min);
    printf("Maximum: %u\n", max);
    printf("Mean: %u\n", mean);
    printf("Median: %u\n", median);
}

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

print_statistics(test,SIZE);


    return 0;

}

/* Add other Implementation File Code Here */
