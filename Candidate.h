#pragma once


#include <iostream>
#include<string>

using namespace std;

class Candidate {

	public
		Candidate();
		Candidate(Candidate& candidate)
		double GetCandidateID();
		double GetTotalVotes();
		string GetFName();
		string GetLName();
		bool Equals(Candidate candidate);
		void PrintCandidate(string first, string last, double ID);
		void CheckForDuplicates(linkedlist BallotList);
		int CountVotes();
		list GetBallotList();
		void AddBallot();
		void RemoveBallot();

		string FName;
		string LName;
		double CandidateID;
		double TotalVotes;
		list BallotList;
		// BallotLinkedList CandBallotList;

};