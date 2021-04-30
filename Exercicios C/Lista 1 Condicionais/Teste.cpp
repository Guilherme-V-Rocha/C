#include <stdio.h>
main()
{
	int count = 123;
	int *pt;
	pt = &count;
	printf("%d\n", *pt);
	*pt = 321;
	printf("%d", count);
}

