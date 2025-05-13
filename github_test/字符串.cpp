#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "please enter:" << endl;

	//字符数组用cin.getline
	//char name[20];
	////cin.getline(name, 20);	//若输入的字符串长度大于19个（最后一个字符要留给空字符），则多余的字符串会留在输入队列中，不会报错
	////cout << name;

	////相同功能使用get实现
	//cin.get(name, 20).get();	//第二个get是为了消耗输入队列中残余的换行符
	//cout << name << endl;
	//char end;
	//cin.get(end);	//用于检查最后一个被截断的字符是否为换行符，由此可确定输入的字符串是否超出限制，多余的字符串会留在输入队列中R
	//cout << end;

	//cin读取机制：cin>>会将输入队列中最后的空白符号保留，但在cin>>a>>b中，a与b之间的空白符会跳过，只保留最后的空白符，
	// 因此下面代码的getline函数会读取到输入队列中残余的换行符导致错误
	cout << "str" << endl;
	string str;
	cin >> str;
	char name[20];
	cin.getline(name, 20);
	cout << name;
	return 0;
}