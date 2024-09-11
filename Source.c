#include <locale.h>

#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	float n = 3, L = 373;
	printf("n = %.0f , L = 0.%0f \n", n, L);
	printf(" 3 деленное на 373 равно %0+10.5f\n", n / L);
}