/*Write a class House which has the following data and functions : (you may add other function members to help you with the program) 
1. Name of the house (Data)
2. Address 
3. Rooms 
4. Setup  // Asks for entry of data to house)
5. Display // Displays the details of house - Name, Address, Rooms, Total area of the house (Sum of rooms), Also displays like "3 Bedroom, 1 Kitchen and 2 Bathroom. " - This should use the displays of the address and room class.
6. CopyHouse  // Takes input as a name and a another object of house as input and and copies all the details of the house except the name

Address itself is a class; which stores the following data and functions
1. House Number (CString)
2. City (Cstring)
3. Zipcode (Number)
4. Setup // Asks the user to enter data for address and sets the address
5. Display // Displays the address 

Room also is a class, which store the following data and functions
1. Length
2. Breadth
3. Height 
4. Purpose // Cstring to store "Kitchen, Bathroom, Bedroom etc"
5. Setup // Asks the user to enter data for rooms and sets the room*/


#include <iostream>
using namespace std;
class address 
	{
		char house_numb, city;
		int zipcoad;
		public:
		void set_house_num(char num);
		void set_city(char city_name);
		void set_zipcoad(int code);
		char get_address(void);
	};
void address:: set_house_num(char num)
	{
		house_numb = num;
	}
void address:: set_city(char city_name)
	{
		city = city_name;
	}
void address:: set_zipcoad(int code)
	{
		zipcoad = code;
	}
address * address:: get_adderess()
	{
		return this;
	}
	
class room
	{
		int length, breadth,  hight;
		char purpose;
		public:
		void set_length(int len);
		void set_breadth(int bre);
		void set_hight(int hie);
		void set_purpose(char type);
		int get_length(void);
		int get_breadth(void);
		int get_hight(void);
		char get_purpose(void);
		
	};
void room:: set_length(int len)
	{
		cout<< "Enter lenth of room";
		cin>> len; 
		length = len;
	}
void room:: set_breadth(int bre)
	{
		cout<< "Enter breadth of room";
		cin>> bre;
		breadth = bre;
	}
void room:: set_hight(int hie)
	{
		cout<< "Enter the hight of room";
		cin>> hie;
		hight = hie;
	}
void room:: set_purpose(char type)
	{
		cout<< "Enter the types and number types of room like 2 beadroom and 1 kitchen";
		cin>> type;
		purpose = type;
	}
int room:: get_length(void)
	{
		return length;
	}
int room:: get_breadth(void)
	{
		return breagth;
	}
int room:: get_hight(void)
	{
		return hight;
	}
char room:: get_purpose(void)
	{
		return purpose;
	}
			
class house
	{
		room r1;
		address a1;
		char name;
		public: 
		void set_house_room(void)
		{
			int l, b, h;
			r1.set_length(l);
			r1.set_breadth(b);
			r1.set_height(h);
			char type;
			r1.set_purpose(type);
		}
		void set_name(char naam)
		{
			name = naam;
		}
		void set_house_address(void)
		{
			a1.set_house_num(numb);
			a1.set_city(city);
			a1.set_zipcoad(zip);
		}
	};	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
