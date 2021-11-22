#include <stdio.h>
#include <stdlib.h>
#define swap(type, x,y) do {type t = x; x = y; y = t;} while(0)

void quicksort(int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int x = a[(pl + pr) / 2];
	do {
		while (a[pl] < x) pl++;
		while (a[pr] > x) pr--;
		if (pl <= pr) {
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);
	if (left < pr) quicksort(a, left, pr);
	if (pl < right) quicksort(a, pl, right);
}
int main(void)
{
	int i, nx;
	int* x;
	printf("퀵정렬\n요소 개수: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	if (x == NULL)
	{
		return -1;
	}
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	quicksort(x, 0, nx - 1);
	printf("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
}