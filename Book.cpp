#include "bookDescription.h"
Book::Book(int price, int numberOfPages, string author, int quantity, int numberOfSales, string name) {
	this->price = price;
	this->numberOfPages = numberOfPages;
	this->author = author;
	this->quantity = quantity;
	this->numberOfSales = numberOfSales;
	this->name = name;

}
Book::Book() {
	this->price = 0;
	this->numberOfPages = 0;
	this->author = "";
	this->quantity = 0;
	this->numberOfSales = 0;
	this->name = "";
}
void Book::inputBooks() {
	cout << "Enter price: ";
	cin >> this->price;
	cout << "Enter number of pages: ";
	cin >> this->numberOfPages;
	cin.ignore();
	cout << "Enter author: ";
	getline(cin,this->author);
	cout << "Enter quantity: ";
	cin >> this->quantity;
	cout << "Enter number of sales: ";
	cin >> this->numberOfSales;
	cin.ignore();
	cout << "Enter name: ";
	getline(cin,this->name);

}
void Book::outputBooks() {
	cout << "Price:"<<this->price<<endl;
	cout << "Number of pages"<<this->numberOfPages<<endl;
	cout << "Author:"<< this->author<<endl;
	cout << "Quantity:"<<this->quantity<<endl;
	cout << "Mumber of sales:"<< this->numberOfSales<<endl;
	cout << "Name:"<< this->name<<endl;

}