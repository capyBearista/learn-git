/*******************************************************************************
The purpose of this program is to store contact information entered by the user in a file that is accessible even when the program is not running.
The file will include previous entries.
The program functions by making use of C++'s input/output classes.
*******************************************************************************/
#include <iostream>
// including fstream to allow input/output operations from/to a file
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // declaring output file stream (to write data to a file)
    ofstream output;

    // clear existing contacts.txt file if selected
    char decision;
    cout << "Would you like to clear the existing contact sheet, if it exists? (y/n): ";
    cin >> decision;
    if (decision == 'y' || decision == 'Y')
    {
        output.open("contacts.txt");
        output << "";
        output.close();

        cout << "\nContact sheet cleared!\n";
    }

    // open file for output operations
    // output APPENDED to the end of file called 'contacts.txt'
    output.open("contacts.txt", ios::app);

    // variables to store name and phone number
    string name = "";
    string phoneNumber = "";

    // prompt for name and phone number
    cin.ignore();    // discard the "leftover" newline from the cin for decision
    cout << "\nEnter the name of the contact: ";
    getline(cin, name); 
    cout << "\nEnter the number of the contact: ";
    getline(cin, phoneNumber); 

    // putting user input into output file
    output << "Name: " << name << "\n" << "Phone Number: " << phoneNumber << "\n\n";

    // closing out output operations
    output.close();

    // ending message with information on where to find output
    if (decision == 'y')
    {
        cout <<"\nDone. You will find this entry in the file 'contacts.txt' in the current directory.\n";
    } else { 
        cout <<"\nDone. You will find this and all previous entries in the file 'contacts.txt' in the current directory.\n";
    }
    return 0;
}