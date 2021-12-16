#include <iostream>
#include <Windows.h>
#include <string>
using namespace::std;


string Copy(string S, int n1, int n2) {
	string str = "";
	for (int i = n1; i < (n2 +1); i++){
		str += S[i];
	}
	return str;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string S;
	cout << "Введите строку" << endl;
	getline(cin, S);


	int n1;
	cout << "Введите первую границу строки" << endl;
	cin >> n1;


	int n2;
	cout << "Введите вторую границу строки" << endl;
	cin >> n2;
	
	cout << Copy(S, n1, n2);
	
}
