#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1000

typedef struct {
	int data[MAX_SIZE];
	int top;
	int bottom;
} Stack;

void init(Stack* s) {
	s->top = -1;
	s->bottom = 0;
}

bool q_is_empty(Stack* s) {
	return s->bottom > s->top;
}

bool s_is_empty(Stack* s) {
	return s->top == -1;
}

void push(Stack* s, int x) {
	if (s->top >= MAX_SIZE - 1) return;
	s->data[++(s->top)] = x;
}

int pop(Stack* s) {
	if (s->top == -1) return 0;
	return s->data[(s->top)--];
}

int popleft(Stack* s) {
	if (s->top == -1) return 0;
	return s->data[(s->bottom)++];
}

bool is_empty(Stack* s) {
	return (s->top == -1);
}

int front(Stack* s) {
	if (s->top == -1) return 0;
	return s->data[(s->bottom)];
}

int back(Stack* s) {
	if (s->top == -1) return 0;
	return s->data[(s->top)];
}

Stack Q1, Q2;
int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	init(&Q1);
	init(&Q2);

	int total = n;
	while (n--) {
		int s = 0;
		if (scanf("%d", &s) != 1) return 0;
		push(&Q1, s);
	}

	int num = 1;
	while (!(q_is_empty(&Q1))) {
		if (!(q_is_empty(&Q1)) && front(&Q1) == num) {
			popleft(&Q1);
			num++;
		}
		else if (!(s_is_empty(&Q2)) && back(&Q2) == num) {
			pop(&Q2);
			num++;
		}
		else {
			push(&Q2, popleft(&Q1));
		}
	}
	while (!(s_is_empty(&Q2)) && back(&Q2) == num) {
		pop(&Q2);
		num++;
	}

	if (num == total + 1) printf("Nice\n");
	else printf("Sad\n");

	return 0;
}