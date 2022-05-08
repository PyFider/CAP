#include <iostream>
using namespace std;

int main() {
	while(true) {
		double an;
		double d, af;
		cout << "a1 = ";
		cin >> af;

		cout << "an = ";
		cin >> an;

		cout << "d = ";
		cin >> d;

		double s = ((af+an)/2)*(((an-af)/d)+1);
		cout << "Answer| " << s << endl << endl;

		
	}
}