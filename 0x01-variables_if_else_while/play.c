#include <stdio.h>
int main(void)
{	
	int size =8;
	int array[] = {2, 4, 6, 9, 7, 0, 3, 77};

	int i =0;

	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}

	return (0);
}
