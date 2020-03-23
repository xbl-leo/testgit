//顺序表的类声明
#define defaultSize 100
template<class T>
class SeqList {
private:
	T* data;               //存放数组
	int maxSize;           //可容纳最大表项的项数
	int current;           //当前表项的最后位置（从0开始）
public:
	SeqList(int sz = defaultSize); //构造函数
	~SeqList() { if (data != nullptr) delete[]data; }
	int getSize();                 //获取maxSize
};
