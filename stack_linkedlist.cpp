#include <iostream>
using namespace std;

struct nStack{ 
	int data;
	nStack *next; 
};

nStack *head;

void init(){
	head = NULL; 
}

bool isEmpty(){
	return head == NULL; 
}

bool lanjut(){
	if(isEmpty() == 0){
		return 0;
	}
		else {
		nStack *bantu;
		bantu = head;
		while (bantu != NULL){
			bantu = bantu->next;
		}
	}
}

class MyStack{
    public:
      int getTop(){
    	return head->data;
	  }
    void push(int databaru){
		  nStack *baru;
  		baru = new nStack;
  		baru->data = databaru;
  		baru->next = NULL;
  		if(isEmpty() != 0){	
  			baru->next = head;
  			head = baru;
  		}
		  	else if(isEmpty() == 0){
		  	baru->next = head;
	  		head = baru;
		  }
		  cout << "\n                      NILAI "<<getTop() << " BERHASIL DI PUSH" << endl;
	  }
    void pop(){
    	nStack *hapus;
	  	int d;
	  	hapus = head;
	  	d = getTop();
	  	head = head->next;
	  	cout <<"                              => " << d << " TELAH DI POP \n";
     }
};

void printStackList(){
   	nStack *bantu;
		bantu = head;
		cout << "                                    ISI STACK : " << endl;
		if (bantu == NULL){
	  		cout << "                                   STACK KOSONG" << endl << endl;
	  		cout << "           ------------------------------------------------------------" << endl;
		} else{
		bantu = head;
		while(bantu != NULL){
				cout<<"\n                                |	"<<bantu->data<<"	|" << endl;
				bantu = bantu->next;
			}
			cout << endl;
			cout << "           ------------------------------------------------------------" << endl;
		}
} 


int main(){
    char pilih;
    int data,x;
    MyStack s;
    do{
      	system("cls");
      	cout << "                        ===================================" << endl;
      	cout << "                        NAMA : ALFA SEAN KALAPADANG LONTENG" << endl;
      	cout << "                        NIM  : 20101106067" << endl;
      	cout << "                        ===================================" << endl;
      	cout << "\n           ============================================================" << endl;
      	cout << "           ||                         PROGRAM                        ||" << endl;
      	cout << "	   ||	             STACK DENGAN LINKED LIST                ||" << endl;
      	cout << "           ============================================================" << endl;
      	
      	printStackList();
		cout << "                              ========|MENU|======== " << endl;
		cout << "                              ======================" << endl;
		cout << "                              ||  1. PUSH STACK   ||" << endl;
		cout << "                              ||  2. POP STACK    ||" << endl;
		cout << "                              ||  3. KELUAR       ||" << endl;
		cout << "                              ======================" << endl;
		cout << "                              => PILIH MENU : ";
      	cin >> pilih;

      	switch(pilih){
      		case '1' :
      			if(lanjut() == 0){
      				cout <<"\n                   MASUKKAN BANYAKNYA DATA YANG INGIN DI PUSH : ";
       		        cin >>x;
       			    for(int i=0;i<x;i++){
          	          cout<<"\n                   => MASUKKAN NILAI KE "<<i+1<<" : ";
                      cin>>data;
            		s.push(data);
            		}  
            	}
				break;
      		case '2' :
      			if (isEmpty() == 0){
      				cout<<"                     MASUKKAN BANYAKNYA DATA YANG INGIN DI POP : ";
                    cin>>x;
                    for(int i=0;i<x;i++){
				  	s.pop();
				  }
      			}
      			else
      				cout << "                              => STACK MASIH KOSONG!!!" << endl;
            		break;
      		case '3' :
      			exit(0);
            		break;
      		default :
            		cout<<"                          PILIHAN MENU TIDAK TERSEDIA!!!"<< endl;
      	}
      	system ("pause");
    }
	while(true);
	return 0;
}

