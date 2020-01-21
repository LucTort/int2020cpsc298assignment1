#include <iostream>

using namespace std;

    double inflationToMultiplier(double& inflation)
    {
        inflation = 0.01 * inflation + 1;
    }

int main()
{
    //Input variables
    double priceOfItem = 0;
    double numOfYears = 0;
    double rateOfInflation = 0;
    double inflatedPrice = 0;
    
    //Get Input
    cout << "Please enter cost of the item: ";
    cin >> priceOfItem;
    
    cout << "Please the number of years: ";
    cin >> numOfYears;
    
    cout << "Please enter the rate of inflation, as a percent (eg 5.6): ";
    cin >> rateOfInflation;
    
    rateOfInflation = inflationToMultiplier(rateOfInflation);
    
    inflatedPrice = priceOfItem;
    
    //Calculate 
    for (int i = 0; i < numOfYears; ++i)
    {
        inflatedPrice *= rateOfInflation;
    }
    
    cout << "The price is " << inflatedPrice << " after " << numOfYears << " years." << endl;
    

    return 0;
}