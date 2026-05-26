#include <assert.h>
#include <stdio.h>
#include "../src/math.h"

int main() {
    assert(add(2, 2) == 4);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);

    printf("ALL TESTS PASSED\n");
    printf("%d\n", add(2, 3));
    return 0;
}