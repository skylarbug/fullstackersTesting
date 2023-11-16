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
    ifstream fin; //create the stream object

    fin.open(fileName);///currently only testing Senators
    string str;
    vector<string> strVec(20);
    if (fin.is_open())
    {
        //while (fin.good())//or for
        //{
            for (int i = 0; i < strVec.size() - 1; i++) {
                getline(fin, strVec[i], ',');
            }
            for (int i = 0; i < strVec.size()-1; i++) {
                if (strVec[i] != "") {
                    cout << strVec[i] << "\n";
                }             //instead of printing, this will make candidate objects later.
            }
            strVec.clear();
        //}
        fin.close();

    }

    else { cout << "Unable to open file.\n"; }
}


void FileReader::ReadBallotFile(string fileName) {
    ifstream fin; //create the stream object

    fin.open(fileName);
    string str;
    vector<string> strVec(20);
    if (fin.is_open())
    {
        //implementation of create aballot objects from data

    }

    else { cout << "Unable to open file.\n"; }
}
