#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <limits.h>

/*
	BAI TAP CHUONG 3 - CAU LENH RE NHANH (TUAN 5 - 14.03.2023)
	CODE BY HUYNH KHUAN
*/

void bai1()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN N VA KIEM TRA N LA CHAN - LE, AM - DUONG
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 1. Chuong trinh nhap so nguyen, cho biet so nguyen la so CHAN hay LE va so AM hay DUONG <-" << std::endl;

	int n;

	std::cout << "\nNhap so nguyen n : ";
	std::cin >> n;

	if (n % 2 == 0)
	{
		std::cout << "\n->\tn la so chan" << std::endl;
	}
	else
	{
		std::cout << "\n->\tn la so le" << std::endl;
	}

	if (n >= 0)
	{
		std::cout << "\n->\tn la so duong" << std::endl;
	}
	else
	{
		std::cout << "\n->\tn la so am" << std::endl;
	}

	/*
		VD : n = 3
			if (n % 2 == 0) => chan.
			else => le (n % 2 != 0)
				=> 3 % 2 == 1 != 0 => le.

			if (n >= 0) => so duong.
			else => so am (n < 0).
				=> 3 >= 0 => so duong
	*/
}

void bai2()
{

	/*
		CHUONG TRINH NHAP VAO 3 SO NGUYEN VA IN RA MAN HINH SO NHO NHAT TRONG 3 SO DO
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 2. Chuong trinh nhap vao 3 so nguyen. In ra man hinh so nho nhat trong 3 so do <-" << std::endl;

	int a, b, c;
	int smallest_numbers;

	std::cout << "\nNhap so nguyen 1 : ";
	std::cin >> a;
	std::cout << "Nhap so nguyen 2 : ";
	std::cin >> b;
	std::cout << "Nhap so nguyen 3 : ";
	std::cin >> c;

	smallest_numbers = a;

	if (b < smallest_numbers)
	{
		smallest_numbers = b;
	}

	if (c < smallest_numbers)
	{
		smallest_numbers = c;
	}

	std::cout << "\n->\tSo lon nhat trong 3 so ban nhap la : " << smallest_numbers << std::endl;

	/*
		VD : a = -2.
			 b = -3.
			 c = -10.

		smallest_numbers = a (gan gia tri a la so nho nhat).

		if (b < smallest_numbers) => smallest_numbers = b;
			=> -3 < -2 => smallest_numbers = -3.

		if (c < smallest_numbers) => smallest_numbers = c;
			=> -10 < -3 => smallest_numbers = -10.
	*/
}

void bai3()
{

	/*
		CHUONG TRINH NHAP TEN HOC SINH, DIEM THI CUOI KY. IN RA TEN HOC SINH DUOI DANG IN HOA VA KET QUA XEP LOAI CUA HOC SINH
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 3. Chuong trinh nhap ho ten, diem so, in ra man hinh ho ten IN HOA va phan loai hoc luc <-" << std::endl;

	std::cin.ignore();

	std::string students_name;
	double final_score;

	std::cout << "\nNhap ho ten cua hoc sinh : ";
	std::getline(std::cin, students_name);
	transform(students_name.begin(), students_name.end(), students_name.begin(), ::toupper);

	std::cout << "Nhap diem thi cuoi ky cua hoc sinh " << students_name << " : ";
	std::cin >> final_score;

	std::cout << "\n->\tHoc sinh " << students_name << " co so diem la : " << final_score << std::endl;

	if (final_score >= 8)
	{
		std::cout << "\n->\t\tXep hang : Gioi!" << std::endl;
	}
	else if (final_score < 8 && final_score >= 6.5)
	{
		std::cout << "\n->\t\tXep hang : Kha!" << std::endl;
	}
	else if (final_score < 6.5 && final_score >= 5)
	{
		std::cout << "\n->\t\tXep hang : Trung Binh!" << std::endl;
	}
	else
	{
		std::cout << "\n->\t\tXep hang : Yeu!" << std::endl;
	}

	/*
		VD : students_name = huynh van khuan.
				=> HUYNH VAN KHUAN.
			 final_score = 8.
				=> Xep hang : Gioi!
	*/
}

