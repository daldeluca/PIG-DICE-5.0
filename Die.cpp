#include "Die.h"
#include <cstdlib>
#include <ctime>
#include <bits/locale_classes.h>
using namespace std;

Die::Die() {
    srand(static_cast<unsigned int>(time(NULL)));
}
int Die::roll_die() {
    return rand() % 6 + 1;
}