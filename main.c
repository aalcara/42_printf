#include "ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char d = '!';
	char *str = "9876";
	char *str2 = "ABC";
	int i = 456;
	/*
	printf("\n---- only input str ---- \n");
	printf("\treturn :%d\n", printf("test"));
	printf("\treturn :%d\n", ft_printf("test"));

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                 CHAR                 |");
	printf("\n --------------------------------------\n");

	printf("\n---- one char without flag ----\n");
	printf("\treturn :%d\n", printf("test%c",d));
	printf("\treturn :%d\n", ft_printf("test%c",d));

	printf("\n---- multiplus chars without flag ----\n");
	printf("\treturn :%d\n", printf("%ct%ce%cs%ct", c, d, c, d));
	printf("\treturn :%d\n", ft_printf("%ct%ce%cs%ct", c, d, c, d));

	printf("\n---- chars with flag * ----\n");
	printf("\treturn :%d\n", printf("t%*ces%*ct", 2, d, 3, c));
	printf("\treturn :%d\n", ft_printf("t%*ces%*ct", 2, d, 3, c));

	printf("\n---- chars with flag - ----\n");
	printf("\treturn :%d\n", printf("t%-ces%-ct", d, c));
	printf("\treturn :%d\n", ft_printf("t%-ces%-ct", d, c));

	printf("\n---- chars with flag -* ----\n");
	printf("\treturn :%d\n", printf("t%-*ces%-*ct", 5, d, 3, c));
	printf("\treturn :%d\n", ft_printf("t%-*ces%-*ct", 5, d, 3, c));

	printf("\n---- chars with flag -num ----\n");
	printf("\treturn :%d\n", printf("t%-2ces%-2ct", d, c));
	printf("\treturn :%d\n", ft_printf("t%-2ces%-2ct", d, c));

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                STRING                |");
	printf("\n --------------------------------------\n");

	printf("\n---- multiplus str without flag ----\n");
	printf("\treturn :%d\n", printf("%st%se%ss%st", str, str2, str, str2));
	printf("\treturn :%d\n", ft_printf("%st%se%ss%st", str, str2, str, str2));

	printf("\n---- multiplus str with -*num flag ----\n");
	printf("\treturn :%d\n", printf("%*st%-8se%-*ss%*st%8s", 0, str, str2, 6, str, 5, str2, str));
	printf("\treturn :%d\n", ft_printf("%*st%-8se%-*ss%*st%8s", 0, str, str2, 6, str, 5, str2, str));

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                   %%                  |");
	printf("\n --------------------------------------\n");

	printf("\n---- %% without flag ----\n");
	printf("\treturn :%d\n", printf("tes%%t"));
	printf("\treturn :%d\n", ft_printf("tes%%t"));

	//! flags -* com %% não estão funcionando
	// printf("\n---- %% with flag -*num ----\n");
	// printf("\treturn :%d\n", printf("t%*%es%-3%t", 3));
	// printf("\treturn :%d\n", ft_printf("t%*%es%-3%t", 3));
	*/
	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                INTEGER               |");
	printf("\n --------------------------------------\n");

	// printf("\n---- int without flag ----\n");
	// printf("\treturn :%d\n", printf("tes%dt", i));
	// printf("\treturn :%d\n", ft_printf("tes%dt", i));

	// printf("\n---- int with * flag ----\n");
	// printf("\treturn :%d\n", printf("tes%*dt", 5, i));
	// printf("\treturn :%d\n", ft_printf("tes%*dt", 5, i));

	// printf("\n---- negative int with * flag ----\n");
	// printf("\treturn :%d\n", printf("tes%*dt", 7, -i));
	// printf("\treturn :%d\n", ft_printf("tes%*dt", 7, -i));

	// printf("\n---- negative int with - flag ----\n");
	// printf("\treturn :%d\n", printf("tes%-dt", -i));
	// printf("\treturn :%d\n", ft_printf("tes%-dt", -i));

	// printf("\n---- negative int with -* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%-*dt", 5, -i));
	// printf("\treturn :%d\n", ft_printf("tes%-*dt", 5, -i));

	// printf("\n---- negative int with 0* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%0*dt", 7, -i));
	// printf("\treturn :%d\n", ft_printf("tes%0*dt", 7, -i));

	// printf("\n---- int with 5.8 flag ----\n");
	// printf("\treturn :%d\n", printf("tes%5.8dt", i));
	// printf("\treturn :%d\n", ft_printf("tes%5.8dt", i));

	printf("\n---- int with 8.5 flag ----\n");
	printf("\treturn :%d\n", printf("tes%8.5dt", i));
	printf("\treturn :%d\n", ft_printf("tes%8.5dt", i));

	printf("\n---- int with 8.* flag ----\n");
	printf("\treturn :%d\n", printf("tes%8.*dt", i));
	printf("\treturn :%d\n", ft_printf("tes%8.*dt", i));

	return (0);
}
