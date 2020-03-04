#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("Start Game! \n");
	int num[3], answer[3];
	int strike = 0, ball = 0, count = 0;
	srand((int)time(NULL));

	for (int i = 0; i < 3; i++)
	{
		num[i] = rand() % 10;
	}

	while (strike != 3)
	{
		strike = 0, ball = 0;
		printf("input three of NUMBER : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		count++;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (num[i] == answer[j])
				{
					if (i == j)
						strike++;
					else
						ball++;
				}
			}
		}
		printf("%d strike, %d ball \n", strike, ball);
	}
	printf("You Win \n");
	printf("correct : %d %d %d \n", num[0], num[1], num[2]);
	printf("You conducted %d count", count);
	return 0;
}