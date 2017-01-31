#include <iostream>
using namespace std;
int main() {
	cout << "You have $1,000 in your bank account.  How much would you like to withdraw?" << endl;
	int withdraw = 0;
	cin >> withdraw;
	cout << "Your bank account has just about $" << 1000 - withdraw << " left." << endl;
	//hi
}