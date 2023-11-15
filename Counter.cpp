//Counter.cpp - implementing the Counter.h file

#include <iostream>
#include "Counter.h"
#include "CandidateLinkedList.h"
#include "BallotLinkedList.h"
#include "Ballot.h"
#include "Candidate.h"

using namespace std;

//default constructor
Counter::Counter() {

    //ask Sky when she makes the reader classes
   
}

//GET METHODS

//gets array of the ballots
BallotLinkedList Counter::GetBallotArray() {

    return BallotList;

}

//gets array of the candidates
CandidateLinkedList Counter::GetSenCandidateArray() {

    return SenCandidateList;

}

CandidateLinkedList Counter::GetGovCandidateArray() {

    return GovCandidateList;

}

CandidateLinkedList Counter::GetPresCandidateArray() {

    return PresCandidateList;

}

//IMPLEMENTATION METHODS

//finding the ballot for that candidate
void Counter::FindBallotCandidate() {

        BallotLinkedList list = BallotList.copy();
        while (!BallotList.Empty()) 
        {

            Ballot ballot = BallotList.GetFrontItem();

            AssignBallotToCandidate(ballot.GetGovVote(), ballot, "Gov");
            AssignBallotToCandidate(ballot.GetSenVote(), ballot, "Sen");
            AssignBallotToCandidate(ballot.GetPresVote(), ballot, "Pres");

            BallotList.RemoveFront();

        }
}

//assigning the ballots to the candidate // checks what the candidate type matches, if (ID) match Gov, assign ballot to Gov, etc
void Counter::AssignBallotToCandidate(double CandidateID, Ballot ballot, string CandidateType) {

    if (CandidateType == "Gov") {

        Candidate candidate = GovCandidateList.FindCandidate(CandidateID);

        }
    else if (CandidateType == "Sen") {

        Candidate candidate = SenCandidateList.FindCandidate(CandidateID);

    }

    else if (CandidateType == "Pres") {

        Candidate candidate = PresCandidateList.FindCandidate(CandidateID);

    }

    Candidate.AddBallot(ballot); //This might need to be ballot* or ballot&
            
}

//PRINT FUNCTIONS

//president print function
void Counter::PresidentPrint() {

    cout << "Printing President Information and Votes: " << endl;

    Candidate candidate = PresCandidateList.GetFrontItem();

    while (!PresCandidateList.Empty()) {

        CandidateLinkedList list = PresCandidateList.copy();

        cout << "Candidate Name: " << candidate.GetCandidateName() << endl;
        cout << "Candidate ID: " << candidate.GetCandidateID() << endl;
        cout << "Candidate Counted Votes: " << candidate.GetCountedCandidateVotes() << endl;
        cout << "Candidate Total Votes: " << candidate.GetTotalCandidateVotes() << endl;

        list.RemoveFront();

    }
}

//senator print function
void Counter::SenatorPrint() {

    cout << "Printing Senator Information and Votes: " << endl;

    CandidateLinkedList list = SenCandidateList.GetFrontItem();

    while (!SenCandidateList.Empty()) {

        CandidateLinkedList list = SenCandidateList.copy();

        cout << "Candidate Name: " << candidate.GetCandidateName() << endl;
        cout << "Candidate ID: " << candidate.GetCandidateID() << endl;
        cout << "Candidate Counted Votes: " << candidate.GetCountedCandidateVotes() << endl;
        cout << "Candidate Total Votes: " << candidate.GetTotalCandidateVotes() << endl;

        list.RemoveFront();

    }
}

//governor print function
void Counter::GovernorPrint() {

    cout << "Printing Governor Information and Votes: " << endl;

    Candidate candidate = GovCandidateList.GetFrontItem();

    while (!GovCandidateList.Empty()) {

        CandidateLinkedList list = GovCandidateList.copy();

        cout << "Candidate Name: " << candidate.GetCandidateName() << endl;
        cout << "Candidate ID: " << candidate.GetCandidateID() << endl;
        cout << "Candidate Counted Votes: " << candidate.GetCountedCandidateVotes() << endl;
        cout << "Candidate Total Votes: " << candidate.GetTotalCandidateVotes() << endl;

        list.RemoveFront();

    }
}