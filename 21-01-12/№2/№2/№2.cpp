#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

unsigned __int64 resheto(int N)
{
	unsigned __int64 old = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
	vector <bool> a(N, true);
	a[0] = false;
	int i = 2, k = 0;
	while (i < a.size())
	{
		if (a[i])
			k = i * i;
			while (k < a.size())
			{
				if (k % i == 0)
				{
					a[k] = false;
					k += i;
				}
			}
		i++;
	}
	unsigned __int64 now = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
	return now - old;
}

unsigned __int64 simple_search_of_simple_numbers_in_simple_sequence_for_simple_quastion(int N)
{
	vector <bool> a(N, true);
	unsigned __int64 old = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
	int i = 2, k = 0;
	while (i < a.size())
	{
		for (int k = 2; k < i; k++)
		{
			if (i % k == 0)
			{
				a[i] = false;
				break;
			}
		}
		i++;
	}
	unsigned __int64 now = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
	return now - old;
}

int main()
{
	int N = 0;
	cin >> N;
	cout << resheto(N) << endl;
	cout << simple_search_of_simple_numbers_in_simple_sequence_for_simple_quastion(N) << endl;
}