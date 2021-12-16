#include <iostream>
using namespace std;
const int n = 10;
 
char* stroka(char* temp, int positia, int dlina, int t) {
    int size = 0;
    char* z = new char[size];
    int k = 0;
 
    if (positia > dlina) {
        size = dlina + positia + 1;
        for (int i = positia; i < size; i++) {
            z[k] = temp[i];
            k++;
        }
        z[k] = '\0';
    }
    else{
        size = dlina - positia + 1;
        for (int i = positia; i < size; i++) {
            z[k] = temp[i];
            k++;
        }
        z[k] = '\0';
    }
    return z;
}
 
int mylen(char str[]) {
    int k = 0;
    while (str[k]) {
        k++;
    }
    return k;
} 
int main() {
    setlocale(LC_ALL, "Rus");
    char a[n];
    cout << "Введите строку: ";
    cin.getline(a, n);
    int k = mylen(a);
    int len, number;
    cout << "Введите номер элемента начала подстроки: ";
    cin >> number;
    cout << "Укажите длину подстроки: ";
    cin >> len;
    char* str; 
    str = stroka(a, number, len, k);
    cout << str << endl;

    system("pause");
    delete str;
    return 0;
}