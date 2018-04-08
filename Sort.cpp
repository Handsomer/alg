#include <iostream>
#include "alg_lib.h"

using namespace std;

void BubbleSort(int nArray[], int n)
{
	int flag = n;
	int k = 0;

	while (flag>0)
	{
		k = flag;
		flag = 0;
		for (int i = 1; i < k;i++)
		{
			if (nArray[i - 1] > nArray[i])
			{
				int tmp= nArray[i - 1];
				nArray[i-1] = nArray[i];
				nArray[i] = tmp;
				flag = i;
			}
		}
	}
}


TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
{
	if (t1)
	{
		if (t2)
		{
			t1->val += t2->val;
			if (t1->left && t2->left)
				mergeTrees(t1->left, t2->left);
			if (t1->right && t2->right)
				mergeTrees(t1->right, t2->right);
			if (!t1->left && t2->left)
			{
				t1->left = t2->left;
			}
			if (!t1->right && t2->right)
			{
				t1->right = t2->right;
			}
		}
		else
		{
			return t1;
		}
	}
	else
	{
		t1 = t2;
	}
	return t1;
}

//1,3,2,5
void  CreateTree1(TreeNode * p_tree)
{
	p_tree->val = 1;
	TreeNode* p_1 = new TreeNode;
	p_1->val = 3;
	TreeNode* p_2 = new TreeNode;
	p_2->val = 2;
	TreeNode* p_3 = new TreeNode;
	p_3->val = 5;

	p_tree->left = p_1;
	p_tree->right = p_2;

	p_1->left = p_3;
	p_1->right = NULL;

	p_2->left = NULL;
	p_2->right = NULL;

	p_3->left = NULL;
	p_3->right = NULL;
}

//2,1,3,NULL,4,NULL��7
void  CreateTree2(TreeNode * p_tree)
{
	p_tree->val = 2;
	TreeNode* p_1 = new TreeNode;
	p_1->val = 1;
	TreeNode* p_2 = new TreeNode;
	p_2->val = 3;
	TreeNode* p_3 = new TreeNode;
	p_3->val = 4;

	TreeNode* p_4 = new TreeNode;
	p_4->val = 7;

	p_tree->left = p_1;
	p_tree->right = p_2;

	p_1->left = NULL;
	p_1->right = p_3;

	p_2->left = NULL;
	p_2->right = p_4;

	p_3->left = NULL;
	p_3->right = NULL;

	p_4->left = NULL;
	p_4->right = NULL;
}

void pre(TreeNode* p_root)
{
	if (p_root)
		cout << p_root->val << endl;
	if (p_root->left)
		pre(p_root->left);
	if (p_root->right)
		pre(p_root->right);
}

//Arry pair sum
int arrayPairSum(vector<int>& nums) 
{
	int nSum = 0;
	sort(nums.begin(), nums.end());
	vector<int>::iterator it;
	for (it = nums.begin(); it < nums.end(); it = it + 2)nSum += *it;
	return nSum;
}

//�ж��������Ĵ�С
bool sortBy(int a, int b)
{
	return a < b;
}

//remove duplicates from sorted arry 2
//int removeDuplicates(vector<int>& nums)
int getNum(vector<int>& nums)
{
	if (nums.size() <= 2) return nums.size();
	int index = 2;
	for (int i = 2; i < nums.size(); i++)
	{
		if (nums[i] != nums[index - 2])
		{
			nums[index] = nums[i];
			index += 1;
		}
	}
	return index;
}

//ð������
void BubbleSort1(int a[], int n)
{
	int j, k;
	int flag;

	flag = n;
	while (flag > 0)
	{
		k = flag;
		flag = 0;
		for (j = 1; j < k; j++)
		{
			if (a[j - 1] > a[j])
			{
				swap(a[j - 1], a[j]);
				flag = j;
			}
		}
	}
}

void Insertsort(int a[], int n)
{
	int i, j, k;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (a[j] < a[i])
				break;
		//����ҵ���һ�����ʵ�λ��
		if (j != i - 1)
		{
			//����a[i]������������
			int temp = a[i];
			for (k = i - 1; k > j; k--)
				a[k + 1] = a[k];
			//��a[i]�ŵ���ȷ��λ����
			a[k + 1] = temp;
		}
	}
}

//��ʼ������
void init_vector(vector<int>& vec)
{
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(6);
}

int fabonacci(int n)
{
	int a = 0,b = 1;
	if (n == 0)
		return a;
	if (n == 1)
		return b;
	int tmp = 0;
	for (int i = 0; i< n-1; i++)
	{
		tmp = a;
		a = b;
		b = tmp + a;
	}
	return b;
}

vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
{
    int rows = nums.size(), cols = nums[0].size();
    if (r * c != rows * cols)  return nums;
    vector<vector<int> >  reshaped(r);
    int i = 0,j = 0;
    for (int m = 0; m < rows ; ++m)
    {
        for (int n = 0; n < cols; ++n)
        {
            reshaped[i].push_back(nums[m][n]);
            if((++j)%c == 0) ++i;
        }
    }
    return reshaped;
}

//�滻�ո�Ϊ������
void replaceSpace(char *str,int length)
{
    int n_space = 0,n_total = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        n_total += 1;
        if (str[i] == ' ') n_space += 1;
    }
    int new_length = n_total + 2 * n_space;
    if(length < new_length) return;
    int final_flag = new_length - 1;
    for(int i = n_total-1; i >= 0; i--)
    {
        if(str[i] != ' ')
        {
            str[final_flag] = str[i];
            final_flag--;
        }else
        {
            str[final_flag] = '%';
            final_flag--;
            str[final_flag] = '0';
            final_flag--;
            str[final_flag] = '2';
            final_flag--;
        }
    }
}


vector<int> printListFromTailToHead(ListNode* head)
{
	std::stack<ListNode*> node;
	ListNode* p_node = head;
	while(p_node != NULL)
	{
		node.push(p_node);
        p_node = p_node->next;
	}
    while(!node.empty())
    {
        p_node = node.top();
        cout << p_node->val << endl;
        node.pop();
    }

}

// ����ǰ��������������,�ؽ�������
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin)
{

}

//ϣ������ʵ��
void shellsort(int *a, int n)
{
    int j,gap = 0;
    for (gap = n/2; gap > 0; gap /= 2)
    {
        for(int i = 0; i < gap; i++)
        {
            for(j = i + gap; j < n; j += gap)
            {
                if(a[j-gap] > a[j])
                {
                    int n_tmp = a[j];
                    int k = j - gap;
                    while(k > 0 && a[k] > n_tmp)
                    {
                        a[k + gap] = a[k];
                        k -= gap;
                    }
                    a[k + gap] = n_tmp;
                }
            }
        }
    }
}
void selectSort(int *a,int n)
{
    int i,j,nMinIndex;
    for(i = 0; i < n; i++)
    {
        nMinIndex = i;
        for(j = i + 1; j < n ; j++)
        {
            if(a[j] < a[nMinIndex])
                nMinIndex = j;
        }
        Swap(a[i],a[nMinIndex]);
    }
}

inline void Swap(int &a, int &b)
{
    int n_tmp = a;
    a = b;
    b = n_tmp;
}