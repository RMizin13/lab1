#include<iostream>

using namespace std;

int main()

{
	start:
	setlocale(0, "");
	double kurs, uah, usd;
	char letter;
	
        cout << "������� ���������� ���� �������" << endl;
		cin >> kurs;
		cout << "\n";
		

		cout << "������� ���������� �������� ������� �� ������ ������" << endl;
		cin >> usd;
			uah = usd * kurs;

			cout << usd << " �������(��) = " << uah << " ������, �� ����� " << kurs << endl;
			cout << "\n";
			cout << " + 2% ���� � ���������� ���� = " << (uah / 100) * 2 << " ������." << endl;
			cout << "�����: " << (uah)+((uah / 100) * 2) << " ������." << endl;
			

			system("pause");
			return 0;
}