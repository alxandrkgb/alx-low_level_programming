#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value) {
    size_t jump;
    size_t prev = 0;
    size_t i;

    if (array == NULL)
        return -1;

    jump = sqrt(size);

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    while (array[prev] < value && prev < size) {
        prev += jump;
        if (prev < size)
            printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

    for (i = prev - jump; i <= prev && i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
