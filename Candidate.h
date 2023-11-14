#pragma once
#include "CandidateLinkedList.h"
#include "CandidateNode.h"
class Candidate
{
public:
	double CandidateID;

	Candidate();
	~Candidate();

	bool Equals(Candidate candidate);
	double GetCandidateID() { return CandidateID; }

};

