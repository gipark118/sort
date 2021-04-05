#include "../includes/sort.h"

void insertion_sort(int *numbers, int length)
{
	int i;
	int j;
	int k;
	int key;

	i = 1;
	while (i < length)
	{
		key = numbers[i];
		j = i - 1;
		while (j >= 0 && key < numbers[j])
		{
			numbers[j + 1] = numbers[j];
			j--;
		}
		numbers[j + 1] = key;
		k = 0;
		printf(YELLOW_COLOR "[%d]Insertion_Sort: ", i);
		while (k < length)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
		i++;
	}
	/* Output */
	k = 0;
	printf(CYAN_COLOR "Insertion_Sort: ");
	while (k < length)
		printf("%d ", numbers[k++]);
	printf(COLOR_RESET "\n");
}
