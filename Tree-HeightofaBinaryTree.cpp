
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
  if(root == NULL)
      return 0;
    else {
        int ldepth = height(root->left);
        int rdepth = height(root->right);
        if(ldepth > rdepth)
            return ldepth+1;
        else return rdepth + 1;
    }
}
  
