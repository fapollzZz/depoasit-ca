#include <iostream>
#include <clocale>


using namespace std;


int main() {

	setlocale(LC_ALL, "rus");

	int x, y, z, a;
	cout << "¬ведите срок:=" << endl;
	cin >> x;
	cout << "¬ведите сумму вклада:= " << endl;
	cin >> z;

	if ((x >= 0) & (x <= 30))
	{
		y = -10;
		a = z / 100 * y + z;
		cout << "—умма вклада =: " << a;
	}
}