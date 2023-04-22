#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

/* 
	BAI TAP CHUONG 3 - CAU LENH RE NHANH
*/

void bai1()
{
	// Viet chuong trinh nhap vao 1 so nguyen n cho biet n la CHAN - LE AM - DUONG

	std::cout << "\n\tBai 1 - Chuong trinh nhap so nguyen, cho biet so nguyen la so CHAN hay LE va so AM hay DUONG" << std::endl;

	int n;

	std::cout << "\nNhap n : ";
	std::cin >> n;

	if (n < 0)
	{
		std::cout << "\nn la so am";
	}
	else
	{
		std::cout << "\nn la so duong";
	}
	if (n % 2 == 0)
	{
		std::cout << "\n\nn la so chan";
	}
	else
	{
		std::cout << "\n\nn la so le";
	}

}

void bai2()
{
	
	// Chuong trinh nhap 3 so nguyen va xuat ra so nho nhat trong 3 so

	std::cout << "\n\tBai 2 - Chuong trinh nhap vao 3 so nguyen. In ra man hinh so nho nhat trong 3 so do" << std::endl;

	int a, b, c;
	
	std::cout << "\nNhap so nguyen thu nhat a = ";
	std::cin >> a;

	std::cout << "Nhap so nguyen thu nhat b = ";
	std::cin >> b;

	std::cout << "Nhap so nguyen thu nhat c = ";
	std::cin >> c;

	int so_nho_nhat = a;

	if (b < so_nho_nhat)
	{
		so_nho_nhat = b;
	}
	if (c < so_nho_nhat)
	{
		so_nho_nhat = c;
	}

	std::cout << "So nho nhat trong 3 so la : " << so_nho_nhat << std::endl;
}

void bai3()
{
	
	// Chuong trinh nhap ten va diem thi cua hoc sinh cho ra ket qua hoc tap
	
	std::cout << "\n\tBai 3 - Chuong trinh nhap ho ten, diem so, in ra man hinh ho ten IN HOA va phan loai hoc luc " << std::endl;

	std::cin.ignore();

	float final_score;
	std::string students_name;

	std::cout << "\nNhap ho va ten cua hoc sinh : ";
	std::getline(std::cin, students_name);
	transform(students_name.begin(), students_name.end(), students_name.begin(), ::toupper);

	std::cout << "Moi nhap diem thi cuoi ki cua hoc sinh : ";
	std::cin >> final_score;

	std::cout << "\n\t- Ten cua hoc sinh la : " << students_name << std::endl;
	std::cout << "\t- Diem thi cuoi ki cua " << students_name << " la : " << final_score << std::endl;

	if (final_score >= 8)
	{
		std::cout << "\n=> Xep hang : Gioi!";
	}
	else if (final_score < 8 && final_score >= 6.5)
	{
		std::cout << "\n=> Xep hang : Kha!";
	}
	else if (final_score < 6.5 && final_score >= 5)
	{
		std::cout << "\n=> Xep hang : Trung binh!";
	}
	else
	{
		std::cout << "\n=> Xep hang : Yeu!";
	}
}

void bai4()
{
	// Chuong trinh giai phuong trinh bac 1 
	// Code by Huynh Khuan

	std::cout << "\n\tBai 4 - Chuong trinh giai phuong trinh bac 1" << std::endl;

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

void bai5()
{
	// Chuong trinh giai phuong trinh bac 2 (ax2 - bx + c = 0)
	// Code by Huynh Khuan

	std::cout << "\n\tBai 5 - Chuong trinh giai phuong trinh bac 2" << std::endl;

	double a, b, c, x1, x2, delta;

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
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		std::cout << "\nPhuong trinh co 2 nghiem phan biet!\n\tx1 = " << x1 << "\n\tx2 = " << x2;
	}
}

/*
	BAI TAP CHUONG 4 - CAU LENH LAP
*/

