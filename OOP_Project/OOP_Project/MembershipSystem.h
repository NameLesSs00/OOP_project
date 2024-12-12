#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
using namespace std;

class MembershipSystem
{
private:
	vector<Member>members;

public:
	void addMember(Member member);
	void removeMember(Member member);
};

