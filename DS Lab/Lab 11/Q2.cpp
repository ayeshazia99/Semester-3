#include<iostream>
#include<cmath>
using namespace std;
#define table 10
class HashTableEntry{
	public:
		int k;
		int v;
		HashTableEntry(int k,int v){
			this->k=k;
			this->v=v;
		}
};
class HashMapTable{
	private:
		HashTableEntry **t;
	public:
	HashMapTable() {
         t = new HashTableEntry * [table];
         for (int i = 0; i< table; i++) {
            t[i] = NULL;
         }
      }
      int middle(int n) //mid_square 
{
    int digits = (int)log10(n) + 1;
    n = (int)(n / pow(10, digits / 2))
        % 10;
    return n;
}
 
      int HashFunc(int k) {
         int x=k*k;
         int y=middle(x);
         return y;
      }
      void Insert(int k,int v){
      	int hash = HashFunc(k);
         while (t[hash] != NULL && t[hash]->k != k) {
            hash  = HashFunc(hash + 1);
         }
         if (t[hash] != NULL)
            delete t[hash];
         t[hash] = new HashTableEntry(k,v);
         cout<<"Element inserted successfully!"<<endl;
	  }
	  int SearchKey(int k) {
         int hash = HashFunc(k);
         while (t[hash] != NULL && t[hash]->k != k) {
            hash = HashFunc(hash + 1);
         }
         if (t[hash] == NULL)
            return -1;
         else{
	
            return t[hash]->v;
      }}
      void Remove(int k) {
         int hash = HashFunc(k);
         while (t[hash] != NULL) {
            if (t[hash]->k == k)
               break;
            hash = HashFunc(hash + 1);
         }
         if (t[hash] == NULL) {
            cout<<"Element is not present at key!"<<k<<endl;
            return;
         } else {
            delete t[hash];
         }
         cout<<"Element deleted successfully!"<<endl;
      }
  
};
int main(){
	HashMapTable hash;
hash.Insert(5,6);
hash.Insert(7,8); 
hash.Insert(4,5);
hash.Insert(1,2);
hash.Remove(5);
cout<<"The value found at key is:"<<hash.SearchKey(4);
}
	
