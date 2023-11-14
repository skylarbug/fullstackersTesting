#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;


FileReader::FileReader() {}
FileReader::~FileReader() {}

void FileReader::ReadCandFile(string fileName){

    ifstream fin("SenCand.csv");
    //fin.open("SenCand.csv", ios::in);
    if (fin.is_open()) {
        cout << fin.rdbuf() << "debug";
    }
    cout << "debug";
}

