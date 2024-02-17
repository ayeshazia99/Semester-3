#include <string>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Huffman
{
 struct node
 {
  node* left;
  node* right;
char data;
  size_t occur;
  node(char data, size_t occur) : data(data),occur(occur), left(NULL), right(NULL)
                              {
							  }
 ~node()
 {
   delete left;
   delete right;
 }
 };
 struct compare
 {
  bool operator()(node* left, node* right)
  {
    return (left->occur > right->occur);
  }
};

node* top;

void display(node* root, string str)
{
if(root == NULL)
   return;

 if(root->data == '$')
 {
  display(root->left, str + "0");
  display(root->right, str + "1");
 }

 if(root->data != '$')
 {
   cout << root->data <<" : " << str << "\n";
   display(root->left, str + "0");
   display(root->right, str + "1");
 }
}

public:
  Huffman() {};
  ~Huffman()
  {
    delete top;
  }
  void Generate_Huffman_tree(vector<char>& data, vector<size_t>& freq, size_t size)
  {
   node* left;
   node* right;
   priority_queue<node*, vector<node*>, compare > minHeap;

for(size_t i = 0; i < size; ++i)
   {
      minHeap.push(new node(data[i], freq[i]));
   }

while(minHeap.size() != 1)
    {
      left = minHeap.top();
minHeap.pop();

      right = minHeap.top();
minHeap.pop();

      top = new node('$', left->occur + right->occur);
      top->left  = left;
      top->right = right;
      minHeap.push(top);
     }
    display(minHeap.top(), "");
 }
// void HuffmanDecompression(node *root,string s){
// 	string n=s.length();
// 	for(int i=1;i<n;i++){
// 		node *current=root;
// 		while(current->left!=NULL && current->right!=NULL){
// 			if(s[i]=="0")
// 			current=current->left;
// 			else
// 			current=current->right;
// 			i++;
//		 }
//		 cout<<current->data;
//	 }
// }
};

 int main()
 {
  int n, f;
  char ch;
  Huffman h;
  vector<char> data;
  vector<size_t> freq;
  cout<<"Enter how many elements are there:";
  cin>>n;
  cout<<"Enter characters:";
  for (int i=0;i<n;i++)
  {
      cin>>ch;
data.insert(data.end(), ch);
  }
  cout<<"Enter occurence/frequency:";
  for (int i=0;i<n;i++)
  {
      cin>>f;
freq.insert(freq.end(), f);
  }

  size_t size = data.size();
  h.Generate_Huffman_tree(data, freq, size);

  return 0;
}

	
