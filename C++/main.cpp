#include <iostream>
using namespace::std;


string Copy(string S, int n1, int n2) {
	string str = "";
	for (int i = n1; i < (n2 +1); i++){
		str += S[i];
	}
	return str;
}




int main() {
	setlocale(0, "");
	string S;
	cout << "Введите строку" << endl;
	cin >> S;


	int n1;
	cout << "Введите первую границу строки" << endl;
	cin >> n1;


	int n2;
	cout << "Введите вторую границу строки" << endl;
	cin >> n2;
	
	cout << Copy(S, n1, n2);
	
}
