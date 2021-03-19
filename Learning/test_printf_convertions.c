#include <stdio.h>

/**
* ? deal with these conversions: cspdiuxX%
* *Format tags prototype is %|flags| |width| |.precision| |length| |specifier|
*/

int main(void)
{
	char			ch = 65;
	char			*d = "ABCDEFGH";
	int				num = 12;
	unsigned int	unsignum = 66;
	// float			pi = 3.14159265;

	//printf("\treturn: %d", printf("%c", "asda"));

	// printf("\n\n============ char ============");
	// printf("\treturn: %d", printf("\nflag     c:\tch = |%c|", ch));
	// printf("\treturn: %d", printf("\nflag    -c:\tch = |%-c|", ch));
	// printf("\treturn: %d", printf("\nflag    *c:\tch = |%*c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag   *0c:\tch = |%*0c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag   0*c:\tch = |%0*c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag  -0*c:\tch = |%-0*c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag   *-c:\tch = |%*-c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag   10c:\tch = |%10c|", ch));
	// printf("\treturn: %d", printf("\nflag  -10c:\tch = |%-10c|", ch));
	// printf("\treturn: %d", printf("\nflag  10-c:\tch = |%10-c|", ch));
	// printf("\treturn: %d", printf("\nflag  *5-c:\tch = |%*5-c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag  5*-c:\tch = |%5*-c|", 10, ch));
	// printf("\treturn: %d", printf("\nflag *5*-c:\tch = |%*5*-c|", 10, 22, ch));
	// printf("\treturn: %d", printf("\nflag *55-c:\tch = |%*55-c|", 10, ch));

	// printf("\n\n============ string ============");
	// printf("\nflag     s:\td = |%s|", d);
	// printf("\nflag    *s:\td = |%*s|", 10, d);
	// printf("\nflag   -*s:\td = |%-*s|", 10, d);

	// printf("\n\n============ pointer ============");
	// printf("\nflag     p:\td = |%p|", d);
	// printf("\nflag    *p:\td = |%*p|", 16, d);
	// printf("\nflag   -*p:\td = |%-*p|", 16, d);

	// printf("\n\n============ d ============");
	// printf("\nflag     d:\tnum = |%d|", num);
	// printf("\nflag    *d:\tnum = |%*d|", 10, num);
	// printf("\nflag   .*d:\tnum = |%.*d|", 2, num);
	// printf("\nflag   0*d:\tnum = |%0*d|", 10, num);
	// printf("\nflag   -*d:\tnum = |%-*d|", 10, num);


	printf("\n\n============ i ============");
	printf("\nflag     i:\tnum = |%i|", num);
	printf("\nflag    *i:\tnum = |%*i|", 10, num);
	printf("\nflag  5.*i:\tnum = |%5.*i| (* = 3)", 3, num);
	printf("\nflag  5.*i:\tnum = |%5.*i| (* = 15)", 15, num);
	printf("\nflag 15.*i:\tnum = |%15.*i| (* = 5)", 5, num);
	printf("\nflag -8.5i:\tnum = |%8.5i|", num);
	printf("\nflag   0*i:\tnum = |%0*i|", 10, num);
	printf("\nflag   -*i:\tnum = |%-*i|", 10, num);

	printf("\n\n============ -i ============");
	printf("\nflag     i:\tnum = |%i|", -num);
	printf("\nflag    *i:\tnum = |%*i|", 10, -num);
	printf("\nflag  5.*i:\tnum = |%5.*i| (* = 3)", 3, -num);
	printf("\nflag  5.*i:\tnum = |%5.*i| (* = 15)", 15, -num);
	printf("\nflag -8.5i:\tnum = |%8.5i|", -num);
	printf("\nflag   0*i:\tnum = |%0*i|", 10, -num);
	printf("\nflag   -*i:\tnum = |%-*i|", 10, -num);

	// printf("\n\n============ unsigned ============");
	// printf("\nflag     u:\tunsignum = |%i|", unsignum);
	// printf("\nflag    *u:\tunsignum = |%*i|", 10, unsignum);
	// printf("\nflag   .*u:\tunsignum = |%.*i|", 2, unsignum);
	// printf("\nflag   0*u:\tunsignum = |%0*i|", 10, unsignum);
	// printf("\nflag   -*u:\tunsignum = |%-*i|", 10, unsignum);

	// printf("\n\n=========== float ============");
	// printf("\nflag     f:\tpi = |%f|", pi);
	// printf("\nflag    .f:\tpi = |%.f|", pi);
	// printf("\nflag   .*f:\tpi = |%.*f|", 5, pi);
	// printf("\nflag  *.*f:\tpi = |%*.*f|", 10, 2, pi);
	// printf("\nflag 0*.*f:\tpi = |%0*.*f|", 10, 5, pi);
	// printf("\nflag -*.*f:\tpi = |%-*.*f|", 10, 5, pi);


	return (printf("\n"));
}
