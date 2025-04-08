#ifndef BUSINESS_H
#define BUSINESS_H
#include <string>

using namespace std;

class Business
{
	private:
		string name;
		int foundationYear;
		int valuation;

	public:
		Business(string name, int foundationYear, int valuation);

		void printFullBusiness();
};

#endif
