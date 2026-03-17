#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 2000
#define BUFFER_SIZE 10000

char output_buffer[BUFFER_SIZE];
char* ptr = output_buffer;

void add_to_buffer(int value) {
	ptr += sprintf(ptr, "%d", value);
}

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

	int n = 0, k = 0;
	if (scanf("%d %d", &n, &k) != 2) return 0;
	if (1 > n || n > 1000 || 1 > k || k > 1000) return 0;

	for (int i = 1; i <= n; i++) {
		push(&myQueue, i);
	}

	ptr += sprintf(ptr, "<");

	while (!empty(&myQueue)) {
		for (int i = 0; i < k - 1; i++) {
			push(&myQueue, pop(&myQueue));
		}
		
		int val = pop(&myQueue);
		if (empty(&myQueue)) {
			ptr += sprintf(ptr, "%d", val);
		}
		else {
			ptr += sprintf(ptr, "%d, ", val);
		}
	}

	ptr += sprintf(ptr, ">\n");

	fwrite(output_buffer, 1, ptr - output_buffer, stdout);

	return 0;
}