void bai4()
{

	/*
		CHUONG TRINH GIAI PHUONG TRINH BAC 1 : BX + C = 0
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 4. Chuong trinh giai phuong trinh bac 1 <-" << std::endl;

	double b{}, c{};

	std::cout << "\nNhap co so b : ";
	std::cin >> b;
	std::cout << "Nhap co so c : ";
	std::cin >> c;

	if (b == 0 && c == 0)
	{
		std::cout << "\n->\tPhuong trinh vo so nghiem !" << std::endl;
	}
	else if (b == 0 && c != 0)
	{
		std::cout << "\n->\tPhuong trinh vo nghiem !" << std::endl;
	}
	else
	{
		std::cout << "\n->\tPhuong trinh co mot nghiem duy nhat la x = " << -c / b << std::endl;
	}

	/*
		VD : b = 1; c = 2
			=> b != 0, c != 0 => co mot nghiem duy nhat x = -c / b.
			=> x = -2
		
		VD : b = 0; c = 0
			=> Phuong trinh vo so nghiem!

		VD : b = 0; c = 3
			=> Phuong trinh vo so nghiem
	*/
}

void bai5()
{
	
	/*
		CHUONG TRINH GIAI PHUONG TRINH BAC 2 : AX2 + BX + C = 0
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 5. Chuong trinh giai phuong trinh bac 2 <-" << std::endl;

	double a{}, b{}, c{}, x1{}, x2{};

	std::cout << "\nNhap co so a : "; std::cin >> a;
	std::cout << "Nhap co so b : "; std::cin >> b;
	std::cout << "Nhap co so c : "; std::cin >> c;

	double delta = pow(b, 2) - (4 * a * c);

	if (delta < 0)
	{
		std::cout << "\n->\tPhuong trinh vo nghiem !" << std::endl;
	}
	else if (delta == 0)
	{
		std::cout << "\n->\tPhuong trinh co nghiem kep x1 = x2 = " << -(b / 2 * a) << std::endl;
	}
	else // delta > 0
	{
		x1 = (-b + sqrt(delta)) / (2 * a); // Nen dat dau () cho cap dau tien de tranh bi loi => lay cap dau tien / cho (2 * a)
		x2 = (-b - sqrt(delta)) / (2 * a);
		std::cout << "\n->\tPhuong trinh co 2 nghiem pha biet : \n\t\tx1 = " << x1 << " \n\t\tx2 = " << x2 << std::endl;
	}
}

/*
	BAI TAP CHUONG 4 - CAU LENH LAP - FOR - WHILE - DOWHILE (TUAN 5 - 14.03.2023)
	CODE BY HUYNH KHUAN
*/

void bai6()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN VA CHO DEN KHI NHAN DUOC SO NGUYEN DUONG THI DUNG
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 6. Chuong trinh nhap so nguyen duong, toi khi nhan duoc so nguyen duong thi dung chuong trinh <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 6" << std::endl;
	std::cout << "\n\t1. Vong lap for" << std::endl;
	std::cout << "\t2. Vong lap while" << std::endl;
	std::cout << "\t3. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;
	
	// Vong lap for
	if (choice == "1")
	{
		int num = -1;
		for (; num < 0;)
		{
			std::cout << "\nNhap so nguyen: ";
			std::cin >> num;
			if (std::cin.fail() || std::cin.peek() != '\n')
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cout << "Vui long nhap so nguyen!\n";
			}
			else if (num < 0)
			{
				std::cout << "Khong hop le..! Vui long nhap so nguyen duong!" << std::endl;
			}
			else
			{
				std::cout << "Hop le...!" << std::endl;
				break;
			}
		}
		std::cout << "\n->\tSo nguyen ban da nhap la: " << num << "\n";
	}

	// Vong lap while
	else if (choice == "2")
	{
		int num;
		while (true)
		{
			std::cout << "\nNhap so nguyen: ";
			std::cin >> num;
			if (std::cin.fail() || std::cin.peek() != '\n')
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cout << "Vui long nhap so nguyen!\n";
			}
			else if (num < 0)
			{
				std::cout << "Khong hop le..! Vui long nhap so nguyen duong!" << std::endl;
			}
			else
			{
				std::cout << "Hop le...!" << std::endl;
				break;
			}
		}
		std::cout << "\n->\tSo nguyen ban da nhap la: " << num << "\n";
	}

	// Vong lap do while
	else if (choice == "3")
	{
		int num;
		do
		{
			std::cout << "Nhap so nguyen : "; std::cin >> num;

			if (std::cin.fail() || std::cin.peek() != '\n')
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cout << "Vui long nhap so nguyen!\n";
			}
			else if (num < 0)
			{
				std::cout << "Khong hop le..! Vui long nhap so nguyen duong!" << std::endl;
			}
			else
			{
				std::cout << "Hop le...!" << std::endl;
				break;
			}
		} while (true);

		std::cout << "\n->\tSo nguyen ban da nhap la: " << num << "\n";
	}
	else
	{
		std::cout << "Vui long nhap hop le...!" << std::endl;
	}
}

