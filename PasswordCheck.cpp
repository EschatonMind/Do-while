#include <iostream>
using namespace std;

int main() {

	const string RegisteredPass = "Hello";
	string Password;

	do {
		cout << " Enter the Password > " << flush;

		cin >> Password;

		if (Password == RegisteredPass) {

			break;
		}
		else {
			cout << " access denied! " << endl;
		}

	} while (1);

	cout << " access granted ";

	return 0;
}