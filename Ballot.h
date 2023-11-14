#pragma once
class Ballot
{
public:
	double BallotID;

	Ballot();
	~Ballot();

	bool Equals(Ballot ballot);
	double GetBallotID() { return BallotID; }

};