void bai7()
{

	/*
		CHUONG TRINH KIEM TRA N PHAI LA SO NGUYEN TO HAY KHONG ?
		CODE BY HUYNH KHUAN
	*/

	/*
		KIEN THUC DAY : 
			=> So nguyen to la so chia het cho 1 va chinh no, neu no chia duoc cho so nao tu i den can bac 2 cua n thi khong la so nguyen to.

		Noi dung chuong trinh :
			=> Khai bao bien n voi kieu du lieu la int. Khai bao primes_number voi kieu du lieu logic = bool => true.
			=> Nhap n => neu n <= 1 thi khong la so nguyen to => primes_number = false.
			=> else (n > 1) => khai bao bien i = 2 va duyet tu i den can bac 2 cua n => (i <= sqrt(n) && primes_number = true.
				- Tai vi khong su dung break trong chuong trinh nen phai xet dieu kien thu 2 la primes_number co phai la true khong, neu la true thi tiep tuc lap toi khi i <= sqrt(n). Neu 1 trong 2 sai thi ket thuc vong lap => tang i++.
			=> if primes_number = true => la so nguyen to. else => khong la so nguyen to (primes_number) = false.
	*/

	std::cout << "\n\t-> Bai 7. Chuong trinh nhap vao 1 so va kiem tra so do co phai so nguyen to hay khong ? <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 7" << std::endl;
	std::cout << "\n\t1. Vong lap for" << std::endl;
	std::cout << "\t2. Vong lap while" << std::endl;
	std::cout << "\t3. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;

	if (choice == "1")
	{
		int n;
		bool primes_number = true;

		std::cout << "\nNhap vao so nguyen n : "; std::cin >> n;

		if (n <= 1)
		{
			primes_number = false;
		}
		else
		{
			for (int i = 2; i <= sqrt(n); i++)
			{
				if (n % i == 0)
				{
					primes_number = false;
					break;
				}
			}
		}

		if (primes_number == true)
		{
			std::cout << "\n->\tSo " << n << " la so nguyen to!" << std::endl;
		}
		else
		{
			std::cout << "\n->\tSo " << n << " khong la so nguyen to!" << std::endl;
		}
	}

	// Vong lap for
	else if (choice == "2")
	{
		int n;
		bool primes_number = true;

		std::cout << "\nNhap vao so nguyen n : "; std::cin >> n;

		if (n <= 1)
		{
			primes_number = false;
		}
		else
		{
			int i = 2;
			while (i <= sqrt(n) && primes_number == true)
			{
				if (n % i == 0)
				{
					primes_number = false;
				}

				i++;
			}
		}

		if (primes_number == true)
		{
			std::cout << "\n->\tSo " << n << " la so nguyen to!" << std::endl;
		}
		else
		{
			std::cout << "\n->\tSo " << n << " khong la so nguyen to!" << std::endl;
		}
	}

	// Vong lap do while
	else if (choice == "3")
	{
		int n;
		bool primes_number = true;

		std::cout << "\nNhap vao so nguyen n : "; std::cin >> n;

		if (n <= 1)
		{
			primes_number = false;
		}
		else
		{
			int i = 2;
			do
			{
				if (n % i == 0)
				{
					primes_number = false;
					break;
				}

				i++;
			} while (i <= sqrt(n) && primes_number == true);
		}

		if (primes_number == true)
		{
			std::cout << "\n->\tSo " << n << " la so nguyen to!" << std::endl;
		}
		else
		{
			std::cout << "\n->\tSo " << n << " khong la so nguyen to!" << std::endl;
		}
	}
}

