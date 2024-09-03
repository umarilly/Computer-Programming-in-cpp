
/*
    Project: Restaurant Online Order System
*/

#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct cart {
	char type[5];
	string item[5];
	string addOns[5];
	string size[5];
	int qty[5];
	int price[5];
	int index = 0;
	int totalPrice = 0;
};

cart cart1;

bool cartIsEmpty() {
	if (cart1.item[0].length() == 0)
		return true;
	return false;
}

void showDrink(int i) {
	cout << i + 1 << ". " << cart1.item[i]<<" ("<<cart1.size[i]<<")"<<"\tQuantity: "<<cart1.qty[i]<<"\tPrice: "<<cart1.price[i]<<endl;
}

void showFries(int i) {
	cout << i + 1 << ". " << cart1.item[i] << " Fries (" << cart1.size[i] << ")" << "\tQuantity: " << cart1.qty[i] << "\tPrice: " << cart1.price[i] << endl;
}

void showBurger(int i) {
	cout << i + 1 << ". " << cart1.item[i] <<" "<<cart1.size[i]<<" Burger (" << (cart1.addOns[i] == "1" ? "With": "Without") << " Cheese)" << "\tQuantity: " << cart1.qty[i] << "\tPrice: " << cart1.price[i] << endl;
}

void showCart() {
	cout<<"------------------------------------------------------------------------\nYOUR CART\n\n";
	if (cartIsEmpty()) {
		cout << "EMPTY";
	}
	else {
		for (int i = 0; i < cart1.index; i++) {
			switch (cart1.type[i]) {
			case 'd':
				showDrink(i);
				break;
			case 'f':
				showFries(i);
				break;
			case 'b':
				showBurger(i);
				break;
			}
		}
	}
	cout << "\n\nTotal Price: " << cart1.totalPrice << endl;
	cout <<"\n------------------------------------------------------------------------";
}

void clearCart() {
	for (int i = 0; i < cart1.index; i++) {
		cart1.addOns[i] = "";
		cart1.item[i] = "";
		cart1.size[i] = "";
		cart1.type[i] = ' ';
		cart1.price[i] = 0;
		cart1.qty[i] = 0;
	}
	cart1.totalPrice = 0;
	cart1.index = 0;
}

void checkout() {
	system("cls");
	if (cartIsEmpty()) {
		cout << "Your cart is empty. Please add items and try again.";
		_getch();
	}
	else {
		string name, address, phone;
		showCart();
		cout << "\n\nCustomer Name: ";
		getline(cin, name);
		getline(cin, name);
		cout << "Address: ";
		getline(cin, address);
		cout << "Phone: ";
		getline(cin, phone);
		cout << "\n\nThank you. Your order has been received.\n\nTOTAL BILL: Rs." << cart1.totalPrice;
		_getch();
		clearCart();
	}
}

void burger() {
	system("cls");
	int choice, qty;
	cout << "Add burger\n\n1. Chicken\n2. Spicy Chicken\n3. Zinger\n4. Beef\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.item[cart1.index] = "Chicken";
		break;
	case 2:
		cart1.item[cart1.index] = "Spicy Chicken";
		break;
	case 3:
		cart1.item[cart1.index] = "Zinger";
		break;
	case 4:
		cart1.item[cart1.index] = "Beef";
		break;
	}
	cout << "\nAdd on:\n\n1. With cheese (+ Rs. 30)\n2. Without cheese\n\nChoice: ";
	cin >> choice;
	cart1.addOns[cart1.index] = choice == 1 ? "1" : "2";
	cout << "\nChoose size\n\n1. Single Patty (Rs. 300)\n2. Double Patty (Rs.500)\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.size[cart1.index] = "Single Patty";
		choice = 300;
		break;
	case 2:
		cart1.size[cart1.index] = "Double Patty";
		choice = 500;
		break;
	}
	if (cart1.addOns[cart1.index] == "1") {
		choice += 30;
	}
	cout << "Enter quantiy: ";
	cin >> qty;
	cart1.qty[cart1.index] = qty;
	cart1.price[cart1.index] = qty * choice;
	cart1.totalPrice += qty * choice;
	cart1.type[cart1.index] = 'b';
	cart1.index++;
}

void fries() {
	system("cls");
	int choice, qty;
	cout << "Add fries\n\n1. Plain\n2. Garlic Mayo\n3. Masala\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.item[cart1.index] = "Plain";
		break;
	case 2:
		cart1.item[cart1.index] = "Garlic Mayo";
		break;
	case 3:
		cart1.item[cart1.index] = "Masala";
		break;
	}
	cart1.addOns[cart1.index] = "-1";
	cout << "\nChoose size\n\n1. Regular (Rs. 110)\n2. Large (Rs.160)\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.size[cart1.index] = "Regular";
		choice = 110;
		break;
	case 2:
		cart1.size[cart1.index] = "Large";
		choice = 160;
		break;
	}
	cout << "Enter quantiy: ";
	cin >> qty;
	cart1.qty[cart1.index] = qty;
	cart1.price[cart1.index] = qty * choice;
	cart1.totalPrice += qty * choice;
	cart1.type[cart1.index] = 'f';
	cart1.index++;
}

void drink() {
	system("cls");
	int choice, qty;
	cout << "Add drink\n\n1. Pepsi\n2. 7up\n3. Mirinda\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.item[cart1.index] = "Pepsi";
		break;
	case 2:
		cart1.item[cart1.index] = "7up";
		break;
	case 3:
		cart1.item[cart1.index] = "Mirinda";
		break;
	}
	cart1.addOns[cart1.index] = "-1";
	cout << "\nChoose size\n\n1. 250 ML (Rs. 30)\n2. 1.5 L (Rs.100)\n\nChoice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cart1.size[cart1.index] = "250 ML";
		choice = 30;
		break;
	case 2:
		cart1.size[cart1.index] = "1.5 L";
		choice = 100;
		break;
	}
	cout << "Enter quantiy: ";
	cin >> qty;
	cart1.qty[cart1.index] = qty;
	cart1.price[cart1.index] = qty * choice;
	cart1.totalPrice += qty * choice;
	cart1.type[cart1.index] = 'd';
	cart1.index++;
}

void showItems() {
	system("cls");
	int choice;
	while (true) {
		cout << "Add items to cart\n\n1. Burger\n2. Fries\n3. Drink\n4. Go back\n\nChoice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			burger();
			return;
		case 2:
			fries();
			return;
		case 3:
			drink();
			return;
		case 4:
			return;
			break;
		default:
			cout << "Invalid choice. Try again\nPress any key to continue.";
			_getch();
			system("cls");
		}
	}
}

int main() {
	while (true) {
		int choice;
		cout << "Restaurant Online Order\n\n" << endl;
		cout << "1. Buy\n2. Checkout\n3. Exit\n\n";
		showCart();
		cout << "\n\nChoice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			showItems();
			system("cls");
			break;
		case 2:
			checkout();
			system("cls");
			break;
		case 3:
			exit(0);
		default:
			cout << "\nInvalid choice. Try again.\nPress any key to continue";
			_getch();
			system("cls");
		}
	}
}