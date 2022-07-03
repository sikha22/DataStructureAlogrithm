// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;


class number{
private:
	
	int* b;
	

public:
	// Constructor
	number()
	{
		b= new int;
	}


	void set(int bre)
	{
		
		*b = bre;
		
	}

	
	void show_data()
	{
		cout << "\n number is = " << *b
			 << endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	number(number&sample)
	{
		
		b = new int;
		*b = *(sample.b);
		
	}

	// Destructors
	~number()
	{
		delete b;
	}
};

// Driver Code
int main()
{
	// Object of class first
	number first;

	
	first.set(12);

	
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	number second = first;

	
	second.show_data();

	return 0;
}