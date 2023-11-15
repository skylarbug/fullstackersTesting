#pragma once

#include "BallotNode.h"

class BallotLinkedList
{
public:
	BallotLinkedList();
	~BallotLinkedList();

	void RemoveFront();
	void AddItemToFront(Ballot& ballot);
	Ballot ReturnFrontItem(); //Can be used to loop through list. Basically just look at the Front of ballot list then remove the front ballot until it returns NULL. This would delete the list so it is adviced to make a copy

	void RemoveItem(Ballot& ballot);

	Ballot FindBallot(double ballotID);




	bool Empty();


private:
	BallotNode* head;
	BallotNode* tail;
};

