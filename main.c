#include <stdio.h>

int custom_muladd(int A, int B, int C, int D) {
    return (A + B) * (C - D);
}

int main() {
    int A = 5, B = 3, C = 10, D = 4;
    int Z = custom_muladd(A, B, C, D);
    printf("A = %d, B = %d, C = %d, D = %d\\n", A, B, C, D);
    printf("Z = (A + B) * (C - D) = %d\\n", Z);
    return 0;
}
