#include <iostream>
#include <cstdio>
#include <Windows.h>
#include<string>

using namespace std;
int funcCC();
int funcPS();
char str[100];

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int h;
	
	start:
	cout << "Який тип вводу/виводу ви хочете обрати?" << endl;
	cout << "\n";
	cout << " Натиснiть 1, якщо cin/cout" << endl;
	cout << " Натиснiть 2, якщо printf/scanf" << endl;
	cin >> h;
	if (h == 1)
	{
		funcCC();
	}
	else
		if (h == 2)
		{
			funcPS();
		}
		else
			if (!cin || h>2 || h<1)
			{
				int i;
				system("cls");
				cout << "Неправильное значение,попробуйте еще раз." << endl;
				cout << "Невiрне значення спробуйте ще раз." << endl;
				cout << "Wrong value, try again." << endl;
				
				cin.clear();//восстанавливает поток и делает его работоспособным
				fflush(stdin);//чистит поток ввода от мусора
				for (i = 0; i < 500000000; i++);
				system("cls");
				goto start;

			}
	
	system("pause");
	return 0;
}

int funcCC()
{
	
	
		cout << "Введите строку на любом из 3х языков (укр, рус, eng) : " << endl;
		fflush(stdin);
		gets(str);
		
		cout << "Ви ввели строку:" << str << endl;
		cout << "" << endl;
		system("pause");
		return 0;

	
}

int funcPS()
{
	
		
		printf("\nВвод и вывод текста с помощью scanf і printf\n");
		printf("\nВведите строку на любом из 3х языков (укр, рус, eng) : \n");
		fflush(stdin);
		gets(str);
		printf("Ви ввели рядок: %s \n\n", str);
		
	

	system("pause");
	return 0;
}