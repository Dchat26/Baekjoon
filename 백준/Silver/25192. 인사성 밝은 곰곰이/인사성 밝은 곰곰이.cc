#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char** names = (char**)malloc(sizeof(char*) * n);
    if (names == NULL) return -1;

    int name_count = 0;
    int total_gomgom = 0;
    char input[21];
    for (int i = 0; i < n; i++) {
        if (!(scanf("%s", input))) break;

        if (strcmp(input, "ENTER") == 0) {
            if (name_count > 0) {
                qsort(names, name_count, sizeof(char*), compare);

                total_gomgom++;
                for (int j = 1; j < name_count; j++) {
                    if (strcmp(names[j], names[j - 1]) != 0) {
                        total_gomgom++;
                    }
                }

                for (int j = 0; j < name_count; j++) free(names[j]);
                name_count = 0;
            }
        }
        else {
            names[name_count] = (char*)malloc(strlen(input) + 1);
            if (names[name_count] == NULL) break;

            strcpy(names[name_count], input);
            name_count++;
        }
    }

    if (name_count > 0) {
        qsort(names, name_count, sizeof(char*), compare);
        total_gomgom++;
        for (int j = 1; j < name_count; j++) {
            if (strcmp(names[j], names[j - 1]) != 0) {
                total_gomgom++;
            }
        }

        for (int j = 0; j < name_count; j++) free(names[j]);
    }

    printf("%d\n", total_gomgom);

    free(names);
    return 0;
}