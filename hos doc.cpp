#include <iostream>//input output stream.
#include<string.h>
#include<iomanip>// used to construct table with proper width.
#include<cmath>//used to calculation pary
#include<cstdlib>//used for using setw which is for size of space
#include<stdio.h>

using namespace std;
//used to store data of hospital
template<typename T1,typename U1,typename V1>
struct Hospitals
{
T1 name_hos;
T1 service;
T1 name_doc;
V1 sex;
T1 specialst;
T1 schedule_doc;
T1 city_hos;
T1 kfleketema_hos;
U1 kebele_hos,wereda_hos;
T1 email_hos;;
T1 phone_hos;;
};


void hospital_information();
int main(){
    
    hospital_information();
    return 0;
}







void hospital_information()
{
Hospitals<string,int,char> Hos;
Hos.name_hos={"Birhanu centralized hospital"};
Hos.service={"\n - short-term hospitalization\n - emergency room services\n - general and specialty surgical services\n - x-ray radiology services \n - laboratory services\n - blood services."};
Hos.name_doc={"DR.Firdews Abrar"};
Hos.sex='f';
Hos.specialst={"General Doctor"};
Hos.schedule_doc={"(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};
Hos.city_hos={"Addiss Ababa"};
Hos.kfleketema_hos={"Kolfe Keranyo"};
Hos.wereda_hos=05;
Hos.kebele_hos=01;
Hos.email_hos={"birhanu_centrhos@gmail.com"};
Hos.phone_hos={"011-345-654"};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

cout<<"Name of Hospital: "<<Hos.name_hos<<endl;
cout<<"\n->Service that "<<Hos.name_hos<<" provide: "<<endl<<Hos.service<<endl;
cout<<"\n General information:"<<"\n ->President  Peter L. Slavin,\n-> Total certified beds  907\n-> Total employees (part- and full-time)  23,302\n-> Total operating revenue  $612 million"<<endl;
cout<<"\nPatient and surgical statistics: "<<"\n #Total inpatients  47,250\n #Average length of stay  5.82 days\n #Admissions to observe  7,978\n #Total surgical cases  36,701\n #Inpatient surgical cases  19,233\n #Ambulatory surgical cases  17,468"<<endl;
cout<<"\n General information:"<<"\n ->President  Peter L. Slavin,\n-> Total certified beds  907\n-> Total employees (part- and full-time)  23,302\n-> Total operating revenue  $612 million"<<endl;
cout<<"\nPatient and surgical statistics: "<<"\n #Total inpatients  47,250\n #Average length of stay  5.82 days\n #Admissions to observe  7,978\n #Total surgical cases  36,701\n #Inpatient surgical cases  19,233\n #Ambulatory surgical cases  17,468"<<endl;
cout<<"\nDoctors information in "<<Hos.name_hos<<endl;
cout<<"______________________________________________________"<<endl;

cout<<"\nDoctor's name: "<<Hos.name_doc<<"\nSex: "<<Hos.sex<<"\nSpeciality name: "<<Hos.specialst<<"\nSchedule: "<<Hos.schedule_doc;
cout<<"\n\n________Hospitals Address_____________"<<endl;
cout<<"\nHispitals city: "<<Hos.city_hos<<"\n"<<" KfleKetema: "<<Hos.kfleketema_hos<<endl;
cout<<"kebele: "<<Hos.kebele_hos<<"\n"<<" wereda: "<<Hos.wereda_hos<<endl;
cout<<"Hispitals  emailaddress: "<<Hos.email_hos<<"\n"<<" phone number: "<<Hos.phone_hos<<endl;
cout<<"......................................................"<<endl;
system("pause");
system("cls");
}