void bai8()
{

	/*
		CHUONG TRINH NHAP VAO NAM DUONG LICH VA KIEM TRA XEM CO PHAI NAM NHUAN HAY KHONG?
		CODE BY HUYNH KHUAN
	*/

	/*
		KIEM THUC DAY :
		
			=> Nam nhuan = nam % 4 == 0 va nam % 100 != 0 (nam chia het cho 4 va khong chia het cho 100) hoac nam % 400 == 0 => la nam NHUAN.
	*/

	std::cout << "\n\t-> Bai 8. Chuong trinh nhap mot nam va kiem tra xem co phai nam NHUAN hay khong ? <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 8" << std::endl;
	std::cout << "\t1. Vong lap while" << std::endl;
	std::cout << "\t2. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;

	// Vong lap while
	if (choice == "1")
	{
		int years;

		while (true)
		{
			std::cout << "\nNhap vao nam duong lich : "; std::cin >> years;

			if (years < 0)
			{
				std::cout << "Nam duong lich khong duoc la so am! Vui long nhap lai...!" << std::endl;
			}
			else
			{
				if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0)
				{
					std::cout << "\n->\tNam " << years << " la nam nhuan!" << std::endl;
				}
				else
				{
					std::cout << "\n->\tNam " << years << " khong la nam nhuan!" << std::endl;
				}
				break;
			}
		}
	}

	// Vong lap do while
	else if (choice == "2")
	{
		int years;
		do
		{
			std::cout << "\nNhap vao nam duong lich : "; std::cin >> years;

			if (years < 0)
			{
				std::cout << "Nam duong lich khong duoc la so am! Vui long nhap lai...!" << std::endl;
			}
			else
			{
				if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0)
				{
					std::cout << "\n->\tNam " << years << " la nam nhuan!" << std::endl;
				}
				else
				{
					std::cout << "\n->\tNam " << years << " khong la nam nhuan!" << std::endl;
				}
				break;
			}
		} while (true);
	}

	else
	{
		std::cout << "Khong co thong tin...! Vui long nhap lai...!" << std::endl;
	}
}

void bai9()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN DUONG N. IN RA KET QUA :
			=> S1 = 1 + 2 + 3 + ... + n
			=> S2 = 1 + 1/2 + 1/3 + ... + 1/n
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai Chuong trinh nhap vao so nguyen n vao in ra man hinh ket qua : S1 = 1 + 2 + 3 + ... + n - S2 = 1 + 1/2 + 1/3 + ... 1/n <-" << std::endl;

	int n{}, s1 = 0;
	double s2 = 0;

	while (true)
	{
		std::cout << "\nNhap vao so nguyen duong n : "; std::cin >> n;

		if (n > 0)
		{
			for (int i = 1; i <= n; i++)
			{
				s1 = s1 + i;
				s2 = s2 + (1.0 / i);
			}
			break;
		}
		else
		{
			std::cout << "Vui long nhap vao mot so nguyen duong! Vui long nhap lai...!" << std::endl;
		}
	}
	
	std::cout << "\n->\tGia tri s1 = " << s1 << std::endl;
	std::cout << "\n->\tGia tri s2 = " << s2 << std::endl;
}

