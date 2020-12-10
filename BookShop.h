#include"bookDescription.h"
#include <vector>

class BookShop{
public:
	Book books[10];
    void inputBooks(int n);
	void outputBooks(int n);
	void sortBooksByPrice(int n);
	void sortBooksBySales(int n);
};
