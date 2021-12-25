#include <iostream>
#include <vector>

using namespace std;

class Utils
{
public:
    template<typename T1>
    void vector_print(vector<T1> v)
    {
        for(int i = 0;i < v.size() - 1;i++)
        {
            cout << v[i];
            cout << " ";
        }
        cout << v[v.size()-1];
        cout << endl;
    }
};
