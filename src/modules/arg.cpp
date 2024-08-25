#include <iostream>
#include "arg.h"
#include <unistd.h>
#include <boost/program_options.hpp>

using namespace std;

//namespace po = boost::program_options;

const char *PATH = "--root";

namespace ArgTool {
    int parse(int argc, char **argv) {
        for (int i = 0; i < argc; i++) {
            cout << "arg[" << i << "]: " << argv[i] << endl;
        }

//        // Declare the supported options.
//        po::options_description desc("Allowed options");
//        desc.add_options()
//                ("help", "produce help message")
//                ("compression", po::value<int>(), "set compression level");
//
//        po::variables_map vm;
//        po::store(po::parse_command_line(argc, argv, desc), vm);
//        po::notify(vm);
//
//        if (vm.count("help")) {
//            cout << desc << "\n";
//            return 1;
//        }
//
//        if (vm.count("compression")) {
//            cout << "Compression level was set to "
//                 << vm["compression"].as<int>() << ".\n";
//        } else {
//            cout << "Compression level was not set.\n";
//        }

        return 0;
    }
}
