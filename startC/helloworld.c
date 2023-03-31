/*

#include <stdio.h>

int main()
{
	printf("Hello world!\n");

	return 0;
}

*/





/*
#include <stdio.h>

int main()
{
	printf("�����! \a\n");
	printf("\\\n");
}

*/
//-----------------------------------------------------------C��� ���� 3��. ���α׷��� �⺻ ���� https://blog.hexabrain.net/5





//���� ����(local variable) �� ������ ������ ����� �޸� �������� �ڵ����� �Ҹ��Ѵ�.
//���� ������ �ڵ� ����(automatic variable)��� �ϸ� �̷� ���������� ������ ���� auto �� Ű���尡 �����Ѵ�.

//c���� ����local�� { �� } �� �ϳ��� �������� �����ϸ� ����.
/*
#include <stdio.h>

int main() {
	int a;
	{
		int b;
	}
	{
		int c;
	}

	return 0;
}
*/




/*
#include <stdio.h>

int main()
{
	int a = 45;
	{
		int a = 64;
		printf("a : %d\n", a);
	}
	printf("a : %d\n", a);

	return 0;
}
//������ ���ü� : B������ A������ ���Եȴٰ� ������ �� A���� �̹� ����� ������ �־ B���� �ٽ� ����Ǿ� ������, A���� ����� ������ ���õȴٴ� Ư��.

*/




//���� ������ ���� �ܺο� ����� ������ ���´´�. �ڽ��� ����Ǿ� �ִ� ������ � �Լ������� ���� �����ϴ�.
/*
#include <stdio.h>

int a;

int main()
{
	printf("a : %d\n", a);
	a = 40;
	printf("a : %d\n", a);

	return 0;
}

//int a; ������ �ٷ� ���� �����̴�. ���α׷��� ����� ������ �޸� ������ ���������� ���α׷��� ���۵��ڸ��� �޸� ������ �Ҵ�ȴ�.
//�Լ� ������ ���� �������� �ʾ����� ��� �Լ� ������ ���� ���� a�� ����� �� �ִ�. �׸��� ���� ������ ���� �ʱ�ȭ�� �������ʾƵ� 0���� �ʱ�ȭ�Ǿ� �ִ�.

*/



/*
//���� ������ ������ ������ ����� �޸� �������� �Ҹ��Ѵٰ� �ߴ�.
//������ ���� ����(static variable)�� ����ϸ� ������ ����� ���� �����ϸ鼭 �޸� ���������� �Ҹ����� �ʴ´�.

#include <stdio.h>
void func()
{
	static int a;
	a = a + 1;
	printf(" a : %d\n", a);
}
int main()
{
	func();
	func();
	func();

	return 0;
}
//1,2,3 ���� ��µ�.

*/




//�ܺ� ����(extern variable)�� ��⺰ ���� �����Ͽ� ���ǰ�, �ҽ� �ۿ����� ��� �����ϸ� �Լ� �ۿ��� ����Ǿ��ٸ� ����������� ��� ������ ���� ������ �ȴ�.
//�ܺ� ������ extern �̶� Ű���带 ���̰� �����ϴµ� �� �ܺ� ������ ���� ������ ���� �Լ����� ������ �� ������ ���� ����ó�� �ڵ����� 0���� �ʱ�ȭ�ȴ�.
/*
#include <stdio.h>

int a;
extern void func();

int main()
{
	printf("a : %d\n", a);
	func();
	printf("a : %d\n", a);

	return 0;
}
//func�� �ܺ� ��⿡�� ������ �������� �ȴ�.
//------------------------------------------------------------------C��� ���� 4��.������ ���� ����, ������ �ܺ� ����
*/



/*
//�Լ� Function  ������ �����ϴ�. ���������� ��������.
#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() 
{
	int a, b;

	scanf_s("%d%d", &a, &b);
	printf("v value : %d\n", sum(a, b));

	return 0;
}
*/



//���ڸ� ���̷���?
/*
#include <stdio.h>

char sum1(char chr) {
	return chr;
}

char main() {
	char chr;

	scanf_s("%c%c%c%c%c%c", &chr);
	printf("char value : %c\n", sum1(chr));

	return 0;
}
*/

//���� ���̱Ⱑ �� �ȵǳ�
//------------------------------------------------C��� ���� 5��. �Լ��� ���ǿ� ���

/*
// #include �� �ܺο� ����Ǿ� �ִ� �Լ� or ����� ����ϱ� ���ؼ� �����ؾ� �ϴ� ��. #define �� ���� ��ó������ �Ҹ�. ��, ������ ������ �̸� ó���Ǵ� ����. ���� ��ó����� �ڿ� �����ݷ��� ��������.
// #define �� �Լ� Ȥ�� ����� �ܼ�ȭ�ϰų� Ư���� ����� �̸��� �ٿ������ν� �������� �����ִ� ������ �ϰ� �ִ�. #define ����� ���

#include <stdio.h>
#define PI 3.14

int main() {
	double dim;

	scanf_s("%lf", &dim);
	printf("%0.lf * %0.lf * %lf = %lf\n", dim, dim, PI, dim * dim * PI);
}
*/

