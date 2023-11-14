#pragma once
#include "Ballot.h"


struct BallotNode
{
	BallotNode();
	~BallotNode();


	Ballot ballot;
	BallotNode* next;
	BallotNode* prev;

	friend class BallotLinkedList;
};


