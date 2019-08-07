#include "alg_lib.h"
#include <iostream>

using namespace std;

int main()
{
    // cout<<"hello worls"<<endl;
    // Fibonacci(12);
    int ret_value = Fibonacci(12);
    cout << ret_value << endl;
    // print_hello();
    // system("pause");
	return 0;
}

/*
//从尾部打印一个链表
    ListNode * p_head = NULL;
    p_head = new ListNode(1);
    ListNode* p_tmp_1 = p_head;
    for (int i = 0; i < 9 ; i++)
    {
        ListNode* p_tmp_2 = new ListNode(i);
        p_tmp_1->next = p_tmp_2;
        p_tmp_1 = p_tmp_2;
    }
    printListFromTailToHead(p_head);

//替换空格为２０％   void replaceSpace(char *str,int length)
char* str = (char*) malloc(12 * sizeof(char));
strcpy(str," helloword");
replaceSpace(str,12);
cout<<str<<endl;

// 根据前序遍历和中序遍历,重建二叉树
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin)

 //两个栈来实现一个队列
void push(int node,stack<int> stact1,stack<int> stack2);
int pop(stack<int> stact1,stack<int> stack2);
 */