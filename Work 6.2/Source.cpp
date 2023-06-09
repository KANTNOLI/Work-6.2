#include <iostream>
#include <fstream>

using namespace std;

//� ���������� ��������� �������� ���������� ������ ��������� �� ���������
//�����.��� ������� ����� ������� ����� �����, ����� ����������, �����
//������.������� ��� ������ ������ � ����� ������ �������� ��� ��������� ������
//����������.

int main() {
	setlocale(LC_ALL, "RUS");
	ifstream fin;
	bool flag = true;
	string inDestin, time = "�� ����� �������� ������ �� ���������";
	int number = -1;
	
	//���� ������
	ofstream fout;
	fout.open("Airport.txt");
	fout << "USA       12.00  1\n";
	fout << "Brazil    13.00  2\n";
	fout << "Canada    14.00  3\n";
	fout << "China     15.00  4\n";
	fout << "Colombia  16.00  5\n";
	fout << "Cuba      17.00  6\n";
	fout << "Egypt     18.00  7\n";
	fout << "Germany   19.00  8\n";
	fout << "Iran      20.00  9\n";
	fout << "Japan     21.00  10\n";
	fout.close();
	


	cout << "USA Brazil Canada China Colombia Cuba Egypt Germany Iran Japan\n�������� ����� ����������: ";
	cin >> inDestin;

	fin.open("Airport.txt");

	if (!fin.is_open()) {
		cout << "������! ���� �� ������." << endl;
	}
	else {
		while (flag) {
			string destination;

			fin >> destination;
			if (destination == inDestin) {
				fin >> time;
				fin >> number;

				break;
			}

			destination = "";
			flag = !fin.eof();
		}

	}

	fin.close();

	cout << "������: " << inDestin << "\n����� �����: " << number << "\n����� ������ �������: " << time << endl;

	return 0;
}