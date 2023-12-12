#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return -1;

    while (left <= right) {
        size_t i;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = (left + right) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
