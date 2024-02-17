void oddeven(){
	node *temp=head;
	node *temp1=head;
	int count=0,count1=0;
	while(temp1!=NULL){
		temp1=temp1->next->next;
		count++;
	}
	while(temp!=NULL){
		temp=temp->next;
		count1++;
	}
	cout<<endl<<count<<endl<<count1;
}
