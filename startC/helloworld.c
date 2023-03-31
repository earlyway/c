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
	printf("경고음! \a\n");
	printf("\\\n");
}

*/
//-----------------------------------------------------------C언어 강좌 3편. 프로그램의 기본 구성 https://blog.hexabrain.net/5





//지역 변수(local variable) 란 선언한 지역을 벗어나면 메모리 공간에서 자동으로 소멸한다.
//지역 변수는 자동 변수(automatic variable)라고도 하며 이런 지역변수의 선언을 위한 auto 란 키워드가 존재한다.

//c언어에서 지역local은 { 와 } 를 하나의 지역으로 생각하면 쉽다.
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
//변수의 가시성 : B지역이 A지역에 포함된다고 가정할 때 A에서 이미 선언된 변수가 있어도 B에서 다시 선언되어 버리면, A에서 선언된 변수는 무시된다는 특성.

*/




//전역 변수는 영역 외부에 선언된 변수를 일컫는다. 자신이 선언되어 있는 내부의 어떤 함수에서든 접근 가능하다.
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

//int a; 변수가 바로 전역 변수이다. 프로그램이 종료될 때까지 메모리 공간에 남아있으며 프로그램이 시작되자마자 메모리 공간에 할당된다.
//함수 내에서 따로 선언하지 않았으나 모든 함수 내에서 전역 변수 a를 사용할 수 있다. 그리고 전역 변수는 따로 초기화를 해주지않아도 0으로 초기화되어 있다.

*/



/*
//지역 변수는 선언한 영역을 벗어나면 메모리 공간에서 소멸한다고 했다.
//하지만 정적 변수(static variable)를 사용하면 영역을 벗어나도 값을 유지하면서 메모리 공간에서도 소멸하지 않는다.

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
//1,2,3 으로 출력됨.

*/




//외부 변수(extern variable)는 모듈별 분할 컴파일에 사용되고, 소스 밖에서도 사용 가능하며 함수 밖에서 선언되었다면 어느곳에서라도 사용 가능한 전역 변수가 된다.
//외부 변수는 extern 이란 키워드를 붙이고 선언하는데 이 외부 변수는 선언 이전에 나온 함수에선 참조할 수 없으며 정적 변수처럼 자동으로 0으로 초기화된다.
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
//func란 외부 모듈에서 변수를 가져오게 된다.
//------------------------------------------------------------------C언어 강좌 4편.지역과 전역 변수, 정적과 외부 변수
*/



/*
//함수 Function  재사용이 가능하다. 유지보수가 쉬워진다.
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



//문자를 붙이려면?
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

//문자 붙이기가 잘 안되네
//------------------------------------------------C언어 강좌 5편. 함수의 정의와 사용

/*
// #include 는 외부에 선언되어 있는 함수 or 상수를 사용하기 위해서 선언해야 하는 것. #define 과 같이 전처리기라고 불림. 즉, 컴파일 이전에 미리 처리되는 문장. 또한 전처리기는 뒤에 세미콜론이 오지않음.
// #define 은 함수 혹은 상수를 단순화하거나 특정한 상수에 이름을 붙여줌으로써 가독성을 높여주는 역할을 하고 있다. #define 상수명 상수

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
#define SUM(X,Y) ((X)+(Y))    //SUM(X,Y) 가 ((X),(Y)) 로 치환됨.

int main() {
	int a = 10, b = 20;
	printf("%d\n", SUM(a, b));
}

*/

//이 #define 은 전처리 과정에서 치환이 된다. 이 점을 유의해서 괄호를 잘 써야한다. 아래를 참고해보자.
/*
#include <stdio.h>
#define SUM(X,Y) X+Y

int main() {
	int a = 10, b = 20;
	printf("%d\n", SUM(a, b) * 100);
}
//이 함수를 실행하면 2010이 출력된다. 왜냐하면 #define의 전처리로 인해 main함수는 a+b*100이 되고 10+20*100 사칙연산으로 인해 10+2000이 되어 2010이 출력 되는 것임.
//그러므로 전처리문을 쓸때는 괄호를 잘 사용해야한다.


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
//-------------------------------------------C언어 강좌 6편. 전처리기문

/*
#include <stdio.h>
int main() {
	int a, b;

	scanf_s("%d %d", &a, &b);

	if (a < b)
		printf("b가 a보다 크다.\n");
	if (a > b)
		printf("a가 b보다 크다.\n");
	if (a == b)
		printf("a와 b가 같다.\n");
	if(a != b)
		printf("a와 b가 같지 않다.\n");
		return 0;
	}
*/
//물론 else 나 else if 를 붙여 사용하는 것도 가능함.

/*
#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	if (a == 2)
		printf("2가 입력되었습니다.\n");
	else if (a == 3)
		printf("3이 입력되었습니다.\n");
	else
		printf("2, 3이 아닌 다른 수가 입력되었습니다.\n");

		return 0;
}
*/

//논리 연산자 a && b -> a와 b가 모두 참이면 참. AND
//			a || b -> a와 b중 하나라도 참이면 참. OR
//			!a -> a가 참이 아니다.				NOT

//----------------------------------------------------------C언어 강좌 7편. 제어문 if~else


//while(조건){
//	반복 영역;
//}
//while문은 조건이 참이면 반복 영역의 코드를 반복합니다.


