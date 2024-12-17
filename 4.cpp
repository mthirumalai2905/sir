#include <iostream>
#include <fstream>  
#include <string>   

using namespace std;

int main() {
    ofstream outputFile("example.txt");  

    if (!outputFile) {
        cout << "Error opening file for writing." << endl;
        return 1; 
    }

    outputFile << "Hello, this is a test file." << endl;
    outputFile << "This file contains some text data." << endl;

    outputFile.close();

    ifstream inputFile("example.txt");  

    if (!inputFile) {
        cout << "Error opening file for reading." << endl;
        return 1; 
    }

    string line;

    cout << "Reading from the file:" << endl;
    while (getline(inputFile, line)) {  
        cout << line << endl; 
    }

    inputFile.close();

    return 0;
}
