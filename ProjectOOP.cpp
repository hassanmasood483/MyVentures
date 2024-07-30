#include<iostream>
using namespace std;
//Management of Rent a Car System
class Management
{
protected:
	//Available Driver's Details Declaration 
    string drivername1 = "Ali", drivername2 = "Ahmed", drivername3 = "Fahad";
    int id1 = 25, id2 = 30, id3 = 35;
    int experience1 = 3, experience2 = 6, experience3 = 9;
public:
    //Home Page
	void frontpage()
    {
        cout << "===============================================================================" << endl;
        cout << "|                                                                             |" << endl;
        cout << "|                          WELCOME TO OUR RENTAL SYSTEM                       |" << endl;
        cout << "|                                                                             |" << endl;
        cout << "===============================================================================" << endl;
        system("Pause");

        cout << "\n\n      CREATED BY:           BSIT (E)" << endl << endl;
        cout << "                         Hassan Sheikh (0815)" << endl;
        cout << "                         Sajeel Sarwar (0845)" << endl;
        cout << "                         Areeba Hameed (0937)" << endl;

        system("Pause");
    }
    //Driver's Information
    void available_drivers()
    {
        cout << "We have the following finest drivers available" << endl;
    }
    void show_driver1_info()
    {
        cout << "Driver 1: " << endl;
        cout << "Name: " << drivername1 << endl;
        cout << "Id: " << id1 << endl;
        cout << "Experience: " << experience1 << " years" << endl;
    }
    void show_driver2_info()
    {
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "Driver 2: " << endl;
        cout << "Name: " << drivername2 << endl;
        cout << "Id: " << id2 << endl;
        cout << "Experience: " << experience2 << " years" << endl;
    }
    void show_driver3_info()
    {
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "Driver 3: " << endl;
        cout << "Name: " << drivername3 << endl;
        cout << "Id: " << id3 << endl;
        cout << "Experience: " << experience3 << " years" << endl;
        cout << "------------------------------------------------------------------------------" << endl;

    }
    //Supervisor's Details
    void supervisor_info()
    {

        cout << "The information about trip supervisor:" << endl;
        cout << "Name is: Fawad" << endl;
        cout << "Experience is: 12 years" << endl;
        cout << "Supervising trips knowing the best routes since 2010" << endl;
    }
};
//Driver Selection
class driver : public Management
{
public:
    int driver_id;
    Management obj8;
    void choose_driver()
    {

        cout << "Choose your Driver's id out of the above options: ";
        cin >> driver_id;
        switch (driver_id)
        {
        case 25:
            cout << "Driver no.1 is selected" << endl;
            break;

        case 30:
            cout << "Driver no.2 is selected" << endl;
            break;

        case 35:
            cout << "Driver no.3 is selected" << endl;
            break;
        default:
            cout << "Wrong option" << endl;
            cout << "Enter again:" << endl;
            cin >> driver_id;
        }
    }
};
//Customer's Detail
class Customer
{
public:
    string fcustomer, lcustomer;
    int customer_age;
    string gender;
    long long int cnic;
    long long int cell_number;

    void get_data()
    {
        cout << "Enter your full name: ";
        cin >> fcustomer >> lcustomer;
        cout << "Enter your age: ";
        cin >> customer_age;
        cout << "Enter your gender: ";
        cin >> gender;
        cout << "Enter your cnic: ";
        cin >> cnic;
        cout << "Enter your cell number: ";
        cin >> cell_number;
    }
    void set_data()
    {
        cout << "Your name is: " << fcustomer << lcustomer << endl;
        cout << "Your age is: " << customer_age << endl;
        cout << "Your gender is: " << gender << endl;
        cout << "Your cnic is: " << cnic << endl;
        cout << "Your cell number is: " << cell_number << endl;
    }
};
//Trip Details
class trip {
public:
    Customer custom1;
    int starting_date, ending_date;
    string starting_month, ending_month;
    int starting_year, ending_year;
    void dates()
    {
        cout << "Enter starting date of the trip in this format (DD MM YYYY): ";
        cin >> starting_date >> starting_month >> starting_year;
        cout << "Enter ending date of the trip in this format (DD MM YYYY): ";
        cin >> ending_date >> ending_month >> ending_year;
        custom1.get_data();

    }
};
class Car {

public:
    int Rdecision, Vdecision; //Plans available
    void regularchoose_car()  //Regular Plan
    {
        cout << "Our Regular Plan has the following categories:" << endl;
        cout << "Press 1 for Sedan" << endl;
        cout << "Press 2 for Truck" << endl;
        cout << "Press 3 for SUV" << endl;
        cout << "Press 4 for Hatchback" << endl;
        cin >> Rdecision;
        if (Rdecision == 1)
        {
            cout << "Sedan is selected category,we have the following ones available:" << endl;
            cout << "1) Honda Civic with a rent of 1000/day?" << endl;
            cout << "2) Hyundai Elantra with a rent of 2000/day?" << endl;
            cout << "3) Toyota Grande with a rent of 3000/day?" << endl;
        }
        if (Rdecision == 2)
        {
            cout << "Truck is the selected category,we have the following ones avaiable:" << endl;
            cout << "1) Box truck with a rent of 2000/day" << endl;
            cout << "2) Cab truck with a rent of 4000/day?" << endl;
            cout << "3) Flatbed truck with a rent of 6000/day?" << endl;
        }

        if (Rdecision == 3)
        {
            cout << "SUV is the selected category,we have the following ones avaiable:" << endl;
            cout << "1) Toyota Fortuner with a rent of 2500/day?" << endl;
            cout << "2) Prado TX with a rent of 5000/day?" << endl;
            cout << "3) Lexus LX 600 with a rent of 7000/day?" << endl;
        }

        if (Rdecision == 4)
        {
            cout << "Hatchback is the selected category,we have the following ones available:" << endl;
            cout << "1) KIA Sportage with a rent of 3000/day?" << endl;
            cout << "2) Hyundai Tucson with a rent of 6000/day?" << endl;
            cout << "3) MG HS with a rent of 8000/day?" << endl;
        }
    }