/*
#include <stdio.h>
int main() {
	int i = 5;

	while (i < 10) {
		printf("호출 횟수 : %d\n", i);
		i++;
	}
	return 0;
}

//do {
//	반복 영역;
//} while(조건);
//do while문과 while문의 차이점은 반복 영역을 한번 실행하고나서 조건이 참일 때만 반복 영역의 코드를 반복합니다.
//즉 do while 문은 조건을 검사하기 전에 반복 영역을 최소한 한번은 실행해야하는 상황일 때 고려해볼 수 있습니다.
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
// 1%2!=0 이므로 조건이 참이다. 그래서 continue에 의해 while반복 조건으로 간다. i가 홀수면 printf("%d ", i) 행이 실행되지 않으므로 print는 짝수만 된다.
// 2%2=0 이므로 조건이 거짓이다. 그래서 다음 행으로 진행된다. i가 짝수면 printf("%d ", i) 행이 실행된다.

*/


/*
//for(초기식; 조건; 증감식){
//	반복 영역;
//}
#include <stdio.h>

int main() {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", i);
	return 0;
}
*/


//for문을 이용한 1부터 100까지의 합
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

//-----------------------------------------------C언어 강좌 8편. 반복문 while, do while, continue , for



//배열 int
/*
#include <stdio.h>

int main() {
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;
	

	for (i = 0; i < 3; i++)
		printf("array[%d]의 값 : %d\n", i, array[i]);
	return 0;
}
*/



//배열 char
/*
#include <stdio.h>
int main() {
	char arr[5];
	scanf_s("%s", arr);
	printf("arr : %s\n", arr);
	return 0;
}
*/


//2차원 배열
/*
#include <stdio.h>

int main(void)
{
	int arr01[6] = { 10, 20, 30, 40, 50, 60 };
	int arr02[2][3] = { 10, 20, 30, 40, 50, 60 };

	printf("arr01의 배열 요소의 값\n");
	printf("%d %d %d %d %d %d\n", arr01[0], arr01[1], arr01[2], arr01[3], arr01[4], arr01[5]);
	printf("arr02의 배열 요소의 값\n");
	printf("%d %d %d %d %d %d\n", arr02[0][0], arr02[0][1], arr02[0][2], arr02[1][0], arr02[1][1], arr02[1][2]);
	return 0;
}
*/


/*
#include <stdio.h>

int main() {
	//int array2D[3][3] = {1,1,1,1,2,4,1,3,9 }; <-이것도 됨.
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
//http://www.tcpschool.com/c/c_array_twoDimensional 링크도 참고함.

#include <stdio.h>
void func(int arr[], int len);
int main() {
	int arr[] = { 1,2,3,4,5,6 };
	func(arr, sizeof arr / sizeof(arr[6])); //배열의 길이 측정 sizeof 배열명 / sizeof 배열명[]
	return 0;
}

void func(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//정수형 배열 arr이 선언과 동시에 초기화되었다.
//func 함수를 호출하면서 배열 arr와 배열의 길이를 인수argument 로 넘기고 있는 것을 확인할 수 있다.
//배열의 길이를 함께 넘긴 이유는 배열을 넘겨받은 func함수의 입장에서는 배열의 길이를 모르기때문.

//배열이 차지하는 메모리의 크기 = 배열의 길이 * sizeof(타입)
//배열의 길이 = sizeof(배열명) / sizeof(배열명[0])


*/

//----------------------------------------------------------C언어 강좌 9편. 배열(다차원 배열에서 헷갈려서 이 링크도 참고함. http://www.tcpschool.com/c/c_array_twoDimensional )



/*
포인터 Pointer 란 메모리의 주소값을 담고있는 변수 혹은 상수이다. 간단해보이지만 메모리의 주소체계를 이해하지 못하면 포인터를 정확히 이해할 수 없다.
여기서 주소란 메모리의 저장 장소의 위치값으로 하나의 주소값은 1byte 크기의 메모리 공간을 표현한다.
한 블럭, 한 주소당 1byte의 메모리 공간을 차지함. 한개의 주소는 8개의 비트가 묶임. 1byte=8bit

16비트. 즉, 2블럭의 범위는? 65536개의 주소를 부여할 수 있음.
만약 16비트의 주소값 시작이 0번지부터라면 65535번지까지 주소 부여가 가능함.
16비트 = 2바이트 = 0b1111111111111111 = 65535

16비트로 나타낼 수 있는 최대 2진수 표현

(2^n-1)-1 = 2^15-1 = 32767

unsigned int에 의해 2의 보수를 진행하게 되면 0~65535
--------------여기까지 주소값의 이해가 필요.------------

*/


/*
#include <stdio.h>
int main() {
	int num, num1, num2;

	num = 10;
	num1 = 12;
	num2 = 20;
	printf("num의 메모리 저장 위치 : %#x\n", &num); // &연산자를 변수명 앞에 가져와서 변수의 주소값을  return 하도록 됨.
	printf("num1의 메모리 저장 위치 : %#x\n", &num1);// 그래서 16진수의 형태로 print 됨.
	printf("num2의 메모리 저장 위치 : %#x\n", &num2); // %x가 16진수로 출력시킬 때 필요한 포맷

	return 0;
}

   &연산자는 '어느 변수의 주소값을 알아내는 역할'도 하고 있으며 상수는 메모리 공간에 위치하지않으므로 주소가 없어 &연산자를 사용할 수 없다.
*/



#include <stdio.h>
int main() {
	int Number;
	int *pNumber;

	Number = 10;
	pNumber = &Number;

	printf("변수 Number의 값 : %d\n", Number);
	printf("변수 Number의 주소값 : %x\n\n", pNumber);

	*pNumber = 60;
	printf("변수 Number의 값 : %d\n", Number);
	return 0;
}
//포인터 변수는 주소값만 저장할 수 있다. 
// 여기에서 12행의 *연산자는 어떤 기능을 하냐면
//간접 참조 연산자로 이 포인터가 가리키는 메모리 공간의 접근을 의미한다.
//12행은 pNumber가 가리키는 변수 Number를 의미하게 되며 이것은 Number=60 과 같은 기능을 한다.