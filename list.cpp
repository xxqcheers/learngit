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
    vector<string> vec;
    list<string> lst;
    lst.push_front("zhangsan");
    lst.push_front("lisi");
    lst.push_front("wangwu");
    lst.push_front("zhaoliu");

    for(list<string>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << *it << endl;    
    }

    
    cout<<"test find"<<endl;

//    list<string>::iterator res=find(lst.begin(),lst.end(),string("zhaoliu"));
    list<string>::iterator res=find(lst.begin(),lst.end(),"zhaoliu");
    if(res==lst.end())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"finded"<<endl;
    }



    vec.insert(vec.begin(),lst.begin(),lst.end());
    cout<<"----------------"<<endl;
    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
