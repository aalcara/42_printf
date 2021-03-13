#include <stdio.h>
#include <stdarg.h>

void print_ints(int num, ...)
{
	va_list args;

	va_start(args, num);

	for(int i = 0; i < num; i++)
	{
		int value = va_arg (args, int);
		printf("%d: %d\n", i, value);
	}

	va_end(args);

}

int main(void)
{
	print_ints(4, 3, 4, 63, 6);
}
