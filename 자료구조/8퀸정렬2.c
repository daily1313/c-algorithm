// �� ��, ������ 1���� ���� ��ġ�ϴ� ������ ��������� ����
#include <stdio.h>

int flag[8];//�� �࿡ ���� ��ġ�ߴ��� üũ�ϴ� �迭
int pos[8];//�� �������� ���� ��ġ

void print(void)
{
	int i;
	for (int i = 0; i < 8; i++)
	{
		printf("%2d", pos[i]);
	}
	printf("\n");
}
void set(int i)
{
	int j;
	for (int j = 0; j < 8; j++)
	{
		if (!flag[j]) {
			pos[i] = j;
			if (i == 7)
				print();
			else {
				flag[j] = 1;
				set(i + 1);
				flag[j] = 0;
			}
		}
	}
}
int main(void)
{
	int i;
	for (i = 0; i < 8; i++) {
		flag[i] = 0;
	}
	set(0);
}
