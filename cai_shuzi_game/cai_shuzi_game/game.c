#include "game.h"

void game()
{
	//����һ�������
	int ret = 0;
	int guess = 0;
	ret = rand()%100 + 1;//����1-100֮��������
	printf("��ʼ��Ϸ����1-100֮�������\n");
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}