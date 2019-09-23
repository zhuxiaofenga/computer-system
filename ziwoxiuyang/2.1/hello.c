#include <stdio.h>
#define AAA 1

int func()
{
	printf("hello world in func\n");
	return 0;
}

int main()
{

	int i = AAA * 2;
	func();
	printf("hello world i = %d\n", i);
	return 0;
}
