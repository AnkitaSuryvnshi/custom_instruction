#include <stdio.h>

// Simulate the custom instruction: Z = A + B - C
int custom_addsub(int A, int B, int C) {
    return A + B - C;
}

int main() {
    int A = 10, B = 5, C = 3;
    int Z = custom_addsub(A, B, C);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Z = A + B - C = %d\n", Z);

    return 0;
}
