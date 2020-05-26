#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int i;

	for (int i = 0; i <= 5; i++)
	{
		goto free_pass;
		if (i % 2 == 0)
		{
			printf("%i Bilangan Genap! \n\n", i);
		}
		else
		{
		free_pass:
			printf("%i Bilangan Ganjil! \n\n", i);
		}
	}

	_getch();
	return 0;
}