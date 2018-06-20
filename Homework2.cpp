
/*	Author:		Jefferson Crelia	(JeffersonCrelia@my.unt.edu)
	Date:		October 10, 2016
	Instructor:	David M. Keathly
	Description:	This program computes the average of 1-13 grades
*/

#include <iostream>
using namespace std;

int main ()
{
	//Displaying required header
	cout << "Department: Computer Science and Engineering \n";
	cout << "Course Number: CSCE 1030 \n";
	cout << "Program Number: Section 002 \n";
	cout << "Name: Jefferson Crelia \n";
	cout << "Email: JeffersonCrelia@my.unt.edu \n";
	cout << "\n\n\n";


	//Decalaring variables
	int temp, all_grades;
	double num_of_grades[13], sum_of_grades = 0.0, avg_of_grades;

	cout << "How many grades would you like to average? (1-13): ";
		cin >> all_grades;// Asking the  user to input a value for all_grades

	cout << "\n\n";

	while ( all_grades < 1 || all_grades > 13) // While statement that forces user to input the correct information
	{
		cout << "\n You can only average 1-13 grades. Please enter the correct amount of grades to be averaged: ";
			cin >> all_grades;
		cout << endl;
	}

	for (temp = 0; temp < all_grades; ++temp)// Set for loop that will continue looping until temp is equal to all_grades
	{
		cout << temp +1 << ". Please enter the grade then press <Enter>: "; // Setting the console to  disply "1. Please enter number: ",so on and so forth
			cin >> num_of_grades[temp]; // user inputs the values for all_grades

		while (num_of_grades[temp] < 0 || num_of_grades[temp] > 100)// Created while loop to  verify numbers entered are 0-100
		{
			cout << "The grade entered mus be between 0-100. Please enter a valid value: ";
				cin >> num_of_grades[temp];
		}

		sum_of_grades += num_of_grades[temp]; // formula to find sum of all grades
	}

	avg_of_grades = sum_of_grades / all_grades; // formula to find the average of the grades

	cout << "\n\n" << "The average of all " << all_grades << " grades is: ";
	//restrict final average to two decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << avg_of_grades;

	cout << "\n\n\n";

	return 0;
}
