//// --------- dynamic array (���� �迭), ������ (pointer) --------------
//#include<iostream>
//#include<string>
//
//int main()
//{
//	/*
//	int* p;
//	int n = 5;
//	p = &n;		// n�� �ּ� 
//
//	std::cout << p << std::endl;	// n�� �ּҸ� ���
//	std::cout << &n << std::endl;	// n�� �ּҸ� ���
//	std::cout << n << std::endl;	// n�� ���� ���
//	std::cout << *p << std::endl;	// n�� ���� ���
//
//	n = 20;
//
//	std::cout << p << std::endl;	// n�� ���� ���ص� n�� �ּ��� P�� ���� ������ ����
//	std::cout << *p << std::endl;	//*p�� n�� ���� ����Ű�� ������ *p = 20�� �ȴ�.
//	
//	*p = 15;
//
//	std::cout << n << std::endl;	// *P�� n�� ���� ����Ű�� ������ n = 15�� �ȴ�.
//	std::cout << *p << std::endl;	// ���������� 15�� �ȴ�.
//
//	int num;
//	std::cin >> num;
//	// int num_array[num];	
//	int* num_array = new int[num];	// �� �İ� ����.	num���� ���Ҹ� ���� �迭�� point�ϴ� num_array�� ����.
//
//	for (int i = 0; i < num; i++)
//	{
//		*(num_array + i) = 1;	// num_array[i]�迭 i��° ���빰(��)�� ����, 1�� �ʱ�ȭ
//		//num_array[i] = 1;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i] << " ";	// num_array[0]���� num_array[i]���� ���
//	}
//
//	delete[] num_array;	// ���� �迭 ����(�ݳ�). ���� �޸𸮴� ��� �� �� �����ϱ�
//	delete[] p;
//	*/
//	
//	// ���� ������, 2���� �迭 
//	// num�� �޾Ƽ� num x num �迭
//	// for each���� ����� �� ����.
//	int num;
//	std::cin >> num;
//	// �����ϰ��� �ϴ� ������ �迭�� ���� ����ŭ ���� �Ҵ�.
//	int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
//
//	for (int i = 0; i < num; i++)
//	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
//		num_arr[i] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
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
//		delete[] num_arr[i];	// ���� �迭 ����
//	}
//	delete[] num_arr;	// �ٱ� �迭 ����
//	
//	return 0;
//}


// --------------vector-------------
#include<iostream>
#include<vector>

int main()
{
	////std::vector<int> v;	
	////std::vector<int> v(3);	// ũ�Ⱑ 3�� ���� �迭 ����
	////std::vector<int> v(3, 1);	// ũ�Ⱑ 3�� ���� �迭 ����, ���Ҹ� ��� 1�� �ʱ�ȭ
	////std::vector<int> v = {1, 2, 3};	// ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ

	////int num;
	////std::cin >> num;
	////std::vector<int> v;
	////v.assign(num, 1);		// num�� ũ��, ��� ���� 1�� �Ҵ�
	//////std::vector<int> v(num, 1);	// �� ����. 

	//std::vector<int> v = { 1, 2, 3, 4, 5 };

	//for (int i = 0; i < v.size(); i++)	// size()�� �Ҵ�� ������ ����
	//{
	//	//std::cout << v[i] << " ";		// �Ʒ��� ����.
	//	std::cout << v.at(i) << " ";	// v�� ���ҵ� (0 ~ i����) ���
	//}
	//std::cout << std::endl;

	//v.resize(6);	// �迭�� ũ�⸦ resize, Ŀ�� ���̸�ŭ 0���� �ʱ�ȭ
	//v.push_back(5);	// �迭�� �������� ���ϴ� ���Ҹ� �߰���.
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";	// at�� index�� �����ϱ� ����.
	//}
	//std::cout << std::endl;

	//v.pop_back();	// ������ ���Ҹ� �����. 
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;
	//std::cout << v.front() << " " << v.back() << std::endl;	// V.front(): ���� ó�� ���� ���, v.back(): ���� ������ ���� ���

	//v.insert(v.begin() + 2, 99);	// 2�� index �ڿ� 99�� �߰���
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3);	// 3�� index�� ����
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3, v.begin() + 5);	// 3������ 5��(5�� ����) index�� ����
	//for (int i = 0; i < v.size(); i++)
	//{
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	////v.clear();		// �迭�� ��� ���� ����, size = 0
	////for (int i = 0; i < v.size(); i++)
	////{
	////	std::cout << v.at(i) << " ";
	////}
	////std::cout << std::endl;

	//for (int& vv : v)
	//{
	//	vv = vv + 1;	// ��� ������ ���� + 1
	//	std::cout << vv << " ";
	//}
	//std::cout << std::endl;

	// -----------------2���� ���� --------------
	std::vector<std::vector<int>> v2;
	v2.assign(3, std::vector<int>(2, 1));	// 2x3 �࿭ ����

	for (int i = 0; i < v2.size(); i++)	// v2 size�� ���� ũ��
	{
		for (int j = 0; j < v2.at(i).size(); j++)
		{
			std::cout << v2.at(i).at(j) << " ";
			// std::cout << v2[i][j] << " ";	// ���� ����.
		}
		std::cout << std::endl;
	}

	// for each ���� ����Ͽ� ���� ���� �ڵ�
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