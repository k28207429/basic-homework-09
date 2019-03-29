#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			int n = j * i;
			cout << j << "*" << i;
			if (n >= 10)
				cout << "=" << n;
			else
				cout << "=" << n;
			cout << " ";

		}
		cout << endl;
	}
	system("pause");
return 0;

}
