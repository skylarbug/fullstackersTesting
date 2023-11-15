#pragma once
class Ballot
{
public:
	double BallotID;
	double DistrictID;
	double GovernorVote;
	double SenatorVote;
	double PresidentialVote;
	bool FilledIn;

	Ballot();
	Ballot(double BallotID1, double DistrictID1, double GovernorVote1, double SenatorVote1, double PresidentialVote1, bool FilledIn1);
	~Ballot();

	bool Equals(Ballot ballot);
	double GetBallotID() { return BallotID; } // Fetches the BallotId
	double GetDistict() { return DistrictID; }
	double GetGovVoteCandidate() { return GovernorVote; }
	double GetSenVoteCandidate() { return SenatorVote; }
	double GetPresVoteCandidate() { return PresidentialVote; }
	bool VerifyFilledIn() { return FilledIn; }
	void Print();




};


