#include <iostream>
using namespace std;
int main() {
	//1
	/*int x, sum = 0, k = 0;
	do {
		cin >> x;
		sum += x;
		k++;
	} while (x != 0);
	double sa = (double)sum / k;
	cout << k << " " << sum << " " << sa << endl;*/

	//2
	/*int sum = 0;
	int i;
	int a, b;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum = i + sum;
	}
		i++;
	} while (i <= b);
	cout << sum << endl;*/

	//3
/*
	    ^        i 1 - 1
       ^^^         2 - 3
	  ^^^^^        3 - 5
				   4 - 7
	  */
	/*int h, i;
	cin >> h;
	i = 1;
	do {
		for (int j = 1; j <= h - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "?";
		cout << endl;
		i++;
	} while (i <= h);*/


	//17,18,22,29,30

	//17. Â ÝÂÌ ââîäÿòñÿ ïî î÷åðåäè äàííûå î ðîñòå N ó÷àùèõñÿ êëàññà. Îïðåäåëèòü ñðåäíèé ðîñò ó÷àùèõñÿ êëàññà.
	/*int rost, sum = 0, n;
	int i = 0;
	cin >> n;
	do {
		cin >> rost;
		sum += rost;
		i++;
	} while (i < n);
	double sr = (double)sum / n;
	cout << sr << endl;*/

	//29. ñ ïîìîùüþ îïåðàòîðà do - while íàïèøèòå ïðîãðàììó âûâîäà âñåõ ÷åòíûõ ÷èñåë â äèàïàçîíå îò 2 äî 100 âêëþ÷èòåëüíî.
	/*int i;
	int a, b;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 == 0) {
			cout << i << endl;
	}
		i++;
	} while (i <= b);*/

	//30. Ñ ïîìîùüþ îïåðàòîðà do - while íàïèøèòå ïðîãðàììó îïðåäåëåíèÿ ñóììû âñåõ íå÷åòíûõ ÷èñåë â äèàïàçîíå îò 1 äî 99 âêëþ÷èòåëüíî.
	/*int sum = 0;
	int i;
	int a, b;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum = i + sum;
		}
		i++;
	} while (i <= b);
	cout << sum << endl;*/

	//18. Çàäàíî íàòóðàëüíîå ÷èñëî N.Íàéòè êîëè÷åñòâî íàòóðàëüíûõ ÷èñåë, íå ïðåâîñõîäÿùèõ N è íå äåëÿùèõñÿ íè íà îäíî èç ÷èñåë 2, 3, 5
	int n;
	cin >> n;
	int i = 1;
	int k = 0;
	do {
		if ((((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0)))) {
			k++;
		}
		i++;
	} while (i <= n);
	cout << k << endl;
}
