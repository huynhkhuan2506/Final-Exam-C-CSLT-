#include <iostream>
#include <math.h>

void bai1() {
	double a, b, c, S, P;
	std::cout << "Nhap vao 3 canh cua tam giac (moi canh cach nhau 1 dau cach) : ";
	std::cin >> a >> b >> c;

	P = (a + b + c) / 2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));

	std::cout << "Dien tich cua tam giac : " << S << std::endl;
	std::cout << "Chu vi cua tam giac : " << 2 * P << std::endl;
}

void bai2() {
	int a, b, c, n;

	n = 1;

	while (n < 100 || n > 999)
	{
		std::cout << "Nhap vao so co 3 chu so : ";
		std::cin >> n;

		a = n % 10;

		b = (n / 10) % 10;

		c = n / 100;
	}
	switch (c)
	{
		case 0 :
			std::cout << "Khong tram";
			break;
		case 1 :
			std::cout << "Mot tram";
			break;
		case 2:
			std::cout << "Hai tram";
			break;
		case 3:
			std::cout << "Ba tram";
			break;
		case 4:
			std::cout << "Bon tram";
			break;
		case 5:
			std::cout << "Nam tram";
			break;
		case 6:
			std::cout << "Sau tram";
			break;
		case 7:
			std::cout << "Bay tram";
			break;
		case 8:
			std::cout << "Tam tram";
			break;
		case 9:
			std::cout << "Chin tram";
			break;
		default:
			break;
	}

	switch (b) {
		case 0:
			std::cout << " le";
			break;
		case 1:
			std::cout << " muoi";
			break;
		case 2:
			std::cout << " hai muoi";
			break;
		case 3:
			std::cout << " ba muoi";
			break;
		case 4:
			std::cout << " bon muoi";
			break;
		case 5:
			std::cout << " nam muoi";
			break;
		case 6:
			std::cout << " sau muoi";
			break;
		case 7:
			std::cout << " bay muoi";
			break;
		case 8:
			std::cout << " tam muoi";
			break;
		case 9:
			std::cout << " chin muoi";
			break;
		default:
			break;
	}

	switch (a) {
		case 0:
			std::cout << " khong";
			break;
		case 1:
			std::cout << " mot";
			break;
		case 2:
			std::cout << " hai";
			break;
		case 3:
			std::cout << " ba";
			break;
		case 4:
			std::cout << " bon";
			break;
		case 5:
			std::cout << " nam";
			break;
		case 6:
			std::cout << " sau";
			break;
		case 7:
			std::cout << " bay";
			break;
		case 8:
			std::cout << " tam";
			break;
		case 9:
			std::cout << " chin";
			break;
		default:
			break;
	}
}

void bai3() {
	int so_nguyen = 1;

	int a, b, c;

	while (so_nguyen < 100 || so_nguyen > 999)
	{
		std::cout << "\nNhap so nguyen 3 chu so : ";
		std::cin >> so_nguyen;

		if (so_nguyen < 100 || so_nguyen > 999) {
			std::cout << "Khong hop le!";
			continue;
		}
		else {
			a = so_nguyen % 10;
			b = (so_nguyen / 10) % 10;
			c = so_nguyen / 100;

			switch (c) {
				case 0:
					std::cout << "Khong tram";
					break;
				case 1:
					std::cout << "Mot tram";
					break;
				case 2:
					std::cout << "Hai tram";
					break;
				case 3:
					std::cout << "Ba tram";
					break;
				case 4:
					std::cout << "Bon tram";
					break;
				case 5:
					std::cout << "Nam tram";
					break;
				case 6:
					std::cout << "Sau tram";
					break;
				case 7:
					std::cout << "Bay tram";
					break;
				case 8:
					std::cout << "Tam tram";
					break;
				case 9:
					std::cout << "Chin tram";
					break;
				default:
					break;
			}

			switch (b) {
				case 0:
					std::cout << " le";
					break;
				case 1:
					std::cout << " muoi";
					break;
				case 2:
					std::cout << " hai muoi";
					break;
				case 3:
					std::cout << " ba muoi";
					break;
				case 4:
					std::cout << " bon muoi";
					break;
				case 5:
					std::cout << " nam muoi";
					break;
				case 6:
					std::cout << " sau muoi";
					break;
				case 7:
					std::cout << " bay muoi";
					break;
				case 8:
					std::cout << " tam muoi";
					break;
				case 9:
					std::cout << " chin muoi";
					break;
				default:
					break;
			}

			switch (a) {
				case 0:
					std::cout << " khong";
					break;
				case 1:
					std::cout << " mot";
					break;
				case 2:
					std::cout << " hai";
					break;
				case 3:
					std::cout << " ba";
					break;
				case 4:
					std::cout << " bon";
					break;
				case 5:
					std::cout << " nam";
					break;
				case 6:
					std::cout << " sau";
					break;
				case 7:
					std::cout << " bay";
					break;
				case 8:
					std::cout << " tam";
					break;
				case 9:
					std::cout << " chin";
					break;
				default:
					break;
			}
		}
	}
}

void menu() {
	int choice;
	while (true) {
		system("cls");
		std::cout << "============================ MENU ============================";
		std::cout << "\n1. Tinh chu vi va tam giac hinh tam giac theo 3 canh da cho a, b, c";
		std::cout << "\n2. Nhap vao 3 so va cach doc 3 so do";
		std::cout << "\n3. Nhap vao so co toi da 3 so va cach doc 3 so do" << std::endl;
		std::cout << "\nNhap lua chon cua ban : ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3();
			break;
		default:
			std::cout << "Lua chon khong hop le. Vui long chon lai \n";
			break;
		}
		std::cout << "\n\nNhan Enter de tro ve MENU...";
		std::cin.ignore();
		std::cin.get();
	}
}

int main() {
	menu();
	return 0;
}