#include <iostream>
#include <vector>
#include <string>
#include "Assignment.h"
using namespace std;

int main()
{
	int studentNumber;
	string studentName;
	Assignment student;
	vector<Assignment>myVector;

	cout << "Enter name and ID number of student (0 to end)

	do
	{
		cin >> studentName;
		cin >> studentNumber;
		
		student.setName(studentName);
		student.setNumber(studentNumber);

		myVector.push_back(student);
	}while(studentNumber)

	for(int x = 0; x < myVector.size(); x++)
	{
		cout << myVector[x].getName() << " " << myVector[x].getID() << endl;
	}
	system("pause");
	return 0;
}