void bai10()
{
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

/*
	BAI 11 : NHAP N CHU SO VA DOC SO DO THANH CHU
*/

std::string chuyendoi(int n)
{
	std::string ketqua = "";

	if (n >= 1000000000)
	{
		ketqua = ketqua + chuyendoi(n / 1000000000) + " ty ";
		n = n % 1000000000;
	}

	if (n >= 1000000)
	{
		ketqua = ketqua + chuyendoi(n / 1000000) + " trieu ";
		n = n % 1000000;
	}

	if (n >= 1000)
	{
		ketqua = ketqua + chuyendoi(n / 1000) + " ngan ";
		n = n % 1000;
	}

	if (n >= 100)
	{
		ketqua = ketqua + chuyendoi(n / 100) + " tram ";
		n = n % 100;
	}

	if (n >= 10)
	{
		ketqua = ketqua + chuyendoi(n / 10) + " muoi ";
		n = n % 10;
	}

	if (n >= 1)
	{
		switch (n)
		{
		case 1:
			ketqua = ketqua + "mot";
			break;
		case 2:
			ketqua = ketqua + "hai";
			break;
		case 3:
			ketqua = ketqua + "ba";
			break;
		case 4:
			ketqua = ketqua + "bon";
			break;
		case 5:
			ketqua = ketqua + "nam";
			break;
		case 6:
			ketqua = ketqua + "sau";
			break;
		case 7:
			ketqua = ketqua + "bay";
			break;
		case 8:
			ketqua = ketqua + "tam";
			break;
		case 9:
			ketqua = ketqua + "chin";
			break;
		}
	}

	return ketqua;
}

void bai11()
{
	
	/*
		CHUONG TRINH NHAP N CHU SO VA DOC SO DO THANH CHU
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 11. Chuong trinh nhap so nguyen n va doc so do thanh chu! <-" << std::endl;

	int n;
	std::cout << "\nNhap n : ";
	std::cin >> n;

	std::cout << "\n->\tKet qua = " << chuyendoi(n) << std::endl;

}

void bai12()
{

	/*
		CHUONG TRINH NHAP N VA DEM N CO BAO NHIEU CHU SO
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 12. Chuong trinh nhap n va dem xem n co bao nhieu chu so <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 12" << std::endl;
	std::cout << "\t1. Vong lap while" << std::endl;
	std::cout << "\t2. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;

	// VONG LAP WHILE
	if (choice == "1")
	{
		int n{}, count_numbers = 0;

		std::cout << "\nNhap n so nguyen : "; std::cin >> n;
		int original_numbers = n;

		while (n != 0)
		{
			count_numbers++;
			n /= 10;
		}

		std::cout << "\n->\tSo " << original_numbers << " co " << count_numbers << " chu so!" << std::endl;
	}
	
	// VONG LAP DO WHILE
	else if (choice == "2")
	{
		int n{}, count_numbers = 0;

		std::cout << "\nNhap n so nguyen : "; std::cin >> n;
		int original_numbers = n;

		do
		{
			count_numbers++;
			n /= 10;
		} while (n != 0);

		std::cout << "\n->\tSo " << original_numbers << " co " << count_numbers << " chu so!" << std::endl;
	}

	else
	{
		std::cout << "Khong co thong tin...! Vui long chon lai...!" << std::endl;
	}
	
}

void bai13()
{

	/*
		CHUONG TRINH NHAP N1, N2 (N1 < N2) VA DEM TU KHOANG N1 -> N2 CO BAO NHIEU SO LE
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 13. Chuong trinh nhap vao n1 va n2 (n1 < n2) va dem xem co bao nhieu so le tu n1 -> n2 <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 13" << std::endl;
	std::cout << "\n\t1. Vong lap for" << std::endl;
	std::cout << "\t2. Vong lap while" << std::endl;
	std::cout << "\t3. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;

	if (choice == "1")
	{
		int n1{}, n2{};
		int count_odd_numbers = 0;

		while (true)
		{
			std::cout << "\nNhap vao so nguyen n1 : "; std::cin >> n1;
			std::cout << "Nhap vao so nguyen n2 : "; std::cin >> n2;

			if (n1 < n2)
			{
				for (int i = n1; i <= n2; i++)
				{
					if (i % 2 != 0)
					{
						count_odd_numbers++;
					}
				}
				break;
			}

			else
			{
				std::cout << "\nVui long nhap n1 < n2...! Moi nhap lai...!" << std::endl;
			}
		}

		std::cout << "\n->\tTu n1 -> n2 co " << count_odd_numbers << " so le!" << std::endl;
	}

	else if (choice == "2")
	{
		int n1{}, n2{};
		int count_odd_numbers = 0;

		while (true)
		{
			std::cout << "\nNhap vao so nguyen n1 : "; std::cin >> n1;
			std::cout << "Nhap vao so nguyen n2 : "; std::cin >> n2;

			if (n1 < n2)
			{
				while (n1 <= n2)
				{
					if (n1 % 2 != 0)
					{
						count_odd_numbers++;
					}

					n1++;
				}
				break;
			}
			else
			{
				std::cout << "\nVui long nhap n1 < n2...! Moi nhap lai...!" << std::endl;
			}
		}

		std::cout << "\n->\tTu n1 -> n2 co " << count_odd_numbers << " so le!" << std::endl;
	}

	else if (choice == "3")
	{
		int n1{}, n2{};
		int count_odd_numbers = 0;

		while (true)
		{
			std::cout << "\nNhap vao so nguyen n1 : "; std::cin >> n1;
			std::cout << "Nhap vao so nguyen n2 : "; std::cin >> n2;

			if (n1 < n2)
			{
				do
				{
					if (n1 % 2 != 0)
					{
						count_odd_numbers++;
					}

					n1++;
				} while (n1 <= n2);
				break;
			}
			else
			{
				std::cout << "\nVui long nhap n1 < n2...! Moi nhap lai...!" << std::endl;
			}
		}

		std::cout << "\n->\tTu n1 -> n2 co " << count_odd_numbers << " so le!" << std::endl;
	}
}

void bai14()
{

	/*
		CHUONG TRINH NHAP SO VA XUAT RA SO NHO NHAT - SO LON NHAT => KET THUC KHI NHAP 0
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 14. Chuong trinh nhap n va ket thuc bang so 0. In ra man hinh gia tri lon nhat va nho nhat <-" << std::endl;

	int n{}, biggest_numbers = INT_MIN, smallest_numbers = INT_MAX;

	while (true)
	{
		std::cout << "\nNhap so nguyen n (ket thuc thi nhap phim 0) : "; std::cin >> n;

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

			if (n > biggest_numbers)
			{
				biggest_numbers = n;
			}

			if (n < smallest_numbers)
			{
				smallest_numbers = n;
			}
		}
	}

	std::cout << "\n->\tSo lon nhat la : " << biggest_numbers << std::endl;
	std::cout << "\n->\tSo nho nhat la : " << smallest_numbers << std::endl;
}

/*
	BAI TAP CHUONG 5 - TONG HOP (TUAN 5 - 14.03.2023)
	CODE BY HUYNH KHUAN
*/

void bai15()
{

	/*
		CHUONG TRINH NHAP A, B VA TIM UOC SO CHUNG LON NHAT CUA 2 SO A, B
		CODE BY HUYNH KHUAN
	*/

	/*
		KIEN THUC DAY :
			=> Uoc chung : La uoc giua hai so a va b (tuc la so chia duoc cho ca a, b)
			=> Uoc chung lon nhat : La uoc lon nhat giua hai so a, b (tuc la so chia duoc cho a, b va la so lon nhat)
	*/

	std::cout << "\n\t-> Bai 15. Chuong trinh tim uoc chung lon nhat giua hai so nguyen <-" << std::endl;

	int a{}, b{}, ucln;

	std::cout << "\nNhap uoc a : "; std::cin >> a;
	std::cout << "Nhap uoc b : "; std::cin >> b;

	/*
		Cho vong lap for i = 1, cho chay tu i <= a va i <= b, i++
		neu a % i == 0 va b % i == 0 => ucln = i

		VD : a = 12, b = 16.

			=> 12 % 1 == 0 && 16 % 1 == 0 => ucln = 1.
			=> 12 % 2 == 0 && 16 % 2 == 0 => ucln = 2.
			=> 12 % 3 == 0 && 16 % 3 == 1 => ucln = 2. (vi pham dieu kien, khong thuc hien khoi lenh if) => ucln van = 2.
			=> 12 % 4 == 0 && 16 % 4 == 0 => ucln = 4.
			=> 12 % 5 == 2 && 16 % 5 == 1 => ucln = 4.

			=> lap toi khi i <= a && i <= b => uoc chung 1,2,4 => ket thuc khi i = 13.
	*/

	for (int i = 1; i <= a && i<= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			ucln = i;
		}
	}

	std::cout << "\n->\tUoc so chung lon nhat cua " << a << " va " << b << " la : " << ucln << std::endl;
}

void bai16()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN TRONG BANG CUU CHUONG VA IN RA MAN HINH CUU CHUONG
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 16. Chuong trinh in ra bang cuu chuong cua mot so nguyen duoc nhap <-" << std::endl;

	int n;

	std::cout << "\nNhap vao so nguyen n trong bang cuu chuong : "; std::cin >> n;
	std::cout << std::endl;

	/*
		Vong lap for khoi tao i = 1, lap tu 1 <= 10 (bang cuu chuong tu 1 => 10), i++

		Moi lan lap thi lay n * i.

		VD : n = 4
			1. 4 * 1 = 4.
			2. 4 * 2 = 8.
			3. 4 * 3 = 12.
			...
			10. 4 * 10 = 40.
	*/

	for (int i = 1; i <= 10; i++)
	{
		std::cout << n << " * " << i << " = " << n * i << std::endl;
	}
}

