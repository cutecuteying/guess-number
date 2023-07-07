#include "game.h"

void game()
{
	//生成一个随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100 + 1;//生成1-100之间的随机数
	printf("开始游戏，猜1-100之间的数字\n");
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大啦\n");
		else if (guess < ret)
			printf("猜小啦\n");
		else
		{
			printf("恭喜你，猜对啦\n");
			break;
		}
	}
}