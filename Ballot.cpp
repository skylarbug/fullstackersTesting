#include "Ballot.h"

Ballot::Ballot() {
	FilledIn = false;
	BallotId,DistrictID,GovernorVote,SenatorVote,PresidentialVote = -1;

}
Ballot::~Ballot() {

}
Ballot::Ballot(double BallotID1, double DistrictID1, double GovernorVote1, double SenatorVote1, double PresidentialVote1, bool FilledIn1) {
	BallotID = BallotID1;
	DistrictID = DistrictID1;
	GovernorVote = GovernorVote1;
	SenatorVote = SenatorVote1;
	PresidentialVote = PresidentialVote1;
	FilledIn = FilledIn1;
}
Ballot::Ballot(Ballot& ballot)
{
	BallotID = ballot.GetBallotID();
	DistrictID = ballot.GetDistict();
	GovernorVote = ballot.GetGovVoteCandidate();
	SenatorVote = ballot.GetSenVoteCandidate();
	PresidentialVote = ballot.GetPresVoteCandidate();
	FilledIn = ballot.VerifyFilledIn();
}

bool Ballot::Equals(Ballot ballot)
{
	return (ballot.GetBallotID() == BallotID);
}

double Ballot::GetBallotID() {

	return BallotID;
}

double Ballot::GetDistict() {
	
	return DistrictID;
}

double Ballot::GetGovVoteCandidate() {
	return GovernorVote;
}

double Ballot::GetSenVoteCandidate() {
	return SenatorVote;
}

double Ballot::GetPresVoteCandidate() {
	return PresidentialVote;
}

bool Ballot::VerifyFilledIn() {
	return FilledIn;
}

void Ballot::Print() {
	cout << "BallotID: " << BallotID << endl;
	cout << "DistrictID: " << DistrictID << endl;
	cout << "Governor Vote: " << GovernorVote << endl;
	cout << "Senator Vote: " << SenatorVote << endl;
	cout << "Presidential Vote: " << PresidentialVote << endl;
	cout << "Ballot Filled In: " << FilledIn;
}