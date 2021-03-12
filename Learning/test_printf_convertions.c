#include <stdio.h>

/**
* ? deal with these conversions: cspdiuxX%
*
*/

int main(void)
{
	char			ch = 65;
	char			*d = "ABCDEFGH";
	int				num = -12541;
	unsigned int	unsignum = 155324;
	float			pi = 3.14159265;

	printf("============ char ============");
	printf("\nflag     c:\tch = |%c|", ch);
	printf("\nflag    *c:\tch = |%*c|", 10, ch);
	printf("\nflag   -*c:\tch = |%-*c|", 10, ch);

	printf("\n\n============ string ============");
	printf("\nflag     s:\td = |%s|", d);
	printf("\nflag    *s:\td = |%*s|", 10, d);
	printf("\nflag   -*s:\td = |%-*s|", 10, d);

	printf("\n\n============ pointer ============");
	printf("\nflag     p:\td = |%p|", d);
	printf("\nflag    *p:\td = |%*p|", 16, d);
	printf("\nflag   -*p:\td = |%-*p|", 16, d);

	printf("\n\n============ double ============");
	printf("\nflag     d:\tnum = |%d|", num);
	printf("\nflag    *d:\tnum = |%*d|", 10, num);
	printf("\nflag   .*d:\tnum = |%.*d|", 2, num);
	printf("\nflag   0*d:\tnum = |%0*d|", 10, num);
	printf("\nflag   -*d:\tnum = |%-*d|", 10, num);


	printf("\n\n============ int ============");
	printf("\nflag     i:\tnum = |%i|", num);
	printf("\nflag    *i:\tnum = |%*i|", 10, num);
	printf("\nflag   .*i:\tnum = |%.*i|", 2, num);
	printf("\nflag   0*i:\tnum = |%0*i|", 10, num);
	printf("\nflag   -*i:\tnum = |%-*i|", 10, num);

	printf("\n\n============ unsigned ============");
	printf("\nflag     i:\tunsignum = |%i|", unsignum);
	printf("\nflag    *i:\tunsignum = |%*i|", 10, unsignum);
	printf("\nflag   .*i:\tunsignum = |%.*i|", 2, unsignum);
	printf("\nflag   0*i:\tunsignum = |%0*i|", 10, unsignum);
	printf("\nflag   -*i:\tunsignum = |%-*i|", 10, unsignum);

	printf("\n\n=========== float ============");
	printf("\nflag     f:\tpi = |%f|", pi);
	printf("\nflag    .f:\tpi = |%.f|", pi);
	printf("\nflag   .*f:\tpi = |%.*f|", 5, pi);
	printf("\nflag  *.*f:\tpi = |%*.*f|", 10, 5, pi);
	printf("\nflag 0*.*f:\tpi = |%0*.*f|", 10, 5, pi);
	printf("\nflag -*.*f:\tpi = |%-*.*f|", 10, 5, pi);


	return (printf("\n"));
}
