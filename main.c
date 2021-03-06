#include "ft_printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	// char c = 'A';
	// char d = '!';
	// char *str = "9876";
	// char *str2 = "ABC";
	int i = 0x3a9b7d;
	// int a = 1;
	// int b = 1;
	// int *p = &a;
	// int *q = &b;

	int		a = -4;
	// int		b = 0;
	// char	c = 'a';
	// int		d = 2147483647;
	// int		e = -2147483648;
	// int		f = 42;
	// int		g = 25;
	// int		h = 4200;
	// int		i = 8;
	// int		j = -12;
	// int		k = 123456789;
	// int		l = 0;
	// int		m = -12345678;
	// char	*n = "abcdefghijklmnop";
	// char	*o = "-a";
	// char	*p = "-12";
	// char	*q = "0";
	// char	*r = "%%";
	// char	*s = "-2147483648";
	// char	*t = "0x12345678";
	// char	*u = "-0";

	// printf("\n---- tests 42TESTERS ----\n");
	// printf("\n---- T3 ---- \n");
	// printf("\treturn :%d\n", printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d));
	// printf("\treturn :%d\n", ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d));






	// static char *s_hidden = "hi low\0don't print me lol\0";

	// printf("\n---- only input str ---- \n");
	// printf("\treturn :%d\n", printf("test"));
	// printf("\treturn :%d\n", ft_printf("test"));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                 CHAR                 |");
	// printf("\n --------------------------------------\n");

	printf("\n---- tests Tripouille ----\n");
	printf("\n4\n");
	printf("\treturn :%d\n", printf("|%10c|", '0'));
	printf("\treturn :%d\n", ft_printf("|%10c|", '0'));
	printf("\n6\n");
	printf("\treturn :%d\n", printf("|%-10c|", '0'));
	printf("\treturn :%d\n", ft_printf("|%-10c|", '0'));
	printf("\n11\n");
	printf("\treturn :%d\n", printf("|%*c|", -2, '0'));
	printf("\treturn :%d\n", ft_printf("|%*c|", -2, '0'));
	printf("\n14\n");
	printf("\treturn :%d\n", printf("|%*c|", -10, '0'));
	printf("\treturn :%d\n", ft_printf("|%*c|", -10, '0'));
	printf("\n15\n");
	printf("\treturn :%d\n", printf("|%*c%*c|", -10, '0', 10, '1'));
	printf("\treturn :%d\n", ft_printf("|%*c%*c|", -10, '0', 10, '1'));
	printf("\n17\n");
	printf("\treturn :%d\n", printf("|%*c%c|", -10, '0', '1'));
	printf("\treturn :%d\n", ft_printf("|%*c%c|", -10, '0', '1'));
	printf("\n30\n");
	printf("\treturn :%d\n", printf("|-%-*c* -%-*c*|", 2, 0, -2, 0));
	printf("\treturn :%d\n", ft_printf("|-%-*c* -%-*c*|", 2, 0, -2, 0));


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

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                STRING                |");
	// printf("\n --------------------------------------\n");



	// printf("\n---- tests PTF_2019 ----\n");
	// printf("\treturn :%d\n", printf("|%.03s|", s_hidden));
	// printf("\treturn :%d\n", ft_printf("|%.03s|", s_hidden));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.09s|", s_hidden));
	// printf("\treturn :%d\n", ft_printf("|%.09s|", s_hidden));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.03s|", NULL));
	// printf("\treturn :%d\n", ft_printf("|%.03s|", NULL));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.09s|", NULL));
	// printf("\treturn :%d\n", ft_printf("|%.09s|", NULL));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.01s|", "\0"));
	// printf("\treturn :%d\n", ft_printf("|%.01s|", "\0"));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.03s|", "\0"));
	// printf("\treturn :%d\n", ft_printf("|%.03s|", "\0"));

	// printf("\n");
	// printf("\treturn :%d\n", printf("|%.09s|", "\0"));
	// printf("\treturn :%d\n", ft_printf("|%.09s|", "\0"));





	// printf("\n---- tests Tripouille ----\n");
	// printf("\n16\n");
	// printf("\treturn :%d\n", printf("|%*.s %.1s|", 10, "2222", "9999"));
	// printf("\treturn :%d\n", ft_printf("|%*.s %.1s|", 10, "2222", "9999"));
	// printf("\n17\n");
	// printf("\treturn :%d\n", printf("|%*.0s %.2s|", 10, "123", "4567"));
	// printf("\treturn :%d\n", ft_printf("|%*.0s %.2s|", 10, "123", "4567"));
	// printf("\n18\n");
	// printf("\treturn :%d\n", printf("|%*.3s %.3s|", 10, "123", "4567"));
	// printf("\treturn :%d\n", ft_printf("|%*.3s %.3s|", 10, "123", "4567"));

	// printf("\n34\n");
	// printf("\treturn :%d\n", printf("|%-3.s|", NULL));
	// printf("\treturn :%d\n", ft_printf("|%-3.s|", NULL));

	// printf("\n35\n");
	// printf("\treturn :%d\n", printf("|%-9.1s|", NULL));
	// printf("\treturn :%d\n", ft_printf("|%-9.1s|", NULL));

	// printf("\n36\n");
	// printf("\treturn :%d\n", printf("|%.*s|", -2, NULL));
	// printf("\treturn :%d\n", ft_printf("|%.*s|", -2, NULL));

	// printf("\n36\n");
	// printf("\treturn :%d\n", printf("|%.*s|", -1, NULL));
	// printf("\treturn :%d\n", ft_printf("|%.*s|", -1, NULL));

	// printf("\n36\n");
	// printf("\treturn :%d\n", printf("|%.*s|", -80000, NULL));
	// printf("\treturn :%d\n", ft_printf("|%.*s|", -80000, NULL));

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





	// printf("\n---- pct_5wzp ----\n");
	// printf("\treturn :%d\n", printf("|%05%|"));
	// printf("\treturn :%d\n", ft_printf("|%05%|"));

	// printf("\n---- pct_5wljzp ----\n");
	// printf("\treturn :%d\n", printf("|%-05%|"));
	// printf("\treturn :%d\n", ft_printf("|%-05%|"));


	// printf("\n15: ---- nocrash_nullspec_5wlj ----\n");
	// printf("\treturn :%d\n", printf("|%-5|"));
	// printf("\treturn :%d\n", ft_printf("|%-5|"));

	// printf("\n15: ---- nocrash_nullspec_5wlj ----\n");
	// printf("\treturn :%d\n", printf("%-5"));
	// printf("\treturn :%d\n", ft_printf("%-5"));

	// printf("\n---- tests ft_printf_test ----\n");
	// printf("\n15: ---- i_basic_i_onlyneg ----\n");
	// printf("\treturn :%d\n", printf("%i", -1));
	// printf("\treturn :%d\n", ft_printf("%i", -1));

	// printf("\n15: ---- i_basic_i_onlyneg ----\n");
	// printf("\treturn :%d\n", printf("|%i|", -1));
	// printf("\treturn :%d\n", ft_printf("|%i|", -1));

	// printf("\n15: ---- i_zp_pos_fits ----\n");
	// printf("\treturn :%d\n", printf("|%05i|", 43));
	// printf("\treturn :%d\n", ft_printf("|%05i|", 43));



	// printf("\n130: ---- s_undefbehav_0_width_9 ----\n");
	// printf("\treturn :%d\n", printf("|%09s|", s_hidden));
	// printf("\treturn :%d\n", ft_printf("|%09s|", s_hidden));

	// printf("\n132: ---- s_undefbehav_lj_0_width_9  ----\n");
	// printf("\treturn :%d\n", printf("|%-09s|", s_hidden));
	// printf("\treturn :%d\n", ft_printf("|%-09s|", s_hidden));



	// printf("\n744: ---- new2019_negstar_9 ----\n");
	// printf("\treturn :%d\n", printf("|%0*i|", -7, -54));
	// printf("\treturn :%d\n", ft_printf("|%0*i|", -7, -54));




	// printf("\n---- %% without flag ----\n");
	// printf("\treturn :%d\n", printf("tes%%t"));
	// printf("\treturn :%d\n", ft_printf("tes%%t"));

	// printf("\n");
	// printf("\n --------------------------------------");
	// printf("\n|                INTEGER               |");
	// printf("\n --------------------------------------\n");

	// printf("\n---- 1 ----\n");
	// printf("\treturn :%d\n", printf("|%d|", 0));
	// printf("\treturn :%d\n", ft_printf("|%d|", 0));

	// printf("\n---- 2 ----\n");
	// printf("\treturn :%d\n", printf("|%.d|", 0));
	// printf("\treturn :%d\n", ft_printf("|%.d|", 0));

	// printf("\n---- 14 ----\n");
	// printf("\treturn :%d\n", printf("|0*%0-*d*0 0*%0*d*0|", 21, 1021, 21, -1011));
	// printf("\treturn :%d\n", ft_printf("|0*%0-*d*0 0*%0*d*0|", 21, 1021, 21, -1011));

	// printf("\n---- 15 ----\n");
	// printf("\treturn :%d\n", printf("|0*%-0*.10d*0 0*%-0*.0d*0|", 21, 1021, 21, -1011));
	// printf("\treturn :%d\n", ft_printf("|0*%-0*.10d*0 0*%-0*.0d*0|", 21, 1021, 21, -1011));

	// printf("\n---- 17 ----\n");
	// printf("\treturn :%d\n", printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN));
	// printf("\treturn :%d\n", ft_printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN));

	// printf("\n---- 70 ----\n");
	// printf("\treturn :%d\n", printf("|%.0d|", 5));
	// printf("\treturn :%d\n", ft_printf("|%.0d|", 5));

	// printf("\n---- 71 ----\n");
	// printf("\treturn :%d\n", printf("|%.0d|", 10));
	// printf("\treturn :%d\n", ft_printf("|%.0d|", 10));


	// printf("\n---- 72 ----\n");
	// printf("\treturn :%d\n", printf("|%1.d|", 0));
	// printf("\treturn :%d\n", ft_printf("|%1.d|", 0));

	// printf("\n---- 73 ----\n");
	// printf("\treturn :%d\n", printf("|%2.d|", 0));
	// printf("\treturn :%d\n", ft_printf("|%2.d|", 0));

	// printf("\n---- 74 ----\n");
	// printf("\treturn :%d\n", printf("|%3.d|", 0));
	// printf("\treturn :%d\n", ft_printf("|%3.d|", 0));


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

	// printf("\n---- 2 --  %%.x   ----\n");
	// printf("\treturn :%d\n", printf("|%.x|", 0));
	// printf("\treturn :%d\n", ft_printf("|%.x|", 0));

	// printf("\n---- 3 --  %%-.2x   ----\n");
	// printf("\treturn :%d\n", printf("|%-.2x|", 0));
	// printf("\treturn :%d\n", ft_printf("|%-.2x|", 0));

	// printf("\n---- 4 --  %%-2.2x   ----\n");
	// printf("\treturn :%d\n", printf("|%-2.2x|", 0));
	// printf("\treturn :%d\n", ft_printf("|%-2.2x|", 0));

	// printf("\n---- 5 --  %%-3.2x   ----\n");
	// printf("\treturn :%d\n", printf("|%-3.2x|", 0));
	// printf("\treturn :%d\n", ft_printf("|%-3.2x|", 0));

	// printf("\n---- 6 --  %%-3.2x %%10.42x   ----\n");
	// printf("\treturn :%d\n", printf(" %-3.2x %10.42x ", 0, 0));
	// printf("\treturn :%d\n", ft_printf(" %-3.2x %10.42x ", 0, 0));

	// printf("\n---- 9   ----\n");
	// printf("\treturn :%d\n", printf(" *%-*.*x* *%*.*x* ", 4, 5, 10, 10, 21, -10));
	// printf("\treturn :%d\n", ft_printf(" *%-*.*x* *%*.*x* ", 4, 5, 10, 10, 21, -10));

	// printf("\n---- 10  ----\n");
	// printf("\treturn :%d\n", printf(" *%-*.*x* *%*.*x* ", 6, 2, 102, 10, 21, -101));
	// printf("\treturn :%d\n", ft_printf(" *%-*.*x* *%*.*x* ", 6, 2, 102, 10, 21, -101));


	// printf("\n---- 12  ----\n");
	// printf("\treturn :%d\n", printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 6, 2, 102, 10, 21, -101));
	// printf("\treturn :%d\n", ft_printf(" 0*%0-*.*x*0 0*%0*.*x*0 ", 6, 2, 102, 10, 21, -101));

	// printf("\n---- 14   ----\n");
	// printf("\treturn :%d\n", printf(" 0*%0-*x*0 0*%0*x*0 ", 21, 1021, 21, -1011));
	// printf("\treturn :%d\n", ft_printf(" 0*%0-*x*0 0*%0*x*0 ", 21, 1021, 21, -1011));

	// printf("\n---- 15   ----\n");
	// printf("\treturn :%d\n", printf(" 0*%-0*.10x*0 0*%-0*.0x*0 ", 21, 1021, 21, -1011));
	// printf("\treturn :%d\n", ft_printf(" 0*%-0*.10x*0 0*%-0*.0x*0 ", 21, 1021, 21, -1011));

	// printf("\n---- .x 15   ----\n");
	// printf("\treturn :%d\n", printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, -1011));
	// printf("\treturn :%d\n", ft_printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, -1011));

	// printf("\n---- .x (x = 1) 15   ----\n");
	// printf("\treturn :%d\n", printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, 1));
	// printf("\treturn :%d\n", ft_printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, 1));

	// printf("\n---- .x (x = 0) 15   ----\n");
	// printf("\treturn :%d\n", printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, 0));
	// printf("\treturn :%d\n", ft_printf(" 0*%-0*.10x*0 0*%-0*.x*0 ", 21, 1021, 21, 0));


	// printf("\n---- 18  ----\n");
	// printf("\treturn :%d\n", printf(" --0*%0*.0x*0 0*%0*.10x*0-- ", -21, LONG_MAX, 21, LONG_MIN));
	// printf("\treturn :%d\n", ft_printf(" --0*%0*.0x*0 0*%0*.10x*0-- ", -21, LONG_MAX, 21, LONG_MIN));

	// a = 1;
	// b = 1;

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

	printf("\n");
	printf("\n --------------------------------------");
	printf("\n|                POINTER               |");
	printf("\n --------------------------------------\n");
	a = 10;
	while (a < 20)
	{
	printf("\n---- pointer with %%%dp flag ----\n", a);
	printf("\treturn :%d\n", printf("|%*p|", a, &i));
	printf("\treturn :%d\n", ft_printf("|%*p|", a, &i));
	a++;
	}

	printf("\n---- pointer with %%25.20p flag ----\n");
	printf("\treturn :%d\n", printf("|%25.20p|", &i));
	printf("\treturn :%d\n", ft_printf("|%25.20p|", &i));

	printf("\n---- pointer with %%025.20p flag ----\n");
	printf("\treturn :%d\n", printf("|%025.20p|", &i));
	printf("\treturn :%d\n", ft_printf("|%025.20p|", &i));

	return (0);
}
