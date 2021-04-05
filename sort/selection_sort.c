#include "../includes/sort.h"

void selection_sort(int *numbers, int length)
{
	int i;
	int j;
	int tmp;
	int k;

	i = 0;
	tmp = 0;
	while (i < length - 1)
	{
		tmp = i;
		j = i + 1;
		while (j < length)
		{
			if (numbers[tmp] >= numbers[j])
				tmp = j;
			j++;
		}
		swap(&numbers[i], &numbers[tmp]);
		k = 0;
		printf(YELLOW_COLOR "[%d]Selection_Sort: ", i);
		while (k < length)
			printf("%d ", numbers[k++]);
		printf(COLOR_RESET "\n");
		i++;
	}
	/* Output */
	k = 0;
	printf(CYAN_COLOR "Selection_Sort: ");
	while (k < length)
		printf("%d ", numbers[k++]);
	printf(COLOR_RESET "\n");
}
