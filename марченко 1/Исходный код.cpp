#include <iostream>
#include <cstdio>
#include <Windows.h>
// ������ ��������� � ��� �����
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
	cout << "������� ��� �����/������ �� ������ �������" << endl;
	cout << endl;
	cout << " ������� 1, ���� cin/cout" << endl;
	cout << " ������� 2, ���� printf/scanf" << endl;
	cout << " ������� 3, ��� ������ �� ���������" << endl;
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
				cout << "������������ ��������,���������� ��� ���." << endl;
				cout << "���i��� �������� ��������� �� ���." << endl;
				cout << "Wrong value, try again." << endl;
				
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
	    system("cls");
		cout << "������� ������ �� ����� �� 3� ������ (���, ���, eng) : " << endl;
		fflush(stdin);
		gets(mass);
		cout << "�� ����� ������:" << mass << endl;
		cout << "" << endl;

    system("pause");
    return 0;
}

int funcPS()
{
	    system("cls");
		printf("\n���� � ����� ������ � ������� scanf � printf\n");
		printf("\n������� ������ �� ����� �� 3� ������ (���, ���, eng) : \n");
		fflush(stdin);
		gets(mass);
		printf("�� ����� �����: %s \n\n", mass);
		
	system("pause");
	return 0;
}

int end()
{
	    int i;
	    system("cls");
	    cout << endl;
	    cout << "����� �������!" << endl<<endl;
	
	return 0;
}