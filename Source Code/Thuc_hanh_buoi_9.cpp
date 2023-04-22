/*
	THUC HANH TUAN 9 - 11.04.2023 - HVUH
	CODE BY HUYNH KHUAN
*/

#include <iostream>
#include <cmath>

/*
	Ham nhap mang
*/

void nhapMang(int arr[], int& n) {
	std::cout << "Nhap so phan tu trong mang : "; std::cin >> n;
	std::cout << "Nhap mang : ";
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
}

/*
	Ham tim MAX
*/

int timMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

/*
	Ham tim MIN
*/

int timMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

/*
	Ham kiem tra so nguyen to
*/

bool isPrimes(int n) {
	if (n < 2) {
		return false;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

/*
	Ham kiem tra so chinh phuong
*/

bool chinh_phuong(int n) {
	int can = sqrt(n);

	if (pow(can, 2) == n) {
		return true;
	}
	else {
		return false;
	}
}

/*
	Ham thay the cac so am thanh so 0
*/

void soAm(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			arr[i] = 0;
		}
	}
}

/*
	Ham xoa phan tu am
*/

void xoaPhanTuAm(int arr[], int& n) {
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			arr[j] = arr[i];
			j++;
		}
	}
	n = j;
}

/*
	Ham sap xep phan tu theo thu tu tang dan
*/

void tangDan(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

/*
	Ham tinh trung binh cong cua cac so le o vi tri chan
*/

int trungBinhCong(int arr[], int n) {
	int sum_odd = 0;
	int count_odd = 0;
	for (int i = 0; i < n; i += 2) {
		if (arr[i] % 2 != 0) {
			sum_odd += arr[i];
			count_odd++;
		}
	}
	double trung_binh_cong = double(sum_odd) / count_odd;
	return trung_binh_cong;
}

int main() {
	const int MAXSIZE = 100;
	int n;
	int arr[MAXSIZE];

	// Nhap mang
	nhapMang(arr, n);

	// duyet mang in ra cac phan tu trong mang
	std::cout << "\nCac phan tu trong mang vua nhap la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	// Tim gia tri lon nhat va nho nhat trong mang
	std::cout << "\n\nGia tri lon nhat trong mang la : " << timMax(arr, n) << std::endl;
	std::cout << "Gia tri nho nhat trong mang la : " << timMin(arr, n) << std::endl;

	// Kiem tra xem cac phan tu trong mang co so nguyen to hay khong
	std::cout << "\n\nCac so nguyen to trong mang la : ";
	for (int i = 0; i < n; i++) {
		if (isPrimes(arr[i])) {
			std::cout << arr[i] << " ";
		}
		/*else {
			std::cout << arr[i] << " ";
		}*/
	}
	std::cout << std::endl;

	// Tim so chinh phuong trong mang
	std::cout << "\n\nCac so chinh phuong trong mang la : ";
	for (int i = 0; i < n; i++) {
		if (chinh_phuong(arr[i])) {
			std::cout << arr[i] << " ";
		}
		/*else {
			std::cout << arr[i] << " ";
		}*/
	}
	std::cout << std::endl;

	// Sap xep mang theo thu tu tang dan
	tangDan(arr, n);
	
	// duyet va in lai mang sau khi sap xep theo thu tu tang dan
	std::cout << "\n\nMang sap xep theo thu tu tang dan la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	// Xo cac phan tu am co trong mang
	xoaPhanTuAm(arr, n);
	
	// Duyet mang va in mang sau khi da xoa phan tu am
	std::cout << "\n\nMang da da xoa cac phan tu am la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	// Duyet mang va thay the cac so am co trong mang = 0
	soAm(arr, n);

	// Duyet mang va in mang sau khi da thay the
	std::cout << "\n\nMang da thay the la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	// Duyet mang va tinh trung binh cong cac so le o vi tri chan trong mang
	std::cout << "\n\nTrung binh cong cac so le o vi tri chan trong mang la : " << trungBinhCong(arr, n);
	std::cout << std::endl;

	return 0;
}