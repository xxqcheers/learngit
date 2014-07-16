/*************************************************************************
	> File Name: constraint.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月15日 星期二 23时18分04秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
/*class Student
{
	将赋值和赋值构造函数声明为const类型
	private:
		Student(const Student &);
		Student &operator=(const Student &);
};*/
class Student
{
	private:
		//这个程序在调试的时候出现了好多问题，竟然没有看出来是因为没有添加默认构造函数的区别
		//当添加了默认构造函数的时候会出现很多问题。
		Student()
		{
			cout<<"constructor"<<endl;
		}
		Student(const Student &stu)
		{
			age=stu.age;
		}
		Student &operator=(const Student &stu)
		{
			//运算符重载如何进行
			age=stu.age;
		}
	private:
		int age;
};

int main(int argc,char **argv)
{
//	Student stu;
	vector<Student> vec(10);
	return 0;
}

