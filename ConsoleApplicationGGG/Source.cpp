#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int gg = 0;
	for (gg = 1; gg <= 20; gg++);
	{
		cout << " - " << endl;
		/*Pr = i * price_za_50gr;
		cout << "���� �� " << (i * 50) << " ����� ���� �����  " << Pr << endl;*/
	}




	int Number;
Start:
	cout << "������� ����� ������� �� 1 �� 15" << endl;
	cin >> Number;

	if ((Number < 1) || (Number > 15))
	{
		cout << "��������� ����� �� ������ � �������� 1 - 15" << endl;
		goto Start;
	}

	if (Number == 14) {
		cout << "Task14. ����� ���� �������� �� ���������" << "\n";
		int i, ost, N, M, S;
		S = 0;
		ost = 0;
		i = 0;
		cout << "������� ��� ����� - ������� ��������� N � M, M>N" << "\n";
		cin >> N >> M;
		for (i = 0; i <= (M - N); i++);
		{
			ost %= N;
			if (ost != 0)
				S += N;
			N = N + 1;
			cout << S << "����� ���� �������� �� ��������� �� N �� M, M>N" << endl;
		}
		goto Start;
	}

	if (Number == 13) {
		cout << "Task13. ������������ ����, ��� �����, �������� �����, �������" << "\n";
		int i, schet, N, S, S_sredn;
		S = 0;
		S_sredn = 0;
		schet = 0;
		for (i = 0;; i++)
		{
			cout << "������ ����� N" << "\n";
			cin >> N;
			if (N == 0) break;
			S += N;
			S_sredn = S / N;
			schet++;
		}
		goto Start;
	}

	if (Number == 12) {
		cout << "Task12. ������������ ����� �� ������ ���������" << "\n";
		int i, a, b, Pr;
		i = 0;
		a = 8;
		b = 15;
		Pr = 1;
		for (i = 8; i <= 15; i++);
		{
			Pr *= i;
			cout << "a. ������������ ����� �� 8 �� 15" << Pr << "\n";
		}
		cout << "b. ������� a �� ���������:  1 <= a <= 20" << "\n";
		cin >> a;
		for (i = a; i <= 20; i++); Pr *= i;
		cout << "b. ������������ ����� �� a �� 20  " << Pr << "\n";
		cout << "c. ������� b �� ���������:  1 <= b <= 20" << "\n";
		cin >> b;
		for (i = 1; i <= b; i++); Pr *= i;
		cout << "c. ������������ ����� �� b �� 20  " << Pr << "\n";
		cout << "������� ��� ����� - ������� ��������� a � b, >=a" << "\n";
		cin >> a >> b;
		for (i = a; i <= b; i++); Pr *= i;
		cout << "������������ ����� ��������� �� a �� b" << Pr << "\n";
		goto Start;
	}

	if (Number == 11) {
		cout << "Task11. ������� ��� ���� � ����� � 50 �" << "\n";
		int i, shag;
		float price, price_v_gr, Pr;
		i = 0;
		shag = 50;
		price = 0;
		price_v_gr = 0;
		cout << "���� ���� � �� " << "\n";
		cin >> price;
		price_v_gr = price / 1000;
		for (i = 0; i <= 1000; i=i+50);
		{
			cout << " - " << endl;
			Pr = i * price_v_gr;
			cout << "���� �� " << i << " ����� ���� �����  " << Pr << endl;
		}
		goto Start;	}
}




