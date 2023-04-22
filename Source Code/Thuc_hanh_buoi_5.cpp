#include <iostream>

/*
	BAI THUC HANH BUOI 5 (14.03.2023) - CO SO LAP TRINH - C++
	CODE BY HUYNH KHUAN | CT06A | HVUH.
*/

void bai13()
{

	/*
		Chuong trinh nhap vao so nguyen duong n va dem n co bao nhieu chu so!
		Code by Huynh Khuan
	*/

	// Khai bao cac bien n, count_numbers (dung de dem chu so), positive_number dung de kiem tra neu = false thi ket thuc vong lap
	int n{};
	int count_numbers = 0;
	bool positive_number = true;

	std::cout << "\n\t-> Chuong trinh nhap vao so nguyen duong n va dem n co bao nhieu chu so! <-" << std::endl;

	// Vong lap while se duoc lap neu positive_number = true va neu positive = false thi ket thuc chuong trinh
	while (positive_number == true)
	{
		std::cout << "\nNhap mot so nguyen duong n : ";
		std::cin >> n;

		// Khai bao bien original_numbers = n (de luu tru gia tri so ban dau cua bien n cho bien original_numbers)
		int original_numbers = n;

		// Neu n > 0 thi thuc hien khoi lenh nay
		if (n > 0)
		{
			// Vong lap while n != 0 => n = 0 thi ket thuc vong lap (vong lap dung de dem so n co bao nhieu chu so)
			while (n != 0)
			{
				// Moi lan lap la tang gia tri count_numbers + 1 va n = n / 10 (de thuc hien dem n co bao nhieu chu so)
				/*
					VD : 456733
						- B1 : count_numbers = 1.
						- B2 : n = n / 10 => 456733 / 10 = 45673.

						- B1 : count_numbers = 2.
						- B2 : n = n / 10 => 45673 / 10 = 4567.

						- B1 : count_numbers = 3.
						- B2 : n = n / 10 => 4567 / 10 = 456.

						- B1 : count_numbers = 4.
						- B2 : n = n / 10 => 456 / 10 = 45.

						- B1 : count_numbers = 5.
						- B2 : n = n / 10 => 45 / 10 = 4.

						- B1 : count_numbers = 6.
						- B2 : n = n / 10 => 4 / 10 = 0.
					=> Luc nay n = 0 (khong thoa dieu kien cua vong lap while) => ket thuc vong lap va count_numbers = 6 chu so.
				*/
				count_numbers++;
				n = n / 10;
			}

			std::cout << "\n-> \tSo " << original_numbers << " co " << count_numbers << " chu so!" << std::endl;
			positive_number = false; // thay doi gia tri cua positive_number = false de ket thuc vong lap.
		}
		else
		{
			std::cout << "Hay nhap vao mot so nguyen duong... Moi nhap lai!" << std::endl;
		}
	}
}

void bai14()
{

	/*
		Nhap N1, N2 (N1 < N2) va dem co bao nhieu so le tu N1 => N2 (khoang tu N1 toi N2)!
		Code by Huynh Khuan
	*/

	// Khai bao bien N1 va N2
	int N1{}, N2{};
	int count_odd_numbers = 0; // khai bao bien de dem so le = 0

	std::cout << "\n\t-> Nhap N1, N2 (N1 < N2) va dem co bao nhieu so le tu N1 => N2 (khoang tu N1 toi N2)! <-" << std::endl;

	// Vong lap while (lap lai neu N1 > N2)
	while (true)
	{
		std::cout << "\nNhap so nguyen N1 : ";
		std::cin >> N1;
		std::cout << "Nhap so nguyen N2 : ";
		std::cin >> N2;
		
		// Neu N1 < N2 thi thuc hien khoi lenh :
		if (N1 < N2)
		{
			// Su dung vong lap for de duyet tu N1 => N2.
			// Khai bao bien i = N1 va duyet tu N1 <= N2, tang i++.
			for (int i = N1; i <= N2; i++)
			{
				// neu i (N1) % 2 != 0 thi la so le => tang gia tri count_odd_numbers len 1 don vi => count_odd_numbers++.
				if (i % 2 != 0)
				{
					count_odd_numbers++;
				}
			}

			/*
				VD : N1 = 10, N2 = 20 (vong lap for duyet tu i <= N2 [duyet tu N1 toi N2])
					- B1 : 10 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 11 % 2 != 0 => count_odd_numbers = 1.

					- B1 : 12 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 13 % 2 != 0 => count_odd_numbers = 2.

					- B1 : 14 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 15 % 2 != 0 => count_odd_numbers = 3.

					- B1 : 16 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 17 % 2 != 0 => count_odd_numbers = 4.

					- B1 : 18 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 19 % 2 != 0 => count_odd_numbers = 5.

					- B1 : 20 % 2 == 0 => khong thay doi gia tri count_odd_numbers.
					- B2 : 21 % 2 != 0 (nhung N1 = 21 > N2 => ket thuc vong lap for).

				=> Gia tri cua i khi ket thuc vong lap : 21.
				=> Gia tri cua count_odd_numbers khi ket thuc vong lap : 5.
			*/

			std::cout << "\n->\tN1 toi N2 co " << count_odd_numbers << " so le!" << std::endl;
			break;
		}
		else
		{
			std::cout << "\nHay nhap N1 < N2... moi nhap lai!" << std::endl;
		}
	}
}

