#include "../includes/sort.h"

void merge(int *numbers, int start, int mid, int end)
{
	int sorted[10] = {0, };
	int i;
	int j;
	int m;
	int n;

	i = start;
	j = mid + 1;
	m = start;
	while (i <= mid && j <= end)
	{
		if (numbers[i] <= numbers[j])
			sorted[m++] = numbers[i++];
		else
			sorted[m++] = numbers[j++];
	}
	if (i > mid)
	{
		n = j;
		while (n <= end)
		{
			sorted[m++] = numbers[n];
			n++;
		}
	}
	else
	{
		n = i;
		while (n <= mid)
		{
			sorted[m++] = numbers[n];
			n++;
		}
	}
	n = start;
	while (n <= end)
	{
		numbers[n] = sorted[n];
		n++;
	}
}

void merge_sort(int *numbers, int start, int end)
{
	int mid;
	int k;

	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(numbers, start, mid);
		k = 0;
		printf(YELLOW_COLOR "Bubble_Sort: ");
		while (k < 10)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
		merge_sort(numbers, mid + 1, end);
		k = 0;
		printf(MAGENTA_COLOR "Bubble_Sort: ");
		while (k < 10)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
		merge(numbers, start, mid, end);
	}
	/* Output */
	k = 0;
	printf(CYAN_COLOR "Bubble_Sort: ");
	while (k < 10)
		printf("%d ", numbers[k++]);
	printf(COLOR_RESET "\n");

}
