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
	cout << "���� ��� �����/������ �� ������ ������?" << endl;
	cout << "\n";
	cout << " ������i�� 1, ���� cin/cout" << endl;
	cout << " ������i�� 2, ���� printf/scanf" << endl;
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
				cout << "������������ ��������,���������� ��� ���." << endl;
				cout << "���i��� �������� ��������� �� ���." << endl;
				cout << "Wrong value, try again." << endl;
				cout << "" << endl;
				cin.clear();//��������������� ����� � ������ ��� ���������������
				fflush(stdin);//������ ����� ����� �� ������
				for (i = 0; i < 500000000; i++);
				system("cls");
				goto start;

			}
		


	system("pause");
	return 0;
}

int funcCC()
{
	
	
		cout << "������ ��������� ����� : " << endl;
		fflush(stdin);
		gets(str);
		
		cout << "�� ����� �����:" << str << endl;
	
		system("pause");
		return 0;

	
}

int funcPS()
{
	{
		
		cout << "-----------------------------------------------------------\n1. ��� � ���� ������ �� ��������� ������� scanf � printf.\n-----------------------------------------------------------\n������ ��������� �����: ";
		scanf("%s", str);
		printf("�� ����� �����: %s\n\n", str);
	}

	system("pause");
	return 0;
}