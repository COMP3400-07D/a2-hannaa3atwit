#include <stddef.h>  // For NULL
#include <stdlib.h>  // For malloc
#include <ctype.h>   // For toupper

/**
 * returns a new string with all lowercase letters in s converted to uppercase.
 * returns NULL if s is NULL.
 */
char* capitalize(const char* s) {
    if (s == NULL) return NULL;

    // find string length 
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    // allocate memory for new string
    char* result = malloc(sizeof(char) * (len + 1));
    if (result == NULL) return NULL;

    // copy and convert
    for (int i = 0; i < len; i++) {
        unsigned char c = (unsigned char)s[i];
        if (c >= 'a' && c <= 'z') {
            result[i] = toupper(c);
        } else {
            result[i] = c;
        }
    }

    // null terminate
    result[len] = '\0';
    return result;
}
