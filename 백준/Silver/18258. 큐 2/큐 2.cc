#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 2000005
#define BUFFER_SIZE 20000000

char output_buffer[BUFFER_SIZE];
char* ptr = output_buffer;

void add_to_buffer(int value) {
	ptr += sprintf(ptr, "%d\n", value);
}

void add_str_to_buffer(const char* str) {
	ptr += sprintf(ptr, "%s\n", str);
}

typedef struct {
	int data[MAX_SIZE];
	int top;
	int bottom;
} Stack;

void init(Stack* s) {
	s->top = 0;
	s->bottom = 0;
}

void push(Stack* s, int x) {
	if ((s->top + 1) % MAX_SIZE == s->bottom) return;
	s->top = (s->top + 1) % MAX_SIZE;
	s->data[(s->top)] = x;
}

int pop(Stack* s) {
	if (s->bottom == s->top) return -1;
	s->bottom = (s->bottom + 1) % MAX_SIZE;
	return s->data[(s->bottom)];
}

int size(Stack* s) {
	return (s->top - s->bottom + MAX_SIZE) % MAX_SIZE;
}

int empty(Stack* s) {
	if (s->bottom == s->top) return 1;
	return 0;
}

int front(Stack* s) {
	if (s->bottom == s->top) return -1;
	return s->data[(s->bottom + 1) % MAX_SIZE];
}

int back(Stack* s) {
	if (s->bottom == s->top) return -1;
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
			add_to_buffer(pop(&myStack));
		}
		else if (strcmp(s, "size") == 0) {
			add_to_buffer(size(&myStack));
		}
		else if (strcmp(s, "empty") == 0) {
			add_to_buffer(empty(&myStack));
		}
		else if (strcmp(s, "front") == 0) {
			add_to_buffer(front(&myStack));
		}
		else if (strcmp(s, "back") == 0) {
			add_to_buffer(back(&myStack));
		}
	}

	fwrite(output_buffer, 1, ptr - output_buffer, stdout);

	return 0;
}