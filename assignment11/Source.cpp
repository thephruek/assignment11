#include<stdio.h>
int main() {
	int s = 9, count, count2, line = 0, isDown = 0;
	for (isDown = 0; isDown <= 1; isDown++)
	{
		do
		{
			for (s = 15; s - line > 0; s--)
			{
				printf(" ");
			}
			for (count = 0; count < (line + 1); count++)
			{
				printf("%d", count);
			}
			for (count2 = line - 1; count2 >= 0; count2--)
			{
				printf("%d", count2);
			}
			printf("\n");
			if (isDown)
				line--;
			else
				line++;
		} while ((line != 10 && line != -1) == 1);
		line = line - 2;
	}
	return 0;
}