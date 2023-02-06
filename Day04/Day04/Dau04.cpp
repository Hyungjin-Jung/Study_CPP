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
//	std::cout << p << std::endl;	// n의 주소를 출력
//	std::cout << &n << std::endl;	// n의 주소를 출력
//	std::cout << n << std::endl;	// n의 값을 출력
//	std::cout << *p << std::endl;	// n의 값을 출력
//
//	n = 20;
//
//	std::cout << p << std::endl;	// n의 값이 변해도 n의 주소인 P의 값은 변하지 않음
//	std::cout << *p << std::endl;	//*p는 n의 값을 가리키기 때문에 *p = 20이 된다.
//	
//	*p = 15;
//
//	std::cout << n << std::endl;	// *P는 n의 값을 가리키기 때문에 n = 15가 된다.
//	std::cout << *p << std::endl;	// 마찬가지로 15가 된다.
//
//	int num;
//	std::cin >> num;
//	// int num_array[num];	
//	int* num_array = new int[num];	// 위 식과 같다.	num개의 원소를 가진 배열을 point하는 num_array를 선언.
//
//	for (int i = 0; i < num; i++)
//	{
//		*(num_array + i) = 1;	// num_array[i]배열 i번째 내용물(값)에 접근, 1로 초기화
//		//num_array[i] = 1;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i] << " ";	// num_array[0]부터 num_array[i]까지 출력
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
//	// 선언하고자 하는 이차원 배열의 행의 수만큼 동적 할당.
//	int** num_arr = new int* [num];		// 행의 크기가 num인 이차원 배열
//
//	for (int i = 0; i < num; i++)
//	{// 각각의 index에 선언하고자 하는 배열의 크기만큼을 가리키게 한다.
//		num_arr[i] = new int[num];		// 각각의 행에 크기가 num인 배열을 할당
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
	////std::vector<int> v;	
	////std::vector<int> v(3);	// 크기가 3인 벡터 배열 생성
	////std::vector<int> v(3, 1);	// 크기가 3인 벡터 배열 선언, 원소를 모두 1로 초기화
	////std::vector<int> v = {1, 2, 3};	// 크기가 3인 벡터 배열 선언 및 초기화

	////int num;
	////std::cin >> num;
	////std::vector<int> v;
	////v.assign(num, 1);		// num의 크기, 모든 원소 1로 할당
	//////std::vector<int> v(num, 1);	// 와 같다. 

	//std::vector<int> v = { 1, 2, 3, 4, 5 };

	//for (int i = 0; i < v.size(); i++)	// size()는 할당된 공간의 개수
	//{
	//	//std::cout << v[i] << " ";		// 아래와 같다.
	//	std::cout << v.at(i) << " ";	// v의 원소들 (0 ~ i까지) 출력
	//}
	//std::cout << std::endl;

	//v.resize(6);	// 배열의 크기를 resize, 커진 길이만큼 0으로 초기화
	//v.push_back(5);	// 배열의 마지막에 원하는 원소를 추가함.
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";	// at은 index로 접근하기 위함.
	//}
	//std::cout << std::endl;

	//v.pop_back();	// 마지막 원소를 지운다. 
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;
	//std::cout << v.front() << " " << v.back() << std::endl;	// V.front(): 가장 처음 원소 출력, v.back(): 가장 마지막 원소 출력

	//v.insert(v.begin() + 2, 99);	// 2번 index 뒤에 99를 추가함
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3);	// 3번 index를 삭제
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3, v.begin() + 5);	// 3번부터 5번(5번 제외) index를 삭제
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	////v.clear();		// 배열의 모든 원소 삭제, size = 0
	////for (int i = 0; i < v.size(); i++)
	////{
	////	std::cout << v.at(i) << " ";
	////}
	////std::cout << std::endl;

	//for (int& vv : v)
	//{
	//	vv = vv + 1;	// 모든 원소의 값에 + 1
	//	std::cout << vv << " ";
	//}
	//std::cout << std::endl;

	// -----------------2차원 벡터 --------------
	std::vector<std::vector<int>> v2;
	v2.assign(3, std::vector<int>(2, 1));	// 2x3 행열 생성

	for (int i = 0; i < v2.size(); i++)	// v2 size는 행의 크기
	{
		for (int j = 0; j < v2.at(i).size(); j++)
		{
			std::cout << v2.at(i).at(j) << " ";
			// std::cout << v2[i][j] << " ";	// 위랑 같다.
		}
		std::cout << std::endl;
	}

	// for each 문을 사용하여 만든 같은 코드
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