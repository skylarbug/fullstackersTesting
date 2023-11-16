#pragma once

#include "Candidate.h"

struct CandidateNode
{
	//CandidateNode();
	//~CandidateNode();
	Candidate candidate;
	CandidateNode* next;
	CandidateNode* prev;

	friend class CandidateLinkedList;

	
};

