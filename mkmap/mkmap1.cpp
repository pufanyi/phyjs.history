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
		fout << "[\'block\', ";
		if(i == 98)
			fout << "\'block\', ";
		else
			fout << "\'air\', ";
		if(i <= 93 || i >= 98)
			fout << "\'block\', ";
		else
			fout << "\'air\', ";
		if(i <= 30)
		{
			for(int j = 11; j <= 50; ++j)
				fout << ((rand() % 3) ? "\'air\', " : "\'block\', ");
		}
		else if(i <= 60)
		{
			for(int j = 11; j <= 50; ++j)
			{
				int tmp = rand() % 30;
				if(tmp < 24)
					fout << "\'air\', ";
				else if(tmp < 29)
					fout << "\'block\', ";
				else
					fout << "\'trap\', ";
			}
		}
		else
		{
			for(int j = 11; j <= 50; ++j)
				fout << ((rand() % 6) ? "\'air\', " : "\'block\', ");
		}
		if(i <= 93 || i >= 98)
			fout << "\'block\', ";
		else
			fout << "\'air\', ";
		if(i == 98)
			fout << "\'block\', ";
		else
			fout << "\'air\', ";
		fout << "\'block\'],";
		fout << '\n';
	}
	fout << "[";
	fout << "\'block\', ";
	for(int i = 0; i <= 43; ++i)
		fout << "\'trap\', ";
	fout << "\'block\'],";
	fout << '\n';
	fout << "[";
	for(int i = 1; i <= 45; ++i)
		fout << "\'block\', ";
	fout << "\'block\'],";
	fout << '\n';
	fout.close();
	return 0;
}