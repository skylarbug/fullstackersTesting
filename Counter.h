//Counter.h file

#pragma once
#include<iostream>
#include<string>
#include "CandidateLinkedList.h"
#include "BallotLinkedList.h"

using namespace std;

class Counter {

public:
	
	CandidateLinkedList SenCandidateList;
	CandidateLinkedList GovCandidateList;
	CandidateLinkedList PresCandidateList;
	BallotLinkedList BallotList;

	//array of the ballots in the election
	BallotLinkedList GetBallotArray();

	//array of each candidate type in the election
	CandidateLinkedList GetSenCandidateArray();
	CandidateLinkedList GetGovCandidateArray();
	CandidateLinkedList GetPresCandidateArray();

	//prints the 3 types of candidates
	void PrintSenatorCandidate();
	void PrintGovernorCandidate();
	void PrintPresidentCandidate();
	//NullCandidate = new Candidate(null); //also put into linked list

	//method to find the candidate on the ballot
	void FindBallotCandidate();

	//assign that voted ballot to the candidate once candidate is found
	void AssignBallotToCandidate(double CandidateID, Ballot ballot, string CandidateType);

	//overall print function / prints candidate information and their votes
	void PresidentPrint();
	void SenatorPrint();
	void GovernorPrint();

};


