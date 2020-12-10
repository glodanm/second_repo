#include "bookDescription.h"
#include "BookShop.h"
int main() {
	int n;
	BookShop B;
	cout << "Enter count of books in bookshop: ";
	cin >> n;
	B.inputBooks(n);
	cout << "<<<<---Our books--->>>>" << endl;
	B.inputBooks(n);
	B.sortBooksByPrice(2);
	cout << "<<-- Sorting Books By Price--->>"<<endl;
	B.outputBooks(2);
	B.sortBooksBySales(2);
	cout << "<<---Sorting Books By Sales--->>" << endl;
	B.outputBooks(2);
	system("pause");
	return 0;
}