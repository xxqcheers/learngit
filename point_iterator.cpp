/*************************************************************************
	> File Name: point_iterator.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月15日 星期二 22时40分40秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
int main(int argc,char** argv)
{
	const size_t MAX_SIZE=3;
	string arr[MAX_SIZE]={"HELLO","world","foobar"};
	
	vector<string> vec(arr,arr+MAX_SIZE);
//	for(vector<string>::iterator it=vec.begin();it!=vec.end;++it)
//		cout<<*it<<endl;
//		看到出错点在哪里了嘛
	for(vector<string>::iterator iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<endl;
	return 0;
}
