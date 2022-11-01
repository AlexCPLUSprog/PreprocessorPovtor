#include <iostream>
#include <string>
using namespace std;

#define N 4

#if N == 2 + 2 
#define PI 3.14
#define MSG "Hello world!"
#endif

#define forever while (true)
#define begin {
#define end }

#define sum(a,b) (a + b)
#define mult(a,b) (a * b)
#define crtarr(t, n, s) t *n = new t[s]

// двумерный динамический массив
#define ctrmx(t, n, s1, s2) t ** n = new t *[s1];\
	for (int i = 0; i < s1; i++)\
		n[i] = new t[s2];


#if 1 == 2
void hi() {
	cout << "Hello!\n";
}
#elif 2 == 2
void hi() {
	cout << "Wow!\n";
}
#else
void hi() {
	cout << "Bye!\n";
}
#endif

#ifdef sum
const int K = 10;
#else
const int K = 11;
#error "Ошибка! sum должно существовать."
#endif

// оператор превращения в строку
#define print(v) cout << #v << " = " << v << '\n'

// оператор конкатенации кода
#define show(a,b) a ## b

// встроенная директива препроцессора

int main() begin
	setlocale(LC_ALL, "Russian");
	int n = 1, m = 2;
	int xy = 10;

	cout << show(x, y) << '\n';

	print(n);
	print(m);

	hi();

	cout << __LINE__ << endl; // 66
	cout << __LINE__ << endl; // 67	
	cout << __FILE__ << endl; // наш файл
	cout << __DATE__ << endl; // дата сборки проекта
	
	string date = __DATE__;
	cout << date << endl;
	int year = stoi(date.substr(date.rfind(" ") + 1));
	cout << "Текущий год: " << year << endl;


	// Константы препроцессора
	/*cout << "PI = " << PI << endl;
	cout << MSG << endl;

#undef PI
	// cout << PI << endl; // ошибка, т.к PI освобождена*/
	
	// Программные конструкции
	/*n = 0;
	forever begin
		cout << '.';
		n++;
		if (n >= 5)
			break;
		end
	cout << endl;*/

	// Макросы	
	/*cout << sum(1, 5.7) << endl;
	cout << mult(5, 6.7) << endl;
	crtarr(int, px, 5);
	px[0] = 1;
	delete[]px;

	ctrmx(int, mat, 5, 4);
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			mat[y][x] = y * x + 1;
			cout << mat[y][x] << '\t';
		}
		cout << '\n';
	}
	for (int i = 0; i < 4; i++)
		delete[]mat[i];
	delete[]mat;

	/*int** mx = new int* [10];
	for (int i = 0; i < 10; i++)
		mx[i] = new int[7];*/





	return 0;
end