//#include<iostream>
//using namespace std;
//
//int main() //entry point 여러파일을 작업할땐 메인 함수를 담은 파일을 제외한 남은 파일은 메인 함수를 담지 않는다.
//{
//	bool result1 = true;
//	bool result2 = false;
//	bool result3 = false;
//
//	//길게 한줄로 쓰는것보다 나눠서 처리하는것도 좋은방법(괄호안의걸 먼저처리함)
//	bool Temp = (result1 || result2);
//	Temp = Temp && result3 && (10 > 3);
//
//	//두조건이 참이면 출력
//	if (result1 && result2)
//	{
//		cout << "hello" << endl;
//	}
//	//한조건이라도 참이면 출력
//	if (result1 || result2)
//	{
//		cout << "hello2" << endl;
//	}
//
//	//해당 조건의 반대조건
//	if (!result2)
//	{
//		cout << "h3" << endl;
//	}
//
//	//연산자 우선 순위 ()
//	cout << ((result1 || result2) && result3);
//
//	//fout ->file처리
//
//
//	char temp2 = 'A';
//	char temp22 = 65;
//	//어느경우에도 저장은 숫자로 하고 출력할땐 자료형에 맞게 출력
//	//자료형이 문자면 A 정수면 65 반대의 경우 자료형이 문자인경우에도 숫자이면 ascii코드에 일치하는 문자 출력
//
//	//메모리에 공간잡고 위치값 기록해서 그위치에 초기화해서 값넣고 입력할때 값 꺼내준다
//
//	
//
//
//
//
//	return 0;
//}