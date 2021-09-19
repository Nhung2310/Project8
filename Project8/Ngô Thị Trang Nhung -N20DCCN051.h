

/*
bài 1 Trong các khai báo con trỏ sau những khai báo nào là khai báo đúng
a) int A*;
B) *int A;
c) int* A,B;
d) int* A, *B;
e) int*A, *B;

*/
  

/* 
Những khai báo đúng 
int* A, B;   khai bao con tro a, bien b;
int* A, * B;  khai bao hai con tro ;
int* A, * B;

*/


/* bài 2:
với khai báo :
 int a=12;int *pa;
 các phép gán nào sau đây là hợp lệ 
 a) pa=&a;
 b) pa=a;(sai)
 c)*pa=&a;
 d) *pa=a;

 */
/*
#include <iostream>
using namespace std;
int main() {
	int a = 12;
	int* pa;
	pa = &a;
	cout <<*pa << endl;
	*pa = a;
	cout <<*pa << endl;
	*pa = a;
	cout <<*pa << endl;

	return 0;
}
*/

/*
bai3
 Với khai báo:
 int A[5]={10,20,30,40,50};
 int *pa=A+2;
 khi đó, *pa=?
 a)10
 b)20
 c)30 (đúng)
 d)40
 e)50
 */

 /*
#include<iostream>
using namespace std;
int main() {
	int A[5] = { 10,20,30,40,50 };
	int* pa = A + 2;
	cout << *pa << endl;
	return 0;
}
*/


/*
bài 4 
với đoạn chương trình:
int A[5]={10,20,30,40,50};
int *pa=A;
*pa +=2;
khi đó, *pa=?
a) 10
b)12 (đúng)
c)30
d)32
*/

/*
#include <iostream>
using namespace std;
int main() {
	int A[5] = { 10,20,30,40,50 };
	int* pa = A;
	*pa += 2;
	cout << *pa << endl;
	return 0;

}
*/

/*
bài 5
 
 với đoạn chương trình:
 int A[5]={10,20,30,40,50};
 int *pa=A;
 *pa+=2;
  khi đó, pa=?
  a) a.&A[0]  (đúng)
  b) b.A[2]
  c) c.&A[2]
  d) d.Khong xác định 
  */
/*
#include<iostream>
using namespace std;
int main() {
	int A[5] = { 10,20,30,40,50 };
	int* pa = A;
	*pa += 2;// gia tri cua vị trí thứ A[0] tăng lên 2
	cout << pa << endl;
	pa=&A[0];
	cout<<pa<<endl;
	return 0;
}
 */


/*
bài tập 6
với đoạn chương trình:
int*pa=A;
*pa -=2;
khi đó, pa=?
a) a.&A[0] (đung vì chỉ giảm 2 ở A[0], còn vị trí vẫn nguyên )
b) b.&A[2]
c) c.&A[4]
d) d.Khong xác định 

*/
 /*
#include<iostream>
using namespace std;
int main() {
	int A[5] = { 10,20,30,40,50 };
	int* pa = A;
	*pa -= 2;
	cout << pa << endl;
	pa = &A[0];
	cout << pa << endl;
	return 0;
}
*/

/*
Bài tập 7
với đoạn chương trình:
int A[3][3]={
{10,20,30},
{40,50,60},
{70,80,90}
};
int*pa;
khi đó, để có được kết quả *pa=50, các lệnh nào sau đây đúng ?
a) pa=A+4;
b) pa= (*(A+1)) +1;(đúng)
c) pa=&A[1][1];(đúng)
d) pa=*((*(A+1))+1);
*/
/*
#include<iostream>
using namespace std;
int main() {
	int A[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	int* pa;
	pa = &A[1][1];
	cout << *pa << endl;
	pa = (*(A + 1)) + 1;
	cout <<*pa << endl;

	return 0;
}

*/

