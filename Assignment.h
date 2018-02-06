#include <iostream>
#include <string>

using namespace std;

class Assignment
{
	private:
		int ID;
		string name;
	public:
		void setName (string n)
		{
			name=n;
		}
		
		string getName()
		{
			return name;
		}

		void setID (int a)
		{
			ID=a;
		}

		int getID ()
		{
			return ID;
		}

		Assignment ()
		{
			name=" ";
			ID=0;
		}
};
	
