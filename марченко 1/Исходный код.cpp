#include <iostream>
#include <string>
#include <cstdio>
#include <Windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int funcCC();
int funcPS();

int main(int argc, char** argv)
{
	int h;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[100];
	start:
	cout << "���� ��� �����/������ �� ������ ������?" << endl;
	cout << "\n";
	cout << " ������i�� 1, ���� cin/cout" << endl;
	cout << " ������i�� 2, ���� printf/scanf" << endl;
	cin >> h;
	switch (h)
		case 1:
	{
		{
		cout << "��������� ��� � ���� ������" << endl;
		cout << "������ ��������� ����� : " << endl;
		gets(str);
		cout << "�� ����� �����:" << str << endl << endl;
     	}
		break;
		
		case 2:
		{
			cout << "�� ����� �����:" << str << endl << endl;
			cout << "-----------------------------------------------------------\n1. ��� � ���� ������ �� ��������� ������� scanf � printf.\n-----------------------------------------------------------\n������ ��������� �����: ";
			scanf("%s", str);
			printf("�� ����� �����: %s\n\n", str);
		}
			break; 
		default:
		{
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
		}

}
	system("pause");
	return 0;
}

int funcCC()
{

}