void bai17()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN N, IN RA TAM GAC VUONG CO CHIEU CAO N HANG, CANH DAY N KY TU *
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 17. Chuong trinh nhap n va in ra mot nua tam giac \n\tvi du n = 5 thi ket qua la : \n\t\t*\n\t\t**\n\t\t***\n\t\t****\n\t\t***** <-" << std::endl;

	int n;

	std::cout << "\nNhap n : "; std::cin >> n;
	std::cout << std::endl;

	/*
		Vong lap i bang tu i <= n
			vong lap j lap tu j <= i

		VD : 5.
			=> B1 : i = 1; 1 <= 5; i++
				B1 : j = 1; 1 <= 1; i++
					=> "*"

			=> B1 : i = 2; 2 <= 5; i++
				B1 : j = 1; 1 <= 2; i++
					=> "* *"

			=> B1 : i = 1; 3 <= 5; i++
				B1 : j = 1; 1 <= 3; i++
					=> "* * *"

			=> B1 : i = 4; 4 <= 5; i++
				B1 : j = 1; 1 <= 4; i++ (lap * 4 lan)
					=> "* * * *"

			=> B1 : i = 5; 5 <= 5; i++
				B1 : j = 1; 1 <= 5; i++ (lap * 5 lan)
					=> "* * * * *"
	*/

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}