/*
#include <stdio.h>
#define SUM(X,Y) ((X)+(Y))    //SUM(X,Y) �� ((X),(Y)) �� ġȯ��.

int main() {
	int a = 10, b = 20;
	printf("%d\n", SUM(a, b));
}

*/

//�� #define �� ��ó�� �������� ġȯ�� �ȴ�. �� ���� �����ؼ� ��ȣ�� �� ����Ѵ�. �Ʒ��� �����غ���.
/*
#include <stdio.h>
#define SUM(X,Y) X+Y

int main() {
	int a = 10, b = 20;
	printf("%d\n", SUM(a, b) * 100);
}
//�� �Լ��� �����ϸ� 2010�� ��µȴ�. �ֳ��ϸ� #define�� ��ó���� ���� main�Լ��� a+b*100�� �ǰ� 10+20*100 ��Ģ�������� ���� 10+2000�� �Ǿ� 2010�� ��� �Ǵ� ����.
//�׷��Ƿ� ��ó������ ������ ��ȣ�� �� ����ؾ��Ѵ�.


*/


/*
#include <stdio.h>
#define SUM(X,Y) X+Y

int main() {
	int a = 10, b = 20;
	printf("%d\n", SUM(a, b) * 100);
	
	if (SUM(a, b)*100 == 2010) {
		printf("thank you");
		return 0;
	}
}
*/
//-------------------------------------------C��� ���� 6��. ��ó���⹮

/*
#include <stdio.h>
int main() {
	int a, b;

	scanf_s("%d %d", &a, &b);

	if (a < b)
		printf("b�� a���� ũ��.\n");
	if (a > b)
		printf("a�� b���� ũ��.\n");
	if (a == b)
		printf("a�� b�� ����.\n");
	if(a != b)
		printf("a�� b�� ���� �ʴ�.\n");
		return 0;
	}
*/
//���� else �� else if �� �ٿ� ����ϴ� �͵� ������.

/*
#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	if (a == 2)
		printf("2�� �ԷµǾ����ϴ�.\n");
	else if (a == 3)
		printf("3�� �ԷµǾ����ϴ�.\n");
	else
		printf("2, 3�� �ƴ� �ٸ� ���� �ԷµǾ����ϴ�.\n");

		return 0;
}
*/

//�� ������ a && b -> a�� b�� ��� ���̸� ��. AND
//			a || b -> a�� b�� �ϳ��� ���̸� ��. OR
//			!a -> a�� ���� �ƴϴ�.				NOT

//----------------------------------------------------------C��� ���� 7��. ��� if~else


//while(����){
//	�ݺ� ����;
//}
//while���� ������ ���̸� �ݺ� ������ �ڵ带 �ݺ��մϴ�.


/*
#include <stdio.h>
int main() {
	int i = 5;

	while (i < 10) {
		printf("ȣ�� Ƚ�� : %d\n", i);
		i++;
	}
	return 0;
}

//do {
//	�ݺ� ����;
//} while(����);
//do while���� while���� �������� �ݺ� ������ �ѹ� �����ϰ��� ������ ���� ���� �ݺ� ������ �ڵ带 �ݺ��մϴ�.
//�� do while ���� ������ �˻��ϱ� ���� �ݺ� ������ �ּ��� �ѹ��� �����ؾ��ϴ� ��Ȳ�� �� ����غ� �� �ֽ��ϴ�.
*/

/*
#include <stdio.h>

int main() {
	int i = 0;

	while (i <= 100) {
		i++;
		if (i%2 != 0) continue;
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}
// 1%2!=0 �̹Ƿ� ������ ���̴�. �׷��� continue�� ���� while�ݺ� �������� ����. i�� Ȧ���� printf("%d ", i) ���� ������� �����Ƿ� print�� ¦���� �ȴ�.
// 2%2=0 �̹Ƿ� ������ �����̴�. �׷��� ���� ������ ����ȴ�. i�� ¦���� printf("%d ", i) ���� ����ȴ�.

*/


/*
//for(�ʱ��; ����; ������){
//	�ݺ� ����;
//}
#include <stdio.h>

int main() {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", i);
	return 0;
}
*/


//for���� �̿��� 1���� 100������ ��
/*
#include <stdio.h>

int main() {
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++)
		sum = sum + i;

	printf("%d", sum);
	return 0;
}
*/

//-----------------------------------------------C��� ���� 8��. �ݺ��� while, do while, continue , for



//�迭 int
/*
#include <stdio.h>

int main() {
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;
	

	for (i = 0; i < 3; i++)
		printf("array[%d]�� �� : %d\n", i, array[i]);
	return 0;
}
*/



//�迭 char
/*
#include <stdio.h>
int main() {
	char arr[5];
	scanf_s("%s", arr);
	printf("arr : %s\n", arr);
	return 0;
}
*/


