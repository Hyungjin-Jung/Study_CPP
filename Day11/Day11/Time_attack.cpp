#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// Ÿ�Ӿ��� �����ձ� ����
int main()
{
	clock_t startTime = clock();
	// ~~~~~~~ ( Ÿ�Ӿ��� �ڵ� )
	clock_t endTime = clock();
	cout << "�ɸ� �ð� : " << (endTime - startTime) / CLOCKS_PER_SEC << endl;

	vector<string> word = {};
	word.at(0) = "airplane";
	cout << word.at(0) << endl;


	return 0;
}