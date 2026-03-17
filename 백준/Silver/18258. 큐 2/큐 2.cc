#include <stdio.h>
#include <string.h>

#define MAX_SIZE 2000000

typedef struct {
	int data[MAX_SIZE];
	int top;
	int bottom;
} Stack;

void init(Stack* s) {
	s->top = -1;
	s->bottom = 0;
}

void push(Stack* s, int x) {
	if (s->top >= MAX_SIZE - 1) return;
	s->data[++(s->top)] = x;
}

int pop(Stack* s) {
	if (s->bottom > s->top) return -1;
	return s->data[(s->bottom)++];
}

int size(Stack* s) {
	if (s->bottom > s->top) return 0;
	return s->top - s->bottom + 1;
}

int empty(Stack* s) {
	if (s->bottom > s->top) return 1;
	return 0;
}

int front(Stack* s) {
	if (s->bottom > s->top) return -1;
	return s->data[(s->bottom)];
}

int back(Stack* s) {
	if (s->bottom > s->top) return -1;
	return s->data[(s->top)];
}

Stack myStack;
int main(void) {
	init(&myStack);

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (!(1 <= n) || !(n <= 2000000)) return 0;

	char s[10];
	for (int i = 0; i < n; i++) {
		if (!scanf("%s", s)) return 0;

		if (strcmp(s, "push") == 0) {
			int x;
			scanf("%d", &x);
			push(&myStack, x);
		}
		else if (strcmp(s, "pop") == 0) {
			printf("%d\n", pop(&myStack));
		}
		else if (strcmp(s, "size") == 0) {
			printf("%d\n", size(&myStack));
		}
		else if (strcmp(s, "empty") == 0) {
			printf("%d\n", empty(&myStack));
		}
		else if (strcmp(s, "front") == 0) {
			printf("%d\n", front(&myStack));
		}
		else if (strcmp(s, "back") == 0) {
			printf("%d\n", back(&myStack));
		}
	}

	return 0;
}