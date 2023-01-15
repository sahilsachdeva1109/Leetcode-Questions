// predecessor ans successor in a BST 
// LOVE BABBAR LEC 70 QUE 4
vector<int> findPreSuc(binaryTreeNode *root, int key)
{
    // temp root node bnaya 
    binaryTreeNode * temp = root;
    // initilized 
    int pred =-1;
    int succ = -1;
    
    while(temp->data != key){
        // check kr rhe hain ki key choti hai ya nahi 
        // if choti h toh left me check krehge 
        // and ussi hissab se succ ko save kr lenge temp ke data se 
        if(key < temp->data){
            succ = temp->data;
            temp = temp->left;
        }
        // same krna hai bass right me krna hain 
         if(key > temp->data){
            pred = temp->data;
            temp = temp->right;
         }
    }
    // pred
    // pre ke andr left ka data save krna hau 
    // left tree ke andr right node store krana hai 
    binaryTreeNode * leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree= leftTree->right;
    }
    
    binaryTreeNode * rightTree = temp ->right;
    while(rightTree!=NULL){
        succ=  rightTree->data;
        rightTree = rightTree->left;
    }
    // return pair <pred,succ>
     
    pair<int,int> ans = make_pair(pred,succ);
    return ans;
}