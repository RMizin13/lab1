#include <iostream>
#include <cstdio>
#include <Windows.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
				cout << "" << endl;
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
	
	
		cout << "Введіть текстовий рядок : " << endl;
		fflush(stdin);
		gets(str);
		
		cout << "Ви ввели рядок:" << str << endl;
	
		system("pause");
		return 0;

	
}

int funcPS()
{
	{
		
		cout << "-----------------------------------------------------------\n1. Ввід і вивід тексту за допомогою функцій scanf і printf.\n-----------------------------------------------------------\nВведіть текстовий рядок: ";
		scanf("%s", str);
		printf("Ви ввели рядок: %s\n\n", str);
	}

	system("pause");
	return 0;
}