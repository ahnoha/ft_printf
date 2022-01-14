#include "ft_printf.h"
#include <limits.h>

// int max(int num, int hi, ...)
// {
//     va_list args;
//     int i;
//     int x;
//     int max;

//     i = 0;
//     max  = 0;
//     va_start(args, hi);
//     while (i < num)
//     { 
//         x = va_arg(args, int);
//         if (i == 0)
//         max = x;
//     else if (x > max)
//         max = x;
//     i++;
//     }
//     va_end(args);

//     i = 0;
//     max = 0;
//     va_start(args, hi);
//     while (i < num)
//     { 
//         x = va_arg(args, int);
//         if (i == 0)
//         max = x * 2;
//     else if (x > max)
//         max = x;
//     i++;
    
//     va_end(args);
//     }
//     return (max);
//     }

// char    *ft_strjoinf(const char *format, ...);

int	main(void)
{
	int n = 1;
	printf("hello %4$d %2$d %5d\n", n, n+1, n+2);
	//printf("%d\n", n);
	// ft_printf("%x\n", ULLONG_MAX);
	// printf("%x\n", ULLONG_MAX);
	return (0);
}
