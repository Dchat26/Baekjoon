#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000000

int recursion(const char* s, int l, int r, int* count) {
    (*count)++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, count);
}

int isPalindrome(const char* s, int* count) {
    return recursion(s, 0, strlen(s) - 1, count);
}

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;
    if (1 > n || n > 1000) return 0;

    char* output_buffer = (char*)malloc(n * 25 * sizeof(char));
    if (output_buffer == NULL) return -1;

    char* ptr = output_buffer;

    while (n--) {
        char s[1001];
        if (scanf("%s", s) != 1) break;

        int count = 0;
        int result = isPalindrome(s, &count);

        ptr += sprintf(ptr, "%d %d\n", result, count);
    }

    fputs(output_buffer, stdout);

    free(output_buffer);
    return 0;
}