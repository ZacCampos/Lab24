/*******************************************************************************
 * AUTHORS		: Zac Campos & Abe Hallaq
 * STUDENT ID	: 1058476 & 1046401
 * LAB #23 		: Introduction to Arrays
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*******************************************************************************
 * Introduction to Arrays
 * -----------------------------------------------------------------------------
 * This program will output the total number of instances of a name
 * and then prompt for another name until the word "done" is typed in.
 * -----------------------------------------------------------------------------
 * INPUT & OUTPUT:
 *
 *   string name	//IN, CALC, and OUT - used for storing and outputting names.
 *
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmers' Name
	 * CLASS		: Students' Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 * AR_SIZE		: Size of the array
	 **************************************************************************/

	const char PROGRAMMERS[] = "Zac Campos & Abe Hallaq";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 24;
	const char LAB_NAME[]	= "Introduction to Arrays";
	const int  AR_SIZE		= 10;

	string namesAr[AR_SIZE];

	// Input and Calculation variables
	string name;		//IN, CALC, and OUT - used for storing and outputting
						//					  names.
	int instances = 0;	//CALC and OUT		- used for counting the number of
						//					  times a name appears.

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMERS 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;


	/***************************************************************************
	 * INPUT - For loop used to get 10 names.
	 **************************************************************************/
	for(int index = 0; index < 10; index++)
		{
			cout << "Enter name #" << index + 1 << ": ";
			getline(cin, namesAr[index]);
		}
	/***************************************************************************
	 * PROCESSING & OUTPUT - Asks the user who they would like to search for,
	 * 						 calculates each names' instance(s), and outputs it.
	 **************************************************************************/

	cout  << endl;

	//Initialize
	cout << "Who do you want to search for (enter done to exit)? ";
	getline(cin, name);

	//Loops until the sentinel value 'done' is entered.
	//Check
	while(name != "done")
	{
		//Compares the strings and increments instances if the names match.
		for(int index = 0; index < 10; index++)
		{
			if(namesAr[index] == name)
			{
				instances++;
			}
		}

		//Formats the grammar of the output.
		if(instances > 1)
		{
			cout << "There are " << instances << " instances of the name "
				 << name << ".";
		}
		else if(instances == 1)
		{
			cout << "There is one instance of the name " << name << ".";
		}
		else
		{
			cout << name << "'s name does not exist in this list.";
		}

		cout << endl << endl;

		instances = 0;

		//Change
		cout << "Who do you want to search for (enter done to exit)? ";
		getline(cin, name);
	}

	/***************************************************************************
	 * OUTPUT - Outputs the end prompt.
	 **************************************************************************/

	cout << endl << "Thank you for using our program.";


	return 0;
}

