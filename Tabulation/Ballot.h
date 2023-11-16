#pragma once
class Ballot
{
public:
	double BallotID; // Stores BallotID
	double DistrictID; // Stores DistrictID
	double GovernorVote; // Stores CandidateID
	double SenatorVote;// Stores CandidateID
	double PresidentialVote;// Stores CandidateID
	bool FilledIn; 

	Ballot();//Constructor
	Ballot(double BallotID1, double DistrictID1, double GovernorVote1, double SenatorVote1, double PresidentialVote1, bool FilledIn1);//Contrustctor
	Ballot(Ballot &ballot);//Constructor
	~Ballot();//Destructor

	bool Equals(Ballot ballot);
	double GetBallotID() { return BallotID; } // Fetches the BallotId
	double GetDistict() { return DistrictID; } // Fetches and returns DistrictID
	double GetGovVoteCandidate() { return GovernorVote; } //Fetches and returns CandidateID
	double GetSenVoteCandidate() { return SenatorVote; } //Fetches and returns CandidateID
	double GetPresVoteCandidate() { return PresidentialVote; } //Fetches and returns CandidateID
	bool VerifyFilledIn() { return FilledIn; } // Checks if ballot is filled in.
	void Print(); // Prints out Ballot Information




};


