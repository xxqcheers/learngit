/*************************************************************************
	> File Name: 9_27_deque.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月16日 星期三 20时57分47秒
 ************************************************************************/

#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main(int argc, const char *argv[])
{
    /*采用双端队列来实现这些问题
     * */
    deque<string> sdq;
    string str;

    //读入deque对象
    cout<<"Enter some strings ctrl+d to end"<<endl;
    while(cin>>str)
        sdq.push_back(str);
    cin.clear();//使流重新恢复

    //读入要寻找的值
    cout<<"Enter a string to find"<<endl;
    cin>>str;
    for(deque<string>::iterator it = sdq.begin(); it != sdq.end(); ++it)
    {
        if(*it==str)
        {
            it=sdq.erase(it);
            --it;
        }
    }

    //test
    cout<<"test-----"<<endl;
    for(deque<string>::iterator it = sdq.begin(); it != sdq.end(); ++it){
        cout << *it << endl;    
    }

    return 0;
}
