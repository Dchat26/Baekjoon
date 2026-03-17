#include <stdio.h>

#define MAX_SIZE 1000000

typedef struct {
	int data[MAX_SIZE];
	int top;
} Stack;

void init(Stack* s) {
	s->top = -1;
}

void push(Stack *s, int x) {
	if (s->top >= MAX_SIZE - 1) return;
	s->data[++(s->top)] = x;
}

int pop(Stack* s) {
	if (s->top == -1) return -1;
	return s->data[(s->top)--];
}

int size(Stack* s) {
	return s->top + 1;
}

int empty(Stack* s) {
	if (s->top == -1) return 1;
	return 0;
}

int back(Stack* s) {
	if (s->top == -1) return -1;
	return s->data[(s->top)];
}

int main(void) {
	Stack myStack;
	init(&myStack);

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (!(1 <= n) || !(n <= 1000000)) return 0;

	for (int i = 0; i < n; i++) {
		int s = 0;
		if (scanf("%d", &s) != 1) break;

		if (s == 1) {
			int x = 0;
			if (scanf("%d", &x) != 1) break;
			if (!(1 <= x) || !(x <= 100000)) break;

			push(&myStack, x);
		}
		else if (s == 2) printf("%d\n", pop(&myStack));
		else if (s == 3) printf("%d\n", size(&myStack));
		else if (s == 4) printf("%d\n", empty(&myStack));
		else if (s == 5) printf("%d\n", back(&myStack));
		else return 1;
	}

	return 0;
}