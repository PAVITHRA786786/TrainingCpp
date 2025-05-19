/*
Simple inventory management,menudriven,add products,types,category.provide add/remove/update inventory,search and listing.
*/

#include <iostream>
#include <cstring>

using namespace std;

typedef struct Product {
	int id;
	char name[50];
	char type[50];
	char category[50];
	int quantity;
	float price;
}PROD;


int add(PROD *,int);
int del(PROD *,int);
int update(PROD *,int);
int search(PROD *,int);
int display(PROD *,int);
int menu();

int main()
{
	PROD product[100];
	int count = 0;
	int ch;
	while (1)
	{
		ch = menu();
		switch (ch)
		{
		default:
			cout << "Invalid choice! Please try again." << endl;
			break;

		case 1:
			count = add(product, count);
			break;
		case 2:
			count = del(product, count);
			break;
		case 3:
			count = update(product, count);
			break;
		case 4:
			count = search(product, count);
			break;
		case 5:
			display(product, count);
			break;
		case 6:
			exit(0);
			break;
		}
	}

	return 0;

}

int add(PROD* product, int count)
{
	if (count >= 100) 
	{
		cout << "Inventory is full. Cannot add more products." << endl;
		return count;
	}

	cout << "Enter product ID: ";
	cin >> product[count].id;

	cout << "Enter product name: ";
	cin.ignore();
	cin.getline(product[count].name, 50);

	cout << "Enter product type: ";
	cin.getline(product[count].type, 50);

	cout << "Enter product category: ";
	cin.getline(product[count].category, 50);

	cout << "Enter product quantity: ";
	cin >> product[count].quantity;

	cout << "Enter product price: ";
	cin >> product[count].price;

	cout << "Product added successfully!" << endl;
	count++;
	return count;
}
int del(PROD* product, int count)
{
	int id;
	cout << "Enter product ID to remove: ";
	cin >> id;

	for (int i = 0; i < count; i++) {
		if (product[i].id == id) {
			for (int j = i; j < count - 1; j++) {
				product[j] = product[j + 1];
			}
			cout << "Product removed successfully!" << endl;
			return count - 1;
		}
	}

	cout << "Product not found!" << endl;
	return count;
}

int update(PROD* product, int count)
{
	int id;
	cout << "Enter product ID to update: ";
	cin >> id;

	for (int i = 0; i < count; i++) {
		if (product[i].id == id) {
			cout << "Enter new product name: ";
			cin.ignore();
			cin.getline(product[i].name, 50);

			cout << "Enter new product type: ";
			cin.getline(product[i].type, 50);

			cout << "Enter new product category: ";
			cin.getline(product[i].category, 50);

			cout << "Enter new product quantity: ";
			cin >> product[i].quantity;

			cout << "Enter new product price: ";
			cin >> product[i].price;

			cout << "Product updated successfully!" << endl;
			return count;
		}
	}

	cout << "Product not found!" << endl;
	return count;
}

int search(PROD* product, int count)
{
	int id;
	cout << "Enter product ID to search: ";
	cin >> id;

	for (int i = 0; i < count; i++) {
		if (product[i].id == id) {
			cout << "Product found!" << endl;
			cout << "ID: " << product[i].id << endl;
			cout << "Name: " << product[i].name << endl;
			cout << "Type: " << product[i].type << endl;
			cout << "Category: " << product[i].category << endl;
			cout << "Quantity: " << product[i].quantity << endl;
			cout << "Price: " << product[i].price << endl;
			return count;
		}
	}

	cout << "Product not found!" << endl;
	return count;
}

int display(PROD* product, int count)
{
	if (count == 0) 
	{
		cout << "No products in inventory." << endl;
		return 0;
	}

	cout << "Product List:" << endl;
	for (int i = 0; i < count; i++) 
	{
		cout << "ID: " << product[i].id << endl;
		cout << "Name: " << product[i].name << endl;
		cout << "Type: " << product[i].type << endl;
		cout << "Category: " << product[i].category << endl;
		cout << "Quantity: " << product[i].quantity << endl;
		cout << "Price: " << product[i].price << endl;
		cout << endl;
	}
	return 1;
}

int menu()
{
	int ch;
	cout << endl;
	cout << "Inventory Management System" << endl;
	cout << "1. Add Product" << endl;
	cout << "2. Remove Product" << endl;
	cout << "3. Update Product" << endl;
	cout << "4. Search Product" << endl;
	cout << "5. Display Products" << endl;
	cout << "6. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> ch;
	return ch;
}