/*************************************************************************
	> File Name: 9_27.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月16日 星期三 20时45分23秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main(int argc, const char *argv[])
{
    list<string> slst;
    string str;
    cout<<"Enter some string(ctrl + d to end)"<<endl;
    while(cin>>str)
    {
        slst.push_back(str);
    }
    cin.clear();

    cout<<"Enter a string that you want to find:"<<endl;
    cin>>str;
    //处理list对象
    for(list<string>::iterator it = slst.begin(); it != slst.end(); ++it){
        if(*it==str)
        {
            it=slst.erase(it);
            --it;
        }
    }

    cout<<"test....."<<endl;

    for(list<string>::iterator it = slst.begin(); it != slst.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
