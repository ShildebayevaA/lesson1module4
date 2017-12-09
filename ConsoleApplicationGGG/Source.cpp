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
		cout << "Öåíà çà " << (i * 50) << " ãðàìì ñûðà ðàâíà  " << Pr << endl;*/
	}




	int Number;
Start:
	cout << "Ââåäèòå íîìåð çàäàíèÿ îò 1 äî 15" << endl;
	cin >> Number;

	if ((Number < 1) || (Number > 15))
	{
		cout << "ââåäåííîå ÷èñëî íå âõîäèò â äèàïàçîí 1 - 15" << endl;
		goto Start;
	}

	if (Number == 14) {
		cout << "Task14. Ñóììà âñåõ íå÷åòíûõ èç äèàïàçîíà" << "\n";
		int i, ost, N, M, S;
		S = 0;
		ost = 0;
		i = 0;
		cout << "Ââåäèòå äâà ÷èñëà - ãðàíèöû äèàïàçîíà N è M, M>N" << "\n";
		cin >> N >> M;
		for (i = 0; i <= (M - N); i++);
		{
			ost %= N;
			if (ost != 0)
				S += N;
			N = N + 1;
			cout << S << "Ñóììà âñåõ íå÷åòíûõ èç äèàïàçîíà îò N äî M, M>N" << endl;
		}
		goto Start;
	}

	if (Number == 13) {
		cout << "Task13. Áåñïðåðûâíûé ââîä, îáù ñóììà, ñðåäííåå àðèôì, ñ÷åò÷èê" << "\n";
		int i, schet, N, S, S_sredn;
		S = 0;
		S_sredn = 0;
		schet = 0;
		for (i = 0;; i++)
		{
			cout << "âåäèòå ÷èñëî N" << "\n";
			cin >> N;
			if (N == 0) break;
			S += N;
			S_sredn = S / N;
			schet++;
		}
		goto Start;
	}

	if (Number == 12) {
		cout << "Task12. ïðîèçâåäåíèÿ ÷èñåë èç ðàçíûõ äèïàçîíîâ" << "\n";
		int i, a, b, Pr;
		i = 0;
		a = 8;
		b = 15;
		Pr = 1;
		for (i = 8; i <= 15; i++);
		{
			Pr *= i;
			cout << "a. ïðîèçâåäåíèå ÷èñåë îò 8 äî 15" << Pr << "\n";
		}
		cout << "b. Ââåäèòå a èç èíòåðâàëà:  1 <= a <= 20" << "\n";
		cin >> a;
		for (i = a; i <= 20; i++); Pr *= i;
		cout << "b. ïðîèçâåäåíèå ÷èñåë îò a äî 20  " << Pr << "\n";
		cout << "c. Ââåäèòå b èç èíòåðâàëà:  1 <= b <= 20" << "\n";
		cin >> b;
		for (i = 1; i <= b; i++); Pr *= i;
		cout << "c. ïðîèçâåäåíèå ÷èñåë îò b äî 20  " << Pr << "\n";
		cout << "Ââåäèòå äâà ÷èñëà - ãðàíèöû äèàïàçîíà a è b, >=a" << "\n";
		cin >> a >> b;
		for (i = a; i <= b; i++); Pr *= i;
		cout << "ïðîèçâåäåíèå ÷èñåë äèàïàçîíà îò a äî b" << Pr << "\n";
		goto Start;
	}

	if (Number == 11) {
		cout << "Task11. Òàáëèöà öåí ñûðà ñ øàãîì â 50 ã" << "\n";
		int i, shag;
		float price, price_v_gr, Pr;
		i = 0;
		shag = 50;
		price = 0;
		price_v_gr = 0;
		cout << "Öåíà ñûðà â êã " << "\n";
		cin >> price;
		price_v_gr = price / 1000;
		for (i = 0; i <= 1000; i=i+50);
		{
			cout << " - " << endl;
			Pr = i * price_v_gr;
			cout << "Öåíà çà " << i << " ãðàìì ñûðà ðàâíà  " << Pr << endl;
		}
		goto Start;	}
	
	
	
	
}




