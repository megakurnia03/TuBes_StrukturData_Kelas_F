#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int i,j,pil,pil2,jum,wadah,ada,hapus, ke;
char keluar;
char wadah2[25];
char cari[25];
char nama[25][25];
int nomor[25];
int nilai[25];
int umur[25];
int caridata[25];


void tampil()
      	{
         	cout<<"  -------------------------------------------------------- "<<endl;
         	cout<<" | INDEK    NAMA    \t\tNOMOR    NILAI    UMUR    |"<<endl;
            cout<<"  -------------------------------------------------------- "<<endl;
      		for (i=0;i<jum;i++)
      		{
      		cout<<"     "<<i+1<<"      "<<nama[i]<<"       "<<nomor[i]<<"\t\t       "<<nilai[i]<<"       "<<umur[i]<<endl;
      		}
            cout<<"  -------------------------------------------- "<<endl;
     	   }

void judul()
   {
   cout<<endl;
   cout<<"  -------------------------------------------- "<<endl;
   cout<<" |             PROGRAM DATA NILAI             | "<<endl;
   cout<<" |      SISWA-SISWI KELAS 3 SDN 1 SLEMAN      |  "<<endl;
   cout<<"  -------------------------------------------- "<<endl;
   cout<<endl;
   }

int main ()
{
   jum=0;
   awal:
   system("cls");
   judul();
   cout<<"  -------------------------------------------- "<<endl;
   cout<<" | Menu Pilihan                               | "<<endl;
   cout<<" | 1. Lihat Data Siswa                        | "<<endl;
   cout<<" | 2. Masukan Data Baru                       | "<<endl;
   cout<<" | 3. Urutkan Data                            | "<<endl;
   cout<<" | 4. Cari Data                               | "<<endl;
   cout<<" | 5. Hapus Data                              | "<<endl;
   cout<<" | 0. Keluar                                  | "<<endl;
   cout<<"  -------------------------------------------- "<<endl;
   cout<<"   Pilihan = ";cin>>pil;

   switch (pil)
   {
   case 1:
         {
         system("cls");
         judul();
         cout<<"  -------------------------------------------- "<<endl;
      	cout<<" |              DATA SISWA SISWI              |"<<endl;
         cout<<"  -------------------------------------------- "<<endl;
      	if (jum==0)
      	{
         	cout<<"  -------------------------------------------- "<<endl;
      		cout<<" | Data Siswa-Siswi Kosong                    |"<<endl;
            cout<<"  -------------------------------------------- "<<endl;
            cout<<endl;
            cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
            getch();
            goto awal;
      	}
      	else
      	{
				tampil();
     	   }
         cout<<endl;
         cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
         getch();
         goto awal;
         }
         break;

   case 2:
   {
   	system("cls");
      judul();
      cout<<"  -------------------------------------------- "<<endl;
   	cout<<"   Jumlah Data Yang Ditambahkan = ";cin>>jum;
      cout<<"  -------------------------------------------- "<<endl;
   	for (i=0;i<jum;i++)
   	{
      	ulang:
        system("cls");
        judul();
        cout<<"   NB: Umur Tidak Boleh Lebih dari 8 tahun     "<<endl;
        cout<<"  -------------------------------------------- "<<endl;
      	cout<<"   Data Ke "<<i+1<<endl;
        cout<<"  -------------------------------------------- "<<endl;
   		cout<<"   Nama  = ";
   		cin.ignore();
   		gets(nama[i]);
      	cout<<"   Nomor = ";cin>>nomor[i];
      	cout<<"   Nilai = ";cin>>nilai[i];
      	cout<<"   Umur  = ";cin>>umur[i];
         if (umur[i]>8)
         {
            cout<<endl;
          	cout<<"   Umur Yang Anda Masukan Lebih Dari 8 Tahun "<<endl;
            cout<<"   Silahkan Ulangi Data Ke "<<i+1<<" Tersebut "<<endl;
            getch();
            goto ulang;
         }
   	}
      cout<<"  -------------------------------------------- "<<endl;
      cout<<" | "<<jum<<" Data Berhasil Ditambahkan                | "<<endl;
      cout<<"  -------------------------------------------- "<<endl;
      cout<<"   Tekan Enter Untuk Kembali ke Menu Awal "<<endl;
      getch();
      goto awal;
   }
   break;

    case 3:
    {
    	lagi:
    	system("cls");
    	judul();
      cout<<" 1. Urutkan Berdasarkan Nilai Tertinggi "<<endl;
      cout<<" 2. Urutkan Berdasarkan Nilai Terendah "<<endl;
      cout<<" 3. Urutkan Berdasarkan Umur Termuda "<<endl;
      cout<<" 4. Urutkan Berdasarkan Nomor Terkecil"<<endl;
      cout<<" Masukan Pilihan = ";cin>>pil2;
      switch (pil2)
      {
      case 1:
      	{
          	for (i=0;i<jum;i++)
            {
            	for (j=0;j<jum;j++)
               {
             		if (nilai[j]<nilai[j+1])
               	{
                  	wadah=nomor[j+1];
                     nomor[j+1]=nomor[j];
                  	nomor[j]=wadah;

               		wadah=nilai[j+1];
                     nilai[j+1]=nilai[j];
                  	nilai[j]=wadah;

                     wadah=umur[j+1];
                     umur[j+1]=umur[j];
                  	umur[j]=wadah;

                     strcpy(wadah2,nama[j+1]);
                     strcpy(nama[j+1],nama[j]);
                     strcpy(nama[j],wadah2);
                  }
               }
            }
         system("cls");
         judul();
         tampil();
         cout<<endl;
         cout<<"   Data Terurutkan Berdasarkan Nilai Tertinggi "<<endl;
         cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
         getch();
         goto awal;
         }
         break;

         case 2:
      	{
          	for (i=0;i<jum;i++)
            {
            	for (j=0;j<jum-1;j++)
               {
             		if (nilai[j]>nilai[j+1])
               	{
                  	wadah=nomor[j+1];
                     nomor[j+1]=nomor[j];
                  	nomor[j]=wadah;

               		wadah=nilai[j+1];
                     nilai[j+1]=nilai[j];
                  	nilai[j]=wadah;

                     wadah=umur[j+1];
                     umur[j+1]=umur[j];
                  	umur[j]=wadah;

                     strcpy(wadah2,nama[j+1]);
                     strcpy(nama[j+1],nama[j]);
                     strcpy(nama[j],wadah2);
                  }
               }
            }
         system("cls");
         judul();
         tampil();
         cout<<endl;
         cout<<"   Data Terurutkan Berdasarkan Nilai Terendah "<<endl;
         cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
         getch();
         goto awal;
         }
         break;

         case 3:
      	{
          	for (i=0;i<jum;i++)
            {
            	for (j=0;j<jum-1;j++)
               {
             		if (umur[j]>umur[j+1])
               	{
                  	wadah=nomor[j+1];
                     nomor[j+1]=nomor[j];
                  	nomor[j]=wadah;

               		wadah=nilai[j+1];
                     nilai[j+1]=nilai[j];
                  	nilai[j]=wadah;

                     wadah=umur[j+1];
                     umur[j+1]=umur[j];
                  	umur[j]=wadah;

                     strcpy(wadah2,nama[j+1]);
                     strcpy(nama[j+1],nama[j]);
                     strcpy(nama[j],wadah2);
                  }
               }
            }
         system("cls");
         judul();
         tampil();
         cout<<endl;
         cout<<"   Data Terurutkan Berdasarkan Umur Termuda "<<endl;
         cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
         getch();
         goto awal;
         }
         break;

         case 4:
      	{
          	for (i=0;i<jum;i++)
            {
            	for (j=0;j<jum-1;j++)
               {
             		if (nomor[j]>nomor[j+1])
               	{
                  	wadah=nomor[j+1];
                     nomor[j+1]=nomor[j];
                  	nomor[j]=wadah;

               		wadah=nilai[j+1];
                     nilai[j+1]=nilai[j];
                  	nilai[j]=wadah;

                     wadah=umur[j+1];
                     umur[j+1]=umur[j];
                  	umur[j]=wadah;

                     strcpy(wadah2,nama[j+1]);
                     strcpy(nama[j+1],nama[j]);
                     strcpy(nama[j],wadah2);
                  }
               }
            }
         system("cls");
         judul();
         tampil();
         cout<<endl;
         cout<<"   Data Terurutkan Berdasarkan Nomor Terkecil "<<endl;
         cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
         getch();
         goto awal;
         }
         break;

         default:
         {
         	cout<<endl;
            cout<<" Pilihan Yang Anda Masukan Salah "<<endl;
            cout<<" Silahkan Ulangi Lagi "<<endl;
            getch();
            goto lagi;
         }break;

      }
    }
    break;

    case 4:
    {
      system("cls");
      judul();
      cout<<"  -------------------------------------------- "<<endl;
      cout<<" |        Cari Data Berdasarkan Nama          |"<<endl;
      cout<<"  -------------------------------------------- "<<endl;
      cout<<endl;
      cout<<"  Masukan Nama Cari = ";
      cin.ignore();
      gets(cari);
      cout<<endl;
      system("cls");
      judul();
      ada=0;
      ke=0;
      for (i=0;i<jum;i++)
      {
       	if (strcmp(cari,nama[i])==0)
         {
            ada=1;
            caridata[ke]=i;
            ke=ke+1;
         }
      }
      if (ada==1)
      {
      		cout<<"  -------------------------------------------- "<<endl;
         	cout<<" | INDEK    NAMA    NOMOR    NILAI    UMUR    |"<<endl;
            cout<<"  -------------------------------------------- "<<endl;
      		for (i=0;i<ke;i++)
      		{
      		cout<<"     "<<caridata[i]<<"      "<<nama[caridata[i]]<<"       "<<nomor[caridata[i]]<<"       "<<nilai[caridata[i]]<<"       "<<umur[caridata[i]]<<endl;
      		}
            cout<<"  -------------------------------------------- "<<endl;
      }
      else
      {  cout<<"  -------------------------------------------- "<<endl;
       	cout<<" |         Maaf, Data Tidak Ditemukan         | "<<endl;
         cout<<"  -------------------------------------------- "<<endl<<endl;
      }
      cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
      getch();
      goto awal;
    }
    break;

    case 5:
    {
	  system("cls");
      judul();
      tampil();
      cout<<endl;
      cout<<"   Masukan Indeks Data Yang Akan Dihapus = ";cin>>hapus;
      for (i=hapus;i<jum;i++)
      {
       	nomor[i]=nomor[i+1];
         nilai[i]=nilai[i+1];
         umur[i]=umur[i+1];
         strcpy(nama[i],nama[i+1]);
      }
      jum=jum-1;
      system("cls");
      judul();
      tampil();
      cout<<endl;
      cout<<"   Data Pada Indek Ke "<<hapus<<" Telah Terhapus "<<endl;
      cout<<"   Tekan Enter Untuk Kambali Ke Menu Awal "<<endl;
      getch();
      goto awal;
    }break;

    case 0:
    	cout<<"   Apakah Ingin Keluar ? y/t ";cin>>keluar;
      if (keluar=='Y' || keluar=='y')
    	goto akhir;
      else
      goto awal;
    break;

    default:
    {
     	cout<<endl;
      cout<<"   Pilihan Yang Anda Masukan Salah "<<endl;
      cout<<"   Silahkan Ulangi Lagi "<<endl;
      getch();
      goto awal;
    }break;
   }

akhir:
cout<<"  -------------------------------------------- "<<endl;
cout<<" |              APLIKASI DITUTUP              |"<<endl;
cout<<"  -------------------------------------------- "<<endl;
getch ();
}
