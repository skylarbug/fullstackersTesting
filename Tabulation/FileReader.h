#ifndef FILEREADER_H
#define FILEREADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class FileReader
{
public:
	FileReader();
	~FileReader();
	void ReadCandFile(string fileName);
	void ReadBallotFile(string FileName);
};
#endif