/*
bài tập 8
Giả sử khai báo một hàm sử dụng con trỏ hàm với khuôn mẫu sau:
int Calcul(int a,int b, int (*Xcalcul)(int x,int y)){}
và ta có cài đặt một số hàm như sau:
int add(int a, int b);
void cal(int a, int b);
int squere(int a);
Khi đó, lời gọi hàm nào sau đây đúng:
a) Calcul(5,10,add);
b) Calcul(5,10,add(2,3));
Calcul(5,10,cal);
Calcul(5,10,squere);
*/

/*
Bài tập 9
Ta muốn cấp phát bộ nhớ cho một con trỏ kiểu iint và khởi đầu giá trị cho nó là 20.
Lệnh nào sau đây là đúng:
a) int *pa=20;
b) int *pa=new int{20};
c) int *pa=new int (20);(đúng)
d) int *pa=new int [20];
*/

/*
#include<iostream>
using namespace std;
int main() {
	int* pa = new int(20);
	cout << *pa << endl;
	return 0;
}
*/


/*
Bài tập 10
Ta muốn cấp phát bộ nhớ cho một mảng động kiểu int có chiều dài là 20.
Lệnh nào sau đây đúng:
a) int *pa=20;
b)int *pa=new int{20};
c) int *pa= new int (20);
d) int *pa = new int[20];(đúng)
*/
 
/*
#include<iostream>
using namespace std;
int main() {
	int* pa = new int[20];
	return  0;

}
*/


/*
Bài tập 11
Xét đoạn chương tình sau:
int A[5]={10,20,30,40,50};
int *pa=A;
pa=new int (2);
Khi đó, *pa=?
a)10
b)30
c)2
d) Không xác định (đúng)
*/
/*
#include<iostream>
using namespace std;
int main() {
	int A[5] = { 10,20,30,40,50 };
	*pa = A;
	pa = new int(2);
	cout << *pa << endl;
	return 0;
}
*/


/*
Bài 12 
Viết chương trình thực hiện các yêu cầu sau trên mảng số(chỉ nói mảng 
thì mặc định là mảng một chiều)(các phần tử của mảng được nhập từ bàn phím 
hoặc phát sinh tự động).

Tính tổng tất cả các phần từ

Đếm số lần xuất hiện một phần tử x bất kỳ ( phần tử x nhập 
từ bàn phím).

Trộn 2 mảng một chiều a,b các phần tử xen kẽ nhau thành mảng một chiều (a,b có 
thể có số phần tử khác nhau).

Xóa một phần tử bất kỳ trên mảng 

*/

/*
#include<iostream>
#define MAX 100
using namespace std;


void nhapMang(int a[], int& n)
{
	do {
		cout << "\n  nhap so luong phan tu cua mang:";
		cin >> n;
		if (n<0 || n> MAX )
		{
			cout << " so luong phan tu k hop le. Vui long kiem tra lai!";
		}
	}
	while (n<0 || n> MAX );

	for  (int i = 0; i < n; i++)
	{
		cout << "\n Nhap vao phan tu thu  " << i << " ";
		cin >> a[i];
	}
}
 
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


int tongTatCaPhanTu(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong = tong + a[i];
	}
	return tong;
}

int demSoLanXH(int a[], int n, int d) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == d) {
			dem++;
		}
	}
	return dem;
}

//bo het tat ca cac phan tu mang a và b vao c 
void tronMang(int a[], int b[], int c[], int n, int m, int &l) {

	int i;
	for (i = 0; i < n  && i < m ; i++, l += 2)
	{
		c[l] = a[i];
		c[l + 1] = b[i];
	}
	while (i < n)
	{
		c[l++] = a[i++];
	}
	while (i < m)
	{
		c[l++] = b[i++];
	}
}


void xoaPhanTu(int a[], int &n, int x)
{

	if (x <= 0 && x < n) {

		for (int i = x; i < n; i++) {
			a[i] = a[i + 1];
			n--;
		}
	}


}

void main() {
	int a[MAX];
	int n;
	int b[MAX];
	int m;
	int c[MAX + MAX];
	int l = 0;
	int d;
	int x;

	cout << "\n nhap mang a";
	nhapMang(a, n);

	cout << "\n  Tong cac phan tu trong mang la " <<	tongTatCaPhanTu(a, n);

	cout << "\n  Nhap phan tu can dem   ";
	cin >> d;
	cout << "\n  so luong xuat hien cua phan tu trong mang la " << demSoLanXH(a, n, d);

	cout << "\n nhap mang b";
	nhapMang(b, m);
	tronMang(a, b, c, n, m, l);
	xuatMang(c, l);

	cout << "\n Nhap vi tri   can xoa mang ";
	cin >> x;

	xoaPhanTu(a, n, x);
	xuatMang(a, n);


	system(" pause ");
}

*/


