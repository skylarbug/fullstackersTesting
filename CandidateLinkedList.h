#pragma once

#include <iostream>
#include "CandidateNode.h"

class CandidateLinkedList
{
public:
	CandidateLinkedList();
	~CandidateLinkedList();

	void AddItemToFront(Candidate& candidate);
	void RemoveFront();
	void RemoveItem(Candidate& candidate);

	Candidate FindCandidate(double candidateID);



	
	bool Empty();


private: 
	CandidateNode* head;
	CandidateNode* tail;
};

