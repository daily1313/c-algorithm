#include <stdio.h>
#include <string.h>
#define MAXSIZE 10001
int queue[MAXSIZE];
char command[10];
int num;
int top = -1;
int bottom = 0;
void push(int num);
void pop();
void printsize();
void isempty();
void front();
void back();
int main(void) {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%s", command,sizeof(command));
		if (!strcmp(command, "push")) {
			scanf_s("%d", &num);
			push(num);
		}
		if (!strcmp(command, "pop")) {
			pop();
		}
		if (!strcmp(command, "size")) {
			printsize();
		}
		if (!strcmp(command, "empty")) {
			isempty();
		}
		if (!strcmp(command, "front")) {
			front();
		}
		if (!strcmp(command, "back")) {
			back();
		}

	}
}
void push(int num) {
		top++;
		queue[top] = num;
}
void pop() {
	if (top - bottom < 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[bottom]);
		bottom++;
	}
}
void printsize() {
	printf("%d\n", top - bottom +1);

}
void isempty() {
	if (top - bottom < 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}
void front() {
	if (top - bottom < 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n",queue[bottom]);
	}
}
void back() {
	if (top - bottom < 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[top]);
	}
}

