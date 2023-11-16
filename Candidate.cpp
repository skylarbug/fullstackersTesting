#include "Candidate.h";
using namespace std;

Candidate::Candidate() {
	CandidateID = -1;
	FName = "";
	LName ="";
	TotalVotes = 0;
	BallotList = BallotLinkedList();
};

Candidate::Candidate(Candidate& candidate) {
	CandidateID = candidate.GetCandidateID();
	FName = candidate.GetFName();
	LName = candidate.GetLName();
	TotalVotes = candidate.GetTotalVotes();
	BallotList = candidate.GetBallotList();
};

Candidate::Candidate(string first, string last, double ID, double votes) {
	CandidateID = ID;
	FName = first;
	LName = last;
	TotalVotes = votes;
	BallotList = BallotLinkedList();
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
	return (candidate.GetCandidateID() == CandidateID);
};

void Candidate::Print() {
	cout << "----------------" << endl;
	cout << "Candidate " << CandidateID << ": " << std::endl;
	cout << "First Name: " << FName << std::endl;
	cout << "Last Name: " << LName << std::endl;
	cout << "----------------" << endl;
	//perhaps add statements to display other information, like district
};

void Candidate::CheckForDuplicates(BallotLinkedList BallotList) {
	//under construction
};

void Candidate::CountVotes() {
	double i = 0;
	BallotLinkedList list = BallotList.Copy();
	while(!list.Empty()) {
		list.RemoveFront();
		i++;
	}
	TotalVotes = i;
};

void Candidate::AddBallot(Ballot ballot) {
	
		BallotList.AddItemToFront(ballot);
};

void Candidate::RemoveBallot(Ballot ballot) {
	BallotList.RemoveItem(ballot);
};

BallotLinkedList Candidate::GetBallotList() {
	return BallotList;
	//currently, I do not know the identifier that I need to use for lists, so I use "list" in its place.
	//I will go back through later and fix it

}
