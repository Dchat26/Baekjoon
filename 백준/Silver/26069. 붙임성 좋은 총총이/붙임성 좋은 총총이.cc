#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dancing_people[2001][21];
int dancing_count = 0;

int is_dancing(char* name) {
    for (int i = 0; i < dancing_count; i++) {
        if (strcmp(dancing_people[i], name) == 0) return 1;
    }
    return 0;
}

void add_dancer(char* name) {
    if (!is_dancing(name)) {
        strcpy(dancing_people[dancing_count++], name);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    strcpy(dancing_people[dancing_count++], "ChongChong");

    char p1[21], p2[21];
    for (int i = 0; i < n; i++) {
        if (scanf("%s %s", p1, p2) != 2) break;
        
        if (is_dancing(p1) || is_dancing(p2)) {
            add_dancer(p1);
            add_dancer(p2);
        }
    }

    printf("%d\n", dancing_count);

    return 0;
}