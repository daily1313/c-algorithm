#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t=x;x=y;y=t;} while(0)

void partition(int a[], int n)
{
	int i;
	int pl = 0;
	int pr = n - 1;
	int x = a[n / 2];
	do {
		while (a[pl] < x) pl++;
		while (a[pr] > x) pr--;
		if (pl <= pr) {
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);
	printf("�ǹ��� ���� %d�Դϴ�.\n", x);
	printf("�ǹ� ������ �׷�\n");
	for (int i = 0; i <= pl - 1; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	if (pl > pr + 1) {
		printf("�ǹ��� ��ġ�ϴ� �׷�\n");
		for (i = pr + 1; i <= pl - 1; i++) {
			printf("%d\n", a[i]);
		}
	}
	printf("�ǹ� �̻��� �׷�\n");
	for (i = pr + 1; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main(void)
{
	int i, nx;
	int* x;
	printf("�迭�� �����ϴ�.\n");
	printf("��� ���� : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	partition(x, nx);
	free(x);

}