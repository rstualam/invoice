#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"*********DAFTAR MENU MAKANAN & MINUMAN MPO SRI***********"<<endl;
    cout<<"1. Seblak			 Rp. 12000"<<endl;
    cout<<"2. Kwetiaw	                 Rp. 10000"<<endl;
    cout<<"3. Maklor			 Rp. 6000"<<endl;
    cout<<"4. Pop Ice			 Rp. 3000"<<endl;
    cout<<"5. Teajus                        Rp. 2000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=5){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Seblak     ";                  harga[i]=12000; break;
		    		case 2 : menu[i]="Kwetiaw    ";        harga[i]=15000; break;
		    		case 3 : menu[i]="Maklor  ";                harga[i]=6000; break;
		    		case 4 : menu[i]="Pop ice ";                harga[i]=3000; break;
		    		case 5 : menu[i]="Teajus   ";                harga[i]=2000; break;

		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN SUKSES"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu 	Harga        Jumlah          Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	

}
