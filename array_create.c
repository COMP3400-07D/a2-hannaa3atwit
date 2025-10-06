#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * create an array of even numbers from begin to end.
 * return a pointer to the array or NULL if the range is invalid.
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) return NULL;

    // adjust to nearest even numbers
    if (begin % 2 != 0) begin++;
    if (end % 2 != 0) end--;

    if (begin > end) return NULL; // no evens in range

    // count how many even numbers
    int count = ((end - begin) / 2) + 1;

    int* arr = malloc(sizeof(int) * count);
    if (arr == NULL) return NULL;

    // fill array
    int val = begin;
    for (int i = 0; i < count; i++) {
        arr[i] = val;
        val += 2;
    }

    return arr;
}
