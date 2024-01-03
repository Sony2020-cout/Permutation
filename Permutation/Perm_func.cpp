#include <iostream>
#include <string>

using std::string;
using namespace std;

void string_permutation(string& orig, string& perm) {
	if (orig.empty()) {
		cout << perm << endl;
		return;
	}

	for (int i = 0; i < orig.size(); ++i) {
		string orig2 = orig;
		
		orig2.erase(i, 1);

		string perm2 = perm;

		perm2 += orig.at(i);

		string_permutation(orig2, perm2);
	}
}

int main() {

	string orig;
	cin >> orig;
	string perm;

	string_permutation(orig, perm);

	cout << "Complete" << endl;

	system("pause");


	return 0;
}