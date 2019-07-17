#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	/*vector<vector<int>> ivec;
	vector<string> svec{ 10,"null" };
	return 0;*/
	

	//往vector对象中添加元素
	//vector<int> ivec{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	/*int a;
	while (cin >> a)
		ivec.push_back(a);*/
	/*for (int& i : ivec)	//对于ivec中的每个元素
	{
		i *= i;
	}
	for (int c : ivec)
		cout << c << " ";
	cout<< endl;*/


	//使用下标访问vector中的元素
	//vector<string> svec;
	//string word;
	//使用puch_back往svec中添加元素
	/*while (cin >> word)
		svec.push_back(word);
	for (decltype(svec.size()) i = 0; i != svec.size(); ++i)//对于svec中的每个元素
	{
		for (auto& s : svec[i])//对于svec中的每个元素
			s = toupper(s);//使用toupper（）函数将svec中的每个字符替换为大写形式
		cout << svec[i] << " ";
		cout << endl;
		}*/

	//定义一个含有十个元素的vector对象
	//vector<int> i{ 42,42, 42, 42, 42, 42, 42, 42, 42, 42, };
	/*vector<int> i;
	int i2;
	//使用push_back往i中添加元素
	while (cin >> i2)
		i.push_back(i2);
	for (auto c : i)
		cout << c << " ";
	cout << endl;*/

	//读入一组整数将它们添加到vector对象中，先输出第一个整数和最后一个整数的和，
	//再输出第二个整数和最后一个整数的和，以此类推
	vector<int> i;//创建一个空vector对象
	int i2;//存放当前输入
	while (cin >> i2)//从标准输入输入数量未知的数据
		i.push_back(i2);//输入数据添加到vector对象中
	//cout << i.size() / 2 << endl;
	if (!i.empty())//确保i不是空
	{
		decltype(i.size()) m;
		for (m = 0; m < (i.size() / 2); ++m)
			cout << i[m] + i[i.size() - m - 1] << " ";
		if (0 != i.size() % 2 && m == (i.size() / 2))//如果i中有奇数个元素且m等于i.size()/2
			cout << i[m] << " ";
		cout << endl;
	}
}