    void vipchoose_car()  //VIP Plan
    {
        cout << "Press 1 for Sedan" << endl;
        cout << "Press 2 for Truck" << endl;
        cout << "Press 3 for SUV" << endl;
        cout << "Press 4 for Hatchback" << endl;
        cout << "Our VIP Plan has luxury category as well" << endl;
        cout << "Press 5 for Luxury" << endl;
        cin >> Vdecision;
        if (Vdecision == 1)
        {
            cout << "Sedan is selected category,we have the following ones available:" << endl;
            cout << "1) Mark X with a rent of 10000/day?" << endl;
            cout << "2) Crown RS Turbo with a rent of 20000/day?" << endl;
            cout << "3) Mercedes Benz with a rent of 30000/day?" << endl;
        }
        if (Vdecision == 2)
        {
            cout << "Truck is the selected category,we have the following ones avaiable:" << endl;
            cout << "1) Box truck with a rent of 2000/day" << endl;
            cout << "2) Cab truck with a rent of 4000/day?" << endl;
            cout << "3) Flatbed truck with a rent of 6000/day?" << endl;
        }

        if (Vdecision == 3)
        {
            cout << "SUV is the selected category,we have the following ones avaiable:" << endl;
            cout << "1) Land Cruiser V8 with a rent of 25000/day?" << endl;
            cout << "2) Range Rover Auto-Biography with a rent of 50000/day?" << endl;
            cout << "3) GMC with a rent of 70000/day?" << endl;
        }

        if (Vdecision == 4)
        {
            cout << "Hatchback is the selected category,we have the following ones available:" << endl;
            cout << "1) KIA Sorento with a rent of 3000/day?" << endl;
            cout << "2) Raptor FORD with a rent of 6000/day?" << endl;
            cout << "3) Carnival with a rent of 8000/day?" << endl;
        }
        if (Vdecision == 5)
        {
            cout << "Luxury is the selected category,we have the following ones available:" << endl;
            cout << "1) BMW i8 with a rent of 40000/day " << endl;
            cout << "2) Lamborghini Aventador with a rent of 60000/day" << endl;
            cout << "3) Rolls Royce Ghost with a rent of 80000/day" << endl;
        }
    }

};
class Rent
{
protected:
    int Roption, Voption;
    int totalnumber_of_days;
    int per_day_rent;
};
class LuxuryRent :public Rent //Rent of Luxury Category
{
public:
    int total_rent;
    void CalcLuxuryRent()
    {
        cout << "Enter option of the Luxury Car to find rent: ";
        cin >> Voption;
        if (Voption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 40000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of BMW i8 is: " << total_rent;
        }
        if (Voption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 60000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Lamborghini Aventador is: " << total_rent;
            }
        }
        if (Voption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 80000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Rolls Royce Ghost is: " << total_rent;
            }
        }
    }
};
class VSedanRent :public Rent  //Rent of VIP Sedan Category 
{
public:
    int total_rent;
    void CalcRent()
    {
        cout << "Enter option of the Sedan Car to find rent: ";
        cin >> Voption;
        if (Voption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 10000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Mark X is: " << total_rent;
        }
        if (Voption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 20000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Crown RS Turbo is: " << total_rent;
            }
        }
        if (Voption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 30000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Mercedez Benz is: " << total_rent;
            }
        }
    }
};
class VTruckRent :public Rent  //Rent of VIP Truck Category
{
public:
    int total_rent;
    void CalcTruckRent()
    {
        cout << "Enter option of the Truck to find rent: ";
        cin >> Voption;
        if (Voption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 2000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Box Truck is: " << total_rent;
        }

        if (Voption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 4000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Cab Truck is: " << total_rent;
            }
        }
        if (Voption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 6000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Flatbed Truck is: " << total_rent;
            }

        }
    }
};
class VSUVRent :public Rent  //Rent of VIP SUV Category
{
public:
    int total_rent;
    void CalcSuvRent()
    {
        cout << "Enter option of the Suv to find rent: ";
        cin >> Voption;
        if (Voption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 25000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Land Cruiser V8 is: " << total_rent;
        }

        if (Voption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 50000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Range Rover Auto-Biography is: " << total_rent;
            }
        }
        if (Voption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 70000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of GMC is: " << total_rent;
            }

        }
    }
};
class VHatchbackRent :public Rent  //Rent of VIP Hatchback Category
{
public:
    int total_rent;
    void CalcHatchbackRent()
    {
        cout << "Enter option of the Hatchback to find rent: ";
        cin >> Voption;
        if (Voption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 3000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of KIA Sorento is: " << total_rent;
        }

        if (Voption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 6000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Raptor FORD is: " << total_rent;
            }
        }
        if (Voption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 8000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Carnival is: " << total_rent;
            }
        }
    }
};
class RSedanRent :public Rent  //Rent of Regular Sedan Category
{
public:
    int total_rent;
    void CalcRent()
    {
        cout << "Enter option of the Sedan Car to find rent: ";
        cin >> Roption;
        if (Roption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 1000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of civic is: " << total_rent;
        }
        if (Roption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 2000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of HyundaiElantra is: " << total_rent;
            }
        }
        if (Roption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            {   per_day_rent = 3000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Toyota Grande is: " << total_rent;
            }
        }
    }
};
class RTruckRent :public Rent  //Rent of Regular Truck Category
{
public:
    int total_rent;
    void CalcTruckRent()
    {
        cout << "Enter option of the Truck to find rent: ";
        cin >> Roption;
        if (Roption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 2000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Box Truck is: " << total_rent;
        }

        if (Roption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 4000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Cab Truck is: " << total_rent;
            }
        }
        if (Roption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 6000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Flatbed Truck is: " << total_rent;
            }

        }
    }
};
class RSUVRent :public Rent  //Rent of Regular SUV Category
{
public:
    int total_rent;
    void CalcSuvRent()
    {
        cout << "Enter option of the Suv to find rent: ";
        cin >> Roption;
        if (Roption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 2500;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Toyota Fortuner is: " << total_rent;
        }

        if (Roption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 5000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Prado TX is: " << total_rent;
            }
        }
        if (Roption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 7000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Lexus LX 600 is: " << total_rent;
            }

        }
    }
};
class RHatchbackRent :public Rent  //Rent of Regular Hatchback Category
{
public:
    int total_rent;
    void CalcHatchbackRent()
    {
        cout << "Enter option of the Hatchback to find rent: ";
        cin >> Roption;
        if (Roption == 1)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;

            per_day_rent = 3000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of KIA Sportage is: " << total_rent;
        }

