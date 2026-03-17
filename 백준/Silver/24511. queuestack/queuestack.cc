#include <stdio.h>
#include <stdlib.h>
#include <string>

#define MAX_SIZE 400005
#define BUFFER_SIZE 1500000

char output_buffer[BUFFER_SIZE];
char* ptr = output_buffer;

typedef struct {
	int data[MAX_SIZE];
	int top;
	int bottom;
} Deque;

void init(Deque* s) {
	s->top = 0;
	s->bottom = 0;
}

void pushleft(Deque* s, int x) {
	if ((s->bottom - 1 + MAX_SIZE) % MAX_SIZE == s->top) return;
	s->data[s->bottom] = x;
	s->bottom = (s->bottom - 1 + MAX_SIZE) % MAX_SIZE;
}

void push(Deque* s, int x) {
	if ((s->top + 1) % MAX_SIZE == s->bottom) return;
	s->top = (s->top + 1) % MAX_SIZE;
	s->data[(s->top)] = x;
}

int popleft(Deque* s) {
	if (s->bottom == s->top) return -1;
	s->bottom = (s->bottom + 1) % MAX_SIZE;
	return s->data[s->bottom];
}

int pop(Deque* s) {
	if (s->bottom == s->top) return -1;
	int res = s->data[s->top];
	s->top = (s->top - 1 + MAX_SIZE) % MAX_SIZE;
	return res;
}

int size(Deque* s) {
	return (s->top - s->bottom + MAX_SIZE) % MAX_SIZE;
}

int empty(Deque* s) {
	return (s->bottom == s->top);
	
}

int front(Deque* s) {
	if (s->bottom == s->top) return -1;
	return s->data[(s->bottom + 1) % MAX_SIZE];
}

int back(Deque* s) {
	if (s->bottom == s->top) return -1;
	return s->data[(s->top)];
}

Deque myDeque;
int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* queuestack = (int*)malloc(n * sizeof(int));
	if (queuestack == NULL) return -1;
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &queuestack[i]) != 1) break;
	}

	int* nlist = (int*)malloc(n * sizeof(int));
	if (nlist == NULL) {
		free(queuestack);
		return -1;
	}
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) break;
	}

	init(&myDeque);

	for (int i = 0; i < n; i++) {
		if (queuestack[i] == 0) {
			push(&myDeque, nlist[i]);
		}
	}

	int m = 0;
	if (scanf("%d", &m) != 1) {
		free(nlist);
		free(queuestack);
		return 0;
	}
	for (int i = 0; i < m; i++) {
		int x = 0;
		if (scanf("%d", &x) != 1) break;

		pushleft(&myDeque, x);
		int result = pop(&myDeque);

		if (i == m - 1) ptr += sprintf(ptr, "%d", result);
		else ptr += sprintf(ptr, "%d ", result);
	}

	fwrite(output_buffer, 1, ptr - output_buffer, stdout);

	free(nlist);
	free(queuestack);
	return 0;
}