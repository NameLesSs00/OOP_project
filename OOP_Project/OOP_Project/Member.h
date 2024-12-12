#pragma once
#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

class Member:public Person
{
	string membership_level; //must be bronze , silver , gold diamond only!
	int rewardsPoints;
	void redeemRewards(); // will give the member some rewards idk yet
	void upgradeMembership();
};

