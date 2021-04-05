#ifndef SORT_H
# define SORT_H

#include <stdio.h>

#define RED_COLOR		"\x1b[31m"
#define GREEN_COLOR		"\x1b[32m"
#define YELLOW_COLOR	"\x1b[33m"
#define BLUE_COLOR		"\x1b[34m"
#define MAGENTA_COLOR	"\x1b[35m"
#define CYAN_COLOR		"\x1b[36m"
#define WHITE_COLOR		"\x1b[37m"
#define COLOR_RESET		"\x1b[0m"

void swap(int *a, int *b);
void selection_sort(int *numbers, int length);
void insertion_sort(int *numbers, int length);
void bubble_sort(int *numbers, int length);
void merge_sort(int *numbers, int start, int end);
void quick_sort(int *numbers, int start, int end);

#endif
