// nlpc-emulatortake3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    std::ifstream input_file(argv[1], std::ios::binary);

    if (!input_file) {
        std::cerr << "Error: could not open file '" << argv[1] << "'\n";
        return 1;
    }

    // Read the contents of the file into a vector of bytes
    std::vector<char> bytes((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());

    // Print the contents of the vector (for testing purposes)
    for (auto byte : bytes) {
        std::cout << static_cast<int>(byte) << " ";
    }
    std::cout << "\n";

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
