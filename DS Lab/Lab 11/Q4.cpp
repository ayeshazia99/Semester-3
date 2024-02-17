#include <iostream>
using namespace std;

class node {
	long int tel;
	int id;
    int size;
public:
	node()
	{
		tel = 0;
		id = 0;
		size=0;
	}
	friend class hashing;
};

class hashing {
	node data[100];
	long int t;
	int i, index;
	int size1=0;
node n;
public:
	hashing()
	{
		i = 0;
		t = 0;
	}

	void create_record(int size)
	{
int i,t;
		cout << "\nEnter the student's id :";

		cin>>i;
			cout<< "\nEnter the telephone number of student : ";
		cin>>t;
		index = i % size;

		for (int j = 0; j < size; j++) {
			if (data[index].id == 0) {
				data[index].id = i;
				data[index].tel = t;
				break;
			}
			else
				index
					= (index + 1) % size;
		}
		size1++;
	}
    int find_size(){
    	return size1;
	}

	void search_record(int size)
	{
		int index1, flag = 0;
		int key;
		cout << "\nEnter key to search:";
		cin>>key;
		index1 = key % size;
		for (int a = 0; a < size; a++) {
			if (data[index1].id == key) {
				flag = 1;
				cout << "\nRecord found:";
				cout << "\n\tID ";
				cout << "\t\tTELEPHONE ";
				cout << "\n\t"
					<< data[index1].id
					<< " \t\t"
					<< data[index1].tel<<endl;
				break;
			}
			else
				index1
					= (index1 + 1) % size;
		}
	}

	void delete_record(int size)
	{
		int index1, key, flag = 0;
		cout << "\nEnter record id to delete : ";
       cin>>key;
		index1 = key % size;

		for (int a = 0; a < size; a++) {
			if (data[index1].id
				== key) {
				flag = 1;
				data[index1].id = 0;
				data[index1].tel = 0;
				cout << "\nRecord deleted successfully!"<<endl;
				break;
			}
			else
				index1
					= (index1 + 1) % size;
		}
}

};

int main()
{
	int size;
	hashing s;
	int x;
	size = 20;
	while(x!=5){
	cout<<"1)Insert record"<<endl;
	cout<<"2)Find size of contact book"<<endl;
	cout<<"3)Find record with student id"<<endl;
	cout<<"4)Delete record"<<endl;
	cout<<"5)Exit"<<endl;
	cout<<"Enter option:";
	cin>>x;
	switch(x){
		case 1:
	cout << "\n1.Insert pair in contact book"<<endl;
	s.create_record(size);
		break;
		case 2:
	cout<<"The size is:"<<s.find_size()<<endl<<endl;
	break;
	case 3:
	s.search_record(size);
	break;
	case 4:
		s.delete_record(size);
		break;
	case 5:
		exit;
}}

}

