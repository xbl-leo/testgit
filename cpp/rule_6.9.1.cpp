#include "test.h"
#include"seqList.h"
#include<iostream>
using namespace std;
 
//定义构造函数
//通过指定参数sz定义数组长度
template<class T>
SeqList<T>::SeqList(int sz /*= defaultSize*/) {
	if (sz > 0) {
		maxSize = sz; current = -1;      //设置表的实际长度为空
		data = new T[maxSize];        //创建顺序表存储数组
		if (data == nullptr) {        //动态分配内存失败
//			cerr << "内存分配失败！" << endl;
//			exit(1);
		}           
	}
}
template<>
void foo<int>(int & t)
{
  --t;
}

void bar2()
{
  int i = 3;
  foo<int>(i);
  // explicit specialization used, i is now 2
}  
