#include <iostream>
using namespace std;

class MyCaculator {
private:
	//�������
	double frontnumber;
	char inputoperator;
	double backnumber; 	
public:
	double result = 0;
	//������ �ʿ�..? �����ڰ� ��Ȯ�� ����
	
	//���� ��� �޼ҵ�
	double setNumber(double a, char c, double b) {
		frontnumber = a;
		inputoperator = c;
		backnumber = b;
	
		if (inputoperator == '+') {
			result = frontnumber + backnumber;
			return result;
		}
		else if (inputoperator == '-') {
			result = frontnumber - backnumber;
			return result;
		}
		else if (inputoperator = '/'){
			if (backnumber != '0') {
				result = frontnumber / backnumber;
				return result;
			}
			else if (backnumber == '0') {
				cout <<  "cannot divide by 0!" << endl;
			}
		}
		else if (inputoperator = '%') {
			result = (int)frontnumber % (int)backnumber;
			return result;
		}
	}
	
	// ������ �޼ҵ�
	void Print() {
		cout << "output : " << result << endl;
	}
	
};

int main() {
	MyCaculator sample; // ��ü����
	double a;
	char c;
	double b;
	cout << "input : ";
	//�� �Է¹ޱ�
	cin >> a >> c >> b;
	//���� Ŭ���� �����ڿ� parameter�� front, op, back �Ѱ���(�̸����x)
	sample.setNumber(a, c, b);
	sample.Print();
}