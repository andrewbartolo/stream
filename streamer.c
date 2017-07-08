#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    uint64_t stop_at = strtol(argv[1], NULL, 10);

    uint64_t *nums = malloc(stop_at * sizeof(uint64_t));

    for (uint64_t i = 0; i < stop_at; ++i) {
        nums[i] = i;
    }

    for (uint64_t i = 0; i < stop_at; ++i) {
        printf("%zu\n", nums[i]);
    }

    return 0;
}
