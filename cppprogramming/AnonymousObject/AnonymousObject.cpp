#include <iostream>
using namespace std;
class Account {
	double balance;
public:
	Account() {
		balance = 0.0;
	}
	Account(double balance) {
		this->balance = balance;
	}
	void Deposit(double number) {
		balance += number;
	}
	double Withdraw(double number) {
		auto tmp{ 0.0 };
		if (balance<number) {
			tmp = balance;
			balance = 0;
			return tmp;
		}
		else {
			balance -= number;
			return number;
		}
	}
};
int main() {
	Account a1;
	Account a2 = Account(100.0);
	a1.Deposit(9.0);
	cout << a1.Withdraw(10.0) << endl;
	cout << a2.Withdraw(52.0) << endl;
	cout << Account(1000.0).Withdraw(1001.0) << endl;



	return 0;
}