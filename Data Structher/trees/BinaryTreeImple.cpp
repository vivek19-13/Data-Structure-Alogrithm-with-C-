#include<iostream>
#include<queue>
using namespace std;

class root{
    public:
        int data;
        root * left;
        root * right;
        root(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};
void LevelOrder(root * Root)
{
    if(Root == NULL)
    {
        return;
    }
    queue<root * >q;
    q.push(Root);
    while(!q.empty())
    {
        root * tmp = q.front();
        q.pop();
        cout<<tmp->data<<" ";
        if(tmp->left)
        {
            q.push(tmp->left);
        }
        if(tmp->right)
        {
            q.push(tmp->right);
        }
    }
    cout<<endl;
}
int FindHight(root * Root)
{
    if(Root == NULL)
    {
        return 0;
    }
    int left = FindHight(Root->left);
    int right = FindHight(Root->right);
    return 1 + max(left , right);
}
int daimeter(root * Root)
{
    if(Root == NULL)
    {
        return 0;
    }
    int left = FindHight(Root->left);
    int right = FindHight(Root->right);
    int lmax = left + right + 1;

    int dleft = daimeter(Root->left);
    int dright = daimeter(Root->right);
    int dMax = max(dleft  , dright);

    return max(dMax , lmax);

}
void leftView(root * Root)
{
    if(Root == NULL)
    {
        return;
    }
    queue<root * >q;
    q.push(Root);
    while(!q.empty())
    {
        int n = q.size();
        for(int i=0; i<n; i++)
        {
            root * tmp = q.front();
            q.pop();

            if(i == 0)
            {
                cout<<tmp->data<<" ";
            }

            if(tmp->left)
            {
                q.push(tmp->left);
            }
            if(tmp->right)
            {
                q.push(tmp->right);
            }
        }
    }
}
int main()
{
    root * Root = new root(5);
    
    Root->left = new root(2);
    Root->left->left = new root(3);
    Root->right = new root(10);
    LevelOrder(Root);
    int hight = FindHight(Root);
    cout<<"Height of the tree : "<<hight<<endl;
    cout<<daimeter(Root)<<endl;
    cout<<"Left View : ";
    leftView(Root);

    return 0;
}