//Counter.cpp - implementing the Counter.h file

#include <iostream>
#include "Counter.h"
//#include "CandidateLinkedList.h"
//#include "BallotLinkedList.h"
//#include "Ballot.h"
//#include "Candidate.h"

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

        BallotLinkedList list = BallotList.Copy();
        while (!list.Empty()) 
        {

            Ballot ballot = BallotList.ReturnFrontItem();

            AssignBallotToCandidate(ballot.GetGovVoteCandidate(), ballot, "Gov");
            AssignBallotToCandidate(ballot.GetSenVoteCandidate(), ballot, "Sen");
            AssignBallotToCandidate(ballot.GetPresVoteCandidate(), ballot, "Pres");

            BallotList.RemoveFront();

        }
}

//assigning the ballots to the candidate // checks what the candidate type matches, if (ID) match Gov, assign ballot to Gov, etc
void Counter::AssignBallotToCandidate(double CandidateID, Ballot& ballot, string CandidateType) {

    Candidate candidate = *(new Candidate());

    if (CandidateType == "Gov") {

        Candidate candidate = GovCandidateList.FindCandidate(CandidateID);

        }
    else if (CandidateType == "Sen") {

        Candidate candidate = SenCandidateList.FindCandidate(CandidateID);

    }

    else if (CandidateType == "Pres") {

        Candidate candidate = PresCandidateList.FindCandidate(CandidateID);

    }

    candidate.AddBallot(ballot); //This might need to be ballot* or ballot&
            
}

//PRINT FUNCTIONS

//president print function
void Counter::PresidentPrint() {

    cout << "Printing President Information and Votes: " << endl;

    

    CandidateLinkedList list = PresCandidateList.Copy();

    while (!list.Empty()) {

        list.ReturnFrontItem().Print();

        //cout << "Candidate Name: " << candidate.GetCandidateName() << endl; //Needs to be split into FName and LName
        //cout << "Candidate ID: " << candidate.GetCandidateID() << endl;
        //cout << "Candidate Counted Votes: " << candidate.GetVotes() << endl;
        ////cout << "Candidate Total Votes: " << candidate.GetTotalCandidateVotes() << endl;

        list.RemoveFront();

    }
}

//senator print function
void Counter::SenatorPrint() {

    cout << "Printing Senator Information and Votes: " << endl;

    
    CandidateLinkedList list = SenCandidateList.Copy();

    while (!list.Empty()) {

        list.ReturnFrontItem().Print();

        list.RemoveFront();

    }
}

//governor print function
void Counter::GovernorPrint() {

    cout << "Printing Governor Information and Votes: " << endl;

    CandidateLinkedList list = GovCandidateList.Copy();

    while (!list.Empty()) {

        list.ReturnFrontItem().Print();

        list.RemoveFront();

    }
}