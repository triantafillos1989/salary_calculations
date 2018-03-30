#include <iostream>

using namespace std;
const double max_WorkHours = 40; //το ανώτατο ώριο εργασίας την εβδομάδα σε ώρες
const double Multiplier = 1.7; // Ο συντελεστή Βαρύτητας

int main()
{
   double WorkHours; //Δήλωση των μεταβλητών, ώρες εργασίας και ημερομίσθιο
   double PaymentRate;

   // ζητάμε από τον χρήστη εισαγωγή από το πληκρολόγιο ώρες εργασιας
   cout << "Please Give us Your Total Working Hours:  [xx.yy]: ";
   cin >> WorkHours;

   //εισαγωγή του ωρομισθίου
   cout << "Now, Please Enter A Hourly Payment Rate: [xx.yy] ";
   cin >> PaymentRate;

   double yourSalary; //Μεταβλητή που αποθηκέυει το αποτέλεσμα της μέτρησης

   //αν οι ώρες εργασίας είναι μέσα στο διάστημα του ανώτερου ωραρίου
   if(WorkHours < max_WorkHours)
   {
       yourSalary = WorkHours * PaymentRate; //ο μισθός είναι οι ώρες εργασίας επί το ωρομίσθιο
   }else{
       //αλλιώς ο μισθός υπολογίζεται ώς οι ώρες εργασίας επι το ημερομίσθιο σύν τις παραπάνω ώρες εργασίας επί το ημερομίσθιο.
        yourSalary = max_WorkHours * PaymentRate + (WorkHours - max_WorkHours) * Multiplier * PaymentRate;

   }

   //Τυπώνει το αποτέλεσμα, ώρες εργασίας, ημερομίσθιο και ο μισθός!
   cout <<"The Number of Hours Worked is: " << WorkHours << endl;
   cout <<"The Payment Rate is: " << PaymentRate << endl;
   cout <<"The Salary you' ve Erned: " << yourSalary << endl;


    return 0;
}
