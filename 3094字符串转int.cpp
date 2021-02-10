#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
//#include<cstring>
using namespace std;


int main()
{
	vector<char> str;
	vector<int> arr;
	int p = 0; int n=0;
	cout << "请输入大写英文字符串（以#结尾）" << endl;
	cout << "例:" << endl;
	cout << "ACM" << endl;
	cout << "MID CENTRAL"<<endl;
	cout << "REGIONAL PROGRAMMING CONTEST" << endl;
	cout << "ACN" << endl;
	cout << "A C M" << endl;
	cout<<"ABC"<<endl;
	cout << "BBC" << endl;
	cout << "#" << endl;
	for (int i = 0;; i++)
	{
		char ch;
		ch = getchar();
		if (ch=='#')
		{
			break;
		}
		else
		{
			if ( ch == '\n')
			{
				arr.push_back(p);
				n++;//n是字符串的数目
				continue;
			}
			else
			{
				p++;
				if (ch == ' ')
					ch = '@';
				str.push_back(ch);
				continue;
			}
		}
	}
	if (p == 0 || n == 0)
	{
		cout << "wrong input" << endl;
		system("pause");
		return 0;
	}
	
	
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j <( i==0?arr[i]:arr[i]-arr[i-1]); j++)
		{
			if (i == 0)
			{
				sum += ((int)str[j]-64)*(j+1);
			}
			else
			{
				sum += ((int)str[arr[i-1] + j] - 64) * (j + 1);
			}
		}
		cout << sum << endl;
	}


	//getchar();
	system("pause");
	return 0;
}

