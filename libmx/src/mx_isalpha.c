#include "libmx.h"

bool mx_isalpha(int c) {
    for (int i = 65; i <= 90; i++) {
        if (c == i) {
            return true;
        }
    }
    for (int i = 97; i <= 122; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
