//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//int 정수 2^32
//	// bool:true, false 1바이트
//	bool Data[10];
//
//	//c언어에서는 false면 0으로 표기 true면 1
//	/*bool result = 10 != 100;
//	cout << result << endl;*/
//
//
//	//for (int i = 0; false; i++)//초기값을 넣지않고 돌려도 가능하다. ex) for(; i<10;i++){}
//	//	//중간에 조건이없으면 참으로 보고 무한루프 
//	//{
//
//	//}
//	int sum = 0;
//	int jjaksu = 0;
//	int holsu = 0;
//	int sambaesu = 0;
//	int Array[100] = { 0, };
//	// ++i <<는 증감이 아니라 i를 더함
//	for (int i = 0; i < 100; i++)
//	{
//		Array[i] = i + 1;
//		sum += Array[i]; //1~100까지의 총합
//
//		if (i % 3 == 2) //3의 배수 합
//		{
//			sambaesu += Array[i];
//		}
//
//		if (i % 2 == 0)
//		{
//			jjaksu += Array[i]; //2로나눴을때 0으로 떨어지는수의 합
//		}
//
//		else {
//			holsu += Array[i]; //앞의 경우를 제외햇을때의 합: 홀수
//		}
//
//		//cout << Array[i] << endl;
//	}
//	cout << sum << endl;//총합
//	cout << jjaksu << endl;//짝수의합
//	cout << holsu << endl;//홀수의 합
//	cout << sambaesu << endl;//3의배수의합
//
//
//	//for문안의 if문조건도 좋지만 for문 자체의 조건을 수정해서 사용할수도 있다.
//	int Total = 0;
//	for (int i = 2; i <= 100; i += 2)
//	{
//		Total += i;
//	}
//	cout << Total << "짝수로 시작하는 짝수 증감 반복의 합";
//	for (int i = 110, j = 0; i > 0; i--, j++)
//	{
//	}
//	//ex) A->65 mapping
//	int Inventory;
//
//
//
//	return 0;
//}