// ������������ ������
#include <iostream>

#if 3<10 
#define PI 3.14
#define MSG "Hello"
#endif
#define forever while(true)
#define begin {
#define end }
#define sum(a,b) (a+b)
#define creat_ARR(t,n,s) t*n = new t[s]
#define crt_mx(t, n, s1, s2) t ** n = new t *[s1];\
	for(int i=0;i<10;i++)\
		n[i] = new t[s2]
		
#if 1 == 2 //if
void hi() {
	std::cout << "Hello!" << '\n';
}
#elif 2 == 2 //else if
void hi() {
	std::cout << "WOW!" << '\n';
}
#else //else
void hi() {
	std::cout << "Bye!" << '\n';
}
#endif // ����� ������� �������
#ifdef sum //���� ������ ����������						 #ifndef //���� ������� �� ����������
const int K = 10;
#else
const int K = 11;
#error "������! sum ������ ������������."
#endif
#define print(v) std::cout<<#v<<" = "<<v<<'\n'
#define show(a,b) a##b
int main() {
	setlocale(LC_ALL, "Russian");
	int n = 0, m = 2;
	int xy = 10;
	std::cout << show(x, y) << '\n'; //��������� 10
	print(n);
	print(m);
	std::cout <<__LINE__ << std::endl; //45
	std::cout << __FILE__ << '\n'; //���� � ����� ������������
	std::cout << __DATE__ << '\n';
	
	//��������� �������������
	std::cout << "PI = " << PI << '\n';
	std::cout << MSG << '\n';

#undef PI //����������� ���������� PI(�������)

	//���������� �����������
	forever {
		std::cout << ".";
		n++;	
		if (n >= 5)
			break;
	}
	std::cout << std::endl;
	
	//�������
	
	std::cout << sum(5, 1.6) << '\n';
	creat_ARR(int, px, 5);
	px[0] = 1;
	delete []px;
	crt_mx(int, matr, 6, 6);
	for (int i = 0; i < 4; i++)
		delete[] matr[i];
	delete[]matr;
	hi();
	


	return 0;
}