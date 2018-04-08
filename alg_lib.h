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

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
void  CreateTree1(TreeNode * p_tree);
void  CreateTree2(TreeNode * p_tree);
void pre(TreeNode* p_root);
int arrayPairSum(vector<int>& nums);//vector ��Ҫʹ�� using namespace std; ��������
bool sortBy(int a, int b);
//�ҵ������������ڣ����ϵĳ���
int getNum(vector<int>& vec);
//ð������
void BubbleSort(int a[], int n);
//��������
void Insertsort(int a[], int n);
//��ʼ������,��ʼ���б�,��ʼ��vector�б�����Ϊ1,1,1,2,2,3,6,6
void init_vector(vector<int>& vec);
//쳲��������ɡ����ǵݹ�����
int fabonacci(int n);
//566. Reshape the Matrix
//    ʵ�ָ���r,cֵ ����ֵ
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c);
//�滻�ַ�ת�еĿո�Ϊ%20
void replaceSpace(char *str,int length);
//��β��ͷ��ӡ����
vector<int> printListFromTailToHead(ListNode* head);
// ����ǰ��������������,�ؽ�������
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin);


//����ջ��ʵ��һ������
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

//ϣ������
void shellsort(int *a, int n);
//ѡ������
void selectSort(int *a, int n);
//���������е�Ԫ��
inline void Swap(int &a, int &b);