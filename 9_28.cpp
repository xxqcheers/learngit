/*************************************************************************
	> File Name: 9_28.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月16日 星期三 21时51分57秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;
int main(int argc, const char *argv[])
{
    char* sa[]={"Mary","Tom","Bob","Lily"};
    list<char*> slst(sa,sa+4);
    vector<string> svec;
    string str;

    //将list对象的所有元素赋值给vector对象
    svec.assign(slst.begin(),slst.end());

    cout<<"list 容器中的元素"<<endl;
    for(list<char*>::iterator it = slst.begin(); it != slst.end(); ++it){
        cout << *it << endl;    
    }
    cout<<"vector容器中的元素"<<endl;
    for(vector<string>::iterator it = svec.begin(); it != svec.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
