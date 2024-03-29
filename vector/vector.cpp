// vector.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

void main()//随机迭代器
{
	vector<int> intVect(5);
	vector<int>::iterator it = intVect.begin();
	cout << intVect.capacity() << endl;
	vector<int>cx(6);
	int y[] = { 1,2,3,4,5,6 };
	cx = vector<int>(y, y + 4);
	for (vector<int>::size_type i = 0; i < cx.size(); i++)
	{
		cout << " " << cx[i];
	}
	cout << endl;
	
	
	*it++ = 12;
	*it++ = 21;
	*it++ = 31;
	*it++ = 41;
	*it = 9;
	cout << "vect old :";
	for (it = intVect.begin(); it != intVect.end(); it++)
		cout << *it << " ";
	it = intVect.begin();
	*(it + 2) = 100;
	cout << endl;
	cout << "vect :";
	for (it = intVect.begin(); it != intVect.end(); it++)
		cout << *it << " ";
	cout << endl;
	
	intVect.push_back(3);
	cout << intVect[5] << endl;
	cout << intVect.max_size() << endl;
	cout << intVect.at(3) << endl;
	cout << intVect.back() << endl;
	intVect.resize(4, 1);
	cout << intVect.size() <<" "<<intVect[2]<< endl;
	cx.swap(intVect);
	cout << cx[3] << endl;
	cout << intVect.front() << endl;
	
}

/*void main()//双向迭代器
{
	vector<int> intVect(5);
	vector<int>::iterator it = intVect.begin();
	vector<int>::iterator saveIt = it;
	*it++ = 12;
	*it++ = 21;
	*it++ = 31;
	*it++ = 41;
	*it = 9;
	cout << "vect:";
	while (saveIt != intVect.end())
	{
		cout << *saveIt++ << ' ';
	}
	cout << endl;
	do
		cout << *--saveIt << endl;
	while (saveIt != intVect.begin());
	cout << endl;
}
/*void main()//前向迭代器
{
	vector<int> intVect(5);
	vector<int>::iterator it = intVect.begin();
	vector<int>::iterator saveIt = it;
	*it++ = 12;
	*it++ = 21;
	*it++ = 31;
	*it++ = 41;
	*it = 9;
	cout << "vect:";
	while (saveIt != intVect.end())
	{
		cout << *saveIt++ << ' ';
	}
	cout << endl;
}
/*void main()//输入迭代器
{
	vector<int> intVect(5);
	vector<int>::iterator out = intVect.begin();
	*out++ = 1;
	*out++ = 3;
	*out++ = 5;
	*out++ = 7;
	*out = 9;
	cout << "vect:";
	vector<int>::iterator it = intVect.begin();
	while (it != intVect.end())
	{
		cout << *it++ << ' ';
	}
	cout << endl;
}
/*void main()  //输出迭代器
{
	vector<int> intVect;
	for (int i = 0; i < 10; i++)
	{
		intVect.push_back(i);
	}
	cout << "Vect:" << endl;
	vector<int>::iterator it = intVect.begin();
	while (it != intVect.end())
	{
		cout << *it++<< endl;
	}
}
/*int main(int argc,_TCHAR* argv[])
{
	vector<int>v1, v2;
	v1.reserve(10);//动手分配空间
	v2.reserve(10);
	v1 = vector<int>(8, 7);
	int array[8] = { 1,2,3,4,5,6,7,8 };
	v2 = vector<int>(array, array + 8);;
	cout << "v1的容量" << v1.capacity() << endl;
	cout << "v1当前各项：" << endl;
	for (decltype(v2.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	cout << "v2当前的容量：" << v2.capacity() << endl;
	cout << "v2当前各项：" << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v2[i];
	}
	cout << endl;
	v1.resize(0);
	cout << "v1的容量通过resize函数变成0" << endl;
	if (!v1.empty())
	{
		cout << "v1的容量" << v1.capacity() << endl;
	}
	else
	{
		cout << "v1是空的" << endl;
	}
	cout << "将v1的容量扩展为8" << endl;
	v1.resize(8);
	cout << "v1当前各项：" << endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.swap(v2);
	cout << "v1与v2 swap了" << endl;
	cout << "v1当前各项：" << endl;
	cout << "v1的容量" << v1.capacity() << endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.push_back(3);
	cout << "从v1的后边加入了元素3" << endl;
	cout << "v1容量" << v1.capacity() << endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.erase(v1.end() - 2);
	cout << "删除了倒数第二个元素" << endl;
	cout << "v1的容量" << v1.capacity() << endl;
	cout << "v1当前各项：" << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.pop_back();
	cout << "v1通过栈操作pop_back放走了最后的元素" << endl;
	cout << "v1当前各项：" << endl;
	cout << "v1的容量" << v1.capacity() << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
    return 0;
}*/

