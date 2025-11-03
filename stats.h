/******************************************************************************
 * Copyright (C) 2025 by  Kaikoni Basil- University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Basil Kaikoni and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief this file contains function declarations for statistical analysis
 *
 * This file provides the function declarations for performing various statistical operations on
 * an array of unsigned char data. The functions include calculating the mean, median, maximum.
 *
 * @author Basil Kaikoni
 * @date 2025-01-03
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/** 
  * @brief Functions for statistical analysis on an array of unsigned char data
  * 
  * This function will print prints the statistics of an array including minimum, maximum, mean, and median.
  * 
  * @param Arr Pointer to the array of unsigned char data.
  * @param size Size of the array.
  */
void print_statistics( const unsigned char*  Arr ,const unsigned int size );
/**
 * @brief This Function will print the given array to the screen.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 */
void print_array(const unsigned char*  Arr,const unsigned int size );

/** @brief This function will find the median value in the array.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 * @return Median value in the array.
 */
unsigned char find_median(const unsigned char* Arr ,const  unsigned int size );

/** @brief This function will find the mean value in the array.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 * @return Mean value in the array.
 */
unsigned char find_mean( const unsigned char*  Arr ,const  unsigned int size );

/** @brief This function will find the maximum value in the array.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 * @return Maximum value in the array.
 */
unsigned char find_maximum( const unsigned char*  Arr ,const  unsigned int size );

/** @brief This function will find the minimum value in the array.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 * @return Minimum value in the array.
 */
unsigned char find_minimum( const unsigned char*  Arr ,const unsigned int size );

/** @brief This function will sort the array from largest to smallest.
 * 
 * @param Arr Pointer to the array of unsigned char data.
 * @param size Size of the array.
 */
void sort_array( unsigned char* Arr , const unsigned int size );

#endif /* __STATS_H__ */
