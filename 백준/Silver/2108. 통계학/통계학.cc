#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int count[8001] = { 0 };
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return -1;

    int* result = (int*)malloc(4 * sizeof(int));
    if (result == NULL) {
        free(arr);
        return -1;
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) break;
        sum += arr[i];
        count[arr[i] + 4000]++;
    }

    int avg = (int)round(sum / (double)n);
    result[0] = avg;

    qsort(arr, n, sizeof(int), compare);
    result[1] = arr[n / 2];

    int max_freq = 0;
    for (int i = 0; i < 8001; i++) {
        if (count[i] > max_freq) max_freq = count[i];
    }

    int mode = 0;
    int first = 0;
    for (int i = 0; i < 8001; i++) {
        if (count[i] == max_freq) {
            mode = i - 4000; 
            if (first == 1) break;
            first++;
        }
    }
    result[2] = mode;

    result[3] = arr[n - 1] - arr[0];

    for (int i = 0; i < 4; i++) {
        printf("%d\n", result[i]);
    }

    free(result);
    free(arr);
    return 0;
}