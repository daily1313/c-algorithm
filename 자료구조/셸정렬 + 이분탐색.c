#include <stdio.h>
int a[500001];
int b[500001];
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int i, j, h;
	for (h = n / 2; h > 0; h /= 2) {
		for (i = h; i < n; i++) {
			int temp = a[i];
			for (j = i - h; j >= 0 && a[j] > temp; j -= h) {
				a[j + h] = a[j];
				
			}
			a[j + h] = temp;
			
		}
	}
	int m;
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d", &b[i]);
	}
	
	for (int i = 0; i < m; i++) {
		int low, high, mid;
		low = 0;
		high = n - 1;
		int cnt = 0;
		
		while (low <= high) {
			mid = (high + low) / 2;
			if (a[mid] == b[i]) {
				cnt++;
				break;
			}
			else if (a[mid] < b[i]) {
				low = mid + 1;
			}
			else {
				high = mid-1;
			}
		}
		if (cnt == 1) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	return 0;
}

