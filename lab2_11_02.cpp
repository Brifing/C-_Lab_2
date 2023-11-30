#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename = "example.txt";
    ofstream outputFile(filename);
    outputFile << "Hello world 123!";
    outputFile.close();
    ifstream inputFile(filename);
    string value;
    getline(inputFile, value);
    inputFile.close();
    cout << "In file: " << value << endl;
    return 0;
}
