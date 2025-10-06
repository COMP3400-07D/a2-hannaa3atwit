#include <stddef.h>   // NULL
#include <stdbool.h>  // bool, true/false
#include <ctype.h>    // islower, isupper, isdigit

bool valid_password(const char* s) {
    if (s == NULL) return false;

    int len = 0;
    int lowers = 0;
    int uppers = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        unsigned char c = (unsigned char)s[i];
        len++;

        if (islower(c)) {
            lowers++;
        } else if (isupper(c)) {
            uppers++;
        } else if (!isdigit(c)) {
            // for invalid
            return false;
        }
    }

    if (len < 6 || len > 10) return false;
    if (lowers < 2 || uppers < 2) return false;

    return true;
}