void bai15()
{

	/*
		Chuong trinh nhap vao cac so nguyen n va xuat ra so lon nhat (nhap 0 de ket thuc)!

		Code by Huynh Khuan
	*/

	int n{}; // khi khoi tao bien n voi int thi n duoc gan gia tri rac ngau nhien, vi vay n{} dam bao rang n duoc khoi tao voi gia tri 0
	int biggest_numbers = std::numeric_limits<int>::min(); // khoi tao gia tri nho nhat cho bien int = -2 ty ...
	// vi neu khoi tao gia tri la = 0 thi khi nguoi dung nhap vao so am thi chuong trinh se bi loi.

	std::cout << "\n\t-> Chuong trinh nhap vao cac so nguyen n va xuat ra so lon nhat (nhap 0 de ket thuc)! <- " << std::endl;

	while (true)
	{
		std::cout << "\nNhap so nguyen n : ";
		std::cin >> n;

		if (std::cin.fail()) // cau lenh fail kiem tra nguoi dung co nhap gia tri khong phai so nguyen hay khong. Neu dung thi tra ve TRUE => cau lenh cout duoc thuc hien
		{
			std::cout << "\n\tNhap khong hop le, moi ban nhap lai.\n";
			std::cin.clear(); // xoa trang thai loi cua cin
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // bo qua cac ky tu tren dong hien tai cua std::cin
		}
		
		// neu nguoi dung nhap vao n == 0 thi break va ket thuc vong lap
		else if (n == 0)
		{
			break;
		}
		else
		{ 
			// neu biggest_numbers < n thi cap nhat biggest_numbers = n;
			/*
				VD : N1 = -2, N2 = 30, N3 = 40, N4 = 10, N5 = 0 (ket thuc vong lap) xuat ra ket qua biggest_numbers = 40
			*/

			if (biggest_numbers < n)
			{
				biggest_numbers = n;
			}
		}
	}

	std::cout << "\n->\tSo lon nhat la : " << biggest_numbers << std::endl;
}

void menu() {
	int choice{};
	while (true) {
		system("cls");
		std::cout << "===================================== MENU =====================================";
		std::cout << "\n\t\t\t  ==> Code by Huynh Khuan <==";
		std::cout << "\n13. Chuong trinh nhap vao so nguyen duong n va dem n co bao nhieu chu so!" << std::endl;
		std::cout << "\n14. Nhap N1, N2 (N1 < N2) va dem co bao nhieu so le tu N1 => N2 (khoang tu N1 toi N2)!" << std::endl;
		std::cout << "\n15. Chuong trinh nhap vao cac so nguyen n va xuat ra so lon nhat (nhap 0 de ket thuc)!" << std::endl;
		std::cout << "\n================================================================================" << std::endl;
		std::cout << "\nNhap lua chon cua ban : ";
		std::cin >> choice;

		switch (choice) {
		case 13:
			bai13();
			break;
		case 14:
			bai14();
			break;
		case 15:
			bai15();
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

int main()
{
	menu();
}