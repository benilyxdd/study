#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string a = "asdhjklasdjkl";
    string b = "dh";

    const char *c = a.c_str();
    const char *d = b.c_str();

    const auto it = strstr(c, d);
}