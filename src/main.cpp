#include <iostream>
#include <fstream>
#include <string>
#include "modules/arg.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "Hello, from 안녕하세요.!" << endl;
    cout << "argc: " << argc << endl;

    return ArgTool::parse(argc, argv);
}
