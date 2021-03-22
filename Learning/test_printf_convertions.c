#include <stdio.h>

/**
* ? deal with these conversions: cspdiuxX%
* *Format tags prototype is %|flags| |width| |.precision| |length| |specifier|
*/

int main(void)
{
	char			ch = 65;
	char			*d = "ABCDEFGH";
	int				num = 649489451;
	unsigned int	unsignum = 66;
	int				exa = 0xa9f6d4;
	int				*p = &num;
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

	printf("\n\n============ string ============");
	printf("\nflag     s:\td = |%s|", d);
	printf("\nflag    *s:\td = |%*s|", 10, d);
	printf("\nflag   -*s:\td = |%-*s|", 10, d);
	printf("\nflag  *.5s:\td = |%*.5s|", 10, d);
	printf("\nflag -*.5s:\td = |%-*.5s|", 10, d);
	printf("\nflag *.15s:\td = |%*.15s|", 10, d);
	printf("\nflag-*.15s:\td = |%-*.15s|", 10, d);

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


	// printf("\n\n============ i ============");
	// printf("\nflag     i:\tnum = |%i|", num);
	// printf("\nflag    *i:\tnum = |%*i|", 10, num);
	// printf("\nflag  5.*i:\tnum = |%5.*i| (* = 3)", 3, num);
	// printf("\nflag -5.*i:\tnum = |%-5.*i| (* = 3)", 3, num);
	// printf("\nflag  5.*i:\tnum = |%5.*i| (* = 10)", 10, num);
	// printf("\nflag 10.*i:\tnum = |%10.*i| (* = 5)", 5, num);
	// printf("\nflag -8.5i:\tnum = |%-8.5i|", num);
	// printf("\nflag  8.5i:\tnum = |%8.5i|", num);
	// printf("\nflag 08.5i:\tnum = |%08.5i|", num);
	// printf("\nflag   0*i:\tnum = |%0*i| (* = 10)", 10, num);
	// printf("\nflag   -*i:\tnum = |%-*i| (* = 10)", 10, num);

	// printf("\n\n============ -i ============");
	// printf("\nflag     i:\tnum = |%i|", -num);
	// printf("\nflag    *i:\tnum = |%*i|", 10, -num);
	// printf("\nflag  5.*i:\tnum = |%5.*i| (* = 3)", 3, -num);
	// printf("\nflag -5.*i:\tnum = |%-5.*i| (* = 3)", 3, -num);
	// printf("\nflag  5.*i:\tnum = |%5.*i| (* = 10)", 10, -num);
	// printf("\nflag 10.*i:\tnum = |%10.*i| (* = 5)", 5, -num);
	// printf("\nflag  8.5i:\tnum = |%8.5i|", -num);
	// printf("\nflag -8.5i:\tnum = |%-8.5i|", -num);
	// printf("\nflag 08.5i:\tnum = |%08.5i|", -num);
	// printf("\nflag   0*i:\tnum = |%0*i| (* = 10)", 10, -num);
	// printf("\nflag   -*i:\tnum = |%-*i| (* = 10)", 10, -num);

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

	// printf("\n\n=========== hexadecimal ============");
	// printf("\nflag     x:\texa = |%x|", exa);
	// printf("\nflag     x:\tnum = |%x|", num);
	// printf("\nflag     X:\texa = |%X|", exa);
	// printf("\nflag    *x:\texa = |%*x|", 10, exa);
	// printf("\nflag  5.*x:\texa = |%5.*x| (* = 3)", 3, exa);
	// printf("\nflag -5.*x:\texa = |%-5.*x| (* = 3)", 3, exa);
	// printf("\nflag  5.*x:\texa = |%5.*x| (* = 10)", 10, exa);
	// printf("\nflag 10.*x:\texa = |%10.*x| (* = 5)", 5, exa);
	// printf("\nflag -8.5x:\texa = |%-8.5x|", exa);
	// printf("\nflag  8.5x:\texa = |%8.5x|", exa);
	// // printf("\nflag 08.5x:\texa = |%08.5x| *** flag '0' ignored with precision", exa);
	// printf("\nflag   0*x:\texa = |%0*x| (* = 10)", 10, exa);
	// printf("\nflag   -*x:\texa = |%-*x| (* = 10)", 10, exa);
	// printf("\nflag     x:\t-exa = |%x|", -exa);
	// printf("\nflag   0*x:\t-exa = |%0*x| (* = 10)", 10, -exa);
	// printf("\nflag  5.*x:\t-exa = |%5.*x| (* = 10)", 10, -exa);

	// int te = 0xa1b2c3;
	// while (exa>0)
	// {
	// 	printf("\nte:\t%%x: %x   \t%%(x%%16): %x\t(d%%16):%d", exa, exa%16, exa%16);
	// 	exa=exa/16;
	// }
	// printf("\n\n=========== pointer ============");
	// printf("\nflag     p:\tp = |%p|", p);
	// printf("\nflag    *p:\tp = |%*p|", 20, p);
	// printf("\nflag 20.*p:\tp = |%20.*p| (* = 15)", 15, p);
	// // printf("\nflag-20.*p:\tp = |%-5.*p| (* = 15)", 15, p);
	// printf("\nflag   -*p:\tp = |%-*p| (* = 20)", 20, p);
	// // printf("\nflag  -0*p:\t&num = |%-0*p| (* = 20)", 20, &num);
	// printf("\nflag   0*p:\t&num = |%0*p| (* = 20)", 20, &num);



	return (printf("\n"));
}
