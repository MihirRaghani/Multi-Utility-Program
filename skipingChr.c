#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        printf("%c ", ch);
        ch += 4;  // Skip 3 characters (e.g., a, e, i, ...)
    } while (ch <= 'z');

    return 0;
}
