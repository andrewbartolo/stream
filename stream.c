#include <stdint.h>
#include <stdio.h>
#include <malloc.h>

#define ARR_BYTES (1UL << 32)
#define ARR_ELEMS (ARR_BYTES / sizeof(uint64_t))

int main(int argc, char *argv[]) {
    int64_t ctr;

    uint64_t *arr = malloc(ARR_BYTES);

    for (uint64_t i = 0; i < ARR_ELEMS; ++i) {
        ctr += arr[i];
    }

    printf("Sum of garbage data: %zu\n", ctr);

    return 0;
}
