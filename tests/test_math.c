#include <stdio.h>
#include <stdlib.h>
#include "../src/math.h"

int main() {
    printf("Running tests...\n");

    if (add(2, 2) == 4) {
        printf("[PASS] add(2, 2) == 4\n");
    } else {
        printf("[FAIL] add(2, 2) should be 4\n");
        return 1;
    }

    if (add(-1, 1) == 0) {
        printf("[PASS] add(-1, 1) == 0\n");
    } else {
        printf("[FAIL] add(-1, 1) should be 0\n");
        return 1;
    }

    if (subtract(5, 3) == 2) {
        printf("[PASS] subtract(5, 3) == 2\n");
    } else {
        printf("[FAIL] subtract(5, 3) should be 2\n");
        return 1;
    }

    printf("\nALL TESTS PASSED SUCCESSFULLY!\n");
    return 0;
}
