#pragma once
#include <iostream>
#include <vector>
using namespace std;

class FoodItem
{
private:
	int item_ID;
	string name;
	float price;
	bool is_vegetarian;

public:
	void updatePrice(int newPrice);

};

