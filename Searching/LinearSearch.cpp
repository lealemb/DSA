#include<iostream>
using namespace std;
int LinearSearch(int List[], int key);

int main (){
	
	int List[]={12,22,33,44,55};
	int k=44;
	 int i= LinearSearch(List, k);
	 if(i==-1)
	 cout<<"The search item is not found!"<<endl;
	 else
	 cout<<" The search item is found at postion: "<<i<<endl;

	
	
	return 0;
}

int LinearSearch(int List[], int key){
	int index=-1;
	 for(int i=0; i<5; i++){
	 	if(List[i]==key){
	 		index=i;
	 		break;
		 }
		
	 }
	 return index;
}
