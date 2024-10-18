#include <iostream>
#include <Windows.h>


void f_sum();
void f_ras();
void f_umn();
void f_del();
void f_procent();
int f_povtor();



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int povtor = 1;
	int vibor = 0;
	while (povtor == 1)
	{
		std::cout << "выберети операцию которую хотите сделать\n 1)сложение \n 2)вычетание\n 3)деление \n 4)умножение \n 5)поцент\n";
		std::cin >> vibor;
		if (vibor == 1) { f_sum();
		povtor = f_povtor();
		}
		else if (vibor == 2) { f_ras();
		povtor = f_povtor();
		}
		else if (vibor == 3) { f_del();
		povtor = f_povtor();
		}
		else if (vibor == 4) { f_umn();
		povtor = f_povtor();
		}
		else if (vibor == 5) { f_procent();
		povtor = f_povtor();
		}
		else {
			std::cout << "ты дебил ?\nнет токого выбора\n";
		povtor = 1;
		}
	}











}
void f_sum() {
	int cislo1 = 0;
	int cislo2 = 0;
	std::cout << "введите два числа которые хотите сложить\n";
	std::cin >> cislo1 >> cislo2;
	int sum = cislo1 + cislo2;
	std::cout << sum << "\n";
}
void f_ras() {
	int cislo1 = 0;
	int cislo2 = 0;
	std::cout << "введите два числа которые хотите вычесть\n";
	std::cin >> cislo1 >> cislo2;
	int ras = cislo1 - cislo2;
	std::cout << ras << "\n";
}
void f_umn() {
	int cislo1 = 0;
	int cislo2 = 0;
	std::cout << "введите два числа которые хотите умножить\n";
	std::cin >> cislo1 >> cislo2;
	int umn = cislo1 * cislo2;
	std::cout << umn << "\n";
}
void f_del() {
	int cislo1 = 0;
	int cislo2 = 0;
	std::cout << "введите два числа которые хотите разделить\n";
	std::cin >> cislo1 >> cislo2;
	int del = cislo1 / cislo2;
	std::cout << del << "\n";
}
void f_procent() {
	int cislo1 = 0;
	int cislo2 = 0;
	std::cout << "введите сначало число а потом процент который хотите найти\n";
	std::cin >> cislo1 >> cislo2;
	int procent = cislo1 / 100 * cislo2 ;
	std::cout << procent << "\n";
}
int f_povtor() {
	int povtor = 0;
	std::cout << "если хотите воспользоватся калькулатором нажмите 1 , если нет нажмите 0 \n";
	std::cin >> povtor;
	return povtor;
}







