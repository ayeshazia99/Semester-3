  #include<bits/stdc++.h>
  using namespace std;
  class node{
  	public:
      char data;
      int freq;

      node *left,*right;

      node(char data1,int freq1){
          left=right=NULL;
          data=data1;
          freq=freq1;
     }
};
class compare{

    bool operator()(node *l,node *r)
    {
        return (l->freq>r->freq);
    }
};

void printCodes(struct node* root,string str){
   //If root is Null then return.
   if(!root){
       return;
   }
   //If the node's data is not '$' that means it's not an internal node and print the string.
   if(root->data!='$'){
       cout<<root->data<<": "<<str<<endl;
   }

   printCodes(root->left,str+"0");
   printCodes(root->right,str+"1");
}

//Build Huffman Tree
void HuffmanCodes(char data[],int freq[],int size){

class node *left,*right,*top;

//create a min heap.
priority_queue<node*,vector<node*>,compare> minheap;

// For each character create a leaf node and insert each leaf node in the heap.
for(int i=0;i<size;i++){
    minheap.push(new node(data[i],freq[i]));
 }

 //Iterate while size of min heap doesn't become 1
 while(minheap.size()!=1){
     //Extract two nodes from the heap.
     left = minheap.top();
     minheap.pop();

     right = minheap.top();
     minheap.pop();



    node*  tmp = new node('$',left->freq+right->freq);
     tmp->left = left;
     tmp->right = right;

     minheap.push(tmp);
 }
 //Calling function to print the codes.
 printCodes(minheap.top()," ");
}

int main(){

  char arr[] = {'a','b','c','d','e'};
  int freq[] = {10,5,2,14,15};

  int size=5;
  HuffmanCodes(arr,freq,size);

return 0;
}

