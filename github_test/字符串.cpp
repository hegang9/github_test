#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "please enter:" << endl;

	//�ַ�������cin.getline
	//char name[20];
	////cin.getline(name, 20);	//��������ַ������ȴ���19�������һ���ַ�Ҫ�������ַ������������ַ�����������������У����ᱨ��
	////cout << name;

	////��ͬ����ʹ��getʵ��
	//cin.get(name, 20).get();	//�ڶ���get��Ϊ��������������в���Ļ��з�
	//cout << name << endl;
	//char end;
	//cin.get(end);	//���ڼ�����һ�����ضϵ��ַ��Ƿ�Ϊ���з����ɴ˿�ȷ��������ַ����Ƿ񳬳����ƣ�������ַ������������������R
	//cout << end;

	//cin��ȡ���ƣ�cin>>�Ὣ������������Ŀհ׷��ű���������cin>>a>>b�У�a��b֮��Ŀհ׷���������ֻ�������Ŀհ׷���
	// �����������getline�������ȡ����������в���Ļ��з����´���
	cout << "str" << endl;
	string str;
	cin >> str;
	char name[20];
	cin.getline(name, 20);
	cout << name;
	return 0;
}