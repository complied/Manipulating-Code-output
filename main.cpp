//
//  main.cpp
//  Manipulating Code Output
//
//  Created by Subigya Parajuli on 1/27/25.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main(int argc, const char * argv[]) {
    //defined different ids
    int id1 = 1;
    int id2 = 2;
    int id3 = 3;
    //defined different names
    string name1 = "Alice";
    string name2 = "Bob";
    string name3 = "Charlie";
    //defined different balances
    double balance1 = 1000.00;
    double balance2 = 530.25;
    double balance3 = 2040.50;
    
    //display title
    
    cout << setw(25) << "Daily Report" << endl; //prints Daily report in the header with 25 spaces behind it
    cout << "Id" << setfill (' ') << setw(5) << "" << "Name" << setfill(' ') << setw(6) << "" << "Balance" << endl; // id, name and ballance
    
    cout << setfill('-')<< setw(4) << "" << setfill(' ') << setw(3) << "" << setfill('-') << setw(7) << "" << setfill(' ') << setw(3) << "" << setfill('-')<< setw(7) << "" << endl;  // padding with - and added space in between to create a cleaner
    
    cout << setfill('0')<< setw(4) << "" << id1 << setfill(' ')<< setw(2) << "" << name1 << setfill(' ') << setw(5) << ""<< fixed << setprecision (2)<< "$" << balance1 << endl; //Printed id1, name1, balance1 - used fixed set prescion in this one for the decimals to pop out + also used set fill and setw to pad with 0
    
    cout << setfill('0')<< setw(4) << "" << id2 << setfill(' ')<< setw(2) << "" << name2 << setfill(' ') << setw(7) << ""<< fixed << setprecision (2)<< "$" << balance2 << endl; //Printed id2, name2, balance2 - used fixed set prescion in this one for the decimals to pop out + also used set fill and setw to pad with 0
    
    cout << setfill('0')<< setw(4) << "" << id3 << setfill(' ')<< setw(2) << "" << name3 << setfill(' ') << setw(3) << ""<< fixed << setprecision (2)<< "$" << balance3 << endl << endl; //Printed id3, name3, balance3 - used fixed set prescion in this one for the decimals to pop out + also used set fill and setw to pad with 0
    
    return 0;
}

//The Code output is set as follows!
/*

             Daily Report
Id     Name      Balance
----   -------   -------
00001  Alice     $1000.00
00002  Bob       $530.25
00003  Charlie   $2040.50

Program ended with exit code: 0
 
 
 
 */
