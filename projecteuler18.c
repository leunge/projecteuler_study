/*
                   75
                  95 64
                 17 47 82
                18 35 87 10
               20 04 82 47 65
              19 01 23 75 03 34
             88 02 77 73 07 63 67
            99 65 04 28 06 16 70 92
           41 41 26 56 83 40 80 70 33
         41 48 72 33 47 32 37 16 94 29
       53 71 44 65 25 43 91 52 97 51 14
     70 11 33 28 77 73 17 78 39 68 17 57
   91 71 52 38 17 14 91 43 58 50 27 29 48
 63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

0 1
2 3 4
5 6 7 8 
9 10 11  12 13
14 15 16 17 18 19

Find the maximum total from top to bottom of the triangle below:

*/

#include <stdio.h>
#include <stdlib.h>

  
typedef struct Node
{
    int data;
	int tmp;
    struct Node * right;
	struct Node * left;
}Node;

Node * CreateNode(int data)                                                                  
{                                                                                                
        Node * newNode = (Node *)malloc(sizeof(Node));                                          
        newNode->data = data;
		newNode->tmp=0;
        newNode->right = NULL;   
		newNode->left = NULL;   
        return newNode;
}

Node *AddChild(Node *parent, int data){
	Node * newNode = (Node *)malloc(sizeof(Node));  
	if((parent->left!=NULL)&&(parent->right!=NULL)){
		printf("it's already full");
		return 0;}
	                                        
    newNode->data = data;   
	newNode->tmp=0;
    newNode->right = NULL;   
	newNode->left = NULL; 
	if(parent->left == NULL){
		parent->left = newNode;
	}else if(parent->right == NULL){
		parent->right = newNode;
	}
	return newNode;
}

void PreOrder(Node *r , int i){
	if(i>=15){
		printf("%d -> %d \n" ,i, r->data);
	}
	if(r->left) PreOrder(r->left, i+1);
	if(r->right) PreOrder(r->right, i+1);
}

int Bigg(Node *r , int i, int j){
	
	if(i>=15 ){
		printf("%d -> %d + %d =  %d \n" ,i, j, r->data, j+ r->data);
	}

	if(r->tmp < j + r->data){
		r->tmp = j + r->data;
	}else{
		return 0;
	}


	if(r->left && r->right){
		if(r->left) Bigg(r->left, i+1, r->tmp);
		if(r->right) Bigg(r->right, i+1, r->tmp);
		//if(r->left->data > r->right->data) Bigg(r->left, i+1, j);
		//if(r->left->data < r->right->data) Bigg(r->right, i+1, j);
	}

}
int height(Node* node)
{
   if (node==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(node->left);
     int rheight = height(node->right);
 
     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
} 

 
/* Print nodes at a given level */
void printGivenLevel(Node* root, int level, int sum)
{
  if(root == NULL)
    return;
  if(level == 1){
	  //printf("%d \n", root->data);
	  if(root->tmp <= sum + root->data){
			root->tmp = sum + root->data;
			printf("%d + %d =  %d \n" , sum, root->data, root->tmp);
	  }else{
		return;
	  }
  }
  else if (level > 1)
  {
    printGivenLevel(root->left, level-1, root->tmp);
    printGivenLevel(root->right, level-1, root->tmp);
  }
}

void printLevelOrder(Node *root)
{
  int h = 4;
  int i;
  for(i=1; i<=h; i++)
    printGivenLevel(root, i, 0);
}     



Node * GetNodeAt(Node * list, int data)                                                       
{                                                                                                 
        Node * Current = list;
        int index =0 ;

        if ( Current == NULL)
        {
              printf("GetNodeAt : Current is NULL\n");
              return NULL;
        }

        for ( index = 0 ; index != data && Current != NULL ; index++)
        {
              Current=Current->left;
        }

        return Current;                              
}

int main18(){
	int data[130] = {95,64,17,47,82,18,35,87,10,20,04,82,47,65,19,1,23,75,03,34,88,2,77,73,07,63,67,99,65,04,28,6,16,70,92,41,41,26,56,83,40,80,70,33,41,48,72,33,47,32,37,16,94,29,53,71,44,65,25,43,91,52,97,51,14,70,11,33,28,77,73,17,78,39,68,17,57,91,71,52,38,17,14,91,43,58,50,27,29,48,63,66,4,68,89,53,67,30,73,16,69,87,40,31,4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};
	Node *root;
	Node *child[130];
	int i, j, k, l;
	root = CreateNode(75);

	for(i=0 ; i<130 ; i++){
		child[i] = CreateNode(data[i]);
	}

	root->left = child[0];
	root->right = child[1];
	i = 0;
	j = 2;
	k=2;
	l=3;
	while(child[i]->data!=31){
		child[i]->left = child[j];
		j = j+1;
		child[i]->right = child[j];
		i = i+1;
		if(i-k == 0){
			j = j+1;
			k = k+l;
			l = l+1;
		}
	}
	//printLevelOrder(root);
	Bigg(root, 1, 0); 
	//PreOrder(root,1);

	return 0;
}