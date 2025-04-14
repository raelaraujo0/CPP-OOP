#ifndef BUSINESS_H
#define BUSINESS_H
#include <string>

using namespace std;

class Business
{
	private:
		string name;
		int foundationYear;
		float valuation;
        bool itsClosed;

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

        void getValuation(float valuation){this->valuation = valuation;}
        float setValuation(float valuation){
            if (valuation != 0)
            	return valuation;
        }

        void getItsClosed(bool itsClosed){this->itsClosed = itsClosed;}
        bool setItsClosed(bool itsClosed){
            return itsClosed;
        }
        
        void openCompany(bool istClosed){
            itsClosed = false;
        }

        void closeCompany(){
            itsClosed = true;
        }

		Business(string name, int foundationYear, float valuation, bool itsClosed);

		void printFullBusiness();
};

#endif
