#include<iostream>
using namespace std;
	void accept(int *,int);
	void display(int *,int);
	void insertionsort(int *,int);
int main()
{

	int arrsize,c;
	cout<<"\n Enter the number of elements:";
    cin>>arrsize;
    int arr[arrsize];
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Accept \n 2.Display \n 3.Insertion sort. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{

				accept(arr,arrsize);
				break;
				}
			case 2:{
				display(arr,arrsize);
				break;
				}
			case 3:{
				insertionsort(arr,arrsize);
				break;
				}

			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<4 && c>0);
	return 0;
}

	void accept(int *arr,int arrsize)
	{
		for(int i=0;i<arrsize;i++)
        {
            cout<<"\n enter the element at position "<<i+1<<":";
            cin>>arr[i];
        }

	}

	void display(int *arr,int arrsize)
		{
			for(int i=0;i<arrsize;i++)
			{
				cout<<arr[i]<<" ";
			}
		}

void insertionsort(int *arr,int arrsize){
    int temp,to_be_inserted,j;
		for(int i=1;i<arrsize;i++)
        {
            cout<<"pass "<<i<<"=>";
            to_be_inserted=arr[i];
            j=i;
            while(to_be_inserted<arr[j-1]&&j>0)
            {
                arr[j]=arr[j-1];
                j--;
            }
            arr[j]=to_be_inserted;
            display(arr,arrsize);
            cout<<"\n";
        }



}

