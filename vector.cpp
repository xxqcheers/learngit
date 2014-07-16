/*************************************************************************
	> File Name: vector.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月15日 星期二 22时21分56秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
int main(int argc,char **argv)
{
	vector<string> vec;
	vec.push_back("hello");
	vec.push_back("world");

	vector<string> vec2(vec);//不仅要求容器类型相同，还要求容器类型完全一致
	vector<string> vec3(vec.begin(),vec.end());
	vector<string> vec4(10,"test");
	list<string> lst(vec.begin(),vec.end());//要求对于容器元素，要求能相互兼容即可

	return 0;
}

