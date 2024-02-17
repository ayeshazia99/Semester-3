#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;
void exitscreen() {
	cout << "\n\n\n\n\n\t\t\t\t**************************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t  THANK YOU FOR VISITING THE RIDE HAILING SERVICE\n"; Sleep(200);
	cout << "\n\t\t\t\t**************************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t  ->PROJECT DESIGNED BY: \n\n\t\t\t\t\t1. Syeda Ravia Ejaz \t(20k-0246) "; Sleep(200);
	cout << "\n\n\t\t\t\t\t2. Ayesha Zia\t\t(20k-0414) \n\n\t\t\t\t\t3. Ahmed Ahsan\t\t(20k-0343)"; Sleep(200);
	Sleep(200);
	cout << "\n\n\n\t\t\t\t***************************************************\n\n\n\t\t\t\t";
}
class node {
public:
	int data;
	node* left;
	node* right;
	node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};
class BinarySearchTree {
public:
	node* insert(node* newnode, int key) {
		if (newnode == NULL) {
			newnode = new node(key);
			return newnode;
		}
		if (key < newnode->data || key == newnode->data)
			newnode->left = insert(newnode->left, key);
		else if (key > newnode->data || key == newnode->data)
			newnode->right = insert(newnode->right, key);
		else
			return newnode;
	}
	void preorder(node* root) {
		if (root == NULL)
			return;

		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
	void postorder(node* root) {
		if (root == NULL)
			return;

		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
	}
	void inorder(node* root) {
		if (root == NULL)
			return;

		inorder(root->left);
		cout << root->data << ",  ";
		inorder(root->right);
	}
};
void Input() {
	int PickUpID, DropOffID; string DropOffDT, PickUpDT;
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t location Details Input\n"; Sleep(200);
	cout << "\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t->Enter your pickup location ID: ";
	cin >> PickUpID;
	cout << "\n\t\t\t\t\t->Enter your dropoff location ID: ";
	cin >> DropOffID;
	cout << "\n\t\t\t\t\t->Enter your pickup date and time (x/x/xxxx y:yy)";
	cin >> ws;
	getline(cin, PickUpDT);
	cout << "\n\t\t\t\t\t->Enter your dropoff date and time (x/x/xxxx y:yy): ";
	getline(cin, DropOffDT);
}
void DriversDetail() {

}
void CarType() {
	int type;
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t\tSelect Car Type\n"; Sleep(200);
	cout << "\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t->Enter 1 for UberX" << endl;
	cout << "\t\t\t\t\t->Enter 2 for UberXL" << endl;
	cout << "\t\t\t\t\t->Enter 3 for UberSelect" << endl;
	cout << "\t\t\t\t\t->Enter 4 for UberBlack" << endl;
	cout << "\n\t\t\t\t  ->ENTER YOUR CHOICE : ";
	cin >> type;
}
void TotalFair() {

}
node* read(string string1, BinarySearchTree& obj)
{
	ifstream fin;
	int line;
	node* root = NULL;
	fin.open(string1);
	while (!fin.eof()) {
		fin >> line;
		root = obj.insert(root, line);
	}
	return root;
}
void driver() {
	int num1;
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t Welcome To Drivers Department\n"; Sleep(200);
	cout << "\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t->Enter 1 to View Passenger's Detail" << endl;
	cout << "\t\t\t\t\t->Enter 2 to Accept/Deny request for ride" << endl;
	cout << "\t\t\t\t\t->Enter 3 to Set status(Offline/Online)" << endl;
	cout << "\t\t\t\t\t->Enter 4 to EXIT the program" << endl;
	cout << "\n\t\t\t\t  ->ENTER YOUR CHOICE : ";
	cin >> num1;
	cout << "\n\n\n\t\t\t\t***************************************************\n\n\n\t\t\t\t";
	Sleep(500);
	system("CLS");
	switch (num1) {
	case 1: {
		//driver();
		break;
	}
	case 2: {
		//passenger();
		break;
	}
	case 3: {
		//exitscreen();
		break;
	}
	case 4: {

		break;
	}
	default: {
		exitscreen();
		break;
	}
	}
}
void passenger() {
	int num1;
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t Welcome To Passengers Department\n"; Sleep(200);
	cout << "\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t->Enter 1 to Input Pickup Location and DropOff Location" << endl;
	cout << "\t\t\t\t\t->Enter 2 to View Driver's Detail" << endl;
	cout << "\t\t\t\t\t->Enter 3 to Select Car Type" << endl;
	cout << "\t\t\t\t\t->Enter 4 to View Total Fair generated" << endl;
	cout << "\t\t\t\t\t->Enter 5 to EXIT the program" << endl;
	cout << "\n\t\t\t\t  ->ENTER YOUR CHOICE : ";
	cin >> num1;
	cout << "\n\n\n\t\t\t\t***************************************************\n\n\n\t\t\t\t";
	Sleep(500);
	system("CLS");
	switch (num1) {
	case 1: {
		Input();
		break;
	}
	case 2: {
		DriversDetail();
		break;
	}
	case 3: {
		CarType();
		break;
	}
	case 4: {
		TotalFair();
		break;
	}
	case 5: {
		exitscreen();
		break;
	}
	default: {
		exitscreen();
		break;
	}
	}
}

void welcome() {
	int choice;
	//	system("color 80");
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t\t Welcome To RIDE HAILING SERVICE\n"; Sleep(200);
	cout << "\n\t\t\t\t***********************************************\n\n"; Sleep(200);
	cout << "\t\t\t\t->PROJECT DESIGNED BY: \n\n\t\t\t\t\t1. Syeda Ravia Ejaz \t(20k-0246) "; Sleep(200);
	cout << "\n\n\t\t\t\t\t2. Ayesha Zia\t\t(20k-0414) \n\n\t\t\t\t\t3. Ahmed Ahsan\t\t(20k-0343)"; Sleep(200);
	cout << "\n\n\n\t\t\t\t***************************************************\n\n\n\t\t\t\t"; Sleep(200);
	cout << "\tLoAdInG ";
	Sleep(100); cout << "<"; Sleep(100); cout << ">"; Sleep(100); cout << "<"; Sleep(100); cout << ">"; Sleep(100); cout << "<"; Sleep(100);
	cout << ">"; Sleep(100); cout << "<"; Sleep(100); cout << ">"; Sleep(100); cout << "<"; Sleep(100); cout << ">"; Sleep(100); cout << "<";
	Sleep(100); cout << ">"; Sleep(100); cout << "<"; Sleep(100); cout << ">"; Sleep(100); cout << "<"; Sleep(100); cout << ">"; cout << "<";
	cout << ">"; cout << "\n\n\t SuCcEsSFuL\n"; Sleep(500); system("CLS");
	cout << "\n\n\n\n\n\t\t\t\t***********************************************\n\n";
	cout << "\t\t\t\t\t Welcome To RIDE HAILING SERVICE\n";
	cout << "\n\t\t\t\t***********************************************\n\n";
	cout << "\t\t\t\t\t->Enter 1 to enter as a DRIVER" << endl;
	cout << "\t\t\t\t\t->Enter 2 to enter as a PASSENGER" << endl;
	cout << "\t\t\t\t\t->Enter 3 to EXIT the program" << endl;
	cout << "\n\t\t\t\t  ->ENTER YOUR CHOICE : ";
	cin >> choice;
	cout << "\n\n\n\t\t\t\t***************************************************\n\n\n\t\t\t\t";
	Sleep(500);
	system("CLS");
	switch (choice) {
	case 1: {
		driver();
		break;
	}
	case 2: {
		passenger();
		break;
	}
	case 3: {
		exitscreen();
		break;
	}
	default: {
		exitscreen();
		break;
	}
	}
}
int main() {
	welcome();
	//	node* root = NULL;
	//	BinarySearchTree b1;
	//	string str = "PassengerCount.csv";
	//	system("PAUSE");
	//	system("CLS");
	//	root = read(str, b1);
	//	b1.inorder(root);
	//	l1.display();
}
