#include "Ballot.h"


bool Ballot::Equals(Ballot ballot)
{
	return (ballot.GetBallotID() == BallotID);
}
