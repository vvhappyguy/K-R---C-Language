#include <stdio.h>

int main()
{
	int c, ns;

	while((c = getchar()) != 'q')
	{
		if(c == ' ' && ns < 1)
		{
			++ns;
			putchar(c);
		}
		if(c == '\n')
			ns = 0;
	}
	return 0;
}
