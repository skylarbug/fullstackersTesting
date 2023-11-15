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
	Candidate ReturnFrontItem();

	void RemoveItem(Candidate& candidate);


	Candidate FindCandidate(double candidateID);



	
	bool Empty();


private: 
	CandidateNode* head;
	CandidateNode* tail;
};

