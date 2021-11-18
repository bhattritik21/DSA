#include<bits/stdc++.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

// Utility function to create a new Tree Node
struct Node* newNode(int val)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Function to Build Tree
struct Node* buildTree(char str[])
{
    // Corner Case
    if(strlen(str) == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    char *token= strtok(str, " ") ;
    int cnt=0;
    char *ip[100000];
       
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        ip[cnt++]= token;
        token = strtok(NULL, " ");
    }
    
    // Create the root of the tree
    struct Node* root = newNode(atoi(ip[0]));

    // Push the root to the queue
    struct Queue* queue= createQueue(cnt); 
    enqueue(queue,root);
    
    // Starting from the second element
    int i = 1;
    while(!isEmpty(queue) && i < cnt) {

        // Get and remove the front of the queue
        struct Node* currNode = front(queue);
        dequeue(queue);
        // Get the current node's value from the string
        char* currVal = ip[i];
        
        // If the left child is not null
        if(strcmp(currVal,"N") != 0) {
            
            // Create the left child for the current node
            currNode->left = newNode(atoi(currVal));

            // Push it to the queue
            enqueue(queue,currNode->left);
        }

        // For the right child
        i++;
        if(i >= cnt)
            break;
        currVal = ip[i];
        
        // If the right child is not null
        if(strcmp(currVal,"N") != 0) {

            // Create the right child for the current node
            currNode->right = newNode(atoi(currVal));

            // Push it to the queue
            enqueue(queue,currNode->right);
        }
        i++;
    }

    return root;
}

 
//Function to find the height of a binary tree.
int max (int a,int b){
   if(a>b) return a;
   if(b>a) return b;
}
int height(struct Node* node)
{
   if(node==NULL) return 0;
   int x= height(node->left);
   int y= height(node->right);
   return (max(x,y)+1);
   //code here
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        char str[100000];
        scanf("%[^\n]%*c", str);
        struct Node* root = buildTree(str);
        printf("%d\n",height(root));
    }
    return 0;
}  // } Driver Code Ends