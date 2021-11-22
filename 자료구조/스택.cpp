#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000000
int stack[MAXSIZE];
int top = -1;
int num;
void push(int num);
void pop();
void printsize();
void empty();
void printtop();
char command[100000];

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%s", command,sizeof(command));
		if (!strcmp(command, "push")) {
			scanf_s("%d", &num);
			push(num);
		}
		if (!strcmp(command, "pop")) {
			if (top < 0) {
				printf("-1\n");
			}
			else {
				pop();
			}
		}
		if (!strcmp(command, "size")) {
			printsize();
		}
		if (!strcmp(command, "empty")) {
			empty();
		}
		if (!strcmp(command, "top")) {
			printtop();
		}
	}
}
void push(int num)
{
	top++;
	stack[top] = num;
}
void pop()
{
	printf("%d\n", stack[top]);
	top--;
}
void printsize() {
	printf("%d\n", top + 1);
}
void empty() {
	if (top < 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}
void printtop() {
	if (top < 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", stack[top]);
	}
}

