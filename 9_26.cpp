/*************************************************************************
	> File Name: 9_26.cpp
	> Author: xuxiaoqiang
	> Mail:353271054@qq.com 
	> Created Time: 2014年07月16日 星期三 19时46分56秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;
int main(int argc, const char *argv[])
{
    /*
     * 初始化一段元素的副本，所做的工作是什么，利用到了哪个构造函数
     * 比如说有个数组名：int a[10];
     * vector<int> vec(a,a+10);//可以采用这种初始化方式
     * */
    //
    //
    int a[]={0,1,1,2,3,5,8,13,21,55,89};
    //cout<<sizeof(a)/sizeof(int)<<endl;
    size_t count= sizeof(a)/sizeof(int);
    vector<int> vec(a,a+count);
    list<int> lst(a,a+count);
    
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        //删除vector中的偶数元素
        if(*it%2==0)
        {
            //这里之所以it，是因为在删除元素的时候迭代器会失效
            it=vec.erase(it);
            --it;
        }
    }
   for(list<int>::iterator it = lst.begin(); it != lst.end();++it)
    {
        if(*it%2!=0)
        {
            //必须考虑到erase函数调用后，迭代器会失效的问题。
           it= lst.erase(it);
            --it;
        }
    }

    

   
    // 测试代码
    cout<<"vecotr中的元素------"<<endl;
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }
    cout<<"list中的元素------"<<endl;
    for(list<int>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
