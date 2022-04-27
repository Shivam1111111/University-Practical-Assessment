#include <iostream> 
using namespace std; 
 
class Node 
{ 
   int data; 
   Node *left; 
   Node *right; 
 
public: 
   Node(int data) 
   { 
       this->data = data; 
       this->left = NULL; 
       this->right = NULL; 
   } 
 
   Node *insert(Node *root, int data) 
   { 
       if (root == NULL) 
       { 
           return new Node(data); 
       } 
 
       if (data < root->data) 
       { 
           root->left = insert(root->left, data); 
       } 
       else 
       { 
           root->right = insert(root->right, data); 
       } 
 
       return root; 
   } 
 
   void inOrder(Node *p) 
   { 
       if (p == NULL) 
       { 
           return; 
       } 
 
       if (p->left) 
       { 
           inOrder(p->left); 
       } 
       cout << p->data << " "; 
       if (p->right) 
       { 
           inOrder(p->right); 
       } 
   } 
 
   void preOrder(Node *p) 
   { 
       if (p == NULL) 
       { 
           return; 
       } 
 
       cout << p->data << " "; 
       if (p->left) 
       { 
           preOrder(p->left); 
       } 
       if (p->right) 
       { 
           preOrder(p->right); 
       } 
   } 
 
   void postOrder(Node *p) 
   { 
       if (p == NULL) 
       { 
           return; 
       } 
 
       if (p->left) 
       { 
           postOrder(p->left); 
       } 
       if (p->right) 
       { 
           postOrder(p->right); 
       } 
       cout << p->data << " "; 
   } 
 
   void printPredecessor(Node *root) 
   { 
       if (root->left == NULL) 
       { 
           cout << "NULL" << endl; 
       } 
 
       Node *ptr = root->left; 
 
       while (ptr->right != NULL) 
       { 
           ptr = ptr->right; 
       } 
       cout << ptr->data << endl; 
   } 
 
   void printSuccessor(Node *root) 
   { 
       if (root->right == NULL) 
       { 
           cout << "NULL" << endl; 
       } 
 
       Node *p = root->right; 
 
       while (p->left != NULL) 
       { 
           p = p->left; 
       } 
       cout << p->data << endl; 
   } 
 
   int countLeafNodes(Node *root, int count = 0) 
   { 
       if (root == NULL) 
       { 
           return count; 
       } 
 
       if (root->left == NULL && root->right == NULL) 
       { 
           count++; 
           return count; 
       } 
 
       if (root->left) 
       { 
           count = countLeafNodes(root->left, count); 
       } 
       if (root->right) 
       { 
           count = countLeafNodes(root->right, count); 
       } 
 
       return count; 
   } 
}; 
 
void printMenu(){ 
   cout << "1 : Inorder Traversal\n2 : Preorder Traversal\n3 : Postorder Traversal\n4 : Predecessor of a given node\n5 : Successor of given node\n6 : Count the leaf nodes\n7 : Exit" << endl; 
} 
 
int main() 
{ 
   Node *root = new Node(5); 
 
   root->insert(root, 1); 
   root->insert(root, 9); 
   root->insert(root, 14); 
   root->insert(root, 2); 
   root->insert(root, 8); 
 
   int userInput; 
   do 
   { 
       printMenu(); 
       cout << "Select The Number : "; 
       cin >> userInput; 
 
       while (!(userInput >= 1 && userInput <= 7)) 
       { 
           cout << "Invaild choice, try again." << endl; 
           cin.clear(); 
           cin.ignore(); 
           printMenu(); 
           cout << "Enter choice: "; 
           cin >> userInput; 
       } 
 
       switch (userInput) 
       { 
       case 1: 
           cout << "In-Order Traversal: "; 
           root->inOrder(root); 
           cout << endl; 
           break; 
 
       case 2: 
           cout << "Pre-Order Traversal: "; 
           root->preOrder(root); 
           cout << endl; 
           break; 
 
       case 3: 
           cout << "Post-Order Traversal: "; 
           root->postOrder(root); 
           cout << endl; 
           break; 
 
       case 4: 
           cout << "Predecessor of root Node: "; 
           root->printPredecessor(root); 
           break; 
       
       case 5: 
           cout << "Successor of root Node: "; 
           root->printSuccessor(root); 
           break; 
 
       case 6: 
           cout << "Number of Leaf Nodes: " << root->countLeafNodes(root) << endl; 
           break; 
 
       case 7: 
           
           return 0; 
 
       default: 
           break; 
       } 
 
   } while (true); 
 
   return 0; 
} 
 
