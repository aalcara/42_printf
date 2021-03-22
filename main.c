#include "ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char d = '!';
	char *str = "9876";
	char *str2 = "ABC";
	int i = 0x3a9b7d;

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

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                INTEGER               |");
	printf("\n --------------------------------------\n");

	printf("\n---- int without flag ----\n");
	printf("\treturn :%d\n", printf("tes%dt", i));
	printf("\treturn :%d\n", ft_printf("tes%dt", i));

	printf("\n---- int with * flag ----\n");
	printf("\treturn :%d\n", printf("tes%*dt", 5, i));
	printf("\treturn :%d\n", ft_printf("tes%*dt", 5, i));

	printf("\n---- negative int with * flag ----\n");
	printf("\treturn :%d\n", printf("tes%*dt", 7, -i));
	printf("\treturn :%d\n", ft_printf("tes%*dt", 7, -i));

	printf("\n---- negative int with - flag ----\n");
	printf("\treturn :%d\n", printf("tes%-dt", -i));
	printf("\treturn :%d\n", ft_printf("tes%-dt", -i));

	printf("\n---- negative int with -* flag ----\n");
	printf("\treturn :%d\n", printf("tes%-*dt", 5, -i));
	printf("\treturn :%d\n", ft_printf("tes%-*dt", 5, -i));

	printf("\n---- negative int with 0* flag ----\n");
	printf("\treturn :%d\n", printf("tes%0*dt", 7, -i));
	printf("\treturn :%d\n", ft_printf("tes%0*dt", 7, -i));

	printf("\n---- negative int with 0*.* flag ----\n");
	printf("\treturn :%d\n", printf("tes%0*.*dt", 22, 10, -i));
	printf("\treturn :%d\n", ft_printf("tes%0*.*dt", 22, 10, -i));

	printf("\n---- negative int with 0*.* flag ----\n");
	printf("\treturn :%d\n", printf("tes%0*.*dt", 7, 5, -i));
	printf("\treturn :%d\n", ft_printf("tes%0*.*dt", 7, 5, -i));

	printf("\n---- int with 29.19 flag ----\n");
	printf("\treturn :%d\n", printf("tes%29.19dt", i));
	printf("\treturn :%d\n", ft_printf("tes%29.19dt", i));

	printf("\n---- int with 11.* flag ----\n");
	printf("\treturn :%d\n", printf("tes%11.*dt", 5, i));
	printf("\treturn :%d\n", ft_printf("tes%11.*dt", 5, i));

	printf("\n---- negative int with 29.19 flag ----\n");
	printf("\treturn :%d\n", printf("tes%29.19dt", -i));
	printf("\treturn :%d\n", ft_printf("tes%29.19dt", -i));

	printf("\n---- negative int with 11.* flag ----\n");
	printf("\treturn :%d\n", printf("tes%11.*dt", 5, -i));
	printf("\treturn :%d\n", ft_printf("tes%11.*dt", 5, -i));

	int a = 1;
	int b = 1;
	while (a <= 7)
	{
		printf("\n---- negative int with *.* flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%*.*d|", a, b, -i));
		printf("\treturn :%d\n", ft_printf("|%*.*d|", a, b, -i));
		a++;
	}
	while (b <= 8)
	{
		printf("\n---- negative int with *.* flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%*.*d|", a, b, -i));
		printf("\treturn :%d\n", ft_printf("|%*.*d|", a, b, -i));
		b++;
	}
	a = 1;
	b = 1;
	while (b <= 7)
	{
		printf("\n---- negative int with -*.* flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%-*.*d|", a, b, -i));
		printf("\treturn :%d\n", ft_printf("|%-*.*d|", a, b, -i));
		b++;
	}
	while (a <= 7)
	{
		printf("\n---- negative int with -*.* flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%-*.*d|", a, b, -i));
		printf("\treturn :%d\n", ft_printf("|%-*.*d|", a, b, -i));
		a++;
		b--;
	}

	while (b < 20)
	{
		printf("\n---- positive int with %%*.*x flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%*.*x|", a, b, i));
		printf("\treturn :%d\n", ft_printf("|%*.*x|", a, b, i));
		b++;
	}
	while (a < 20)
	{
		printf("\n---- positive int with %%-*.*x flag (%d.%d)----\n", a, b);
		printf("\treturn :%d\n", printf("|%-*.*x|", a, b, i));
		printf("\treturn :%d\n", ft_printf("|%-*.*x|", a, b, i));
		a++;
		b--;
	}

	printf("\n---- positive int with %%0*.*X flag (%d.%d)----\n", a, b);
	printf("\treturn :%d\n", printf("|%0*.*X|", a, b, i));
	printf("\treturn :%d\n", ft_printf("|%0*.*X|", a, b, i));

	printf("\n---- positive int with %%020X flag ----\n");
	printf("\treturn :%d\n", printf("|%020X|", i));
	printf("\treturn :%d\n", ft_printf("|%020X|", i));

	return (0);
}
