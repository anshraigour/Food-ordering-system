#include<iostream>  
#include<conio.h>
using namespace std;
int main()
{
	char name[30], pizza1[]="Peri Peri Pizza",pizza2[]="Margherita Pizza", pizza3[]="Chesse N Corn Pizza",pizza4[]="Farm House Pizza",pizza5[]="Veggie Paradise Pizza",
	bur1[]="Crispy Masala Burger",bur2[]="Chesse Burger",bur3[]="Double Decker Burger",
	sand1[]="Veg Grilled Sandwich",sand2[]="Club Sandwich",sand3[]="Chesse Sandwich",
	pas1[]="Red Sauce Pasta",pas2[]="White Sauce Pasta",pas3[]="Pink Sauce Pasta",
	roll1[]="Veg Roll",roll2[]="Egg Roll",roll3[]="Chicken Roll",gotostart;
	int choice=0,pchoice,pchoice1,quantity;
    begin:
	system("CLS");
	cout<<"\t\t\t*********Delicious Fast Food*********\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name,20);
	cout<<"Hello"<<name<<"\n\n What would you like to order?\n\n";
	cout<<"\t\t\t*********Menu*********\n\n";
	cout<<"1)Pizza\n";
	cout<<"2)Burger\n";
	cout<<"3)Sandwich\n";
	cout<<"4)Rolls\n";
	cout<<"5)Pasta\n";
	cout<<"\n Please Enter Your Choice: ";
	cin>> choice;
	
	if(choice==1)
	{
		cout<<"\n1)"<<pizza1<<"\n";
		cout<<"2)"<<pizza2<<"\n";
		cout<<"3)"<<pizza3<<"\n";
		cout<<"4)"<<pizza4<<"\n";
		cout<<"5)"<<pizza5<<"\n";
		
		cout<<"\n Please Enter which Pizza would you like to have ? ";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs 250\n"<<"2) Regular Rs 500\n"<<"3) Large Rs 900\n";
			cout<<"\n Choose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n Please Enter Quantity:";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice=250*quantity;
					break;
				case 2:
					choice=500*quantity;
				    break;
				case 3:
					choice=900*quantity;
					break;
			}
			system("CLS");
			switch(pchoice1)
			{
				case 1:
					cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pizza1;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
			        break;
			    case 2:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pizza2;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		         case 3:
				     cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pizza3;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break; 
			    case 4:
			    	cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pizza4;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		        case 5:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pizza5;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;    
				}
				cout<<"Would you like to order anything else? Y/N:";
		        cin>>gotostart;
		         if(gotostart=='Y' || gotostart=='y')
		       { goto begin;
				}
	}
}
	else if(choice==2)
	{
	    cout<<"\n1)"<<bur1<<"Rs 180"<<"\n";
		cout<<"2)"<<bur2<<"Rs 150"<<"\n";
		cout<<"3)"<<bur3<<"Rs 160"<<"\n";
	cout<<"\n Please Enter which Burger would you like to have ? ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n Please Enter Quantity:";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice=180*quantity;
					break;
				case 2:
					choice=150*quantity;
				    break;
				case 3:
					choice=160*quantity;
					break;
			}
			system("CLS");
			switch(pchoice1)
			{
				case 1:
					cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<bur1;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
			        break;
			    case 2:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<bur2;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		         case 3:
				     cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<bur3;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break; 	}
		            cout<<"Would you like to order anything else?\n Y/N:";
		        //cin>> gotostart;
		      //  if(gotostart=='Y' || gotostart=='y')
		       // { goto begin;
			//	}
}
	else if(choice==3)
	{
	    cout<<"\n1)"<<sand1<<"Rs 240"<<"\n";
		cout<<"2)"<<sand2<<"Rs 180"<<"\n";
		cout<<"3)"<<sand3<<"Rs 160"<<"\n";
	cout<<"\n Please Enter which Sandwich would you like to have ? ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n Please Enter Quantity:";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice=240*quantity;
					break;
				case 2:
					choice=180*quantity;
				    break;
				case 3:
					choice=160*quantity;
					break;
			}
			system("CLS");
			switch(pchoice1)
			{
				case 1:
					cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<sand1;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
			        break;
			    case 2:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<sand2;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		         case 3:
				     cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<sand3;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break; 	}
		            cout<<"Would you like to order anything else?\n Y/N:";
		            cin>>gotostart;
		       if(gotostart=='Y' || gotostart=='y')
		        { goto begin;
				}
				
}	else if(choice==4)
	{
	    cout<<"\n1)"<<roll1<<"Rs 100"<<"\n";
		cout<<"2)"<<roll2<<"Rs 150"<<"\n";
		cout<<"3)"<<roll3<<"Rs 180"<<"\n";
	cout<<"\n Please Enter which Roll would you like to have ? ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n Please Enter Quantity:";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice=100*quantity;
					break;
				case 2:
					choice=150*quantity;
				    break;
				case 3:
					choice=180*quantity;
					break;
			}
			system("CLS");
			switch(pchoice1)
			{
				case 1:
					cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<roll1;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
			        break;
			    case 2:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<roll2;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		         case 3:
				     cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<roll3;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break; 	}
		            cout<<"Would you like to order anything else?\n Y/N:";
		        cin>>gotostart;
		       if(gotostart=='Y' || gotostart=='y')
		        { goto begin;
				}
}	else if(choice==5)
	{
	    cout<<"\n1)"<<bur1<<"Rs 180"<<"\n";
		cout<<"2)"<<bur2<<"Rs 250"<<"\n";
		cout<<"3)"<<bur3<<"Rs 190"<<"\n";
	cout<<"\n Please Enter which Pasta would you like to have ? ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n Please Enter Quantity:";
			cin>>quantity;
			switch(pchoice1)
			{
				case 1:
					choice=180*quantity;
					break;
				case 2:
					choice=250*quantity;
				    break;
				case 3:
					choice=190*quantity;
					break;
			}
			system("CLS");
			switch(pchoice1)
			{
				case 1:
					cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pas1;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
			        break;
			    case 2:
				    cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pas2;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break;
		         case 3:
				     cout<<"\t\t\t*********Your Order**********\n";
					cout<<" "<<quantity<<" "<<pas3;
					cout<<"\n Your Total Bill "<< choice<<"\n Your Order will be Delivered Soon";
					cout<<"\nThank You For Ordering From Delicious Fast Food\n";
		            break; 	}
		            cout<<"Would you like to order anything else?\n Y/N:";
		            cin>>gotostart;
		        if(gotostart=='Y' || gotostart=='y')
		        { goto begin;
				}
}	 else {
	 	system("CLS");
	 	cout<<"Please select right option: \n";
	 	cout<<"Would you like to start the program again? Y/N: ";
	 	cin>>gotostart;
	 	if(gotostart=='Y' || gotostart=='y')
		        { goto begin;
				}
	 	
	   
		}
	

	getch();

} 
