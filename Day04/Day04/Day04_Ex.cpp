//  ���� �迭, ������ �ǽ� 1

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
		delete[] dy_arr[i];	// ���� �迭 ����
	}
	delete[] dy_arr;	// �ٱ� �迭 ����
}

int main()
{
	int x, y;
	std::cout << "x�� �Է��ϼ���. : ";
	std::cin >> x;
	std::cout << "y�� �Է��ϼ���. : ";
	std::cin >> y;
	if (x > 0 && y > 0)
	{
		dy_arr(x, y);
	}
	else
	{
		std::cout << "x�� y ��� ����� �Է����ּ���. " << std::endl;
		std::cout << "x�� �Է��ϼ���. : ";
		std::cin >> x;
		std::cout << "y�� �Է��ϼ���. : ";
		std::cin >> y;
		dy_arr(x, y);
	}

	return 0;
}
*/
//--------- ������ Ǯ�� -----------
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
//		delete[] dy_arr[i];	// ���� �迭 ����
//	}
//	delete[] dy_arr;	// �ٱ� �迭 ����
//}
//
//int main()
//{
//	int x, y;
//	
//	while (1)
//	{
//		std::cout << "x�� �Է��ϼ���. : ";
//		std::cin >> x;
//		std::cout << "y�� �Է��ϼ���. : ";
//		std::cin >> y;
//		if (x > 0 && y > 0)
//			break;
//		else 
//			std::cout << "x�� y ��� ����� �Է����ּ���. " << std::endl;
//	}
//
//	dy_arr(x, y);
//
//	return 0;
//}

//[����] �ǽ�.�迭 �ǽ�2 ����!
//*������ ������Դϴ�~.�Ʒ� ���� �а� ���� �ذ����ּ���!
//(1) ����� �л� ���� ����� ���� �� �Է� �ޱ�
//(2) �Է¹��� �л� �� ��ŭ ������ �Է¹ޱ�
//(3) �л����� ���� ��� �����ϱ�
//input
//�л��� ���� �Է��ϼ��� : 3
//1��° �л��� ������ �Է��ϼ��� : 10
//2��° �л��� ������ �Է��ϼ��� : 20
//3��° �л��� ������ �Է��ϼ��� : 30
//output
//��� : ? ? ? ?

//#include<iostream>
//#include<string>
//
//int main()
//{
//	int num = 0; 
//	double total = 0;
//	std::cout << "�л��� ���� �Է��ϼ���. : ";
//	std::cin >> num;
//	double* score = new double[num];
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << i + 1 <<"��° �л��� ������ �Է��ϼ���. : ";
//		std::cin >> score[i];
//		total += score[i];
//	}
//
//	std::cout << "��� ������ : " << total / num << std::endl;
//
//	return 0;
//}

// vector �ǽ� 1

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
//		std::cout << "x�� �Է��ϼ���. : ";
//		std::cin >> x;
//		std::cout << "y�� �Է��ϼ���. : ";
//		std::cin >> y;
//		if (x > 0 && y > 0)
//			break;
//		else 
//			std::cout << "x�� y ��� ����� �Է����ּ���. " << std::endl;
//	}
//
//	dy_arr(x, y);
//
//	return 0;
//}

// vector �ǽ� 2
// (1) ����ڰ� �Է��� ���ڵ��� �迭�� ���, �� ���� �� ���ϱ�.
// (2) ������´� ������ ����.

//#include<iostream>
//#include<string>
//#include<vector>
//
//int main()
//{
//	int num, sum = 0;
//	std::vector<int> v;
//
//	std::cout << "����ڰ� �Է��� ���� ���ϱ�. " << std::endl;
//
//	do
//	{
//		int i = 0;
//		std::cout << "���ڸ� �Է��ϼ���. (0: exit) : " ;
//		std::cin >> num;
//		v.insert(v.begin(), num);
//		sum += v.at(i);
//		i++;
//	} while (num);
//
//	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;
//
//	return 0;
//}