#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

void baitap1() {
	
	// Chuong trinh nhap so nguyen va kiem tra la so CHAN - LE va AM - DUONG
	// Code by Huynh Khuan

	int n; std::cout << "\nNhap so nguyen n : "; std::cin >> n;

	if (n % 2 == 0) {
		std::cout << "\nn la so chan!" << std::endl;
	}
	else {
		std::cout << "\nn la so le!" << std::endl;
	}

	if (n < 0) {
		std::cout << "\nn la so am!" << std::endl;
	}
	else {
		std::cout << "\nn la so duong!" << std::endl;
	}
}

void baitap2() {
	
	// Chuong trinh nhap 3 so nguyen va kiem tra so nguyen nam nho nhat
	// Code by Huynh Khuan

	int a, b, c;
	std::cout << "\nNhap vao so nguyen thu 1 : "; std::cin >> a;
	std::cout << "Nhap vao so nguyen thu 2 : "; std::cin >> b;
	std::cout << "Nhap vao so nguyen thu 3 : "; std::cin >> c;
	
	// cho bien so_nho_nhat = a
	int so_nho_nhat = a;

	// neu b < so_nho_nhat => cap nhat gia tri so_nhat_nhat = b
	if (b < so_nho_nhat) {
		so_nho_nhat = b;
	}

	// neu c < so_nho_nhat => cap nhat gia tri so_nhat_nhat = c
	// o day khong su dung else hoac else if boi vi neu nhap 3 so : 20 2 1 thi so_nho nhat = 20 va no kiem tra dieu kien dau tien
	// 2 < 20 => so_nho_nhat = 2 va se ket thuc cau lenh if nen su dung else hoac else if la khong phu hop
	// nen su dung if => if (neu b < so_nho_nhat => cap nhat b, neu c < so_nho_nhat => cap nhat c).
	if (c < so_nho_nhat) {
		so_nho_nhat = c;
	}

	std::cout << "So nho nhat trong 3 so la : " << so_nho_nhat << std::endl;
}

void baitap3() {

	// Chuong trinh C++ nhap ho va ten hoc sinh, in ra duoi dang IN HOA. Nhap diem cua hoc sinh va xep hang hoc luc cua hoc sinh
	// Code by Huynh Khuan

	float final_score;
	std::string HoTen;

	std::cout << "\nNhap ho ten cua hoc sinh : "; 
	std::cin.ignore();
	std::getline(std::cin, HoTen); //ham getline lay ca ki tu khoang trang
	transform(HoTen.begin(), HoTen.end(), HoTen.begin(), ::toupper); // ham transform in hoa cac chu da nhap

	std::cout << "Nhap diem thi cuoi ki cua hoc sinh : ";
	std::cin >> final_score;

	std::cout << "Ho va ten cua hoc sinh : " << HoTen << std::endl; // in ra ho va ten cua hoc sinh da IN HOA

	// cau truc re nhanh :
		// if >= 8 -> gioi
		// else if < 8 va >= 6.5 -> kha
		// else if < 6.5 va >= 5 -> trung binh
		//else -> Yeu (final_score < 5)

	if (final_score >= 8) {
		std::cout << "Xep hang : 'Gioi'!";
	}
	else if (final_score < 8 && final_score >= 6.5) {
		std::cout << "Xep hang : 'Kha'!";
	}
	else if (final_score < 6.5 && final_score >= 5) {
		std::cout << "Xep hang : 'Trung Binh'!";
	}
	else {
		std::cout << "Xep hang : 'Yeu'!";
	}
}

void baitap4() {
	
	// Viet chuong trinh giai phuong trinh bac 1
	// Code by Huynh Khuan

	float b, c, x;
	std::cout << "\nNhap he so b : "; std::cin >> b;
	std::cout << "Nhap he so c : "; std::cin >> c;
	
	if (b == 0 && c == 0) {
		std::cout << "Phuong trinh vo so nghiem!";
	}
	else if (b == 0 && c != 0) {
		std::cout << "Phuong trinh vo nghiem!";
	}
	else {
		x = -c / b;
		std::cout << "Phuong trinh co nghiem duy nhat la : " << "x = " << x;
	}
}

