//// --------- dynamic array (동적 배열), 포인터 (pointer) --------------
//#include<iostream>
//#include<string>
//
//int main()
//{
//	/*
//	int* p;
//	int n = 5;
//	p = &n;		// n의 주소 
//
//	std::cout << p << std::endl;
//	std::cout << &n << std::endl;
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;
//
//	n = 20;
//
//	std::cout << p << std::endl;
//	std::cout << *p << std::endl;
//	
//	*p = 15;
//
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;
//
//	int num;
//	std::cin >> num;
//	// int num_array[num];	
//	int* num_array = new int[num];	// 위 식과 같다.
//
//	for (int i = 0; i < num; i++)
//	{
//		*(num_array + i) = 1;
//		//num_array[i] = 1;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i] << " ";
//	}
//
//	delete[] num_array;	// 동적 배열 해제(반납). 동적 메모리는 사용 후 꼭 해제하기
//	delete[] p;
//	*/
//
//	// 이중 포인터, 2차원 배열 
//	// num을 받아서 num x num 배열
//	// for each문은 사용할 수 없다.
//	int num;
//	std::cin >> num;
//	int** num_arr = new int* [num];
//
//	for (int i = 0; i < num; i++)
//	{
//		num_arr[i] = new int[num];
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num; j++)
//		{
//			num_arr[i][j] = 1;
//			std::cout << num_arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	
//	for (int i = 0; i < num; i++)
//	{
//		delete[] num_arr[i];	// 안쪽 배열 해제
//	}
//	delete[] num_arr;	// 바깥 배열 해제
//
//	return 0;
//}


// --------------vector-------------
#include<iostream>
#include<vector>

int main()
{
	//std::vector<int> v;	
	//std::vector<int> v(3);	// 크기가 3인 벡터 배열 생성
	//std::vector<int> v(3, 1);	// 크기가 3인 벡터 배열 선언, 원소를 모두 1로 초기화
	//std::vector<int> v = {1, 2, 3};	// 크기가 3인 벡터 배열 선언 및 초기화
	
	//int num;
	//std::cin >> num;
	//std::vector<int> v;
	//v.assign(num, 1);		// num의 크기, 모든 원소 1로 할당
	////std::vector<int> v(num, 1);	// 와 같다. 

	std::vector<int> v = { 1, 2, 3, 4, 5 };
	
	for (int i = 0; i < v.size(); i++)
	{
		//std::cout << v[i] << " ";		// 아래와 같다.
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;
	
	v.resize(6);	// 배열의 크기를 resize, 커진 길이만큼 0으로 초기화
	v.push_back(5);	// 배열의 마지막에 원하는 원소를 추가함.
	for (int i = 0; i < v.size(); i++)
	{	
		std::cout << v.at(i) << " ";	// at은 index로 접근하기 휘함.
	}
	std::cout << std::endl;

	v.pop_back();	// 마지막 원소를 지운다. 
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << v.front() << " " << v.back() << std::endl;	// V.front(): 가장 처음 원소 출력, v.back(): 가장 마지막 원소 출력

	v.insert(v.begin() + 2, 99);	// 2번 index 뒤에 99를 추가함
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;

	v.erase(v.begin() + 3);	// 3번 index를 삭제
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;

	v.erase(v.begin() + 3, v.begin() + 5);	// 3번부터 5번(5번 제외) index를 삭제
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;

	//v.clear();		// 배열의 모든 원소 삭제, size = 0
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	for (int &vv : v)
	{
		vv = vv + 1;
		std::cout << vv << " ";
	}
	std::cout << std::endl;
	
	// -----------------2차원 벡터 --------------
	std::vector<std::vector<int>> v2;
	v2.assign(3, std::vector<int>(2,1));	// 2x3 행열 생성

	for (int i = 0; i < v2.size(); i++)	// v2 size는 행의 크기
	{
		for (int j = 0; j < v2.at(i).size(); j++)
		{
			std::cout << v2.at(i).at(j) << " ";
			// std::cout << v2[i][j] << " ";	// 위랑 같다.
		}
		std::cout << std::endl;
	}

	for (std::vector<int> vv2 : v2)
	{
		for (int vvv2 : vv2)
		{
			std::cout << vvv2 << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}


