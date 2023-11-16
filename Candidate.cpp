#include "Candidate.h";
using namespace std;

Candidate::Candidate() {
	CandidateId = -1;
	FName = "";
	LName ="";
	TotalVotes = 0;
	BallotList = NULL;
};

Candidate::Candidate(Candidate& candidate) {
	CandidateID = candidate.GetCandidateID();
	FName = candidate.GetFName();
	LName = candidate.GetLName();
	TotalVotes = candidate.GetTotalVotes();
	BallotList = candidate.GetBallotList();
};

Candidate::Candidate(string first, string last, double ID, double votes, list ballotList) {
	CandidateID = ID;
	FName = first;
	LName = last;
	TotalVotes = votes;
	BallotList = ballotList;
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
	return (candidate.GetCandidateID() == CandidateID)
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

void Candidate::CountVotes() {
	double i = 0;
	BallotLinkedList list = BallotList.copy();
	while(!list.Empty()) {
		list.RemoveFront();
		i++;
	}
	TotalVotes = i;
};

void Candidate::AddBallot(double CandidateID, Ballot ballot, string CandidateType) {
	if (type == "Gov")  {
		Candidate candidate = GovCandidateList.FindCandidate(CandidateID);
		BallotList.AddItemToFront(ballot);
	}
	else if (type == "Sen")  {
		Candidate candidate = SenCandidateList.FindCandidate(CandidateID);
		BallotList.AddItemToFront(ballot);
	}
	 else if (type == "Pres")  {
		Candidate candidate = PresCandidateList.FindCandidate(CandidateID);
		BallotList.AddItemToFront(ballot);
	}
};

void Candidate::RemoveBallot() {
	BallotList.RemoveFront();
};

list Candidate::GetBallotList() {
	return BallotList;
	//currently, I do not know the identifier that I need to use for lists, so I use "list" in its place.
	//I will go back through later and fix it

}
