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
		void getName(string name){this->name = name;}
		string setName(string name){
			if (name != " ")
				return name;
		}

		void getFoundationYear(int foundationYear){this->foundationYear = foundationYear;}
		int setFoundationYear(int foundationYear){
			if (foundationYear != 0000 || 0)
				return foundationYear;
		}

        void getValuation(int valuation){this->valuation = valuation;}
        int setValuation(int valuation){
            if (valuation != 0)
            	return valuation;
        }

		Business(string name, int foundationYear, int valuation);

		void printFullBusiness();
};

#endif
