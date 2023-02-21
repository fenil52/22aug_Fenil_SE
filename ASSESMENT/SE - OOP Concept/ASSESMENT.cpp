#include <iostream>
#include <cmath>  // for ceil() function

using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;
const double DepositPercentage = 0.25;

int main() {
    // Get input from user
    string eventName, firstName, lastName;
    int numGuests, numMinutes;
    cout << "Enter event name: ";
    getline(cin, eventName);
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Enter number of guests: ";
    cin >> numGuests;
    cout << "Enter number of minutes: ";
    cin >> numMinutes;

    // Calculate number of servers needed
    int numServers = ceil(double(numGuests) / 20.0);

    // Calculate cost for one server
    double cost1 = (numMinutes / 60) * CostPerHour;
    double cost2 = (numMinutes % 60) * CostPerMinute;
    double costForOneServer = cost1 + cost2;

    // Calculate total food cost and average cost per person
    double totalFoodCost = numGuests * CostOfDinner;
    double averageCost = totalFoodCost / numGuests;

    // Calculate total cost and deposit amount
    double totalCost = totalFoodCost + (costForOneServer * numServers);
    double depositAmount = totalCost * DepositPercentage;

    // Display cost estimation
    cout << "\nEvent: " << eventName << endl;
    cout << "Host: " << firstName << " " << lastName << endl;
    cout << "Number of guests: " << numGuests << endl;
    cout << "Number of minutes: " << numMinutes << endl;
    cout << "Number of servers: " << numServers << endl;
    cout << "Cost for one server: $" << costForOneServer << endl;
    cout << "Total food cost: $" << totalFoodCost << endl;
    cout << "Average cost per person: $" << averageCost << endl;
    cout << "Total cost: $" << totalCost << endl;
    cout << "Deposit amount: $" << depositAmount << endl;

    return 0;
}