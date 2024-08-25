#include <iostream>
#include "arg.hpp"
#include <unistd.h>

using namespace std;

const char *PATH = "--root";

namespace Arg {
    int i = 30;

    void parse(const int argc, const char **argv) {
        for (int i = 0; i < argc; i++) {
            cout << "arg[" << i << "]: " << argv[i] << endl;
        }
    }
}
