#include <cstdio>
using namespace std;

struct Node
{
	int data;
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
	if(root == NULL){ //empty tree
		root = GetNewroot(data);
		return root;
	}else if(data <= root -> data){
		root -> left = Insert(root -> left, data);
	}else{
		root -> right = Insert(root -> right, data);
	}

	return root;
}

void printPreOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printf(" %i", root -> data);
  	printPreOrder (root -> left); 
  	printPreOrder (root -> right); 
}

void printInOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printInOrder (root -> left); 
  	printf(" %i", root -> data);
  	printInOrder (root -> right); 
}

void printPosOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printPosOrder (root -> left); 
  	printPosOrder (root -> right);
  	printf(" %i", root -> data);  
}  

int main()
{
	int c, n, x, count = 1;
	
	scanf("%i", &c);

	for (int i = 0; i < c; ++i)
	{
		Node* root = NULL;
		scanf("%i", &n);

		for (int j = 0; j < n; ++j)
		{
			scanf("%i", &x);
			root = Insert(root, x);
		}

		printf("Case %i:\n", count);
		printf("Pre.:");
		printPreOrder(root);
		printf("\n");

		printf("In..:");
		printInOrder(root);
		printf("\n");

		printf("Post:");
		printPosOrder(root);
		printf("\n");

		count++;
		//if(i != (c - 1))
		printf("\n");
	}

	return 0;
}