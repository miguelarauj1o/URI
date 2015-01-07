#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool b;
 
struct Node
{
	char data;
	Node* left;
	Node* right;
};
 
Node* GetNewroot(int data)
{
	Node* newroot = new Node();
	newroot -> data = data;
	newroot -> left = NULL;
	newroot -> right = NULL;
	return newroot;
}
 
Node* Insert(Node* root, int data)
{
	if(root == NULL){
		root = GetNewroot(data);
		return root;
	}else if(data <= root -> data){
		root -> left = Insert(root -> left, data);
	}else{
		root -> right = Insert(root -> right, data);
	}
 
	return root;
}

bool lookup(struct Node* root, int target) 
{ 
  	if (root == NULL){ 
		return false; 
  	}else { 
		if (target == root->data){
			return true; 
		}else{ 
			if (target < root->data) return lookup(root->left, target); 
	  		else return lookup(root->right, target); 
		} 
  	} 
} 
 
void printPreOrder(struct Node* root) 
{
	if (root == NULL) 
		return;
	if(b){
		printf("%c", root -> data);
		b = false;	
	}else{
		printf(" %c", root -> data);
	}
	
	printPreOrder (root -> left); 
	printPreOrder (root -> right); 
}
 
void printInOrder(struct Node* root) 
{ 
	if (root == NULL) 
		return;
	printInOrder (root -> left); 
	if(b){
		printf("%c", root -> data);
		b = false;	
	}else{
		printf(" %c", root -> data);
	}
	printInOrder (root -> right);
}
 
void printPosOrder(struct Node* root) 
{ 
	if (root == NULL) 
		return;
	printPosOrder (root -> left); 
	printPosOrder (root -> right);
	if(b){
		printf("%c", root -> data);
		b = false;	
	}else{
		printf(" %c", root -> data);
	}
}  
 
int main(int argc, char const *argv[])
{
	string s;

	Node* root = NULL;

	while(getline(cin, s))
	{
		if(s == "INFIXA"){
			b = true;
			printInOrder(root);
			printf("\n");
		}else if(s == "PREFIXA"){
			b = true;
			printPreOrder(root);
			printf("\n");
		}else if(s == "POSFIXA"){
			b = true;
			printPosOrder(root);
			printf("\n");
		}else if(s[0] == 'P' && s[1] == ' '){
			if(lookup(root, s[2])) printf("%c existe\n", s[2]);
			else printf("%c nao existe\n", s[2]);
		}else{
			root = Insert(root, s[2]);
		}
	}

	return 0;
}