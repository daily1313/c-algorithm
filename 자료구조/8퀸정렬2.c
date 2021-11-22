// 각 행, 각열에 1개의 퀸을 배치하는 조합을 재귀적으로 나열
#include <stdio.h>

int flag[8];//각 행에 퀸을 배치했는지 체크하는 배열
int pos[8];//각 열에서의 퀸의 위치

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
