#include <iostream>
#include <vector>

using namespace std;

class TreeUtils
{
public:
    vector<int> Preorder(node *n)
    {
        static vector<int> order;
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



