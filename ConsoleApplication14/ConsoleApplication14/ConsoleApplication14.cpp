#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color A");
	int balance = 1000;
	int money = -1;
	while (money != 0)
	{
		cout << "\n";
		cout << "***************************************************" << endl;
		cout << "|                ***ATM***                        |" << endl;
		cout << "***************************************************" << endl;
		cout << "| 1 - Check Balance                               |" << endl;
		cout << "| 2 - Deposite Money                              |" << endl;
		cout << "| 3 - Withdraw Money                              |" << endl;
		cout << "| 0 - Termenate The Program                       |" << endl;
		cout << "***************************************************" << endl;
		cin >> money;

		switch (money)
		{
			system("cls");
		case 1:
			cout << "Your Balance Is: " << balance << endl;
			break;

		case 2:
			system("cls");
			int depositMoney;
			cout << "How Much Would You Like To Deposite: ";
			cin >> depositMoney;

			if (depositMoney > 0)
			{
				balance = balance + depositMoney;
				cout << "You Have Deposited: " << depositMoney << "$" << endl;
			}
			else
				cout << "You Have Entered An Invalid Value" << endl;
			break;

		case 3:
			system("cls");
			int withdrawMoney;
			cout << "How Much Money Would You Like To Withdraw: ";
			cin >> withdrawMoney;

			if (withdrawMoney < 0)
			{
				cout << "Invalid Option" << endl;
			}
			else if (withdrawMoney > balance) {
				cout << "Your Balance Is Not Enough" << endl;
			}
			else
				balance = balance - withdrawMoney;
			cout << "You Have Withdrawed: " << withdrawMoney << "$" << endl;
			break;

		case 0:
			cout << "Terminating,Thank You" << endl;
			break;
		default:
			cout << "Invalid Choice, Try Again" << endl;
			break;
		}
	}
	return 0;
}

