#include <iostream>
using namespace std;

void checkInfinite(string s)
{

	bool flag = 1;

	int N = s.length();

	for (int i = 0; i < N - 1; i++) {

		if (s[i] == char(int(s[i + 1]) + 1)) {
			continue;
		}else if (s[i] == 'a'
				&& s[i + 1] == 'z') {
			continue;
    }else {
			flag = 0;
			break;
		}
	}

	if (flag == 0)
		cout << "NO";
	else
		cout << "YES";
}

int main()
{
	string s = "ecbaz";
	checkInfinite(s);
	return 0;
}
