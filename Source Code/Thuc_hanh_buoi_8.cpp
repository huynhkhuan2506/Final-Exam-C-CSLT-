#include <iostream>
#include <cmath>

/*
	THỰC HÀNH BUỔI 8 - TUẦN 8 - 04.04.2023
	Program written by Huynh Khuan / CT06A
*/

int tinh_binh_phuong(int n) {

	/*
		Hàm tính bình phương
			- Khai báo biến binh_phuong = 0
			- Sử dụng vòng lặp for lặp từ i tới n, mỗi lần lặp tăng 1 đơn vị.
			- binh_phuong = i * i (tính bình phương của một số) sau đó gán cho biến bình phương
				Ví dụ :
					- Tính bình phương của 5 => binh_phuong = 5 * 5 = 25 => binh_phuong của 5 = 25
	*/

	int binh_phuong = 0;
	for (int i = 1; i <= n; i++) {
		binh_phuong = i * i;
	}

	/*
		Return value là binh_phuong (là số đã tính bình phương)
	*/

	return binh_phuong;
}

void bai1() {

	/*
		Nhập x và y từ bàn phím
	*/

	int x, y, sum_binh_phuong = 0; std::cout << "\nNhap x : "; std::cin >> x; std::cout << "Nhap y : "; std::cin >> y;

	/*
		Sử dụng vòng lặp gán biến i = x (Tức là lặp từ x tới y) mỗi lần lặp như vậy tăng i++
			- Tổng bình phương = sum_binh_phuong = sum_binh_phuong + tinh_binh_phuong(i) tính bình phương của từng số sau đó cộng dồn vào biến sum_binh_phuong { Gọi là kỹ thuật gộp / tích luỹ }
	*/

	for (int i = x; i <= y; i++) {
		sum_binh_phuong += tinh_binh_phuong(i);
	}

	/*
		Ouput sum_binh_phuong
	*/

	std::cout << "Tong binh phuong = " << sum_binh_phuong << std::endl;
}

bool is_primes(int a) {

	/*
		Nếu a < 2 thì return false
	*/

	if (a < 2) {
		return false;
	}

	/*
		Sử dụng vòng lặp i lặp từ 2 tới căn bậc 2 của a, mỗi lần lặp như vậy thì i++
	*/

	for (int i = 2; i <= sqrt(a); i++) {

		/*
			Nếu a % i == 0 (Tức là có ước số nào ngoài 1 và chính nó thì return false (trả về false))
		*/

		if (a % i == 0) {
			return false;
		}
	}

	/*
		Nếu không có ước số nào ngoài 1 và chính nó thì return true (trả về true)
	*/

	return true;
}

void bai2() {

	/*
		Nhập n
	*/

	int n; std::cout << "\nNhap n : "; std::cin >> n;

	/*
		Nếu hàm is_primes (n nhập từ bàn phím, ví dụ 7) == true (tại vì biểu thức điều kiện đúng thì mới thực hiện nên có thể viết tăng is_primes mà không cần so sánh = is_primes == true)
			Thì in ra n là số nguyên tố, ví dụ 7 là số nguyên tố
		Ngược lại thì in ra không là số nguyên tố
	*/

	if (is_primes(n)) {
		std::cout << "\n->\t" << n << " la so nguyen to!" << std::endl;
	}
	else {
		std::cout << "\n->\t" << n << " khong la so nguyen to!" << std::endl;
	}

	std::cout << std::endl; // endl;

	/*
		Khai báo và khởi tạo giá trị cho biến cal_primes_number = 0 (biến liệt kê các số nguyên tố)
	*/

	// int listed_primes_number = 0;

	std::cout << "Cac so nguyen to tu 1 toi n la : \n" << std::endl; // in ra thông báo

	/*
		Cho vòng lặp i = 2 và lặp từ i tới n (n = 11 thì chạy từ 2 tới 11 (vì trước 2 không là số nguyên tố))
			Mỗi lần lặp tăng biến i lên 1 đơn vi i++
				- Sử dụng cấu trúc rẽ nhánh :
					+ if is_primes(i) => kiểm tra xem i có phải số nguyên tố bằng hàm is_primes (nếu i là số nguyên tố thì trả về true) còn lại là false.
					+ Nếu là true thì liệt kê số nguyên tố đó ra.
	*/

	for (int i = 2; i <= n; i++) {
		if (is_primes(i)) { // truyền vào dãy số từ i tới n trong hàm is_primes(i) --> Nếu is_primes == true thì in ra, còn lại thì không in ra.
			std::cout << "\t" << i;
		}
	}
}

