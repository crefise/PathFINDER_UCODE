#include "libmx.h"
bool mx_isupper(int c) { 
    for (int i = 65; i <= 90; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
