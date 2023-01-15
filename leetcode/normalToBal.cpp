//codestudio 
//normal bst to balanced bst 
// aproach - 
// inorder save krke
// mid nikalo usko root node bnao 
// and mid ke left me ho h usko left node me dalo 
// and right vale right me , recursion se tree n jaega 
/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root , vector<int> &in    ){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
TreeNode<int>* inorderBST(int s, int e , vector<int> inorderVal){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
    root->left = inorderBST(s,mid-1,inorderVal);
    root->right = inorderBST(mid+1,e,inorderVal);
    return root;
    
}
TreeNode<int>* balancedBst(TreeNode<int>* root ) {
    vector<int>inorderVal;
    inorder(root,inorderVal);
    return inorderBST(0,inorderVal.size()-1,inorderVal);
    
    // Write your code here.
}
