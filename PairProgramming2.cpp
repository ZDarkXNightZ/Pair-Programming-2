#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string movieName;
    double adultTicketPrice, childTicketPrice;
    int numAdultTicketsSold, numChildTicketsSold;
    double donationPercentage;
    double grossAmount, amountDonated, netSaleAmount;

    // Set the output format for floating-point numbers
    cout << fixed << setprecision(2);

    // Prompt the user to enter information
    cout << "Enter movie name: ";
    getline(cin, movieName);

    cout << "Enter the price of an adult ticket: ";
    cin >> adultTicketPrice;

    cout << "Enter the price of a child ticket: ";
    cin >> childTicketPrice;

    cout << "Enter number of adult tickets sold: ";
    cin >> numAdultTicketsSold;

    cout << "Enter number of child tickets sold: ";
    cin >> numChildTicketsSold;

    cout << "Enter the percentage of donation: ";
    cin >> donationPercentage;

    // Calculate the gross amount, amount donated, and net sale amount
    grossAmount = (adultTicketPrice * numAdultTicketsSold) + (childTicketPrice * numChildTicketsSold);
    amountDonated = (donationPercentage / 100.0) * grossAmount;
    netSaleAmount = grossAmount - amountDonated;

    // Output the results with proper formatting
    cout << left << setw(35) << "Movie Name:" << setw(5) << right << movieName << endl;
    cout << left << setw(35) << "Adult Tickets Sold:" << setw(5) << right << numAdultTicketsSold << endl;
    cout << left << setw(35) << "Child Tickets Sold:" << setw(5) << right << numChildTicketsSold << endl;
    cout << left << setw(35) << "Gross Amount:" << setfill(' ') << right << "$" << setw(8) << grossAmount << endl;
    cout << left << setw(35) << "Amount Donated:" << setfill(' ') << right << "$" << setw(8) << amountDonated << endl;
    cout << left << setw(35) << "Net Sale Amount:" << setfill(' ') << right << "$" << setw(8) << netSaleAmount << endl;

    return 0;
}
