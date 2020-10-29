#include "libmx.h"


bool mx_islower(int c) { 
    for (int i = 97; i <= 122; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
