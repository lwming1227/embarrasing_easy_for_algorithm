#include <iostream>
#include <vector>

using namespace std;

class TreeUtils
{
public:
    template<typename T1>
    vector<T1> Preorder(node *n)
    {
        static vector<T1> order;
        order.push_back(n->value);

        if(n->left != NULL)
        {
            Preorder(n->left);
        }
        if(n->right != NULL)
        {
            Preorder(n->right);
        }
        return order;
    }
};
