#include <iostream>
#include <cstdio>
#include <Windows.h>
// пробую загрузить в бит бакет
using namespace std;
int funcCC();
int funcPS();
int end();
char mass[100];

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int h;
	
	start:
	cout << "Который тип ввода/вывода вы хотите выбрать" << endl;
	cout << endl;
	cout << " Нажмите 1, если cin/cout" << endl;
	cout << " Нажмите 2, если printf/scanf" << endl;
	cout << " Нажмите 3, для выхода из программы" << endl;
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
			if (h == 3)
			{
				end();
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
	    system("cls");
		cout << "Введите строку на любом из 3х языков (укр, рус, eng) : " << endl;
		fflush(stdin);
		gets(mass);
		cout << "Ви ввели строку:" << mass << endl;
		cout << "" << endl;

    system("pause");
    return 0;
}

int funcPS()
{
	    system("cls");
		printf("\nВвод и вывод текста с помощью scanf і printf\n");
		printf("\nВведите строку на любом из 3х языков (укр, рус, eng) : \n");
		fflush(stdin);
		gets(mass);
		printf("Ви ввели рядок: %s \n\n", mass);
		
	system("pause");
	return 0;
}

int end()
{
	    int i;
	    system("cls");
	    cout << endl;
	    cout << "Всего доброго!" << endl<<endl;
	
	return 0;
}