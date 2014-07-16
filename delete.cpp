/*************************************************************************
	> File Name: list.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月16日 星期三 16时39分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main(int argc, const char *argv[])
{
    list<string> lst;
    lst.push_front("zhangsan");
    lst.push_front("lisi");
    lst.push_front("wangwu");
    lst.push_front("zhaoliu");
    
    cout<<"before....."<<endl;
    for(list<string>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << endl;    
    }
    
    //lst.clear();
    cout<<"after....."<<endl;
    //lst.pop_front();
   // lst.pop_back();
    list<string>::iterator it=find(lst.begin(),lst.end(),string("abc"));
    lst.erase(it);//当没有找到的时候会出现运行时错误
    //所以说在调用erase这个函数的时候要去确保该迭代器所指向的位置有元素才行

    for(list<string>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
