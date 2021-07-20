#include <iostream>
#include <filesystem>

using std::cout; 
using std::endl; 
using std::string;
using std::filesystem::directory_iterator;
using std::filesystem::is_directory;

int main() {
    string path = ".";

    for (const auto & file : directory_iterator(path)) {
        cout << file.path() << ":" << is_directory(file.path()) << endl;
    }

    return EXIT_SUCCESS;
}