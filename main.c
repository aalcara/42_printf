#include "ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char d = '!';
	char *str = "9876";

	printf("\n---- only input str ---- \n");
	printf("\treturn :%d\n", printf("test"));
	printf("\treturn :%d\n", ft_printf("test"));

	printf("\n---- char whit no flag ----\n");
	printf("\treturn :%d\n", printf("%ct%ce%cs%ct", c, d, c, d));
	printf("\treturn :%d\n", ft_printf("%ct%ce%cs%ct", c, d, c, d));
	/*
	printf("\n---- char whit flag * (10) ----\n");
	printf("\treturn :%d\n", printf("tes%*ct", 10, c));
	printf("\treturn :%d\n", ft_printf("tes%*ct", 10, c));

	printf("\n---- char whit flag - ----\n");
	printf("\treturn :%d\n", printf("tes%-ct", c));
	printf("\treturn :%d\n", ft_printf("tes%-ct", c));

	printf("\n---- char whit flag -* (10) ----\n");
	printf("\treturn :%d\n", printf("tes%-*ct", 10, c));
	//printf("\treturn :%d\n", ft_printf("tes%-*ct", 10, c));

	//! implement flags with repeated flags chars

	printf("\n---- string whit no flag ----\n");
	printf("\treturn :%d\n", printf("tes%st", str));
	//printf("\treturn :%d\n", ft_printf("tes%st", str));
	*/

	return (0);
}