void bai18()
{

	/*
		CHUONG TRINH NHAP N SO DONG VA IN RA HINH TAM GIAC NGUOC
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 18. Chuong trinh nhap n va in ra tam giac tuong ung voi so dong n va la tam giac nguoc <-" << std::endl;

	int n;

	std::cout << "\nNhap n : "; std::cin >> n;
	std::cout << std::endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << " ";
		}

		for (int j = 1; j <= (2 * n - (2 * i - 1)); j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}

void bai19()
{

	/*
		CHUONG TRINH NHAP VAO SO NGUYEN DUONG N VA TINH GIA TRI BIEU THUC
			S = 1x2 + 2x3 + 3x4 + ... + n x (n+1) => i * (i+1)
		CODE BY HUYNH KHUAN
	*/

	std::cout << "\n\t-> Bai 19. Chuong trinh nhap so nguyen duong n va tinh gia tri bieu thuc : \n\tS = 1x2 + 2x3 + 3x4 + ... +  n x (n + 1) <-" << std::endl;

	std::cout << "\nLua chon vong lap cho bai 7" << std::endl;
	std::cout << "\n\t1. Vong lap while" << std::endl;
	std::cout << "\t2. Vong lap do-while" << std::endl;

	std::string choice;
	std::cout << "\nNhap lua chon cua ban : "; std::cin >> choice;

	if (choice == "1")
	{
		int n, S = 0;

		while (true)
		{
			std::cout << "\nNhap so nguyen n : "; std::cin >> n;

			if (n > 0)
			{
				for (int i = 1; i <= n; i++)
				{
					S = S + i * (i + 1);
				}

				std::cout << "\n->\tGia tri cua bieu thuc la S = " << S << std::endl;
				break;
			}

			else
			{
				std::cout << "Nhap so nguyen duong n...! Vui long nhap lai...!" << std::endl;
			}
		}
	}

	else if (choice == "2")
	{
		int n, S = 0;
		
		do
		{
			std::cout << "\nNhap so nguyen duong n : "; std::cin >> n;
		} while (n < 0);

		for (int i = 1; i <= n; i++)
		{
			S = S + i * (i + 1);
		}

		std::cout << "\n->\tGia tri cua bieu thuc la S = " << S << std::endl;
	}

	else
	{
		std::cout << "Khong co thong tin...! Vui long nhap lai...!" << std::endl;
	}
}

