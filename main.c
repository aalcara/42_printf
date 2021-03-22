#include "ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char d = '!';
	char *str = "9876";
	char *str2 = "ABC";
	int i = 0x3a9b7d;
	int a = 1;
	int b = 1;
	int *p = &a;
	int *q = &b;

	// printf("\n---- only input str ---- \n");
	// printf("\treturn :%d\n", printf("test"));
	// printf("\treturn :%d\n", ft_printf("test"));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                 CHAR                 |");
	// printf("\n --------------------------------------\n");

	// printf("\n---- tests Tripouille ----\n");
	// printf("\n4\n");
	// printf("\treturn :%d\n", printf("|%10c|", '0'));
	// printf("\treturn :%d\n", ft_printf("|%10c|", '0'));
	// printf("\n6\n");
	// printf("\treturn :%d\n", printf("|%-10c|", '0'));
	// printf("\treturn :%d\n", ft_printf("|%-10c|", '0'));
	// printf("\n11\n");
	// printf("\treturn :%d\n", printf("|%*c|", -2, '0'));
	// printf("\treturn :%d\n", ft_printf("|%*c|", -2, '0'));
	// printf("\n14\n");
	// printf("\treturn :%d\n", printf("|%*c|", -10, '0'));
	// printf("\treturn :%d\n", ft_printf("|%*c|", -10, '0'));
	// printf("\n15\n");
	// printf("\treturn :%d\n", printf("|%*c%*c|", -10, '0', 10, '1'));
	// printf("\treturn :%d\n", ft_printf("|%*c%*c|", -10, '0', 10, '1'));
	// printf("\n17\n");
	// printf("\treturn :%d\n", printf("|%*c%c|", -10, '0', '1'));
	// printf("\treturn :%d\n", ft_printf("|%*c%c|", -10, '0', '1'));
	// printf("\n30\n");
	// printf("\treturn :%d\n", printf("|-%-*c* -%-*c*|", 2, 0, -2, 0));
	// printf("\treturn :%d\n", ft_printf("|-%-*c* -%-*c*|", 2, 0, -2, 0));


	// printf("\n---- one char without flag ----\n");
	// printf("\treturn :%d\n", printf("test%c",d));
	// printf("\treturn :%d\n", ft_printf("test%c",d));

	// printf("\n---- multiplus chars without flag ----\n");
	// printf("\treturn :%d\n", printf("%ct%ce%cs%ct", c, d, c, d));
	// printf("\treturn :%d\n", ft_printf("%ct%ce%cs%ct", c, d, c, d));

	// printf("\n---- chars with flag * ----\n");
	// printf("\treturn :%d\n", printf("t%*ces%*ct", 2, d, 3, c));
	// printf("\treturn :%d\n", ft_printf("t%*ces%*ct", 2, d, 3, c));

	// printf("\n---- chars with flag - ----\n");
	// printf("\treturn :%d\n", printf("t%-ces%-ct", d, c));
	// printf("\treturn :%d\n", ft_printf("t%-ces%-ct", d, c));

	// printf("\n---- chars with flag -* ----\n");
	// printf("\treturn :%d\n", printf("t%-*ces%-*ct", 5, d, 3, c));
	// printf("\treturn :%d\n", ft_printf("t%-*ces%-*ct", 5, d, 3, c));

	// printf("\n---- chars with flag -num ----\n");
	// printf("\treturn :%d\n", printf("t%-2ces%-2ct", d, c));
	// printf("\treturn :%d\n", ft_printf("t%-2ces%-2ct", d, c));

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                STRING                |");
	printf("\n --------------------------------------\n");

	printf("\n---- tests Tripouille ----\n");
	// printf("\n16\n");
	// printf("\treturn :%d\n", printf("|%*.s %.1s|", 10, "2222", "9999"));
	// printf("\treturn :%d\n", ft_printf("|%*.s %.1s|", 10, "2222", "9999"));
	// printf("\n17\n");
	// printf("\treturn :%d\n", printf("|%*.0s %.2s|", 10, "123", "4567"));
	// printf("\treturn :%d\n", ft_printf("|%*.0s %.2s|", 10, "123", "4567"));
	// printf("\n18\n");
	// printf("\treturn :%d\n", printf("|%*.3s %.3s|", 10, "123", "4567"));
	// printf("\treturn :%d\n", ft_printf("|%*.3s %.3s|", 10, "123", "4567"));

	printf("\n34\n");
	printf("\treturn :%d\n", printf("|%-3.s|", NULL));
	printf("\treturn :%d\n", ft_printf("|%-3.s|", NULL));

	printf("\n35\n");
	printf("\treturn :%d\n", printf("|%-9.1s|", NULL));
	printf("\treturn :%d\n", ft_printf("|%-9.1s|", NULL));

	printf("\n36\n");
	printf("\treturn :%d\n", printf("|%.*s|", -2, NULL));
	printf("\treturn :%d\n", ft_printf("|%.*s|", -2, NULL));

	printf("\n36\n");
	printf("\treturn :%d\n", printf("|%.*s|", -1, NULL));
	printf("\treturn :%d\n", ft_printf("|%.*s|", -1, NULL));

	printf("\n36\n");
	printf("\treturn :%d\n", printf("|%.*s|", -80000, NULL));
	printf("\treturn :%d\n", ft_printf("|%.*s|", -80000, NULL));

	// printf("\n---- multiplus str without flag ----\n");
	// printf("\treturn :%d\n", printf("%st%se%ss%st", str, str2, str, str2));
	// printf("\treturn :%d\n", ft_printf("%st%se%ss%st", str, str2, str, str2));

	// printf("\n---- multiplus str with -*num flag ----\n");
	// printf("\treturn :%d\n", printf("%*st%-8se%-*ss%*st%8s", 0, str, str2, 6, str, 5, str2, str));
	// printf("\treturn :%d\n", ft_printf("%*st%-8se%-*ss%*st%8s", 0, str, str2, 6, str, 5, str2, str));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                   %%                  |");
	// printf("\n --------------------------------------\n");

	// printf("\n---- %% without flag ----\n");
	// printf("\treturn :%d\n", printf("tes%%t"));
	// printf("\treturn :%d\n", ft_printf("tes%%t"));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                INTEGER               |");
	// printf("\n --------------------------------------\n");

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
	// printf("\treturn :%d\n", printf("tes%-*dt", 12, -i));
	// printf("\treturn :%d\n", ft_printf("tes%-*dt", 12, -i));

	// printf("\n---- negative int with 0* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%0*dt", 12, -i));
	// printf("\treturn :%d\n", ft_printf("tes%0*dt", 12, -i));

	// printf("\n---- negative int with 0*.* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%0*.*dt", 22, 10, -i));
	// printf("\treturn :%d\n", ft_printf("tes%0*.*dt", 22, 10, -i));

	// printf("\n---- negative int with 0*.* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%0*.*dt", 7, 5, -i));
	// printf("\treturn :%d\n", ft_printf("tes%0*.*dt", 7, 5, -i));

	// printf("\n---- int with 29.19 flag ----\n");
	// printf("\treturn :%d\n", printf("tes%29.19dt", i));
	// printf("\treturn :%d\n", ft_printf("tes%29.19dt", i));

	// printf("\n---- int with 11.* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%11.*dt", 5, i));
	// printf("\treturn :%d\n", ft_printf("tes%11.*dt", 5, i));

	// printf("\n---- negative int with 29.19 flag ----\n");
	// printf("\treturn :%d\n", printf("tes%29.19dt", -i));
	// printf("\treturn :%d\n", ft_printf("tes%29.19dt", -i));

	// printf("\n---- negative int with 11.* flag ----\n");
	// printf("\treturn :%d\n", printf("tes%11.*dt", 5, -i));
	// printf("\treturn :%d\n", ft_printf("tes%11.*dt", 5, -i));


	// while (a <= 7)
	// {
	// 	printf("\n---- negative int with *.* flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%*.*d|", a, b, -i));
	// 	printf("\treturn :%d\n", ft_printf("|%*.*d|", a, b, -i));
	// 	a++;
	// }
	// while (b <= 8)
	// {
	// 	printf("\n---- negative int with *.* flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%*.*d|", a, b, -i));
	// 	printf("\treturn :%d\n", ft_printf("|%*.*d|", a, b, -i));
	// 	b++;
	// }

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|              HEXADECIMAL             |");
	// printf("\n --------------------------------------\n");

	// a = 1;
	// b = 1;
	// while (b <= 10)
	// {
	// 	printf("\n---- negative int with -*.* flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%-*.*d|", a, b, -i));
	// 	printf("\treturn :%d\n", ft_printf("|%-*.*d|", a, b, -i));
	// 	b++;
	// }
	// while (a <= 10)
	// {
	// 	printf("\n---- negative int with -*.* flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%-*.*d|", a, b, -i));
	// 	printf("\treturn :%d\n", ft_printf("|%-*.*d|", a, b, -i));
	// 	a++;
	// 	b--;
	// }

	// while (b < 20)
	// {
	// 	printf("\n---- positive int with %%*.*x flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%*.*x|", a, b, i));
	// 	printf("\treturn :%d\n", ft_printf("|%*.*x|", a, b, i));
	// 	b++;
	// }
	// while (a < 20)
	// {
	// 	printf("\n---- positive int with %%-*.*x flag (%d.%d)----\n", a, b);
	// 	printf("\treturn :%d\n", printf("|%-*.*x|", a, b, i));
	// 	printf("\treturn :%d\n", ft_printf("|%-*.*x|", a, b, i));
	// 	a++;
	// 	b--;
	// }

	// printf("\n---- positive int with %%0*.*X flag (%d.%d)----\n", a, b);
	// printf("\treturn :%d\n", printf("|%0*.*X|", a, b, i));
	// printf("\treturn :%d\n", ft_printf("|%0*.*X|", a, b, i));

	// printf("\n---- positive int with %%020X flag ----\n");
	// printf("\treturn :%d\n", printf("|%020X|", i));
	// printf("\treturn :%d\n", ft_printf("|%020X|", i));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                POINTER               |");
	// printf("\n --------------------------------------\n");
	// a = 10;
	// while (a < 20)
	// {
	// printf("\n---- pointer with %%%dp flag ----\n", a);
	// printf("\treturn :%d\n", printf("|%*p|", a, &i));
	// printf("\treturn :%d\n", ft_printf("|%*p|", a, &i));
	// a++;
	// }

	// printf("\n---- pointer with %%25.20p flag ----\n");
	// printf("\treturn :%d\n", printf("|%25.20p|", &i));
	// printf("\treturn :%d\n", ft_printf("|%25.20p|", &i));

	// printf("\n---- pointer with %%025.20p flag ----\n");
	// printf("\treturn :%d\n", printf("|%025.20p|", &i));
	// printf("\treturn :%d\n", ft_printf("|%025.20p|", &i));

	return (0);
}
