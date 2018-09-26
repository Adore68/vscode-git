#include <iostream>
using namespace std;

int main() {
	float frontnumber, backnumber;
	char inputoperator;
	
	cout << "input : ";
	cin >> frontnumber >> inputoperator >> backnumber;
	
	switch (inputoperator) {
	case '+':
		cout << frontnumber + backnumber;
		break;
	case '-':
		cout << frontnumber - backnumber;
		break;
	case '/':
		cout << frontnumber / backnumber;
		break;
	case '*':
		cout << frontnumber * backnumber;
		break;
	case '%':
		if (backnumber != 0) {
			cout << (int)frontnumber % (int)backnumber;
			break;
		}
		else if (backnumber == 0) {
			cout << "cannot divide by 0!" << endl;
		}
	}
	
}