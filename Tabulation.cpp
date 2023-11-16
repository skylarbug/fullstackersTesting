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
	FileReader reader = FileReader();
	reader.ReadCandFile("SenCand.csv");
}

