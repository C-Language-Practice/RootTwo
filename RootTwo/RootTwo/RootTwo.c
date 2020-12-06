#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num = 1;
	double diff = 0.1;

	for (int i = 0; i < 10; i++)
	{
		while (num * num < 2)
		{
			num = num + diff;
		}
		num = num - diff;
		diff = diff * 0.1;
	}
	printf_s("%.10f", num);

	return 0;
}
