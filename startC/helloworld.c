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

//문자 붙이기 잘 안되네
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






