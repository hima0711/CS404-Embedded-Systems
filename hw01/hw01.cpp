#include <bits/stdc++.h>
using namespace std;

int main(){
		int index;
		cout<<"Please Enter the Size of Matrix you want to play with ---> "<<endl;
		cin>>index;
		char matrix[index][index];
		//cout<<"\t";
		for(int row=0;row<index;row++)
			cout<<row<<"    ";
		cout<<endl;
		for(int row=0;row<index;row++){
			cout<<row<<"    ";
		for(int col=0;col<index;col++){
			matrix[row][col] = ' ';
			cout<<matrix[row][col]<<"    ";
		}
		cout<<endl;
	}
	int row = 0;
	int col = 0;
	while(true){
		cout<<"##########################################################################"<<endl;
		char input;
		cout<<"Please Enter ---> \n s-to move down\n w-to move up\n a-to move left\n d- to move right\n q- to quit\n k-to clear screen(shake):\n";
		cin>>input;
		cout<<"##########################################################################"<<endl;
		if(input=='q' || input=='Q'){
			cout<<"***Bye***"<<endl;
			break;
		}
		else{
				if(input=='s' || input=='S'){
					matrix[col][row]='*';
					col = ((col+1)<index?(col+1):col);
					matrix[col][row]='>';
				}
				else if(input=='w' || input=='W'){
					matrix[col][row]='*';
					col = ((col-1)>=0?(col-1):col);
					matrix[col][row]='>';
				}
				else if(input=='a' || input=='A'){
					matrix[col][row]='*';
					row = ((row-1)>=0?(row-1):row);
					matrix[col][row]='>';
				}
				else if(input=='d' || input=='D'){
					matrix[col][row]='*';
					row = ((row+1)<index?(row+1):row);
					matrix[col][row]='>';
				}
				else if(input=='k' || input=='K'){
					row = 0;
					col = 0;
					for(row=0;row<index;row++){
					for(col=0;col<index;col++){
						matrix[row][col] = ' ';
					}
				}
			}
				else
				cout<<"Enter valid key"<<endl;
		}
		cout<<"    ";
		for(int i=0;i<index;i++)
			cout<<i<<"    ";
		cout<<endl;
		for(int i=0;i<index;i++)
		{
			cout<<i<<"    ";
			for(int j=0;j<index;j++)
			{
				cout<<matrix[i][j]<<"    ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}