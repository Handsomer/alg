#include "alg_lib.h"

#include <map>

int main()
{

//    vector<vector<int> > nums(2);
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 4;j++)
//        {
//            nums[i].push_back(j);
//        }
//    }
//    vector<vector<int>> ret_value = matrixReshape(nums,4,2);
//    int raws = ret_value.size(),clos = ret_value[0].size();
//    cout << raws<<clos<<endl;
//    for (int i = 0; i < raws; i++)
//    {
//        for(int j = 0; j<clos;j++)
//        {
//            cout<<"."<<ret_value[i][j];
//        }
//        cout<<endl;
//    }
    vector<vector<int>> nums(3);
    int tmp = 0;
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0;j<3;j++)
        {
            nums[i].push_back(tmp);
            tmp ++;
        }
    }

    FindNumInNm(4,nums);
    system("pause");
	return 0;
}
