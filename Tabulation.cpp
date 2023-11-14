// Tabulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string file("SenCand.csv");
    FileReader* reader = new FileReader();
    reader->ReadCandFile(file);
}

