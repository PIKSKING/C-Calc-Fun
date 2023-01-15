#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int CHS;
	do{
	cout <<"Hello User What Type Of Calculation Do You Want To Do ?"<<endl;
	cout <<"1.Area"<< endl<<"2.Square Root"<< endl<<"3.Volume"<< endl<<"4.Perimeter"<< endl<<"- - - - - - - "<< endl<<"5.Exit"<< endl;
	cin >> CHS;
	if(CHS == 1){
		int Shape;
		cout<<"Select Your Wanted Shape:"<<endl<<"1.Circle"<<endl<<"2.Square"<<endl<<"3.Rectangle"<<endl<<"4.Triangle"<<endl;
        cin >> Shape;
                if(Shape ==1){
        	int rad;
        	cout<<"Enter Radius:"<<endl;
        	cin >> rad;
        	cout<<"The Area Of The Circle Is : "<<rad*rad*3.14<<endl;
		}
		        if(Shape ==2){
        	int leng;
        	cout<<"Enter Length:"<<endl;
        	cin >> leng;
        	cout<<"The Area Of The Square Is : "<<leng*leng<<endl;
		}
		        if(Shape ==3){
        	int Leng;
        	int With;
        	cout<<"Enter Length:"<<endl;
        	cin >> Leng;
        	cout<<"Enter Width:"<<endl;
        	cin >> With;
        	cout<<"The Area Of The Rectangle Is : "<<Leng*With<<endl;
		}
		        if(Shape ==4){
        	int base;
        	int height;
        	cout<<"Enter The Base:"<<endl;
        	cin >> base;
        	cout<<"Enter The Height:"<<endl;
        	cin >> height;
        	cout<<"The Area Of The Triangle Is : "<<(base*height)/2<<endl;
		}
	};
	if(CHS == 2){
		int srt;
	cout<<"Enter A Number :"<<endl;
	cin >> srt;
	cout<<"The Square Root of "<<srt<<" Is : "<<sqrt(srt)<<endl;
	};
	if(CHS == 3){
		int Shape;
		cout<<"Select Your Wanted Shape:"<<endl<<"1.Sphere"<<endl<<"2.Cylinder"<<endl;
        cin >> Shape;
                if(Shape ==1){
        	int rad;
        	cout<<"Enter Radius:"<<endl;
        	cin >> rad;
        	cout<<"The Volume Of The Sphere Is : "<<4/3*rad*rad*rad*3.14<<endl;
		}
		        if(Shape ==2){
        	int rad;
        	cout<<"Enter Radius:"<<endl;
        	cin >> rad;
        	int height;
        	cout<<"Enter Height:"<<endl;
        	cin >>height;
        	cout<<"The Volume Of The Cylinder Is : "<<rad*rad*3.14*height<<endl;
		}
	};
	if(CHS == 4){
		int Shape;
		cout<<"Select Your Wanted Shape:"<<endl<<"1.Circle"<<endl<<"2.Square"<<endl<<"3.Rectangle"<<endl<<"4.Triangle"<<endl;
        cin >> Shape;
                if(Shape ==1){
        	int rad;
        	cout<<"Enter Radius:"<<endl;
        	cin >> rad;
        	cout<<"The Perimeter Of The Circle Is : "<<2*rad*3.14<<endl;
		}
		        if(Shape ==2){
        	int leng;
        	cout<<"Enter Length:"<<endl;
        	cin >> leng;
        	cout<<"The Perimeter Of The Square Is : "<<4*leng<<endl;
		}
		        if(Shape ==3){
        	int Leng;
        	int With;
        	cout<<"Enter Length:"<<endl;
        	cin >> Leng;
        	cout<<"Enter Width:"<<endl;
        	cin >> With;
        	cout<<"The Perimeter Of The Rectangle Is : "<<(Leng+With)*2<<endl;
		}
		        if(Shape ==4){
        	int base;
        	int height;
        	cout<<"Enter The Base:"<<endl;
        	cin >> base;
        	cout<<"The Perimeter Of The Triangle Is : "<<base*3<<endl;
		}
	};   
	if(CHS > 5){
		cout <<"Wrong Input!" << endl;
	};
	cout<<endl;
	}while(CHS !=5);
	return 0;
}
