#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do {type t = x;x=y;y=t;} while(0)
int int_cmp(const int* a, const int* b);
int main(void)
{
	int i, nx;
	int* x;
	printf("qsort에 의한 정렬\n요소 개수: ");
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
	qsort(x, nx, sizeof(int), (int(*)(const void*, const void*))int_cmp);
	printf("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
}
int int_cmp(const int* a, const int* b)
{
	if (*a < *b) {
		return -1;
	}
	else if (*a > *b) {
		return 1;
	}
	else {
		return 0;
	}
}