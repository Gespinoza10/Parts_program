/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

// Prompt User for Part Number
    int partNumber;      // Value between 0 to 999999
    cout<<"Please Enter The Part Number: ";
    cin>> partNumber;
    
// Prompt User for Quantity of the Part 
    int quantityParts;   // Value betweeen 0 to 999
    cout<<"Please Enter a Quanity for the Part: ";
    cin>>quantityParts;
    
// Prompt User for the Price of the Part 
    double partPrice;     // Value between 0.00 to 999999.99
    cout<<"Please Enter the Price for the Part: ";
    cin>>partPrice;
    
// Formatting the Final Output
    double totalAmount;   // Defining a variable to hold the Total Amout   
    totalAmount = (quantityParts * partPrice); // Calculating the Total Amount
   
   int setwFirst= 15, setwSecond=5, setwThird=11, setwFourth=12, precision=2; //Getting rid of magic numbers
   
    cout<<"  Part Number    Qty    Price       Total    "<<endl;
    cout<<"---------------  ---  ---------  ------------"<<endl;    
    cout<<left<<setw(setwFirst)<<partNumber;
    cout<<right<<setw(setwSecond)<<quantityParts;
    cout<<right<<setw(setwThird)<<partPrice<<"  ";
    cout<<right<<setfill('$')<<setw(setwFourth)<<fixed<<setprecision(precision)<<totalAmount;

    return 0;
}




