#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the day code"<<endl;
	cin>>x;
	switch(x)
	{
		case 0: 
		cout<<"sunday";
		break;
		case 1:
		cout<<"monday";
		break;
		case 2:
		cout<<"tuesday";
		break;
        case 3:
	    cout<<"wednessday";
	    break;
	   	case 4:
		cout<<"thursday";
		break;
		case 5: 
		cout<<"friday";
		break;
		case 6:
		cout<<"saturday";
		break;
		default:
		cout<<"this day code doesnot exist";			
		}
}
