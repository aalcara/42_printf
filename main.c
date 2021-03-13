#include "ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'V';
	char *str = "9876";

	printf("\treturn :%d\n", printf("test"));
	printf("\treturn :%d\n", ft_printf("test"));

	printf("\n");
	printf("\treturn :%d\n", printf("tes%ct", c));
	//printf("\treturn :%d\n", ft_printf("tes%ct", c));

	printf("\n");
	printf("\treturn :%d\n", printf("tes%st", str));
	//printf("\treturn :%d\n", ft_printf("tes%st", str));


	return (0);
}