void baitap5() {

	// Chuong trinh giai phuong trinh bac 2 (ax2 - bx + c = 0)
	// Code by Huynh Khuan

	float a, b, c, x1, x2, delta;

	std::cout << "\nNhap he so a : "; std::cin >> a;
	std::cout << "Nhap he so b : "; std::cin >> b;
	std::cout << "Nhap he so c : "; std::cin >> c;

	delta = pow(b, 2) - (4 * a * c);

	if (delta < 0) {
		std::cout << "\nPhuong trinh vo nghiem!";
	}
	else if (delta == 0) {
		std::cout << "\nPhuong trinh co nghiem kep x1 = x2 = " << -b / 2 * a;
	}
	else {
		x1 = (- b + sqrt(delta)) / (2 * a);
		x2 = (- b - sqrt(delta)) / (2 * a);
		std::cout << "\nPhuong trinh co 2 nghiem phan biet!\n\tx1 = " << x1 << "\n\tx2 = " << x2;
	}
}

void baitap6() {

	// Chuong trinh nhap so nguyen duong, toi khi nhan duoc so nguyen duong thi dung chuong trinh
	// Code by Huynh Khuan

	int n = -1;
	while (n < 0) {
			std::cout << "\nNhap so nguyen duong : ";
			std::cin >> n;

			if (n < 0) {
				std::cout << "\n\tKhong hop le! Vui long nhap lai...\n" << std::endl;
			}
			else {
				std::cout << "\n\tHop le!" << std::endl;
				std::cout << "\nSo nguyen duong ban vua nhap la : " << n << std::endl;
			}
	}
}

void baitap7() {

	// Chuong trinh nhap vao 1 so va kiem tra so do co phai so nguyen to hay khong
	// Code by Huynh Khuan

	int n;
	bool so_nguyen_to = true;

	std::cout << "\nNhap vao so nguyen : ";
	std::cin >> n;

	if (n <= 1) {
		so_nguyen_to = false;
	}
	else {
		int i = 2;
		while (i <= sqrt(n) && so_nguyen_to == true) {
			if (n % i == 0) {
				so_nguyen_to = false;
			}
			i++;
		}
	}

	if (so_nguyen_to == true) {
		std::cout << "n = " << n << " la so nguyen to!" << std::endl;
	}
	else {
		std::cout << "n = " << n << " khong la so nguyen to!" << std::endl;
	}
}

void baitap8() {

	// Chuong trinh nhap mot nam va kiem tra xem co phai nam NHUAN hay khong 
	// Code by Huynh Khuan

	int nam;
	std::cout << "\nNhap vao mot nam duong lich : ";
	std::cin >> nam;

	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
		std::cout << "Nam " << nam << " la nam nhuan!" << std::endl;
	}
	else {
		std::cout << "Nam " << nam << " khong la nam nhuan!" << std::endl;
	}
}

void menu() {
	int choice;
	while (true) {
		system("cls");
		std::cout << "===================================== MENU =====================================";
		std::cout << "\n\t\t\t  ==> Code by Huynh Khuan <==";
		std::cout << "\n1. Chuong trinh nhap so nguyen, cho biet so nguyen la so CHAN hay LE va so AM hay DUONG" << std::endl;
		std::cout << "\n2. Chuong trinh nhap vao 3 so nguyen. In ra man hinh so nho nhat trong 3 so do" << std::endl;
		std::cout << "\n3. Chuong trinh nhap ho ten, diem so, in ra man hinh ho ten IN HOA va phan loai hoc luc" << std::endl;
		std::cout << "\n4. Chuong trinh giai phuong trinh bac 1" << std::endl;
		std::cout << "\n5. Chuong trinh giai phuong trinh bac 2" << std::endl;
		std::cout << "\n6. Chuong trinh nhap so nguyen duong, toi khi nhan duoc so nguyen duong thi dung chuong trinh" << std::endl;
		std::cout << "\n7. Chuong trinh nhap vao 1 so va kiem tra so do co phai so nguyen to hay khong ?" << std::endl;
		std::cout << "\n8. Chuong trinh nhap mot nam va kiem tra xem co phai nam NHUAN hay khong ?" << std::endl;
		std::cout << "\n================================================================================" << std::endl;
		std::cout << "\nNhap lua chon cua ban : ";
		std::cin >> choice;

		switch (choice) {
			case 1:
				baitap1();
				break;
			case 2:
				baitap2();
				break;
			case 3:
				baitap3();
				break;
			case 4:
				baitap4();
				break;
			case 5:
				baitap5();
				break;
			case 6:
				baitap6();
				break;
			case 7:
				baitap7();
				break;
			case 8:
				baitap8();
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