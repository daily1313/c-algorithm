#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void selection(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int min = i;
		for (j = i+1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
				
			}
		}
		swap(int, a[i], a[min]);
	}
}
int main(void)
{
	int i, nx;
	int* x;
	printf("���� ����\n");
	printf("��� ����: ");
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


	selection(x, nx);

	printf("������������ �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++) {
		printf("x[%d]=%d\n", i, x[i]);
	}
	free(x);
}