// bai 13
/*
Viết chương trình thực hiện các yêu cầu sau trên mảng số nguyên
-đếm số lần xuất hiện của các số nghuyên dương
- đếm số phần tử là số nguyên tố và tính tổng các phần tử này
- xóa n phần tử liên tục trên mảng bắt đầu từ một vị trí x cho trước
-Nhập vào 2 mảng một chiều, xóa trên 2 mảng này tất cả các phân tử trùng nhau của 2 mảng 

*/

/*

#include<iostream>
#include<cmath  >
# define MAX 100
using namespace std;

void nhapMang(int a[], int& n) {
	do {
		cout << " \n Moi ban nhap so luong phan tu cua mang";
		cin >> n;
		if (n<0 || n>MAX) {
			cout << "\n  So luong phan tu sai. Vui long kiem tra lai!";
		}
	}
	while (n<0 || n>MAX);
	for (int i = 0; i < n; i++)
	{
		cout << "\n nhap phan tu thu " << i << " ";
		cin >> a[i];
	}
}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "   ";
	}
}

void timPhanTuPhanBiet(int a[], int n, int b[], int& m) {
	m = 0;
	b[m] = a[0];
	m++;
	for (int i = 1; i < n; i++) {
		bool kiemTra = true;
		for (int j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				kiemTra = false;
				break;
			}
		}
		if (kiemTra === true ) {
			b[m] = a[i];
			m++;
		}
	}
}

void  demXH (int a[], int n, int b[],int & m) {
	timPhanTuPhanBiet(a, n, b, m);
	for (int i = 0; i < m; i++) {
		// lay tung phan tu mang b, mang chua phan tu phan biet de duyet voi toan bo mang a
		int dem = 0;
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				dem++;
			}
		}


		cout << "\n Phan tu" << b[i] << " xuat hien" << dem << "lan" << endl;
	}
 }

bool kiemTraNguyenTo (int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int dem(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (kiemTraNguyenTo(a[i]) == true) {
			dem++;
		}
	}
	return dem;
}

int tongNT (int a[], int n)
{
	int tong  = 0;
	for (int i = 0; i < n; i++) {
		if (kiemTraNguyenTo(a[i]) == true) {
			tong += a[i];
		}
	}
	return tong;
}

int main() {
	int a[MAX], b[MAX], c[MAX];
	int n, m, p;
	nhapMang(a, n);
	
	cout << " \nso lan xuat hien ";
	demXH(a, n, b, m);
	cout << "\n  so phan tu la so nguyen to " << dem(a, n);
	cout << "\n tong cac nguyen to la " << tongNT(a, n);

	cout << " Mang c";
	nhapMang(c, p);

	system("pause ");
}

*/

//bài 14

/* 
Viết chương trình thực hiện các yêu cầu sau trên mảng số:
- Sắp xếp các phẩn tử trên mảng tăng dần hoặc giảm dần theo yêu cầu
-đảo ngược mảng(phần tử đầu tiên về cuối, cuối lên đầu)
- đếm số mảng con tăng dần hoặc giảm dần 
- đếm số lượng các phàn tử khác nhau trong mảng
*/

