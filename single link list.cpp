#include <conio.h>
#include <iostream>
#include<cstdlib>
using namespace std;

struct TNode {
	int data;
	TNode *next;
	};
TNode *head;

void init() {
	head=NULL;
	}
int isempty() {
	if(head==NULL)
	return 1;
	else return 0;
	}
void insertdepan (int databaru) {
	TNode *baru;
	baru= new TNode;
	baru->data =databaru;
	baru->next=NULL;
	if (isempty()==1) {
		head=baru;
		head->next=NULL;
	}
	else {
		baru->next=head;
		head=baru;
	}
	cout<<"Data telah masuk\n\n";
}
void tampil() {
	TNode *bantu;
	bantu=head;
	if(isempty()==0) {
		while (bantu!=NULL) {
			cout<<bantu->data<<" ";
			bantu=bantu->next;
		}
	cout<<endl;
	}
	else cout<<"Masih kosong\n";
}
void hapusdepan() {
	TNode *hapus;
	int d;
	if (isempty()==0) {
		if (head->next !=NULL) {
			hapus=head;
			d=hapus->data;
			head=head->next;
			delete hapus;
		}
		else {
		d=head->data;
		head=NULL;
		}
		cout<<d<<" terhapus\n";
	}
	else cout<<"masih kosong\n";
}
int main() {
	int pil;
	int databaru;
	do {
		cout<<"linked List"<<endl;
		cout<<"1.Insert Depan"<<endl;
		cout<<"2.Tampil"<<endl;
		cout<<"3.Hapus"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"pilihan anda= ";cin>>pil;
		switch(pil) {	
			case 1:
			cout<<endl;
			cout<<"data: ";cin>>databaru;
			insertdepan (databaru);
			break;		
			case 2:
			cout<<endl;
			tampil();
			break;
			case 3:
			cout<<endl;
			hapusdepan();
			break;
		}		
	} while (pil!=4);
}
