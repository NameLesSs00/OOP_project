#pragma once
#include <iostream>
#include <vector>
#include"FoodItem.h"
using namespace std;

class FoodCourt
{
	vector<FoodItem>menu;
public:
	void addFoodItem(FoodItem foodItem);
	void placeOrder(int foodItemID, int quantity);
};

