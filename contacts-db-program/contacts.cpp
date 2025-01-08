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

    // open file for output operations
    // output APPENDED to the end of file called 'contacts.txt'
    output.open("contacts.txt", ios::app);

    // variables to store name and phone number
    string name = "";
    string phoneNumber = "";

    cout << "Enter the name of the contact: \n";
    cin >> name;
    cout << "Enter the number of the contact: \n";
    cin >> phoneNumber;

    // putting user input into output file
    output << "Name: " << name << "\n" << "Phone Number: " << phoneNumber << "\n\n";

    // closing out output operations
    output.close();

    // ending message with information on where to find output
    cout << "\nDone. You will find this entry and all previous entries in " << "the file 'contacts.txt' in the current directory.\n";

    return 0;
}