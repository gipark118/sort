#include <stdlib.h>
#include <time.h>
#include "./includes/sort.h"

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j;
	int length;
	int choose;

	while (1)
	{
		printf(GREEN_COLOR "(1)selection_sort (2)insertion_sort (3)bubble_sort (4)merge_sort (5)quick_sort (6)exit" COLOR_RESET "\n");
		scanf("%d", &choose);
		if (choose < 1 || choose > 6)
		{
			printf(RED_COLOR "잘못 입력하셨습니다. 다시입력해주세요." COLOR_RESET "\n\n");
			continue;
		}
		if (choose == 6)
			break;
		length = sizeof(numbers) / sizeof(int);
		/* random array of numbers */
		srand(time(NULL));
		i = 0;
		while (i < 100)
		{
			swap(&numbers[rand() % 10], &numbers[rand() % 10]);
			i++;
		}
		/* Before Output */
		j = 0;
		printf(BLUE_COLOR "Before: ");
		while (j < length)
			printf("%d ", numbers[j++]);
		printf(COLOR_RESET"\n");
	
		if (choose == 1)
			selection_sort(numbers, length);
		else if (choose == 2)
			insertion_sort(numbers, length);
		else if (choose == 3)
			bubble_sort(numbers, length);
		else if (choose == 4)
			merge_sort(numbers, 0, 10 - 1);
		else
			quick_sort(numbers, 0, 10 - 1);

		printf("\n");
	}
	return (0);
}
