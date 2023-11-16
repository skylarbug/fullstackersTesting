// Tabulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// version 0.0.04

#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string Version = "0.0.0.4";

int main()
{
	FileReader reader = FileReader();
	reader.ReadCandFile("SenCand.csv");
	Candidate cadnidate1 = Candidate();
}

