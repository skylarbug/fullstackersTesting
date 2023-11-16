#include "Candidate.h";
using namespace std;

Candidate::Candidate() {
	
};

Candidate::Candidate(Candidate& candidate) {
	CandidateID = candidate.GetCandidateID();
	FName = candidate.GetFName();
	LName = candidate.GetLName();
	TotalVotes = candidate.GetTotalVotes();
	BallotList = candidate.GetBallotList();
};

Candidate::Candidate(string first, string last, double ID, double votes, list ballot) {
	CandidateID = ID;
	FName = first;
	LName = last;
	TotalVotes = votes;
	BallotList = ballot;
};

double Candidate::GetCandidateID() {
	return CandidateID;
};

double Candidate::GetTotalVotes() {
	return TotalVotes;
};

string Candidate::GetFName() {
	return FName;
};

string Candidate::GetLName() {
	return LName;
};

bool Candidate::Equals(Candidate candidate)
{
	if (candidate.GetCandidateID() == CandidateID)
};

void Candidate::PrintCandidate() {
	cout << "Candidate " << CandidateID << ": " << std::endl;
	cout << "First Name: " << FName << std::endl;
	cout << "Last Name: " << LName << std::endl;
	//perhaps add statements to display other information, like district
};

void Candidate::CheckForDuplicates(linkedlist BallotList) {
	//under construction
};

int Candidate::CountVotes() {
	int total = 0;
	//perhaps add way to dynamically change number of counting variables so that it can be more flexible
	//will be kept simple for now


	//add for loop that goes through array and counts votes
	//add if statement within loop that checks the candidate ID of the vote (I.E. who the vote is for)
	//and increases the respective total

	return total;
};

void Candidate::AddBallot() {
	//under construction
};

void Candidate::RemoveBallot() {
	//under construction
};

list Candidate::GetBallotList() {
	return BallotList;
	//currently, I do not know the identifier that I need to use for lists, so I use "list" in its place.
	//I will go back through later and fix it

}
