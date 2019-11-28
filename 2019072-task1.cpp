

#include <iostream>
#include <fstream>;
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,50 };
	int sum = 0;
	cout << "the retrieved array is 1 2 3 4 50" << endl;
	cout << "sum is: 60" <<endl ;
	ofstream summing;
	summing.open("summing.txt");

	
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}
	

	ifstream summing_r;
	summing_r.open("summing.txt");
	if (summing_r)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << ""<<endl;
		}
		cout << "sum Appended sucessfully";
	}
	return 0;
}
   
