#include "../includes/sort.h"

void quick_sort(int *numbers, int start, int end)
{
	int pivot;
	int ts;
	int te;
	int k;

	pivot = numbers[start];
	ts = start;
	te = end;
	while (start < end)
	{
		while (pivot <= numbers[end] && start < end)
			end--;
		if (start > end)
			break;
		while (pivot >= numbers[start] && start < end)
			start++;
		if (start > end)
			break;
		swap(&numbers[start], &numbers[end]);
	}
	swap(&numbers[ts], &numbers[start]);
	if (ts < start)
	{
		quick_sort(numbers, ts, start - 1);
		k = 0;
		printf(YELLOW_COLOR "Bubble_Sort: ");
		while (k < 10)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
	}
	if (te > end)
	{
		quick_sort(numbers, start + 1, te);
		k = 0;
		printf(MAGENTA_COLOR "Bubble_Sort: ");
		while (k < 10)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
	}
	/* Output */
	k = 0;
	printf(CYAN_COLOR "Bubble_Sort: ");
	while (k < 10)
		printf("%d ", numbers[k++]);
	printf(COLOR_RESET "\n");
}