void bai6()
{
	// Chuong trinh nhap vao mot so nguyen duong thi dung lai
	// Code by HuynhKhuan

	std::cout << "\n\tBai 6 - Chuong trinh nhap so nguyen duong, toi khi nhan duoc so nguyen duong thi dung chuong trinh" << std::endl;

	std::cout << "\nLua chon vong lap cho cau 6 !" << std::endl;
	std::cout << "\t1 - Cau lenh while" << std::endl;
	std::cout << "\t2 - Cau lenh do-while" << std::endl;

	std::string choice;

	while (true)
	{
		std::cout << "\nMoi nhap lua chon cua ban : ";
		std::cin >> choice;

		if (choice == "1")
		{
			int n;
			bool positive_numbers = true; // khai bao bien positive_numbers = true => Neu n > 0 thi thay doi bien positive_numbers = false

			// Vong lap voi dieu kien la positive_numbers == true => Neu positive_numbers == false thi vong lap.
			while (positive_numbers == true)
			{
				// Xoa bo cac ky tu khong hop le khoi dem dau vao
				std::cout << "\nNhap vao mot so nguyen duong : ";
				if (!(std::cin >> n))
				{
					std::cout << "\n\tKhong hop le...! Xin ban nhap lai...!" << std::endl;
					std::cin.clear(); // xoa bo cac co loi dang duoc dat trong doi tuong
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // xoa bo cac ky tu khong hop le
				}
				else if (n > 0)
				{
					std::cout << "\n\tSo nguyen duong ban vua nhap la : " << n << std::endl;
					positive_numbers = false;
				}
				else
				{
					std::cout << "\n\tKhong hop le...! Xin ban nhap lai...!" << std::endl;
				}
			}
			break;
		}
		else if (choice == "2")
		{
			int n;

			// Luon xuat ra dong nhap so nguyen duong truoc khi kiem tra dieu kien
			do {
				std::cout << "Nhap vao mot so nguyen duong : ";

				// kiem tra neu nhap vao cac ky tu khong hop le thi nhap lai
				if (!(std::cin >> n)) {
					std::cout << "Khong hop le...! Xin ban nhap lai...!" << std::endl;
					std::cin.clear(); // xoa bo cac co loi con trong chuong trinh
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // xoa bo bo dem ky tu khong hop le nhu - + = enter.
				}
				else if (n > 0) {
					std::cout << "So nguyen duong ban vua nhap la : " << n << std::endl;
					break;
				}
				else {
					std::cout << "Khong hop le...! Xin ban nhap lai...!" << std::endl;
				}
			} while (true); // thuc hien vong lap neu n < 0 => vi neu n > 0 thi break khoi vong lap.
			break;
		}
		else
		{
			std::cout << "Khong co thong tin ...! Moi ban nhap lai ... !" << std::endl;
		}
	}

	
}

void bai7()
{
	// Nhap n va kiem tra n co phai so nguyen to hay khong
	// Code by Huynh Khuan

	/* KIEN THUC DAYYYY!
		Mot chut kien thuc : So nguyen to la so chia duoc cho 1 va chinh no (Neu so do chia duoc cho so nao tu 2 => can bac 2 cua chinh no thi khong la so nguyen to 
	*/

	std::cout << "\n\tBai 7 - Chuong trinh nhap vao 1 so va kiem tra so do co phai so nguyen to hay khong ?" << std::endl;

	int n;
	bool primes_numbers = true; // khai bao bien LOGIC neu n <= 1 hoac n % i (n chia duoc cho bat cu so nao tu i den can bac 2 cua n thi khong la so nguyen to)

	std::cout << "\nNhap vao mot so nguyen : ";
	std::cin >> n;

	if (n <= 1) // neu n <= 1 => khong la so nguyen to => primes_numbers = false
	{
		primes_numbers = false;
	}
	else
	{
		int i = 2; // khai bao i = 2
		while (i <= sqrt(n) && primes_numbers == true) // vong lap voi dk : i <= sqrt(n) va primes_numbers == true (vi neu khong su dung cau lenh break thi nen su dung mot dieu kien thu 2 la ca 2 dieu kien deu dung (neu n % i == 0 => false => ket thuc vong lap).
		{
			if (n % i == 0) // n % i == 0 thi primes_numbers = false => kiem tra dieu kien => sai => ket thuc vong lap va khong can su dung break.
			{
				primes_numbers = false;
			}
			i++; // tang i len 1 don vi => neu khong co i++ thi vong lap se la vong lap vo han.
		}
	}
	
	if (primes_numbers == true) // primes_numbers == true thi la so nguyen to, nguoc lai => khong la so nguyen to!
	{
		std::cout << "\n\tn = " << n << " la so nguyen to!" << std::endl;
	}
	else
	{
		std::cout << "\n\tn = " << n << " khong la so nguyen to!" << std::endl;
	}
}

