#include <iostream>
#include <vector>

using namespace std;


class Utils
{
public:
    template<typename T2>
    bool vector_diff(vector<T2> v1,vector<T2> v2)
    {
        if(v1.size() != v2.size())
            return false;

        for(int i = 0;i < v.size();i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
};
