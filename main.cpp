#include <iostream>

using namespace std;
const double max_WorkHours = 40; //�� ������� ���� �������� ��� �������� �� ����
const double Multiplier = 1.7; // � ���������� ���������

int main()
{
   double WorkHours; //������ ��� ����������, ���� �������� ��� �����������
   double PaymentRate;

   // ������ ��� ��� ������ �������� ��� �� ����������� ���� ��������
   cout << "Please Give us Your Total Working Hours:  [xx.yy]: ";
   cin >> WorkHours;

   //�������� ��� ����������
   cout << "Now, Please Enter A Hourly Payment Rate: [xx.yy] ";
   cin >> PaymentRate;

   double yourSalary; //��������� ��� ���������� �� ���������� ��� ��������

   //�� �� ���� �������� ����� ���� ��� �������� ��� �������� �������
   if(WorkHours < max_WorkHours)
   {
       yourSalary = WorkHours * PaymentRate; //� ������ ����� �� ���� �������� ��� �� ���������
   }else{
       //������ � ������ ������������ �� �� ���� �������� ��� �� ����������� ��� ��� �������� ���� �������� ��� �� �����������.
        yourSalary = max_WorkHours * PaymentRate + (WorkHours - max_WorkHours) * Multiplier * PaymentRate;

   }

   //������� �� ����������, ���� ��������, ����������� ��� � ������!
   cout <<"The Number of Hours Worked is: " << WorkHours << endl;
   cout <<"The Payment Rate is: " << PaymentRate << endl;
   cout <<"The Salary you' ve Erned: " << yourSalary << endl;


    return 0;
}
