#include <stdio.h>

int main()
{
	int a = 0, *aa;
	aa = &a;

	printf("%d\n", a);
	printf("%p\n", &a);
	*aa = 10;
	printf("%p\n", aa);
	printf("%d\n", a);
	return 0;
}
