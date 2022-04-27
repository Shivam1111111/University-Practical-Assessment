#include<iostream> 
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
 
   Node* search(Node* root, int key){ 
       if(root == NULL) { 
           return NULL; 
       } 
 
       if(key == root->data) { 
           return root; 
       } 
 
       if(key > root->data) { 
           return search(root->right, key); 
       } else { 
           return search(root->left, key); 
       } 
   } 
 
   void printMinimum(){ 
       Node* p = this; 
       while(p->left){ 
           p = p->left; 
       } 
 
       cout << "Minimum value: " << p->data << ", Address: " << p << endl; 
   } 
 
   void printMaximum() 
   { 
       Node *p = this; 
       while (p->right) 
       { 
           p = p->right; 
       } 
 
       cout << "Maximum value: " << p->data << ", Address: " << p << endl; 
   } 
 
   void inOrder(Node *ptr) 
   { 
       if (ptr == NULL) 
       { 
           return; 
       } 
 
       if (ptr->left) 
       { 
           inOrder(ptr->left); 
       } 
       cout << ptr->data << " "; 
       if (ptr->right) 
       { 
           inOrder(ptr->right); 
       } 
   } 
 
 
}; 
 
void printMenu(){ 
       cout << "1 : Insert keys\n2 : Search a paticular key\n3 : Inorder Traversal\n4 ; Find the minimum key node and print its value and address\n5 ; Find the maximum key node and print its value and address\n6 : Exit" << endl; 
} 
 
int main(){ 
 
   Node *root = new Node(7); 
 
   root->insert(root, 3); 
   root->insert(root, 11); 
   root->insert(root, 16); 
   root->insert(root, 2); 
   root->insert(root, 4); 
 
   int userInput; 
   int key; 
   Node* node; 
 
   do 
   { 
       printMenu(); 
       cout << "Select The Number: "; 
       cin >> userInput; 
 
       while (!(userInput >= 1 && userInput <= 6)) 
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
           cout << "Enter key to be inserted: "; 
           cin >> key; 
           root->insert(root, key); 
           cout << "Done!" << endl; 
           break; 
 
       case 2: 
           cout << "Enter key to be searched: "; 
           cin >> key; 
           node = root->search(root, key); 
 
           if(node == NULL) { 
               cout << "Key doesn't exists in tree." << endl; 
           } else { 
               cout << "Key found, Address: " << node << endl; 
           } 
           break; 
 
       case 3: 
           cout << "Inorder Traversal: "; 
           root->inOrder(root); 
           cout << endl; 
           break; 
 
       case 4: 
           root->printMinimum(); 
           break; 
 
       case 5: 
           root->printMaximum(); 
           break; 
 
       case 6: 
           return 0; 
 
       default: 
           break; 
       } 
 
   } while (true); 
 
   return 0; 
} 
 