/*
#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;


void nhapMang(int a[], int& n)
{
	do {
		cout << "\n  nhap so luong phan tu cua mang:";
		cin >> n;
		if (n<0 || n> MAX)
		{
			cout << " so luong phan tu k hop le. Vui long kiem tra lai!";
		}
	} while (n<0 || n> MAX);

	for (int i = 0; i < n; i++)
	{
		cout << "\n Nhap vao phan tu thu  " << i << " ";
		cin >> a[i];
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void sapXepTangDan(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int doi = a[i];
				a[i] = a[j];
				a[j] = doi;
			}
		}
	}
}

void sapXepGiamDan(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int doi = a[i];
				a[i] = a[j];
				a[j] = doi;
			}
		}
	}
}

void daoNguocMang(int a[], int n) {
	for (int j = n - 1; j >= 0; j--) {
		cout << a[j];
	
	}
}

void timPhanTuPhanBiet(int a[], int n, int b[], int& m) {
	m = 0;
	b[m] = a[0];
	m++;
	for (int i = 1; i < n; i++) {
		// duyet phan tu mang a duyet tu vi tri i-1 den 0 
		// neu a[i] ma duyet ve truoc do ma chua co ton tai thi l phan tu phan biet
		bool Kiemtra = true;
		for (int j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				Kiemtra = false;
				break;
			}
		}

		if (Kiemtra == true) {
			b[m] = a[i];
			m++;
		}
	}
	cout  << m;
}

int  main() {
	int a[MAX], b[MAX];
	int n;
	int m;
	nhapMang(a, n);
	cout << "\n  Mang sap xem tang dan  ";
	sapXepTangDan(a, n);
	xuatMang(a, n);
	cout << " \n Mang sap xep giam dan";
	sapXepGiamDan(a, n);
	xuatMang(a, n);

	cout << " \n Mang sau khi dao nguoc la ";
	daoNguocMang(a, n);


	cout << "\n so phan tu rieng biet trong mang la ";
	timPhanTuPhanBiet(a,n,b,m);
	
	system(" pause ");
	return 0;
}
*/

//bài 15
 /*
 Viết phương trình thực hiện các phép tính cộng trừ nhân chia trên đa thức
 Các đa thức biểu diễn bằng mảng đôngj một chiều 
 Bậc các đa thức và hệ số được nhập từ các bàn phím 
 */

/*
#include<iostream>
using namespace std;
struct daThuc {
	int n;//số bậc cao nhất của đa thức
	float* heSo;// Mảng danh sách hệ số

};

typedef struct daThuc DATHUC;// dùng vetor 

void nhapDaThuc(DATHUC* x) {

	do {

		cout << "\n Nhap vao so bac cua da thuc";
		cin >> x->n;
		if (x->n < 1) {
			cout << "\n So bac cua da thuc >=1. Vui long nhap lai!";
		}
	} while (x->n < 1);// trỏ tới n 

	x->heSo = new float[x->n + 1];
	for (int i = 0; i <= x->n; i++) {
		cout << " \n Nhap vao he so thu " << i << " la:";
		cin >> x->heSo[i];

	}
}

void xuatDaThuc(DATHUC* x) {
	for (int i = 0; i < x->n; i++) {
		cout << x->heSo[i] << "*x^" << i << "+";
	}
	cout << x->heSo[x -> n] << "*x^" << x->n;
}

int main(int argc, char** argv) {
	DATHUC* x = new DATHUC;
	nhapDaThuc(x);
	DATHUC* y = new DATHUC;
	nhapDaThuc(y);
	delete x;
	delete y;
	system(" pause ");
}

*/

//bai 16 
/*
Viết chương trình xuất ra ma trận kích thức m*n.
Ma trận được biêủ diễn bằng mảng động hai chiều 
Giá trị kích cỡ ma trân (m,n) và giá trị các phần tử của ma trận được nhập từ bàn phím 
*/

/*
#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;

void nhap(int a[][MAX], int& m, int& n) {
	cout << " Nhap kich co ma tran ";
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << " nhap phan tu a[" << i<< "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void xuat(int a[][MAX], int m, int n) {
	cout << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << "   ";
		}
		cout << endl;
	}
}

int main()
{
	int a[MAX][MAX];
	int m, n;
	nhap(a, m, n );
	xuat(a, m, n);
	return 0;


}
*/