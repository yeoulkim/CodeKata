#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double solution(int numbers[], size_t numbers_len) 
{
	int sum = 0;

	for (int i = 0; i < numbers_len; i++)
	{
		sum += numbers[i];
	}
	
	return (double)sum / numbers_len;
}
