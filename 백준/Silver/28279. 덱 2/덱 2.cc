#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1001000


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

	for (int i = 0; i < n; i++) {
		int s = 0;
		if (scanf("%d", &s) != 1) break;

		if (s == 1) {
			int nleft = 0;
			if (scanf("%d", &nleft) != 1) break;

			pushleft(&myDeque, nleft);
		}
		else if (s == 2) {
			int nright = 0;
			if (scanf("%d", &nright) != 1) break;

			push(&myDeque, nright);
		}
		else if (s == 3) {
			printf("%d\n", popleft(&myDeque));
		}
		else if (s == 4) {
			printf("%d\n", pop(&myDeque));
		}
		else if (s == 5) {
			printf("%d\n", size(&myDeque));
		}
		else if (s == 6) {
			printf("%d\n", empty(&myDeque));
		}
		else if (s == 7) {
			printf("%d\n", front(&myDeque));
		}
		else if (s == 8) {
			printf("%d\n", back(&myDeque));
		}
	}

	return 0;
}