void bai20()
{

	/*
		CHUONG TRINH IN RA DAY FIBONACCI TU 0 DEN N
		CODE BY HUYNH KHUAN
	*/

	/*
		KIEN THUC DAY :
			=> Day Fibonacci la day vo han va hai phan tu dau tien la tu 0 (hoac 1) va 1. Cac phan tu tiep theo la tong hai phan tu truoc.

		Y tuong xay dung code :
			=> Dau tien khai bao f1 = 0, f2 = 1 nhu hai phan tu dau tien cua chuong trinh.
			=> Tinh cac phan tu tiep theo ==> fn = f1 + f2.
			=> Thay doi cac phan tu tiep theo : f1 = f2; f2 = fn
				=> VD : f1 = 0, f2 = 1 => f1 = 1, f2 = 1
					=> f1 = 1, f2 = 2 => f1 = 2, f2 = 3 => f1 = 3, f2 = 5... => vo cuc.
	*/

	std::cout << "\n\t-> Bai 20. Chuong trinh nhap so nguyen duong n va in ra cac phan tu tu dau tien cua day Fibonacci tu 0 -> n <-" << std::endl;

	long long int n, f1 = 0, f2 = 1, fn;

	std::cout << "\nNhap vao so nguyen duong n : "; std::cin >> n;

	std::cout << "\n->\tDay Fibonacci tu 0 den " << n << " la : ";
	std::cout << f1 << " " << f2 << " ";

	for (int i = 2; i <= n; i++)
	{
		fn = f1 + f2;
		std::cout << fn << " ";
		f1 = f2;
		f2 = fn;
	}
}

void menu() {
	int choice{};
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
		std::cout << "\n11. Chuong trinh nhap so nguyen n va doc so do thanh chu!" << std::endl;
		std::cout << "\n12. Chuong trinh nhap n va dem xem n co bao nhieu chu so" << std::endl;
		std::cout << "\n13. Chuong trinh nhap vao n1 va n2 (n1 < n2) va dem xem co bao nhieu so le tu n1 -> n2" << std::endl;
		std::cout << "\n14. Chuong trinh nhap n va ket thuc bang so 0. In ra man hinh gia tri lon nhat va nho nhat" << std::endl;
		std::cout << "\n15. Chuong trinh tim uoc chung lon nhat giua hai so nguyen" << std::endl;
		std::cout << "\n16. Chuong trinh in ra bang cuu chuong cua mot so nguyen duoc nhap" << std::endl;
		std::cout << "\n17. Chuong trinh nhap n va in ra mot nua tam giac \n\tvi du n = 5 thi ket qua la : \n\t\t*\n\t\t**\n\t\t***\n\t\t****\n\t\t*****" << std::endl;
		std::cout << "\n18. Chuong trinh nhap n va in ra tam giac tuong ung voi so dong n va la tam giac nguoc" << std::endl;
		std::cout << "\n19. Chuong trinh nhap so nguyen duong n va tinh gia tri bieu thuc : \n\tS = 1x2 + 2x3 + 3x4 + ... +  n x (n + 1)" << std::endl;
		std::cout << "\n20. Chuong trinh nhap so nguyen duong n va in ra cac phan tu tu dau tien cua day Fibonacci tu 0 -> n" << std::endl;
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
			bai11();
			break;
		case 12:
			bai12();
			break;
		case 13:
			bai13();
			break;
		case 14:
			bai14();
			break;
		case 15:
			bai15();
			break;
		case 16:
			bai16();
			break;
		case 17:
			bai17();
			break;
		case 18:
			bai18();
			break;
		case 19:
			bai19();
			break;
		case 20:
			bai20();
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