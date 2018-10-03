#include <iostream>
using namespace std;

class MyCaculator {
private:
	//멤버변수
	double frontnumber;
	char inputoperator;
	double backnumber; 	
public:
	double result = 0;
	//생성자 필요..? 생성자가 정확히 뭐지
	
	//계산식 등록 메소드
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
	
	// 결과출력 메소드
	void Print() {
		cout << "output : " << result << endl;
	}
	
};

int main() {
	MyCaculator sample; // 객체생성
	double a;
	char c;
	double b;
	cout << "input : ";
	//식 입력받기
	cin >> a >> c >> b;
	//계산기 클래스 생성자에 parameter로 front, op, back 넘겨줌(이름상관x)
	sample.setNumber(a, c, b);
	sample.Print();
}