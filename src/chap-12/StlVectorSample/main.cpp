// 495p 스트링 컨테이너 사용

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(3);

	vec[0] = 10;
	vec[1] = 20;
	vec[2] = 20;

	for (auto& n : vec)
		cout << n << ' ';
	cout << endl;

	vec.push_back(30);
	vec.push_back(40);

	for (auto& n : vec)
		cout << n << ' ';
	cout << endl;

	return 0;
}