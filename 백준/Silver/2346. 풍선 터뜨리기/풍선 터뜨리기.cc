#include <stdio.h>
#include <stdlib.h>
#include <string>

#define MAX_SIZE 2000
#define BUFFER_SIZE 10000

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
	init(&myDeque);

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* nlist = (int*)malloc((n + 1) * sizeof(int));
	if (nlist == NULL) return -1;

	for (int i = 1; i <= n; i++) if (scanf("%d", &nlist[i]) != 1) break;
	
	for (int i = 2; i <= n; i++) push(&myDeque, i);
	
	ptr += sprintf(ptr, "1 ");

	int a = nlist[1];
	while (!empty(&myDeque)) {
		if (a > 0) {
			for (int i = 0; i < a - 1; i++) {
				push(&myDeque, popleft(&myDeque));
			}
		}
		else {
			int move = -a;
			for (int i = 0; i < move; i++) {
				pushleft(&myDeque, pop(&myDeque));
			}
		}

		int l = popleft(&myDeque);
		a = nlist[l];

		if (empty(&myDeque)) ptr += sprintf(ptr, "%d", l);
		else ptr += sprintf(ptr, "%d ", l);
	}

	fwrite(output_buffer, 1, ptr - output_buffer, stdout);

	free(nlist);
	return 0;
}