#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
	char data[MAX_SIZE];
	int top;
} Stack;

Stack myStack;

void init(Stack* s) {
	s->top = -1;
}

void push(Stack* s, char x) {
	if (s->top >= MAX_SIZE - 1) return;
	s->data[++(s->top)] = x;
}

char pop(Stack* s) {
	if (s->top == -1) return '\0';
	return s->data[(s->top)--];
}

bool is_empty(Stack* s) {
	return (s->top == -1);
}

const char* check_vps(char* str) {
	init(&myStack);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			push(&myStack, '(');
		}
		else if (str[i] == ')') {
			if (is_empty(&myStack)) return "NO";
			pop(&myStack);
		}
	}
	return is_empty(&myStack) ? "YES" : "NO";
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	const char** result = (const char**)malloc(n * sizeof(const char*));
	if (result == NULL) return 1;

	for (int i = 0; i < n; i++) {
		char str[51];
		if (scanf("%s", str) != 1) {
			free(result);
			return 0;
		}

		result[i] = check_vps(str);
	}

	for (int i = 0; i < n; i++) {
		printf("%s\n", result[i]);
	}

	free(result);
	return 0;
}