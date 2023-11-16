#pragma once


#include <iostream>
#include<string>
#include "BallotLinkedList.h"

using namespace std;

class Candidate {

public:
		Candidate();
		Candidate(Candidate& candidate);
		Candidate(string first, string last, double ID, double votes);
		double GetCandidateID();
		double GetTotalVotes();
		string GetFName();
		string GetLName();
		bool Equals(Candidate candidate);
		void Print();
		void CheckForDuplicates(BallotLinkedList BallotList);
		void CountVotes();
		BallotLinkedList GetBallotList();
		void AddBallot(Ballot ballot);
		void RemoveBallot(Ballot ballot);

		string FName;
		string LName;
		double CandidateID;
		double TotalVotes;
		BallotLinkedList BallotList;
		// BallotLinkedList CandBallotList;

};
