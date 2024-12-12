#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Product
{
private:
	int product_ID;
	string name;
	float price;
	int quantity;
public:
	void updateStock(int change);
	void applyDiscount(int percentage);

};

