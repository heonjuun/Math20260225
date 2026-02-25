#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int Map[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,0,0,0,0,1},
		{1,0,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,9,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	int PlayerX = 1;
	int PlayerY = 1;
	int clear = 0;
	


	//타일맵 매핑
	//Loop, Frame
	for (;;)
	{		
		//이동값을 미리 입력받을 임시 변수생성
		int nextX = PlayerX;
		int nextY = PlayerY;
		int star = rand() % 10;
		int temp;
		temp = _getch();
		//프로세스 처리
		if (temp == 'w')
		{
			nextY--;
		}
		if (temp == 'a')
		{
			nextX--;
		}
		if (temp == 's')
		{
			nextY++;
		}
		if (temp == 'd')
		{
			nextX++;
		}
		if (Map[nextY][nextX] != 1) //위에서 받은 이동값을 기반으로
			//이동할때 y와 x축이 1에 해당되면 실행되지 못하게 제어함 
		{ 
			PlayerX = nextX; //1이 아닌 경우에 이동한 x축과 y축을 플레이어 좌표에 값 저장
			PlayerY = nextY;
		}


		/*PlayerX++;
		PlayerY++;*/
		system("cls");
		//렌더링
		for (int y = 0; y < 10; ++y)
		{
			for (int x = 0; x < 10; x++)
			{
				if (PlayerX == x && PlayerY == y)
				{
					cout << "♬";
				}
				else if (Map[y][x] == 1)
				{
					cout << "@";
	
				}
				else if (Map[y][x] == 9)
				{
					cout << "○";
				}
				else if (Map[y][x] == 0)
				{
					cout << " ";
				}
				if (PlayerY==9 && PlayerX == 9)
				{
					break;
				}

				
				
		
				//cout << Map[y][x]; //y축이 1부터10까지 세로로 쭉내려가면서 x축10번찍고
			}
			cout << endl; //여기서 엔터

		}

		

	}

return 0;
}