int reverse_number(int a) {

	/*
		Code by Huynh Khuan
	*/

	/*
		Khai báo một biến đảo = 0.
	*/

	int reverse = 0;

	/*
		Vòng lặp đảo ngược một số nguyên. while (a > 0) [Nếu a còn lớn hơn 0 thì vẫn lặp, lặp cho tới khi a < 0 hoặc a = 0]
		Khai báo num = a % 10 => Ví dụ : 

			int num = a % 10; => 2023 % 10 = 3 => num = 3
			reverse = reverse * 10 + num; => reverse = 0 * 10 + 3 = 3 => reverse = 3
			a /= 10; => 2023 / 10 = 202 => a = 202

			int num = a % 10; => 202 % 10 = 2 => num = 2
			reverse = reverse * 10 + num; => reverse = 3 * 10 + 2 = 32 => reverse = 32
			a /= 10; => 202 / 10 = 20 => a = 20

			int num = a % 10; => 20 % 10 = 0 => num = 0
			reverse = reverse * 10 + num; => reverse = 32 * 10 + 0 = 320 => reverse = 320
			a /= 10; => 20 / 10 = 2 => a = 2

			int num = a % 10; => 2 % 10 = 2 => num = 2
			reverse = reverse * 10 + num; => reverse = 320 * 10 + 2 = 3202 => reverse = 3202
			a /= 10; => 2 / 10 = 0 => a = 0 (Không thoả điều kiện của vòng lặp while => dừng vòng lặp và return value (trả về giá trị) là reverse
	*/

	while (a > 0) {
		int num = a % 10;
		reverse = reverse * 10 + num;
		a /= 10;
	}

	/*
		Return value (trả về giá trị) là reverse [ Tức là số đã nghịch đảo với só n ban đầu ]
	*/

	return reverse;
}

void bai3() {
	
	/*
		khai báo biến n, nhập n
	*/

	int n; std::cout << "\nNhap n : "; std::cin >> n;
	
	/*
		In ra thông báo các cặp số đảo có tổng bằng n
	*/

	std::cout << "\nCac cap so dao co tong bang n la : \n" << std::endl;

	/*
		Sử dụng vòng lặp duyệt từ 1 tới n - 1 (i < n)

		Khai một biến j (là cặp số đảo còn lại {i và j là 2 cặp số đảo} [i tăng dần từ 1 tới n - 1, còn j giảm dần từ n - 1 tới 1]

		Khai báo sodao_1 (là số đảo của i) sodao_2 (là số đảo của j)

		Sử dụng cấu trúc rẽ nhánh kiểm tra :
			- Nếu sodao_1 + sodao_1 == n (tức là tổng 2 số đảo = n) thì in ra cặp số đảo đó
	*/

	for (int i = 1; i < n; i++) {
		int j = n - i; 

		int sodao_1 = reverse_number(i); 
		int sodao_2 = reverse_number(j);

		if (sodao_1 + sodao_2 == n) {
			std::cout << i << " + " << j << " = " << sodao_1 << " + " << sodao_2 << std::endl;
		}
	}
}

void thong_bao() {
	std::string name = "Huynh Khuan";
	std::string id = "CT06A";
	std::string message1 = "Cam on ban da xem qua chuong trinh cua toi, va toi la " + name + " / " + id;
	std::string message2 = "Chuong trinh tam dung, hen gap lai ^^ !";
	int width = std::max((int)message1.length() + 4, (int)message2.length() + 4);
	std::cout << std::endl;
	std::cout << std::string(width, '*') << std::endl;
	std::cout << "* " << std::string(width - 4, ' ') << " *" << std::endl;
	std::cout << "* " << message1 << std::string(width - 4 - message1.length(), ' ') << " *" << std::endl;
	std::cout << "* " << message2 << std::string(width - 4 - message2.length(), ' ') << " *" << std::endl;
	std::cout << "* " << std::string(width - 4, ' ') << " *" << std::endl;
	std::cout << std::string(width, '*') << std::endl;
}

void menu() {
	int choice{};
	while (true) {
		system("cls");
		std::cout << "===================================== MENU =====================================";
		std::cout << "\n\t\t\t  ==> Code by Huynh Khuan <==";
		std::cout << "\n1. Nhap 2 so nguyen x, y. Tinh tong binh phuong tu x toi y" << std::endl;
		std::cout << "\n2. Chuong trinh liet ke so nguyen to tu 1 toi n (viet ham kiem tra so nguyen to)" << std::endl;
		std::cout << "\n3. Chuong trinh liet ke cac cap so dao nguoc co tong bang n (viet ham dao nguoc so a)" << std::endl;
		std::cout << "\n================================================================================" << std::endl;
		std::cout << "\nNhap lua chon cua ban (nhan 0 de thoat chuong trinh) : ";
		std::cin >> choice;

		if (choice == 0) {
			thong_bao();
			break;
		}

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