#ifndef XRANGE_H
#define XRANGE_H
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class XRange{
	protected:
		vector<int> x;

	public:
		void setX(vector<int> range);
		int getX(int a);
};
#endif
