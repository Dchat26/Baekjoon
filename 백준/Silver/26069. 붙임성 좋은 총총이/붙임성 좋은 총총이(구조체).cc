#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[21];
    int is_dancing;
} Person;

Person list[2001];
int person_count = 0;

int find_person(const char* name) {
    for (int i = 0; i < person_count; i++) {
        if (strcmp(list[i].name, name) == 0) return i;
    }
    return -1;
}

int add_person(const char* name) {
    int idx = find_person(name);
    if (idx == -1) {
        strcpy(list[person_count].name, name);
        list[person_count].is_dancing = 0; 
        return person_count++;
    }
    return idx;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int start_idx = add_person("ChongChong");
    list[start_idx].is_dancing = 1;

    char p1[21], p2[21];
    for (int i = 0; i < N; i++) {
        if (scanf("%s %s", p1, p2) != 2) break;

        int idx1 = add_person(p1);
        int idx2 = add_person(p2);

        if (list[idx1].is_dancing || list[idx2].is_dancing) {
            list[idx1].is_dancing = 1;
            list[idx2].is_dancing = 1;
        }
    }

    int total = 0;
    for (int i = 0; i < person_count; i++) {
        if (list[i].is_dancing == 1) total++;
    }

    printf("%d\n", total);

    return 0;
}
