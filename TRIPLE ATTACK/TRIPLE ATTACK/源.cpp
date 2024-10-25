#include <iostream>
#include <algorithm> // 用于使用next_permutation函数

using namespace std;
int main() {
	int digits[9] = { 1,2,3,4,5,6,7,8,9 };
	do
	{
		int a = digits[0] * 100 + digits[1] * 10 + digits[2];
		int b = digits[3] * 100 + digits[4] * 10 + digits[5];
		int c = digits[6] * 100 + digits[7] * 10 + digits[8];
		if (a/3==c&&b/2==c)
		{
			cout << a << " " << b << " " << c << endl;

		}

	} while (next_permutation(digits, digits + 9));
	return 0;
}
