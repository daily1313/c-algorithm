// 각 열에 1개의 퀸을 배치하는 조합을 재귀적으로 나열
#include <stdio.h>

int pos[8];

// 각열에 퀸의 위치 출력
void print(void)
{
	int i;
	for (int i = 0; i < 8; i++) {
		printf("%2d", pos[i]);
	}
	printf("\n");
}
// i열에 퀸 배치
void set(int i)
{
	int j;
	for (j = 0; j < 8; j++) {
		pos[i] = j;
		if (i == 7) {
			print();
		}
		else {
			set(i + 1);
		}
	}
}
int main(void) {
	set(0);
}