#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "No of Subjects : ";
    cin >> n;
    vector<int> Grade(n);
    vector<float> Credit(n);
    for(int i=0 ; i<n ; i++){
        cout << "Subject " << i+1 << ": " <<endl;
        cout << "Credit : ";
        cin >> Credit[i];
        cout << "Grade  : ";
        cin >> Grade[i];
        cout << endl;
    }
    float GradexCredit=0, TotalCredit=0;
    for(int i=0 ; i<n ; i++){
        GradexCredit = GradexCredit + (Grade[i]*Credit[i]);
        TotalCredit = TotalCredit + Credit[i];
    }
    float CGPA = float(GradexCredit)/TotalCredit;
    cout << "Your CGPA : " <<CGPA ;
    return 0;
}