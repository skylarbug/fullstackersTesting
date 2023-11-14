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
    ifstream fin; //create the stream object

    fin.open("SenCand.csv");///currently only testing candidate
    string str;
    string fname, lname, id;
    if (fin.is_open())
    {
        while (fin.good())//or for
        {
            //create cand obj's here
        }

        fin.close();

    }

    else cout << "Unable to open file.\n";
    cout << "debug";
}

