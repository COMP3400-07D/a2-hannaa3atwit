#include <stddef.h> // For NULL

/**
 * fills a string with a given character
 * uses up to dest_cap - 1 spots for the character
 * then ends the string with '\0'
 * does nothing if dest is NULL or dest_cap <= 0
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) return;

    int fill = dest_cap - 1;
    for (int i = 0; i < fill; ++i) {
        dest[i] = c;
    }
    dest[fill] = '\0';
}
