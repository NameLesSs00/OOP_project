#pragma once
#include "StoreBase.h"
#include "Product.h"
#include <iostream>
#include <vector>
using namespace std;

class RetailStore: public StoreBase
{
private:
	vector<Product>inventory;
public:
	void addProduct(Product p);
	void sellProduct(int product_ID, int quantity);
	void generateSalesReport();
};

