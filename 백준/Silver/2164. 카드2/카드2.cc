#include <stdio.h>

#define MAX_SIZE 500005

typedef struct {
	int data[MAX_SIZE];
	int top;
	int bottom;
} Queue;

void init(Queue* s) {
	s->top = 0;
	s->bottom = 0;
}

void push(Queue* s, int x) {
	if ((s->top + 1) % MAX_SIZE == s->bottom) return;
	s->top = (s->top + 1) % MAX_SIZE;
	s->data[(s->top)] = x;
}

int pop(Queue* s) {
	if (s->bottom == s->top) return -1;
	s->bottom = (s->bottom + 1) % MAX_SIZE;
	return s->data[(s->bottom)];
}

int size(Queue* s) {
	return (s->top - s->bottom + MAX_SIZE) % MAX_SIZE;
}

int empty(Queue* s) {
	if (s->bottom == s->top) return 1;
	return 0;
}

int front(Queue* s) {
	if (s->bottom == s->top) return -1;
	return s->data[(s->bottom + 1) % MAX_SIZE];
}

int back(Queue* s) {
	if (s->bottom == s->top) return -1;
	return s->data[(s->top)];
}

Queue myQueue;
int main(void) {
	init(&myQueue);

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (1 > n || n > 500000) return 0;

	for (int i = 1; i <= n; i++) {
		push(&myQueue, i);
	}

	while (size(&myQueue) != 1) {
		pop(&myQueue);
		push(&myQueue, pop(&myQueue));
	}

	printf("%d\n", pop(&myQueue));

	return 0;
}