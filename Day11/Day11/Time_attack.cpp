#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// 타임어택 끝말잇기 게임
int main()
{
	clock_t startTime = clock();
	// ~~~~~~~ ( 타임어택 코드 )
	clock_t endTime = clock();
	cout << "걸린 시간 : " << (endTime - startTime) / CLOCKS_PER_SEC << endl;

	vector<string> word = {};
	word.at(0) = "airplane";
	cout << word.at(0) << endl;


	return 0;
}