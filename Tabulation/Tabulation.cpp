// Tabulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// version 0.0.04

#include "FileReader.h"
#include "Candidate.h"
#include "CandidateLinkedList.h"
#include "CandidateNode.h"
#include "Ballot.h"
#include "BallotLinkedList.h"
#include "BallotNode.h"
#include "Counter.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string Version = "0.0.0.4";

int main()
{
	Counter counter = *(new Counter()); // initializes a counter


	FileReader reader = FileReader(); //initialize a FileReader obj
	cout << "Reading 'SenCand.csv':\n\n";
	reader.ReadCandFile("SenCand.csv");//for now, just prints the data from SenCand.csv.
	
	
	Candidate SenCandidate1 = *(new Candidate("Patricia","Perrera", double(14),double(0))); //Create a new Candidate obj
	cout << "\n\nPrinting SenCandidate1\n\n";
	SenCandidate1.Print();				//Print the candiate
	
	Candidate SenCand1Copy = *(new Candidate(SenCandidate1)); //Copy the candidate obj into a new candidate obj
	cout << "\n\nPrinting SenCand1Copy\n\n";
	SenCand1Copy.Print(); //print the copied candidate obj

	Ballot ballot1 = *(new Ballot(1, 3, 1, 1, 1, true)); //instantiate a  ballot
	
	cout << "\n\nPrinting ballot1\n\n";
	ballot1.Print();							//print the ballot
	Ballot ball_1Copy = *(new Ballot(ballot1));//copy the ballot into a new ballot obj
	cout << "\n\nPrinting ball1_Copy\n\n";
	ball_1Copy.Print();							//print the ballot

	Ballot ballot2 = *(new Ballot(1, 3, 1, 1, 1, true)); //instantiate a  ballot
	Ballot ballot3 = *(new Ballot(1, 3, 1, 1, 1, true)); //instantiate a  ballot
	Ballot ballot4 = *(new Ballot(1, 3, 1, 1, 1, true)); //instantiate a  ballot

	counter.SenLinkedList.AddItemToFront(SenCandidate1);		//adding our first candidate obj to the counter obj's SenLinkedList
	counter.SenLinkedList.AddItemToFront(SenCand1Copy);
	counter.BallotList.AddItemToFront(ballot1);		//Adding our first ballot object to the counter obj's BallotList
	counter.BallotList.AddItemToFront(ballot2);		//^^
	counter.BallotList.AddItemToFront(ballot3);		//^^
	counter.BallotList.AddItemToFront(ballot4);		//^^


	cout << "\n\nFront Item in counter.SenLinkedList:\n\n";
	counter.SenLinkedList.ReturnFrontItem().Print();	//print the first item in Counter Obj's SenLinkedList
	cout << "\n\nFront Item in counter.BallotList:\n\n";
	counter.BallotList.ReturnFrontItem().Print();
}

