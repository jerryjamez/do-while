// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



	// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
 //

#include <iostream>
#include <vector>
	using namespace std;

	int main()
	{
		int times{ };

		cout << " how many times would you like this to loop through " << endl;
		cin >> times;
		cout << " --------------------------------------------------------------" << endl;
		int l1 = 1;
		int l2 = 2;
		int endValue = 0;


		for (int i= 0; i <= times; ++i)
		{
			if (i == 0)
			{

				cout << l1 << endl;
				continue;
			}
			else if (i == 1)
			{
				cout << l2 << endl;
				continue;
			}
			else
				endValue = l1 + l2;
			l1 = l2;
			l2 = endValue;
			cout << endValue << endl;

		}


		return 0;



	}



