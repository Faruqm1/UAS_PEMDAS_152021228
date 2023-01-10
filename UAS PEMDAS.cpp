#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
   float Data1[300];
   float Data2[300];
   float n, sumX, sumY, sumXY, sumXX, sumYY;
   float ra,rb ;
   int i, ulang;
   string korelasi,hubungan;
   cout << " " << endl;
   cout << "Nama  : Faruq Muhammad" << endl;
   cout << "NRP   : 15-2021-228" << endl;
   cout << "Kelas : EE" << endl;
   cout << "-------------------------------" << endl;    
   cout << " " << endl;
   cout << "Program menghitung nilai korelasi pearson"<< endl;
   cout << " " << endl;
 
   sumX = 0, sumY = 0, sumXY = 0, sumXX = 0, sumYY = 0;
   cout << endl;
   cout << "Masukkan banyak data yang ingin Anda di imput : " ;
   cin >> n ;
   cout << endl ;
 
 for (i = 0 ; i < n ; i++)
  {
   cout << "Masukkan nilai X ke " << i+1 << " : " ;
   cin >> Data1[i];
   cout << "Masukkan nilai Y ke " << i+1 << " : " ;
   cin >> Data2[i];
   cout << endl;
  } 
 cout << endl;
 

  for (i=0 ; i<n ; i++)
   sumXY=sumXY+(Data1[i]*Data2[i]);


  for (i = 0 ; i<n ; i++)
   {
   sumX=sumX+Data1[i];
   sumY=sumY+Data2[i];
   }
   cout << "Total jumlah X dan jumlah Y : " << sumX << endl;
   cout << "Total jumlah X dan jumlah Y : " << sumY << endl;
   cout << " " << endl;


  for (i=0 ; i<n ; i++)
	sumXX = sumXX+(Data1[i]*Data1[i]);
   cout << "Total X Kuadrat : " << sumXX << endl;

  for (i=0 ; i<n ; i++)
	sumYY=sumYY+(Data2[i]*Data2[i]);
   cout << "Total Y Kuadrat : " << sumXX << endl;
   cout << " " << endl;
  
//rumus
	float nXY= n*sumXY;
	float XY= sumX*sumY;
	float atas= nXY-XY;
	float nXX= n*sumXX;
  	float kdrt= 2;
	float sqrtX= pow(sumX,kdrt);
	float rootX= sqrt(nXX-sqrtX);
	float nYY= n*sumYY;
	float sqrtY= pow(sumY,kdrt);
	float rootY= sqrt(nYY-sqrtY);
	float bawah= rootX*rootY;  
	float Hasil= atas/bawah;
   
 cout << "Nilai Korelasi pearsonnya adalah = " << Hasil << setiosflags(ios::showpos) << "" << endl;

if (Hasil>0.70){
		korelasi="Hubungan korelasi sangat kuat";
	}
	else if (Hasil>=0.50){
		korelasi="Hubungan korelasi sedang";
	}
	else if (Hasil>=0.30){
		korelasi="Hubungan korelasi moderat";
	}
	else if (Hasil>=0.10){
		korelasi="Hubungan korelasi rendah";
	}
	else if (Hasil<0.10) {
		korelasi="Hubungan korelasi diabaikan";
	}
	cout<< korelasi<<endl;
	if (Hasil>0){
		hubungan="Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah begitu juga sebaliknya";

	}
	else if(Hasil<0){
		hubungan="Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil begitu juga sebaliknya";
	}
	else if (Hasil=0){
		hubungan="Tidak ada hubungan antara variable x dan y";
	}
	cout<<hubungan<<endl;

 return 0;
}