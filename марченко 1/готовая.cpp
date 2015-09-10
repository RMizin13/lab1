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
	cout << "ßêèé òèï ââîäó/âèâîäó âè õî÷åòå îáðàòè?" << endl;
	cout << "\n";
	cout << " Íàòèñíiòü 1, ÿêùî cin/cout" << endl;
	cout << " Íàòèñíiòü 2, ÿêùî printf/scanf" << endl;
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
				cout << "Íåïðàâèëüíîå çíà÷åíèå,ïîïðîáóéòå åùå ðàç." << endl;
				cout << "Íåâiðíå çíà÷åííÿ ñïðîáóéòå ùå ðàç." << endl;
				cout << "Wrong value, try again." << endl;
				
				cin.clear();//âîññòàíàâëèâàåò ïîòîê è äåëàåò åãî ðàáîòîñïîñîáíûì
				fflush(stdin);//÷èñòèò ïîòîê ââîäà îò ìóñîðà
				for (i = 0; i < 500000000; i++);
				system("cls");
				goto start;

			}
	
	system("pause");
	return 0;
}

int funcCC()
{
	
	
		cout << "Ââåäèòå ñòðîêó íà ëþáîì èç 3õ ÿçûêîâ (óêð, ðóñ, eng) : " << endl;
		fflush(stdin);
		gets(str);
		
		cout << "Âè ââåëè ñòðîêó:" << str << endl;
		cout << "" << endl;
		system("pause");
		return 0;

	
}

int funcPS()
{
	
		
		printf("\nÂâîä è âûâîä òåêñòà ñ ïîìîùüþ scanf ³ printf\n");
		printf("\nÂâåäèòå ñòðîêó íà ëþáîì èç 3õ ÿçûêîâ (óêð, ðóñ, eng) : \n");
		fflush(stdin);
		gets(str);
		printf("Âè ââåëè ðÿäîê: %s \n\n", str);
		
	

	system("pause");
	return 0;
}
