#include <iostream>
using namespace std;

int main() {
	int frontnumber, backnumber;
	char inputoperator;
	
	cout << "input : ";
	cin >> frontnumber >> inputoperator >> backnumber;

	while(1) {
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
			cout << frontnumber % (int)backnumber;
			break;
		}
	}
}