//2���� �迭
/*
#include <stdio.h>

int main(void)
{
	int arr01[6] = { 10, 20, 30, 40, 50, 60 };
	int arr02[2][3] = { 10, 20, 30, 40, 50, 60 };

	printf("arr01�� �迭 ����� ��\n");
	printf("%d %d %d %d %d %d\n", arr01[0], arr01[1], arr01[2], arr01[3], arr01[4], arr01[5]);
	printf("arr02�� �迭 ����� ��\n");
	printf("%d %d %d %d %d %d\n", arr02[0][0], arr02[0][1], arr02[0][2], arr02[1][0], arr02[1][1], arr02[1][2]);
	return 0;
}
*/


/*
#include <stdio.h>

int main() {
	//int array2D[3][3] = {1,1,1,1,2,4,1,3,9 }; <-�̰͵� ��.
	int array2D[3][3] =
	{ {1,1,1},
	  {1,2,4},
	  {1,3,9} 
	};
	int i;
	int j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d ", &array2D[i][j]);
			printf("array : %d ", array2D[i][j]);
		}
	}
}
*/


/*
//http://www.tcpschool.com/c/c_array_twoDimensional ��ũ�� ������.

#include <stdio.h>
void func(int arr[], int len);
int main() {
	int arr[] = { 1,2,3,4,5,6 };
	func(arr, sizeof arr / sizeof(arr[6])); //�迭�� ���� ���� sizeof �迭�� / sizeof �迭��[]
	return 0;
}

void func(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//������ �迭 arr�� ����� ���ÿ� �ʱ�ȭ�Ǿ���.
//func �Լ��� ȣ���ϸ鼭 �迭 arr�� �迭�� ���̸� �μ�argument �� �ѱ�� �ִ� ���� Ȯ���� �� �ִ�.
//�迭�� ���̸� �Բ� �ѱ� ������ �迭�� �Ѱܹ��� func�Լ��� ���忡���� �迭�� ���̸� �𸣱⶧��.

//�迭�� �����ϴ� �޸��� ũ�� = �迭�� ���� * sizeof(Ÿ��)
//�迭�� ���� = sizeof(�迭��) / sizeof(�迭��[0])


*/

//----------------------------------------------------------C��� ���� 9��. �迭(������ �迭���� �򰥷��� �� ��ũ�� ������. http://www.tcpschool.com/c/c_array_twoDimensional )



/*
������ Pointer �� �޸��� �ּҰ��� ����ִ� ���� Ȥ�� ����̴�. �����غ������� �޸��� �ּ�ü�踦 �������� ���ϸ� �����͸� ��Ȯ�� ������ �� ����.
���⼭ �ּҶ� �޸��� ���� ����� ��ġ������ �ϳ��� �ּҰ��� 1byte ũ���� �޸� ������ ǥ���Ѵ�.
�� ��, �� �ּҴ� 1byte�� �޸� ������ ������. �Ѱ��� �ּҴ� 8���� ��Ʈ�� ����. 1byte=8bit

16��Ʈ. ��, 2���� ������? 65536���� �ּҸ� �ο��� �� ����.
���� 16��Ʈ�� �ּҰ� ������ 0�������Ͷ�� 65535�������� �ּ� �ο��� ������.
16��Ʈ = 2����Ʈ = 0b1111111111111111 = 65535

16��Ʈ�� ��Ÿ�� �� �ִ� �ִ� 2���� ǥ��

(2^n-1)-1 = 2^15-1 = 32767

unsigned int�� ���� 2�� ������ �����ϰ� �Ǹ� 0~65535
--------------������� �ּҰ��� ���ذ� �ʿ�.------------

*/


/*
#include <stdio.h>
int main() {
	int num, num1, num2;

	num = 10;
	num1 = 12;
	num2 = 20;
	printf("num�� �޸� ���� ��ġ : %#x\n", &num); // &�����ڸ� ������ �տ� �����ͼ� ������ �ּҰ���  return �ϵ��� ��.
	printf("num1�� �޸� ���� ��ġ : %#x\n", &num1);// �׷��� 16������ ���·� print ��.
	printf("num2�� �޸� ���� ��ġ : %#x\n", &num2); // %x�� 16������ ��½�ų �� �ʿ��� ����

	return 0;
}

   &�����ڴ� '��� ������ �ּҰ��� �˾Ƴ��� ����'�� �ϰ� ������ ����� �޸� ������ ��ġ���������Ƿ� �ּҰ� ���� &�����ڸ� ����� �� ����.
*/



#include <stdio.h>
int main() {
	int Number;
	int *pNumber;

	Number = 10;
	pNumber = &Number;

	printf("���� Number�� �� : %d\n", Number);
	printf("���� Number�� �ּҰ� : %x\n\n", pNumber);

	*pNumber = 60;
	printf("���� Number�� �� : %d\n", Number);
	return 0;
}
//������ ������ �ּҰ��� ������ �� �ִ�. 
// ���⿡�� 12���� *�����ڴ� � ����� �ϳĸ�
//���� ���� �����ڷ� �� �����Ͱ� ����Ű�� �޸� ������ ������ �ǹ��Ѵ�.
//12���� pNumber�� ����Ű�� ���� Number�� �ǹ��ϰ� �Ǹ� �̰��� Number=60 �� ���� ����� �Ѵ�.