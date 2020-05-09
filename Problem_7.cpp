/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:     
        int findLevel(TreeNode*root,int data,int level){
        if(root==NULL)  return 0;
        if(root->val==data) return level;
        int downLevel= findLevel(root->left,data,level+1);
        if(downLevel!=0)    return downLevel;
         downLevel = findLevel(root->right,data,level+1);
        return downLevel;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q1;
       
        int h1,h2,p1,p2;
        q1.push(root);
        while(!q1.empty()){
            
             TreeNode* t= q1.front();
          
            if(t->left!= NULL && t!=NULL){
                if(t->left->val == x){
                    h1= findLevel(root,x,0);
               
                   
                    p1= t->val;
                }
            }
            if(t->left!= NULL && t!=NULL){
                if(t->left->val == y){
                    h2= findLevel(root,y,0);
              
                    
                    p2= t->val;
                }
            }
            if(t->right!= NULL && t!=NULL){
                if(t->right->val == y){
                      h2= findLevel(root,y,0);
                  
                    
                    p2= t->val;
                }
            }
            if(t->right!= NULL && t!=NULL){
                if(t->right->val == x){
                     h1= findLevel(root,x,0);
                 
                   
                    p1= t->val;
                }
            }
            
            
            
           
            if(t->left!=NULL)  {q1.push(t->left);}
            if(t->right!=NULL)  {q1.push(t->right);}
            q1.pop();
            
            
        }
       
        
       if((h1==h2)){
           if(p1==p2)   return false;
           else return true;
       }
        else    return false;
        
    }
};
