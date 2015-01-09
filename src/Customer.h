#pragma once
#include "Matrix.h"
#include <vector>
#include <list>
#include "Table.h"

using namespace std;
class Customer
{
public:
	Customer(const Vector& data,double loglik);
	Customer(const Vector& data,double loglik,list<Table>::iterator table);
	Customer();
	Vector data;
	Customer& operator=(const Customer& c);
	~Customer(void);
	double loglik0;
	list<Table>::iterator table;

	friend ostream& operator<<(ostream& os, const Customer& c);
};

