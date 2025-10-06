#include <stddef.h> // For NULL

/**
 * Adds src2 to the end of src1
 * stops if there's no more space or src1_cap is reached
 * does nothing if inputs are NULL or src1_cap <= 0
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) return;

    int i = 0; // index for src1
    int j = 0; // index for src2

    while (i < src1_cap && src1[i] != '\0') {
        i++;
    }

    // copy src2 into src1 while leaving space for '\0'
    while (i < src1_cap - 1 && src2[j] != '\0') {
        src1[i++] = src2[j++];
    }

    // the null terminator
    if (i < src1_cap) {
        src1[i] = '\0';
    }
}
