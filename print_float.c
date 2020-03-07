#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_float(char c)
{
	int i = 7;

	while (i >= 0)
	{
		(c & (1 << i)) ? write(1, "1", 1) :  write(1, "0", 1);
		i--;
	}
	
}

typedef union  u1{
	float f;
	char c[sizeof(float)];
}			union1;


int main()
{
	union1 p;
	p.f = 3.14;
	int i = sizeof(float) - 1;

	while (i >= 0)
	{
		print_float(p.c[i--]);
		write(1, "-", 1);
	}
}
