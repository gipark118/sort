#include "../includes/sort.h"

void bubble_sort(int *numbers, int length)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < length)
	{
		j = 1;
		while (j < length - i)
		{
			if (numbers[j - 1] > numbers[j])
				swap(&numbers[j - 1], &numbers[j]);
			j++;
		}
		k = 0;
		printf(YELLOW_COLOR "[%d]Bubble_Sort: ", i);
		while (k < length)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
		i++;
	}
	/* Output */
	k = 0;
	printf(CYAN_COLOR "Bubble_Sort: ");
	while (k < length)
		printf("%d ", numbers[k++]);
	printf(COLOR_RESET "\n");
}
