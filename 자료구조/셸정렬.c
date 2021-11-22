#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
	int i, j, h;
	for (h = n / 2; h > 0; h /= 2) {
		for (i = h; i < n; i++) {
			int tmp = a[i];
			for (j = i - h; j >= 0 && a[j] > tmp; j -= h) {
				a[j + h] = a[j];
			}
			a[j + h] = tmp;
		}
	}
}
int main(void)
{
	int i, nx;
	int* x;
	printf("셸 정렬\n");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	if (x == NULL) {
		return -1;
	}
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	shell(x, nx);
	printf("오름차순으로 정렬했습니다. ");
	for (i = 0; i < nx; i++) {
		printf("x[%d]=%d\n", i, x[i]);
	}
	free(x);
}