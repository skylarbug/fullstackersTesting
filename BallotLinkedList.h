#pragma once

#include "BallotNode.h"

class BallotLinkedList
{
public:
	BallotLinkedList();
	~BallotLinkedList();

	void RemoveFront();
	void AddItemToFront(Ballot& ballot);
	
	void RemoveItem(Ballot& ballot);

	Ballot FindBallot(double ballotID);




	bool Empty();


private:
	BallotNode* head;
	BallotNode* tail;
};