void bai8()
{
	// Chuong trinh nhap vao so nam duong lich va kiem tra co la nam nhuan hay khong
	// Code by Huynh Khuan

	std::cout << "\n\tBai 8 - Chuong trinh nhap mot nam va kiem tra xem co phai nam NHUAN hay khong ?" << std::endl;

	int year;

	std::cout << "\nNhap vao so nam tinh theo duong lich : ";
	std::cin >> year;

	/*
		Nam nhuan la nam chia het cho 4 nhung khong chia het cho 100 (year % 4 == 0 && year % 100 != 0) va nam chia het cho 400 (year % 400 == 0)
	*/

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		std::cout << "\n\tNam " << year << " la nam nhuan!" << std::endl;
	}
	else
	{
		std::cout << "\n\tNam " << year << " khong la nam nhuan!" << std::endl;
	}
}

void bai9()
{
	// Chuong trinh nhap vao n va tinh tong tu i toi n
	// Code by Huynh Khuan

	std::cout << "\n\tBai 9 - Chuong trinh nhap vao so nguyen n vao in ra man hinh ket qua : S1 = 1 + 2 + 3 + ... + n - S2 = 1 + 1/2 + 1/3 + ... 1/n" << std::endl;

	// Khai bao cac bien
	int n, S1 = 0;
	double S2 = 0; // S2 khai bao = double vi 1 / n la so thuc

	std::cout << "\nNhap vao so nguyen : ";
	std::cin >> n;
	
	// Vong lap for 1 :
		// Khai bao i va cho i = 1 va lap tu i <= n (lap tu i toi n) va tang i len 1 don vi
		// Tinh tong tu i => n = S1 = S1 + i (i tang dan len)
		// Luu bien tong vao S1 va cong tang dan S1
	for (int i = 1; i <= n; i++)
	{
		S1 = S1 + i;
	}

	// Vong lap for 2 :
		// Khai bao i = 1 va cho i chay toi n, tang i++
		// S2 = S2 + 1.0 / i (tranh truong hop chia lay phan nguyen) => bien i dang la int => chia cho 1 thi se chia lay phan nguyen, con chia cho so thuc => 1.0 la so thuc => cho ra ket qua so thuc => hoac chung ta co the ep i thanh float hay double.
		// Luu bien tong vao S2
	for (int i = 1; i <= n; i++)
	{
		S2 = S2 + 1.0 / i;
	}

	std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
	std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
}

