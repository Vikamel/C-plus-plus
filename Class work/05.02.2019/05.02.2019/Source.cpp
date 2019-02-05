//#include <iostream>
//using namespace std;
//int Sum(int a, int b)
//{
//	cout << "int\n";
//	return a + b;
//}
//int Sum(int a, int b, int c)
//{
//	cout << "3_int\n";
//	return a + b + c;
//}
//double Sum(double a, double b)
//{
//	cout << "doubl\n";
//	return a + b;
//}
//int main()
//{
//	cout << Sum(5, 10) << endl;
//	cout << Sum(5.4, 18.1) << endl;
//	cout << Sum(8, 2, 6) << endl;
//
//	system("pause");
//	return 0;
//}


/*#include<iostream>
#include<windows.h>
using namespace std;

void Menu(); //показати меню для користувача
void Dodaty();
void Vidnyatu();
void Pomnogutu();
void Podilutu();
void DOstepena();//Проводимо операцію додавання (вводимо a і b обчислюємо суму)
float EnterChyslo(); //Для вводу цілого числа

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Menu();
	system("pause");
	return 0;
}

void Menu()
{
	int action = 0;
	do
	{
		cout << "0. Вихід" << endl;
		cout << "1. Додати" << endl;
		cout << "2. Відняти" << endl;
		cout << "3. Помножити" << endl;
		cout << "4. Поділити" << endl;
		cout << "5. До степеня" << endl;
		cout << "->_";
		cin >> action;
		switch (action)
		{
		case 1:
		{
			cout << "Додати\n";
			Dodaty();
			break;
		}
		case 2:
		{
			cout << "Відняти\n";
			Vidnyatu();
			break;
		}
		case 3:
		{
			cout << "Помножити\n";
			Pomnogutu();
			break;
		}
		case 4:
		{
			cout << "Поділити\n";

			Podilutu();
			break;
		}
		case 5:
		{
			cout << "До степеня\n";
			DOstepena();
			break;
		}
		}

	} while (action != 0);
}

void Dodaty()
{
	float a = EnterChyslo();
	float b = EnterChyslo();
	cout << "Сума: " << a + b << "\n";
}
void Vidnyatu()
{
	float a = EnterChyslo();
	float b = EnterChyslo();
	cout << "Різниця: " << a - b << "\n";
}
void Pomnogutu()
{
	float a = EnterChyslo();
	float b = EnterChyslo();
	cout << "Множення: " << a * b << "\n";
}
void Podilutu()
{
	float a = EnterChyslo();
	float b = EnterChyslo();
	cout << "Ділення: " << a / b << "\n";
	if (b == 0)
		cout << "на нуль ділити не можна";
	return;

}
void DOstepena()
{
	float a = EnterChyslo();
	int n = 0;
	cout << "ВВедіть степінь";
	cin >> n;
	float a_begin = a;

	for (int i = 1; i < n; i++)
		a *= a_begin;

	cout << "До степеня: " << a << "\n";
}


float EnterChyslo()
{
	float temp;
	cout << "Введіть число:\n";
	cout << "\t\t->_";
	cin >> temp;
	return temp;
}*/
#include<iostream>
using namespace std;
void Menu(); //показати меню для користувача
int Dodaty(int a, int b);
double Dodaty(double a, double b);
int Dodaty(int a, int b, int c);
double Dodaty(double a, double b, double c);
int Vidnyatu(int a, int b);
double Vidnyatu(double a, double b);
int Vidnyatu(int a, int b, int c);
double Vidnyatu(double a, double b, double c);
int Pomnogutu(int a, int b);
double Pomnogutu(double a, double b);
int Pomnogutu(int a, int b, int c);
double Pomnogutu(double a, double b, double c);
int  Podilutu(int a, int b);
double  Podilutu(double a, double b);
int  Podilutu(int a, int b, int c);
double  Podilutu(double a, double b, double c);


float EnterChyslo(); //Для вводу цілого числа
int main()
{
	Menu();
	system("pause");
	return 0;
}

void Menu()
{
	int action = 0;
	do
	{
		cout << "0. Vuhid" << endl;
		cout << "1. Dodatu" << endl;
		cout << "2. Vidnyatu" << endl;
		cout << "3. Pomnogutu" << endl;
		cout << "4. Podilutu" << endl;
		cout << "->_";
		cin >> action;
		switch (action)
		{
		case 1:
		{
			cout << "Sum\n";
			Dodaty();
			break;
		}
		case 2:
		{
			cout << "Vidntatu\n";
			Vidnyatu();
			break;
		}
		case 3:
		{
			cout << "Pomnogutu\n";
			Pomnogutu();
			break;
		}
		case 4:
		{
			cout << "Podilutu\n";

			Podilutu();
			break;
		}
		}

	} while (action != 0);

}
int Dodaty(int a, int b)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	cout << "Syma: ";
	return a + b;
}
double Dodaty(double a, double b)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	cout << "Syma: ";
	return a + b;
}
int Dodaty(int a, int b, int c)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	int c = EnterChyslo();
	cout << "Syma: ";
	return a + b + c;
}
double Dodaty(double a, double b, double c)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	double c = EnterChyslo();

	cout << "Syma: ";
	return a + b + c;
}
int Vidnyatu(int a, int b)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	cout << "Riznutsya: ";
	return a - b;
}
double Vidnyatu(double a, double b)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	cout << "Riznutsya: ";
	return a - b;
}
int Vidnyatu(int a, int b, int c)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	int c = EnterChyslo();
	cout << "Riznutsya: ";
	return a - b - c;
}
double Vidnyatu(double a, double b, double c)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	double c = EnterChyslo();
	cout << "Riznutsya: ";
	return a - b - c;
}
int Pomnogutu(int a, int b)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	cout << "Mnogennya: ";
	return a * b;
}
double Pomnogutu(double a, double b)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	cout << "Mnogennya: ";
	return a * b;
}
int Pomnogutu(int a, int b, int c)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	int c = EnterChyslo();
	cout << "Mnogennya: ";
	return a * b*c;
}
double Pomnogutu(double a, double b, double c)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	double c = EnterChyslo();
	cout << "Mnogennya: ";
	return a * b*c;
}
int  Podilutu(int a, int b)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	cout << "Dilennya: ";
	if (b == 0)
		cout << "Na nul dilutu ne mogna";

	return a / b;
}
double  Podilutu(double a, double b)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	cout << "Dilennya: ";
	if (b == 0)
		cout << "Na nul dilutu ne mogna";

	return a / b;
}
int  Podilutu(int a, int b, int c)
{
	int a = EnterChyslo();
	int b = EnterChyslo();
	int c = EnterChyslo();
	cout << "Dilennya: ";
	if (b == 0 && c == 0)
		cout << "Na nul dilutu ne mogna";

	return a / b / c;
}
double  Podilutu(double a, double b, double c)
{
	double a = EnterChyslo();
	double b = EnterChyslo();
	double c = EnterChyslo();
	cout << "Dilennya: ";
	if (b == 0 && c == 0)
		cout << "Na nul dilutu ne mogna";

	return a / b / c;
}
float EnterChyslo()
{
	float temp;
	cout << "Enter number:\n";
	cout << "\t\t->_";
	cin >> temp;
	return temp;
}

