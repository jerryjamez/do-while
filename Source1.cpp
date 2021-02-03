#include <iostream>
int main()
{
	char selection{};
	
		do
		{
			cout << " Enter your selection: " << end;
			cin >> selection;
			if (seletion == 1) {
				cout << " You chose " << selection << " - doing this" << endl;
			}
			else if (selection == 2)
			{
				cout << " you chose " << selection << " - doing that ") << endl;
			}
			else if
			{
				cout << " you chose " << selection << " - doing somehthing else " << endl;
			}
			else if
			{
				cout << " you chose " << selection << " ight bet " << endl;
			}
			cout << " 1. Do this " << endl; 
			cout << " 2. Do that " << endl;
			cout << " 3. Do something else " << endl;
			cout << " Q : quit " << endl;


		} while (selection != 'Q')


			return 0;


 }
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int times{ };

	cout << " how many times would you like thia to loop through " << endl;
	cin >> times;
	int l1 = 1;
	int l2 = 2;
	int endValue = 0;


	for (int i{ 0 }; i <= times; ++i)
	{
		if (i == 0)
		{

			cout << l1 << endl;
		}
		else if (i == 1)
		{
			cout << l2 << endl;
		}
		else
			endValue = l1 + l2;
		l1 = l2;
		l2 = endValue;
		cout << endValue << endl;

	}
