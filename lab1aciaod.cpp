#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int mas[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
	cin >> num;
	int pos;
	cin >> pos;
	int new_mas[size(mas) + 1];
	int j = 1;
	for (int i = 0; i < size(new_mas); i++) {
		if (i == pos - 1) {
			new_mas[i] = mas[i];
			new_mas[j] = num;
			i++;

		}
		else {
			j++;
			new_mas[j] = mas[i];
		}
	}

	for (int k = 0; k < size(new_mas); k++) {
		cout << new_mas[k] << " ";
	}
}