#include <stddef.h> // For NULL

/**
 * fills array with increasing numbers from begin to end
 * stops when either the end value is reached or the array is full
 * Returns the number of elements actually filled
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0) {
        return 0; // no elements filled
    }

    int count = 0;
    for (int i = begin; i <= end && count < array_len; i++) {
        array[count++] = i;
    }

    return count; // number of elements filled
}
