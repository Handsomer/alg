#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <stack>

using  namespace std;

void BubbleSort(int nArray[], int n);



struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

// Fibonacci 生成
int Fibonacci(int n);

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
vector<vector<int> > matrixReshape(vector<vector<int> > & nums, int r, int c);

bool FindNumInNm(int target, vector<vector<int> > array);

//替换字符转中的空格为%20
void replaceSpace(char *str,int length);

//从尾到头打印链表
vector<int> printListFromTailToHead(ListNode* head);

// 根据前序遍历和中序遍历,重建二叉树
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin);

// 实现二叉树的镜像翻转
void Mirror(TreeNode *pRoot);

//两个栈来实现一个队列
class CQueue
{
public:
    void push(int node)
    {
        stact1.push(node);
    }

    int pop()
    {
        int ret_value = 0;
        if(stack2.size() > 0)
        {
            ret_value = stack2.top();
            stack2.pop();
            return ret_value;
        }else if(stact1.size() <= 0)
        {
            while(stact1.size() > 1)
            {
                int n_tmp = stact1.top();
                stack2.push(n_tmp);
                stact1.pop();
            }
            ret_value = stack2.top();
            stack2.pop();
            return ret_value;
        }else
        {
            return false;
        }
    }

private:
    stack<int> stact1;
    stack<int> stack2;
};

//希尔排序
void shellsort(int *a, int n);

//选择排序
void selectSort(int *a, int n);

//交换数组中的元素
inline void Swap(int &a, int &b);

//判断链表是否有环，并如果 有则返回环的开始节点
ListNode* EntryNodeOfLoop(ListNode* pHead);


// 删除链表中的重复节点
ListNode* deleteDuplication(ListNode* pHead);

int test_deleteDuplication();
