#!usr/bin/env python
#coding: utf-8

#fibonacii 数列的生成器写法
def fibonacii_generator(max):
    n ,a,b = 0,0,1
    while n < max:
        n = n+1
        yield b
        tmp = a
        a = b
        b = a + tmp
    print("done")

#杨辉三角 数列的生成器写法
def triangles():
    n = 10
    result = [[1]]
    for i in range(0,n+1):
        tmp_list = [1]

        #插入首行时新行为两个1
        if i == 1:
            tmp_list.append(1)
            yield tmp_list
            result.append(tmp_list)
        elif i == 0:
            yield tmp_list
        else:
            for sub_i in range(len(result[i-1])-1):
                #新的一行的第sub_i列等于上一行第sub_i列 + 第sub_i + 1列
                new_value = result[i-1][sub_i] + result[i-1][sub_i + 1]
                tmp_list.append(new_value)
            tmp_list.append(1)
            yield tmp_list
            result.append(tmp_list)

class Solution:
    def levelOrser(self, root):
        if not root:
            return None
        res = [[root.val]]
        cur_nodes = [root]
        next_nodes = []
        while cur_nodes:
            for node in cur_nodes:
                if node.left:
                    next_nodes.append(node.left)
                if node.right:
                    next_nodes.append(node.right)
            if next_nodes:
                res.append([i.val for i in next_nodes])
            cur_nodes = next_nodes
            next_nodes = []
