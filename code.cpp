#include <iostream>
#include <string>
using namespace std;

int sumNumbers(string);

int main(){
	string row;
	cout << "Input your numbers : ";
	getline(cin,row);
	cout << "Sum of numbers : " << sumNumbers(row) << endl;
	system("pause");
	return 0;
}

int sumNumbers(string row){
	int sum = 0;
	string number;
	for (int i = 0; i < row.length(); i++){
		if (isdigit(row[i])){
			number += row[i];
		}
		if ((isspace(row[i]) && isdigit(row[i+1])) || (i == row.length() - 1)){
			sum += stoi(number);
			number.clear();
		}
	}
	return sum;
}
