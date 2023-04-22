#include <iostream>
#include <Windows.h>
using namespace std;
#define dashline for (int i = 0; i < 100; i++) {std::cout << "-";} cout << endl;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[3][20], tip[3][20], count[3][20], price[3][20];
	for (int index = 0; index < 3; index++) 
	{
		cin >> name[index];
		cin >> tip[index];
		cin >> count[index];
		cin >> price[index];
	}


	dashline
	cout << "|Сельскохозяйственные культуры";
	cout.width(70);
	cout << "|" << endl;
	dashline
	cout << "|Наименование";
	cout.width(16);
	cout << "|Тип";
	cout.width(43);
	cout << "|Посевная площадь (га)";
	cout.width(22);
	cout << "|Урожайность (ц/га)";
	cout.width(6);
	cout << "|" << endl;
	dashline



		for (int line = 0; line < 3; line++) 
		{
			cout << "|" << name[line];
			cout.width(25 - strlen(name[line]));
			cout << "|" << tip[line];
			cout.width(25 - strlen(tip[line]));
			cout << "|" << count[line];
			cout.width(25 - strlen(count[line]));
			cout << "|" << price[line];
			cout.width(24 - strlen(price[line]));
			cout << "|" << endl;
			dashline
		}
	cout << "|Примечание: З - зерновые, Б - бобовые";
	cout.width(62);
	cout << "|" << endl;
	dashline
}