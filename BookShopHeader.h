#include"bookHead.h"
#include <vector>

class BookShop{
public:
	Book books[10];
    void inputBooks(int n);
	void outputBooks(int n);
	void SortBooksByPrice(int n);
	void SortBooksBySales(int n);
};
