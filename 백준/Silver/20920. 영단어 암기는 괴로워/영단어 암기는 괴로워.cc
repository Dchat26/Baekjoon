#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[11];
    int count;
    int len;
} WordInfo;

int compare_raw(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

int compare_final(const void* a, const void* b) {
    WordInfo* w1 = (WordInfo*)a;
    WordInfo* w2 = (WordInfo*)b;

    if (w1->count != w2->count) return w2->count - w1->count;

    if (w1->len != w2->len) return w2->len - w1->len;

    return strcmp(w1->word, w2->word);
}

int main() {
    int n = 0, m = 0;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    char** temp_list = (char**)malloc(sizeof(char*) * n);
    if (temp_list == NULL) return -1;

    int valid_count = 0;
    for (int i = 0; i < n; i++) {
        char buf[11];
        if (scanf("%s", buf) != 1) break;

        int length = strlen(buf);
        if (length >= m) {
            temp_list[valid_count] = (char*)malloc(length + 1);
            if (temp_list[valid_count] == NULL) break;

            strcpy(temp_list[valid_count], buf);
            valid_count++;
        }
    }

    qsort(temp_list, valid_count, sizeof(char*), compare_raw);

    WordInfo* final_list = (WordInfo*)malloc(sizeof(WordInfo) * valid_count);
    if (final_list == NULL) {
        free(temp_list);
        return -1;
    }

    int unique_count = 0;
    for (int i = 0; i < valid_count; i++) {
        if (i > 0 && strcmp(temp_list[i], temp_list[i - 1]) == 0) {
            final_list[unique_count - 1].count++;
        }
        else {
            strcpy(final_list[unique_count].word, temp_list[i]);
            final_list[unique_count].count = 1;
            final_list[unique_count].len = strlen(temp_list[i]);
            unique_count++;
        }
    }

    qsort(final_list, unique_count, sizeof(WordInfo), compare_final);

    for (int i = 0; i < unique_count; i++) {
        printf("%s\n", final_list[i].word);
    }

    for (int i = 0; i < valid_count; i++) free(temp_list[i]);
    free(temp_list);
    free(final_list);

    return 0;
}