#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
    int R = 0, G = 0, B = 0;
    if (scanf("%d %d %d", &R, &G, &B) != 3) return 0;

    double r = R / 255.0;
    double g = G / 255.0;
    double b = B / 255.0;

    double max_val = MAX(r, MAX(g, b));
    double K = 1.0 - max_val;

    double C = 0, M = 0, Y = 0;

    if (K == 1.0) {
        C = 0.0;
        M = 0.0;
        Y = 0.0;
    }
    else {
        C = (1.0 - r - K) / (1.0 - K);
        M = (1.0 - g - K) / (1.0 - K);
        Y = (1.0 - b - K) / (1.0 - K);
    }

    printf("%f %f %f %f\n", C, M, Y, K);

    return 0;
}