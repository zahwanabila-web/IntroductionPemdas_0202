#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    retrun (a+b)/2;
}

string status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float niLBI,niLMT,rerata;
    string status;

    cout <<"Masukkan nilai Bahasa Inggris = ";
    cin >> niLBI;
    cout <<"Masukkan nilai matematika = ";
    cin >> niLMT;

    //rerata = (niLBI+niLMT)/2;
    //if (rerata >= 69)
    //    status = "lolos";
    //else
      // status = "gagal";
      rerata = Rata_rata(niLBI,niLMT);
      //status = Status_Lulus(rerata);

      cout << "Status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata ="<<rerata<<endl; 
}