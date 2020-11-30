#include "BookShopHeader.h"
#include "bookHead.h"

void BookShop::inputBooks(int n) {
	for (int i = 0; i < n; i++) {
		this->books[i].InputBook();
		}
}
void BookShop::outputBooks(int n) {
	for (int i = 0; i < n; i++) {
		this->books[i].OutputBook();
	}
}
void BookShop::SortBooksByPrice(int n) {
	Book price;
			for (int i = 0; i < n - 1; i++)
			for (int j = n - 1; j >= i + 1; j--)
			 if (this->books[j].price < this->books[j - 1].price)
				{
					price = this->books[j];
					this->books[j] = this->books[j - 1];
					this->books[j - 1] = price;
				}
}
void BookShop::SortBooksBySales(int n) {
	Book sales;
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j >= i + 1; j--)
			if (this->books[j].numberOfSales < this->books[j - 1].numberOfSales)
			{
				sales = this->books[j];
				this->books[j] = this->books[j - 1];
				this->books[j - 1] = sales;
			}
}