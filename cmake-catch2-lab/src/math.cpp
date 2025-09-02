#include "math_functions.h"
#include <cmath>

double compute_square_root(double number) {
    if (number < 0) {
        return -1; // Error value for negative numbers
    }
    return std::sqrt(number);
}
