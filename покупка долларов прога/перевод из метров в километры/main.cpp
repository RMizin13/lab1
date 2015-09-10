#include<iostream>

using namespace std;

int main()

{
	start:
	setlocale(0, "");
	double kurs, uah, usd;
	char letter;
	
        cout << "введите актуальный курс доллара" << endl;
		cin >> kurs;
		cout << "\n";
		

		cout << "Введите количество Долларов которые вы хотите купить" << endl;
		cin >> usd;
			uah = usd * kurs;

			cout << usd << " Доллара(ов) = " << uah << " Гривен, по курсу " << kurs << endl;
			cout << "\n";
			cout << " + 2% сбор в пенсионный фонд = " << (uah / 100) * 2 << " гривен." << endl;
			cout << "Итого: " << (uah)+((uah / 100) * 2) << " гривен." << endl;
			

			system("pause");
			return 0;
}