        if (Roption == 2)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 6000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of Hyundai Tucson is: " << total_rent;
            }
        }
        if (Roption == 3)
        {
            cout << "Enter total number of days you want to rent it for: ";
            cin >> totalnumber_of_days;
            {   per_day_rent = 8000;
            total_rent = totalnumber_of_days * per_day_rent;
            cout << "Rent of MG HS is: " << total_rent;
            }
        }
    }
};

void start()
{
    int totalrent;
    driver obj1;	  //Object of Driver class created
    obj1.frontpage(); //Prints Front Page 
    system("cls");
    obj1.supervisor_info();  //Prints Supervisor Details
    system("Pause");
    system("cls");
    obj1.available_drivers();  //Print Drivers that are available
    obj1.show_driver1_info();  //Print Driver 1 details
    obj1.show_driver2_info();  //Print Driver 2 details
    obj1.show_driver3_info();  //Print Driver 3 details
    obj1.choose_driver();	   //Driver Selection
    system("Pause");
    system("cls");
    trip obj5;				   //Object of Trip class created
    obj5.dates();			   //Date function called
    int custplan; 			   //Plan Selection
    cout << "Choose Plan:" << endl;
    cout << "1) Regular" << endl;
    cout << "2) Vip" << endl;
    cin >> custplan;
    Car obj;

    if (custplan == 1)  //If Regular Plan is selected
        obj.regularchoose_car();
    switch (obj.Rdecision)
    {
    case 1:
        RSedanRent obj6; //Regular Sedan
        obj6.CalcRent();
        totalrent = obj6.total_rent;
        break;
    case 2:
        RTruckRent obj7; //Regular Truck
        obj7.CalcTruckRent();
        totalrent = obj7.total_rent;
        break;
    case 3:
        RSUVRent obj8; //Regular SUV
        obj8.CalcSuvRent();
        totalrent = obj8.total_rent;
        break;
    case 4:
        RHatchbackRent obj9; //Regular Hatchback
        obj9.CalcHatchbackRent();
        totalrent = obj9.total_rent;
        break;

    //default:
        //cout << "Wrong Option..." << endl;
    }
    if (custplan == 2) //If VIP Plan is selected
        obj.vipchoose_car();
    switch (obj.Vdecision)
    {
    case 1:
        VSedanRent obj10; //VIP Sedan
        obj10.CalcRent();
        totalrent = obj10.total_rent;
        break;
    case 2:
        VTruckRent obj11; //VIP Truck
        obj11.CalcTruckRent();
        totalrent = obj11.total_rent;
        break;
    case 3:
        VSUVRent obj12; //VIP SUV
        obj12.CalcSuvRent();
        totalrent = obj12.total_rent;
        break;
    case 4:
        VHatchbackRent obj13; //VIP Hatchback
        obj13.CalcHatchbackRent();
        totalrent = obj13.total_rent;
        break;
    case 5:
        LuxuryRent obj14; //VIP Luxury
        obj14.CalcLuxuryRent();
        totalrent = obj14.total_rent;

    //default:
        //cout << "Wrong Option..." << endl;

    }




    //RECIEPT

    cout << "\n\n===========================================================================" << endl;
    cout << "|                                                                         |" << endl;
    cout << "|                                  RECIEPT                                |" << endl;
    cout << "|                                                                         |" << endl;
    cout << "===========================================================================" << endl;
	//Showing Customer's Details
    cout << "\nCustomer Name= " << obj5.custom1.fcustomer << " " << obj5.custom1.lcustomer << endl;
    cout << "Age= " << obj5.custom1.customer_age << endl;
    cout << "Gender= " << obj5.custom1.gender << endl;
    cout << "CNIC= " << obj5.custom1.cnic << endl;
    cout << "Contact Number= " << obj5.custom1.cell_number << endl;
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    //Showing Trip Details
    cout << "\n                       Starting date= " << obj5.starting_date << "/" << obj5.starting_month << "/" << obj5.starting_year << endl;
    cout << "                         Ending date= " << obj5.ending_date << "/" << obj5.ending_month << "/" << obj5.ending_year << endl;
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    //Showing Driver's Information
    cout << "Driver's Information:" << endl;
    if (obj1.driver_id == 25)
        obj1.show_driver1_info();
    if (obj1.driver_id == 30)
        obj1.show_driver2_info();
    if (obj1.driver_id == 35)
        obj1.show_driver3_info();
    //Showing Category Selected     
    cout << "Vehicle Category: ";
    if (obj.Rdecision == 1)
        cout << "SEDAN";
    if (obj.Vdecision == 1)
        cout << " VIP SEDAN ";
    if (obj.Rdecision == 2)
        cout << "TRUCK";
    if (obj.Vdecision == 2)
        cout << " VIP TRUCK ";
    if (obj.Rdecision == 3)
        cout << "SUV";
    if (obj.Vdecision == 3)
        cout << " VIP SUV ";
    if (obj.Rdecision == 4)
        cout << "HATCHBACK";
    if (obj.Vdecision == 4)
        cout << " VIP HATCHBACK ";
    if (obj.Vdecision == 5)
        cout << "LUXURY";

	//Showing Rent
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Total Rent= " << totalrent << endl;

}

int main()
{
	//Trip Confirmation
    int choice;
    cout << "===============================================================================" << endl;
    cout << "|                                                                             |" << endl;
    cout << "|                          Press 1 to Continue the Trip                       |" << endl;
    cout << "|                                 Press 0 to Exit                             |" << endl;
    cout << "|                                                                             |" << endl;
    cout << "===============================================================================" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        start();

        break;
    case 0:
        cout << "Thank you";
        break;
    default:
        cout << "Invalid Command" << endl;
    }

}
