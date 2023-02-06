//  동적 배열, 포인터 실습 1

/*#include<iostream>
#include<string>

void dy_arr(int x, int y)
{
	int n1 = 0;
	int** dy_arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		dy_arr[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			n1 += 1;
			dy_arr[i][j] = n1;
			std::cout << dy_arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < x; i++)
	{
		delete[] dy_arr[i];	// 안쪽 배열 해제
	}
	delete[] dy_arr;	// 바깥 배열 해제
}

int main()
{
	int x, y;
	std::cout << "x를 입력하세요. : ";
	std::cin >> x;
	std::cout << "y를 입력하세요. : ";
	std::cin >> y;
	if (x > 0 && y > 0)
	{
		dy_arr(x, y);
	}
	else
	{
		std::cout << "x와 y 모두 양수를 입력해주세요. " << std::endl;
		std::cout << "x를 입력하세요. : ";
		std::cin >> x;
		std::cout << "y를 입력하세요. : ";
		std::cin >> y;
		dy_arr(x, y);
	}

	return 0;
}
*/
//--------- 선생님 풀이 -----------
//#include<iostream>
//#include<string>
//
//void dy_arr(int x, int y)
//{
//	int** dy_arr = new int* [x];
//	int n1 = 1;
//
//	for (int i = 0; i < x; i++)
//	{
//		dy_arr[i] = new int[y];
//	}
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			dy_arr[i][j] = n1++;
//			std::cout << dy_arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < x; i++)
//	{
//		delete[] dy_arr[i];	// 안쪽 배열 해제
//	}
//	delete[] dy_arr;	// 바깥 배열 해제
//}
//
//int main()
//{
//	int x, y;
//	
//	while (1)
//	{
//		std::cout << "x를 입력하세요. : ";
//		std::cin >> x;
//		std::cout << "y를 입력하세요. : ";
//		std::cin >> y;
//		if (x > 0 && y > 0)
//			break;
//		else 
//			std::cout << "x와 y 모두 양수를 입력해주세요. " << std::endl;
//	}
//
//	dy_arr(x, y);
//
//	return 0;
//}

//[번외] 실습.배열 실습2 응용!
//*사진은 참고용입니다~.아래 글을 읽고 문제 해결해주세요!
//(1) 몇명의 학생 성적 평균을 구할 지 입력 받기
//(2) 입력받은 학생 수 만큼 성적을 입력받기
//(3) 학생들의 성적 평균 산출하기
//input
//학생의 수를 입력하세요 : 3
//1번째 학생의 성적을 입력하세요 : 10
//2번째 학생의 성적을 입력하세요 : 20
//3번째 학생의 성적을 입력하세요 : 30
//output
//평균 : ? ? ? ?

//#include<iostream>
//#include<string>
//
//int main()
//{
//	int num = 0; 
//	double total = 0;
//	std::cout << "학생의 수를 입력하세요. : ";
//	std::cin >> num;
//	double* score = new double[num];
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << i + 1 <<"번째 학생의 성적을 입력하세요. : ";
//		std::cin >> score[i];
//		total += score[i];
//	}
//
//	std::cout << "평균 점수는 : " << total / num << std::endl;
//
//	return 0;
//}

// vector 실습 1

//#include<iostream>
//#include<string>
//#include<vector>
//
//void dy_arr(int x, int y)
//{
//	std::vector<std::vector<int>> dy_arr;
//	dy_arr.assign(x, std::vector<int>(y, 1));
//	int n1 = 1;
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			dy_arr.at(i).at(j) = n1++;
//			std::cout << dy_arr.at(i).at(j) << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//
//int main()
//{
//	int x, y;
//	
//	while (1)
//	{
//		std::cout << "x를 입력하세요. : ";
//		std::cin >> x;
//		std::cout << "y를 입력하세요. : ";
//		std::cin >> y;
//		if (x > 0 && y > 0)
//			break;
//		else 
//			std::cout << "x와 y 모두 양수를 입력해주세요. " << std::endl;
//	}
//
//	dy_arr(x, y);
//
//	return 0;
//}

// vector 실습 2
// (1) 사용자가 입력한 숫자들을 배열에 담고, 그 수의 합 구하기.
// (2) 출력형태는 사진과 같음.

//#include<iostream>
//#include<string>
//#include<vector>
//
//int main()
//{
//	int num, sum = 0;
//	std::vector<int> v;
//
//	std::cout << "사용자가 입력한 숫자 더하기. " << std::endl;
//
//	do
//	{
//		int i = 0;
//		std::cout << "숫자를 입력하세요. (0: exit) : " ;
//		std::cin >> num;
//		v.insert(v.begin(), num);
//		sum += v.at(i);
//		i++;
//	} while (num);
//
//	std::cout << "사용자가 입력한 수의 합은 : " << sum << std::endl;
//
//	return 0;
//}