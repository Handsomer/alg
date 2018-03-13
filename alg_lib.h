#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>

using  namespace std;

void BubbleSort(int nArray[], int n);

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};


TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
void  CreateTree1(TreeNode * p_tree);
void  CreateTree2(TreeNode * p_tree);
void pre(TreeNode* p_root);
int arrayPairSum(vector<int>& nums);//vector 需要使用 using namespace std; 来声明下

bool sortBy(int a, int b);
//找到连续三个以内，集合的长度
int getNum(vector<int>& vec);

//冒泡排序
void BubbleSort(int a[], int n);
//插入排序
void Insertsort(int a[], int n);
//初始化向量,初始化列表,初始化vector列表，序列为1,1,1,2,2,3,6,6
void init_vector(vector<int>& vec);
//斐波那契生成——非递归生成
int fabonacci(int n);

//566. Reshape the Matrix
//    实现根据r,c值 返回值
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c);

//替换字符转中的空格为%20
void replaceSpace(char *str,int length);