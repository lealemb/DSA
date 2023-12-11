#include<iostream>
using namespace std;
void InsertionSort(int List[],int n);
int List[]={12,3,5,7,22};
int n=5;
int main(){
	cout<<"The values before sort are: "<<endl;
	for(int i=0;i<5;i++)
	cout<<List[i]<<endl;
	
	InsertionSort(List,n);
	cout<<"The values after sorting are: "<<endl;
	
	for(int i=0; i<5;i++)
	cout<<List[i]<<" ";
	
	return 0;
}

void InsertionSort(int List[],int n){
	for(int i=1;i<n-1;i++){
		for(int j=i;j>=1;j--){
			if(List[j-1]>List[i]){
				int temp=List[j];
				List[j]=List[j-1];
				List[j-1]=temp;
			}else
			break;
		}
	}
	
}
