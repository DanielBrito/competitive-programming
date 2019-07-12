#include <iostream>
#include "reverse_string.h"

using namespace std;

string reverse_string(string str) {

    reverse(str.begin(), str.end());

    return str;
}