void bai10()
{
	// Chuong trinh nhap vao n cho ra day tu 1 => n va tinh tong &  trung binh cong cua day so do
	// Code by Huynh Khuan

	std::cout << "\n\tBai 10 - Chuong trinh nhap so nguyen : \n\t\ta) So nguyen tu 1 => n \n\t\tb) Tong va trung binh cong cua n so nguyen nay!" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 10" << std::endl;
	std::cout << "\t1 - Vong lap for" << std::endl;
	std::cout << "\t2 - Vong lap while" << std::endl;
	std::cout << "\t3 - Vong lap do-while" << std::endl;

	std::string choice;

	while (true)
	{
		std::cout << "\nNhap lua chon cua ban : ";
		std::cin >> choice;

		if (choice == "1")
		{
			int n, S1 = 0;
			double S2 = 0;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			// Vong lap for 1 :
			for (int i = 1; i <= n; i++) // khai bao bien i = 1 va cho i chay toi n
			{
				std::cout << i << " "; // in ra day so tu i => n (1 => n)

				S1 = S1 + i; // Tinh tong va gan vao bien S1

				S2 = S1 / double(n); // Tinh trung binh cong cua day so
			}

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else if (choice == "2")
		{
			int n, S1 = 0;
			double S2 = 0;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			int i = 1;
			while (i <= n)
			{
				std::cout << i << " ";
				S1 = S1 + i;
				S2 = S1 / double(n);
				i++;
			}

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else if (choice == "3")
		{
			int n, S1 = 0;
			double S2 = 0;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			int i = 1;
			do
			{
				std::cout << i << " ";
				S1 = S1 + i;
				S2 = S1 / double(n);
				i++;

			} while (i <= n);

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else
		{
			std::cout << "Lua chon cua ban khong dung...! Moi nhap lai...!" << std::endl;
		}
	}
}

void bai10_1()
{
	// Chuong trinh nhap vao n cho ra day tu 1 => n va tinh tong &  trung binh cong cua day so do
	// Code by Huynh Khuan
	// Ban toi uu

	std::cout << "\n\tBai 11 - Chuong trinh nhap so nguyen : \n\t\ta) So nguyen tu 1 => n \n\t\tb) Tong va trung binh cong cua n so nguyen nay!\n\t\t\tBAN TOI UU!" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 11" << std::endl;
	std::cout << "\t1 - Vong lap for" << std::endl;
	std::cout << "\t2 - Vong lap while" << std::endl;
	std::cout << "\t3 - Vong lap do-while" << std::endl;

	std::string choice;

	while (true)
	{
		std::cout << "\nMoi nhap lua chon cua ban : ";
		std::cin >> choice;

		if (choice == "1")
		{
			int n, S1 = 0;
			double S2;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			for (int i = 1; i <= n; i++)
			{
				std::cout << i << " ";

				S1 = S1 + i;
			}

			S2 = S1 / double(n);

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else if (choice == "2")
		{
			int n, S1 = 0;
			double S2;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			int i = 1;
			while (i <= n)
			{
				std::cout << i << " ";

				S1 = S1 + i;

				i++;
			}

			S2 = S1 / double(n);

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else if (choice == "3")
		{
			int n, S1 = 0;
			double S2;

			std::cout << "\nNhap so nguyen : ";
			std::cin >> n;

			int i = 1;
			do
			{
				std::cout << i << " ";

				S1 = S1 + i;

				i++;
			} while (i <= n);

			S2 = S1 / double(n);

			std::cout << "\n\tGia tri S1 = " << S1 << std::endl;
			std::cout << "\n\tGia tri S2 = " << S2 << std::endl;
			break;
		}
		else
		{
			std::cout << "Lua chon cua ban khong dung...! Moi nhap lai...!" << std::endl;
		}
	}
}

void bai11()
{
	// Nhap vao mot so va doc so do thanh chu
	// Code by Huynh Khuan

	std::cout << "\n\tBai 12 -  Chuong trinh nhap so nguyen n va doc so do thanh chu!" << std::endl;

	long long int n, num, songuyen = 0, SoDao = 0;
	std::string str;

	std::cout << "\nNhap so nguyen n : ";
	std::cin >> n;

	if (n > 9999999999)
	{
		std::cout << "So qua lon, moi nhap lai...! " << std::endl;
	}
	else
	{
		if (n == 10)
		{
			std::cout << "Muoi";
		}
		else if (n == 100)
		{
			std::cout << "Mot tram";
		}
		else if (n == 1000)
		{
			std::cout << "Mot ngan";
		}
		else if (n == 10000)
		{
			std::cout << "Muoi ngan";
		}
		else if (n == 100000)
		{
			std::cout << "Mot tram ngan";
		}
		else if (n == 1000000)
		{
			std::cout << "Mot trieu";
		}
		else if (n == 10000000)
		{
			std::cout << "Muoi trieu";
		}
		else if (n == 100000000)
		{
			std::cout << "Mot tram trieu";
		}
		else if (n == 1000000000)
		{
			std::cout << "Mot ty";
		}
		else
		{
			//while (n != 0)
			//{
			//	num = n % 10;
			//	SoDao = SoDao * 10 + num;
			//	n = n / 10;
			//}

			//std::cout << SoDao;

			SoDao = n;

			while (SoDao != 0)
			{
				// hang don vi
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "";
					break;
				case 1:
					str = "mot";
					break;
				case 2:
					str = "hai";
					break;
				case 3:
					str = "ba";
					break;
				case 4:
					str = "bon";
					break;
				case 5:
					str = "nam";
					break;
				case 6:
					str = "sau";
					break;
				case 7:
					str = "bay";
					break;
				case 8:
					str = "tam";
					break;
				case 9:
					str = "chin";
					break;
				}
				SoDao = SoDao / 10;

				// hang tram trieu
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "le " + str;
					break;
				case 1:
					str = "muoi " + str;
					break;
				case 2:
					str = "hai muoi " + str;
					break;
				case 3:
					str = "ba muoi " + str;
					break;
				case 4:
					str = "bon muoi " + str;
					break;
				case 5:
					str = "nam muoi " + str;
					break;
				case 6:
					str = "sau muoi " + str;
					break;
				case 7:
					str = "bay muoi " + str;
					break;
				case 8:
					str = "tam muoi " + str;
					break;
				case 9:
					str = "chin muoi " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang chuc trieu
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "khong tram " + str;
					break;
				case 1:
					str = "mot tram " + str;
					//std::cout << str;
					break;
				case 2:
					str = "hai tram " + str;
					//std::cout << str;
					break;
				case 3:
					str = "ba tram " + str;
					//std::cout << str;
					break;
				case 4:
					str = "bon tram " + str;
					//std::cout << str;
					break;
				case 5:
					str = "nam tram " + str;
					//std::cout << str;
					break;
				case 6:
					str = "sau tram " + str;
					//std::cout << str;
					break;
				case 7:
					str = "bay tram " + str;
					//std::cout << str;
					break;
				case 8:
					str = "tam tram " + str;
					//std::cout << str;
					break;
				case 9:
					str = "chin tram " + str;
					//std::cout << str;
					break;
				}

				SoDao = SoDao / 10;

				// hang ngan
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "khong ngan " + str;
					break;
				case 1:
					str = "mot ngan " + str;
					break;
				case 2:
					str = "hai ngan " + str;
					break;
				case 3:
					str = "ba ngan " + str;
					break;
				case 4:
					str = "bon ngan " + str;
					break;
				case 5:
					str = "nam ngan " + str;
					break;
				case 6:
					str = "sau ngan " + str;
					break;
				case 7:
					str = "bay ngan " + str;
					break;
				case 8:
					str = "tam ngan " + str;
					break;
				case 9:
					str = "chin ngan " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang chuc ngan
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "le " + str;
					break;
				case 1:
					str = "muoi " + str;
					break;
				case 2:
					str = "hai muoi " + str;
					break;
				case 3:
					str = "ba muoi " + str;
					break;
				case 4:
					str = "bon muoi " + str;
					break;
				case 5:
					str = "nam muoi " + str;
					break;
				case 6:
					str = "sau muoi " + str;
					break;
				case 7:
					str = "bay muoi " + str;
					break;
				case 8:
					str = "tam muoi " + str;
					break;
				case 9:
					str = "chin muoi " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang tram ngan
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "khong tram " + str;
					break;
				case 1:
					str = "mot tram " + str;
					break;
				case 2:
					str = "hai tram " + str;
					break;
				case 3:
					str = "ba tram " + str;
					break;
				case 4:
					str = "bon tram " + str;
					break;
				case 5:
					str = "nam tram " + str;
					break;
				case 6:
					str = "sau tram " + str;
					break;
				case 7:
					str = "bay tram " + str;
					break;
				case 8:
					str = "tam tram " + str;
					break;
				case 9:
					str = "chin tram " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang trieu
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "khong trieu " + str;
					break;
				case 1:
					str = "mot trieu " + str;
					break;
				case 2:
					str = "hai trieu " + str;
					break;
				case 3:
					str = "ba trieu " + str;
					break;
				case 4:
					str = "bon trieu " + str;
					break;
				case 5:
					str = "nam trieu " + str;
					break;
				case 6:
					str = "sau trieu " + str;
					break;
				case 7:
					str = "bay trieu " + str;
					break;
				case 8:
					str = "tam trieu " + str;
					break;
				case 9:
					str = "chin trieu " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang chuc trieu
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "le " + str;
					break;
				case 1:
					str = "muoi " + str;
					break;
				case 2:
					str = "hai muoi " + str;
					break;
				case 3:
					str = "ba muoi " + str;
					break;
				case 4:
					str = "bon muoi " + str;
					break;
				case 5:
					str = "nam muoi " + str;
					break;
				case 6:
					str = "sau muoi " + str;
					break;
				case 7:
					str = "bay muoi " + str;
					break;
				case 8:
					str = "tam muoi " + str;
					break;
				case 9:
					str = "chin muoi " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang tram trieu
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 0:
					str = "khong tram " + str;
					break;
				case 1:
					str = "mot tram " + str;
					break;
				case 2:
					str = "hai tram " + str;
					break;
				case 3:
					str = "ba tram " + str;
					break;
				case 4:
					str = "bon tram " + str;
					break;
				case 5:
					str = "nam tram " + str;
					break;
				case 6:
					str = "sau tram " + str;
					break;
				case 7:
					str = "bay tram " + str;
					break;
				case 8:
					str = "tam tram " + str;
					break;
				case 9:
					str = "chin tram " + str;
					break;
				}
				SoDao = SoDao / 10;

				// hang ty
				songuyen = SoDao % 10;
				switch (songuyen)
				{
				case 1:
					str = "mot ty " + str;
					break;
				case 2:
					str = "hai ty " + str;
					break;
				case 3:
					str = "ba ty " + str;
					break;
				case 4:
					str = "bon ty " + str;
					break;
				case 5:
					str = "nam ty " + str;
					break;
				case 6:
					str = "sau ty " + str;
					break;
				case 7:
					str = "bay ty " + str;
					break;
				case 8:
					str = "tam ty " + str;
					break;
				case 9:
					str = "chin ty " + str;
					break;
				}
				SoDao = SoDao / 10;
			}
			std::cout << str;
		}
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
		std::cout << "\n9. Chuong trinh nhap vao so nguyen n vao in ra man hinh ket qua : S1 = 1 + 2 + 3 + ... + n - S2 = 1 + 1/2 + 1/3 + ... 1/n" << std::endl;
		std::cout << "\n10. Chuong trinh nhap so nguyen : \n\ta) So nguyen tu 1 => n \n\tb) Tong va trung binh cong cua n so nguyen nay!" << std::endl;
		std::cout << "\n11. Chuong trinh nhap so nguyen : \n\ta) So nguyen tu 1 => n \n\tb) Tong va trung binh cong cua n so nguyen nay! \n\t\tBAN TOI UU!" << std::endl;
		std::cout << "\n12. Chuong trinh nhap so nguyen n va doc so do thanh chu!" << std::endl;
		std::cout << "\n================================================================================" << std::endl;
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
			case 4:
				bai4();
				break;
			case 5:
				bai5();
				break;
			case 6:
				bai6();
				break;
			case 7:
				bai7();
				break;
			case 8:
				bai8();
				break;
			case 9:
				bai9();
				break;
			case 10:
				bai10();
				break;
			case 11:
				bai10_1();
				break;
			case 12:
				bai11();
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
	return 0;
}