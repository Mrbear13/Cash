#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	/*vector<vector<int>> ivec;
	vector<string> svec{ 10,"null" };
	return 0;*/
	

	//��vector���������Ԫ��
	//vector<int> ivec{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	/*int a;
	while (cin >> a)
		ivec.push_back(a);*/
	/*for (int& i : ivec)	//����ivec�е�ÿ��Ԫ��
	{
		i *= i;
	}
	for (int c : ivec)
		cout << c << " ";
	cout<< endl;*/


	//ʹ���±����vector�е�Ԫ��
	//vector<string> svec;
	//string word;
	//ʹ��puch_back��svec�����Ԫ��
	/*while (cin >> word)
		svec.push_back(word);
	for (decltype(svec.size()) i = 0; i != svec.size(); ++i)//����svec�е�ÿ��Ԫ��
	{
		for (auto& s : svec[i])//����svec�е�ÿ��Ԫ��
			s = toupper(s);//ʹ��toupper����������svec�е�ÿ���ַ��滻Ϊ��д��ʽ
		cout << svec[i] << " ";
		cout << endl;
		}*/

	//����һ������ʮ��Ԫ�ص�vector����
	//vector<int> i{ 42,42, 42, 42, 42, 42, 42, 42, 42, 42, };
	/*vector<int> i;
	int i2;
	//ʹ��push_back��i�����Ԫ��
	while (cin >> i2)
		i.push_back(i2);
	for (auto c : i)
		cout << c << " ";
	cout << endl;*/

	//����һ��������������ӵ�vector�����У��������һ�����������һ�������ĺͣ�
	//������ڶ������������һ�������ĺͣ��Դ�����
	vector<int> i;//����һ����vector����
	int i2;//��ŵ�ǰ����
	while (cin >> i2)//�ӱ�׼������������δ֪������
		i.push_back(i2);//����������ӵ�vector������
	//cout << i.size() / 2 << endl;
	if (!i.empty())//ȷ��i���ǿ�
	{
		decltype(i.size()) m;
		for (m = 0; m < (i.size() / 2); ++m)
			cout << i[m] + i[i.size() - m - 1] << " ";
		if (0 != i.size() % 2 && m == (i.size() / 2))//���i����������Ԫ����m����i.size()/2
			cout << i[m] << " ";
		cout << endl;
	}
}
