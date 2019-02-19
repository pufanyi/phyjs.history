#include <ctime>
#include <cstdlib>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	ofstream fout("map.out");
	for(int i = 1; i <= 100; ++i)
	{
		fout << "[";
		fout << "\'block\', ";
		for(int j = 1; j <= 10; ++j)
			fout << "\'air\', ";
		for(int j = 11; j <= 50; ++j)
			fout << ((rand() % 6) ? "\'air\', " : "\'block\', ");
		for(int j = 50; j <= 60; ++j)
			fout << "\'air\', ";
		fout << "\'block\'],";
		fout << '\n';
	}
	fout << "[";
	fout << "\'block\', ";
	for(int i = 0; i <= 60; ++i)
		fout << "\'trap\', ";
	fout << "\'block\'],";
	fout << '\n';
	fout << "[";
	for(int i = 1; i <= 62; ++i)
		fout << "\'block\', ";
	fout << "\'block\'],";
	fout << '\n';
	fout.close();
	return 0;
}