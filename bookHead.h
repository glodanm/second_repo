#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#pragma once
class Book {
private:
	int numberOfPages;
	string author ;
	int quantity;
	string name;
public:
	int price;
	int numberOfSales;
	Book (int price, int numberOfPages, string author, int quantity, int numberOfSales, string name);
    void InputBook();
	void OutputBook();
	Book();

};
