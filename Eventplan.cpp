#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	string NameOfEvent, CustomerName;
	double NumberOfGuests;
	int NumberOfMinutes;


cout <<"\t\t\t<=============================  C o d e S h o w   L a p Z  ========================>\n\n\t\t\t<============================= E V E N T   P L A N N E R S ========================>\n\n\t\t\t<=============================  W   E   L   C   O   M   E  ========================>\n\n";


cout << "\n\n\n\t\t\t\t\t\t   |   Enter The Name Of The Event   | " << endl;
getline(cin, NameOfEvent);

cout << "\n\t\t\t\t\t\t   |   Enter The Customer's Name   | " << endl;
getline(cin,CustomerName);

cout << "\n\t\t\t\t\t\t   |   Enter The Number Of Guests   | " << endl;
cin >> NumberOfGuests;

cout << "\n\n\n\t\t\t\t\t\t    |   Enter The Hours In Event   | " << endl;
cin >> NumberOfMinutes;

cout << " \n\n\n\t\t\t\t\t\t   |   Nights Events ===>   |     " << endl;
cout << " \n\t\t\t\t\t\t   |   Event Estimate ===>   |  " << CustomerName << endl;


int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 2000;
const double CostPerMinute = 100;
const double CostOfEvent = 150;


Test = NumberOfGuests / 20;
NumberOfServers = ceil(Test);

//Get Cost Of One Server
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;


//Get Total Cost For Event
TotalCost = NumberOfGuests * CostOfEvent;


//Get Average Cost Per Person
AverageCost = TotalCost / NumberOfGuests; 


//Get Total Cost
TotalCost = TotalCost + (CostForOneServer * NumberOfServers);


//Get Deposit Amount (50%)
DepositAmount = TotalCost * .50;


//Print The Values
cout << " \n\n\n\t\t\t\t\t\t   |   Number Of Server: " << NumberOfServers << fixed << setprecision(2) << endl;
cout << " \n\t\t\t\t\t\t   |   The Cost for Servers: " << setw(5) << CostForOneServer << endl;
cout << " \n\t\t\t\t\t\t   |   The Cost for event is: " << setw(5) << TotalCost << endl;
cout << " \n\t\t\t\t\t\t   |   Avergae Cost Per Person: " << setw(5) << AverageCost << endl;
cout << " \n\n\n\t\t\t\t\t\t   |   Total cost is: " << setw(5) << TotalCost << endl;


cout << " \n\n\n\t\t\t   <==========   Please Deposite The 50% Deposit To Reserve The Event   =========>" << endl;
cout << " \n\t\t\t   <==========   The Deposit Needed Is: ==========>" << setw(5) << DepositAmount << endl;


return 0;
}


