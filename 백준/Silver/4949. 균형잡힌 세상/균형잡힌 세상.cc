#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

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

char back(Stack* s) {
	if (s->top == -1) return '\0';
	return s->data[(s->top)];
}

int main(void) {
	char s[102];

	int capacity = 5;
	int count = 0;

	const char** result = (const char**)malloc(capacity * sizeof(char*));
	if (result == NULL) return 1;

	while (1) {
		if (fgets(s, sizeof(s), stdin) == NULL) break;

		if (s[0] == '.' && (s[1] == '\n' || s[1] == '\0')) break;

		init(&myStack);

		bool is_TF = true;
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == '(' || s[i] == '[') {
				push(&myStack, s[i]);
			}
			else if (s[i] == ')') {
				if (!is_empty(&myStack) && back(&myStack) == '(') {
					pop(&myStack);
				}
				else {
					is_TF = false;
					break;
				}
			}
			else if (s[i] == ']') {
				if (!is_empty(&myStack) && back(&myStack) == '[') {
					pop(&myStack);
				}
				else {
					is_TF = false;
					break;
				}
			}
		}

		if (count == capacity) {
			capacity *= 2;
			const char** temp = (const char**)realloc(result, capacity * sizeof(char*));
			if (temp == NULL) {
				free(result);
				return 1;
			}
			result = temp;
		}

		if (is_TF && is_empty(&myStack)) {
			result[count++] = "yes";
		}
		else {
			result[count++] = "no";
		}
	}

	for (int i = 0; i < count; i++) {
		printf("%s\n", result[i]);
	}

	free(result);
	return 0;
}