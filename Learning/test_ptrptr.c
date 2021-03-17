#include <stdio.h>

void next_char(char **str)
{
	*str = *str + 1;
}


int			main(void)
{
	char *ptr;
	//char *aux;

	//aux = (char *)malloc(sizeof(char)* 10);
	ptr = "123456789";
	//aux = ptr;
	next_char(&ptr);

	printf("%s\n", ptr);
	//printf("%s\n", aux);

	return 0;
}
