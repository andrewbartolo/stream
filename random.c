#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    uint64_t stop_at = strtol(argv[1], NULL, 10);

    uint64_t *nums = calloc(stop_at, sizeof(uint64_t));

    for (uint64_t i = 0; i < stop_at; ++i) {
        uint64_t idx = rand() % stop_at;
        nums[idx] = i;
    }

    uint64_t sum = 0;
    for (uint64_t i = 0; i < stop_at; ++i) {
        uint64_t idx = rand() % stop_at;
        sum += nums[idx];
    }

    printf("Sum was %zu\n", sum);

    return 0;
}
