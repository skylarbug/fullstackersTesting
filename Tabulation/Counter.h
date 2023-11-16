//Counter.h file

#pragma once
#include<iostream>
#include<string>
#include "CandidateLinkedList.h"
#include "BallotLinkedList.h"

using namespace std;

class Counter {

public:
	
	Counter();
	~Counter();

	CandidateLinkedList SenLinkedList;
	CandidateLinkedList GovLinkedList;
	CandidateLinkedList PresLinkedList;
	BallotLinkedList BallotList;

	//List of the ballots in the election
	BallotLinkedList GetBallotList();

	//List of each candidate type in the election
	CandidateLinkedList GetSenCandidateList();
	CandidateLinkedList GetGovCandidateList();
	CandidateLinkedList GetPresCandidateList();

	//prints the 3 types of candidates
	void PrintSenatorCandidate();
	void PrintGovernorCandidate();
	void PrintPresidentCandidate();
	//NullCandidate = new Candidate(null); //also put into linked list

	//method to find the candidate on the ballot
	void FindBallotCandidate();

	//assign that voted ballot to the candidate once candidate is found
	void AssignBallotToCandidate(double CandidateID, Ballot& ballot, string CandidateType);

	//overall print function / prints candidate information and their votes
	void PresidentPrint();
	void SenatorPrint();
	void GovernorPrint();

};


