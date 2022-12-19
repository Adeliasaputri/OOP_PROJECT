#include <iostream>
using namespace std;

int i;
int n;

struct kalori{
    int K,P,M,J,kalori;
    string M_menu[4][5]={{"nasi putih","nasi goreng","roti gandum","kentang rebus","oatmeal"},
                         {"steam ikan","ommelet ", "udang bakar","bebek goreng","Mushroom Soup"},
                         {"french fries","Mie instan", "Fried Chicken", "pizza  ","burger   "},
                         {"coffe    ","susu     ","mineral water","teh      ","yogurt"}
    };
    int kaL_M[4][5]={{204,267,247,118,68},
                     {145,147,154,337,39},
                     {312,200,246,266,295},
                     {2,42,0,55,59}};
};

struct data{
    string data_name;
    string data_jenisL[2]={"pria","Wanita"};
    string data_umur;
};

struct V_Bmr{
    string keterangan[3]={"hampir tidak pernah berolahraga","jarang berolahraga","sering berolahraga"};
    int data_tinggi;
    int data_BB;
    double data_BMI;
    double data_BMR;
    double data_T_kal;
    int data_n;
    int data_usia;
};

struct kalori KAl;
struct V_Bmr Input;
struct data User ; 

class BMR{
    public:
    void Bmr(){
        system("cls");
        cout << "\t\t\t\t   INFO" << endl;
        cout << "========================================================================================" << endl;
        cout << "|  Basal metabolic rate (BMR) adalah kalori yang tubuh Anda perlukan untuk\t\t|" << endl;
        cout << "|  melakukan aktivitas dasar tubuh. Aktivitas tersebut mencakup memompa jantung,\t|" << endl; 
        cout << "|  mencerna makanan, bernapas, memperbaiki sel tubuh, hingga membuang racun dalam tubuh.|" << endl;
        cout << "========================================================================================" << endl;
        cout << "Berat badan (kg) : " ;
        cin >> Input.data_BB;
        cout << "Tinggi (cm) : ";
        cin >> Input.data_tinggi;
        cout << "pilih salah satu : " << endl;
        cout << "(1.Hampir tidak pernah berolahraga | 2.jarang berolahraga | 3.sering berolahraga/beraktivitas)" << endl;
        cin >> n;
    }

    void Out_BMR(){
        system("cls");
        cout << "========================================================================================" << endl;
        cout << "\t\t\t\tBASAL METABOLIC RATE" << endl;
        cout << "========================================================================================" << endl;
        cout << "| Berat badan\t\t\t\t\t\t|" << Input.data_BB << " Kg\t\t\t\t|" << endl;
        cout << "| Tinggi badan\t\t\t\t\t\t|" << Input.data_tinggi << " cm\t\t\t\t|" << endl;
        cout << "| Usia\t\t\t\t\t\t\t|" << User.data_umur << "\t\t\t\t|" <<  endl;
        cout << "| keterangan\t\t\t\t\t\t|" << Input.keterangan[n-1] << "|" << endl;

        if (User.data_jenisL[i-1]==User.data_jenisL[0]){
            Input.data_BMR=(10*Input.data_BB)+(6.25*Input.data_tinggi)-(5*Input.data_usia)+5;        
        }
        else if (User.data_jenisL[i-1]==User.data_jenisL[1]){
            Input.data_BMR=(10*Input.data_BB)+(6.25*Input.data_tinggi)-(5*Input.data_usia)-161;
        }
        cout << "| BMR anda adalah\t\t\t\t\t|"  << Input.data_BMR << "\t\t\t\t|"<< endl;

        if(Input.keterangan[n-1]==Input.keterangan[0]){
            Input.data_T_kal = Input.data_BMR*1.2;
        }
        else if(Input.keterangan[n-1]==Input.keterangan[1]){
            Input.data_T_kal = Input.data_BMR*1.3;
        }
        else if(Input.keterangan[n-1]==Input.keterangan[2]){
            Input.data_T_kal = Input.data_BMR*1.4;
        }

        cout << "| estimasi kalori yang dikeluarkan ketika beraktivitas  |" << Input.data_T_kal << "\t\t\t\t|" << endl;
        cout << "========================================================================================" << endl;
    }
};

class Kal_ori{
    public :

    void Show_Menu(){
        system("cls");
        cout << "=====================================TABEL MAKANAN=============================================" << endl;
        cout << "|NO|\tKARBOHIDRAT\t|\t" << "PROTEIN\t\t|\t" << "Junk food\t|\t" << " MINERAL\t|" << endl;
        cout << "================================================================================================" << endl;
        cout << "\n|1|\tnasi putih\t|\t" << "steam ikan\t|\t" << "French fries\t|\t" << " coffe\t\t|" << endl;
        cout << "|2|\tnasi goreng\t|\t" << "Ommelet\t\t|\t" << "Mie instan\t|\t" << " susu\t\t|" << endl;
        cout << "|3|\troti gandum\t|\t" << "udang bakar\t|\t" << "fried chicken\t|\t" << " air mineral\t|" << endl;
        cout << "|4|\tkentang rebus\t|\t" << "bebek bakar\t|\t" << "pizza\t\t|\t" << " teh\t\t|" << endl;
        cout << "|5|\toatmeal\t\t|\t" << "Mushroom soup\t|\t" << "burger\t\t|\t" << " Yogurt\t\t|" << endl;
        cout << "================================================================================================" << endl;
    }
    void kalori(){
        cout << "Makanan apa yang ingin kamu makan ?" << endl;
        cout << "(Pilih No. 1-5)" <<endl;
        cout << "karbohidrat : " ;
        cin >> KAl.K;
        cout << "protein     : " ;
        cin >> KAl.P;
        cout << "junk food   : " ;
        cin >> KAl.J;
        cout << "mineral     : " ;
        cin >> KAl.M;
        system("cls");
    }

    void Out_kalori(){
        cout << "=============================================" << endl;
        cout << "\t\tPENGECEKAN KALORI\t\t" << endl;
        cout << "=============================================" << endl;
        cout << "KARBOHIDRAT\t| " << KAl.M_menu[0][KAl.K-1] << " \t\t| " << KAl.kaL_M[0][KAl.K-1] << endl;
        cout << "---------------------------------------------" << endl;
        cout << "PROTEIN\t\t| " << KAl.M_menu[1][KAl.P-1] << " \t\t| " << KAl.kaL_M[0][KAl.P-1] << endl;
        cout << "---------------------------------------------" << endl;
        cout << "JUNK FOOD\t| " << KAl.M_menu[2][KAl.J-1] << "\t\t| " << KAl.kaL_M[0][KAl.J-1]<< endl;
        cout << "---------------------------------------------" << endl;
        cout << "MINERAL\t\t| " << KAl.M_menu[3][KAl.M-1] << " \t\t| " << KAl.kaL_M[0][KAl.M-1] << endl;
        cout << "---------------------------------------------" << endl;
        KAl.kalori= KAl.kaL_M[0][KAl.K-1] + KAl.kaL_M[0][KAl.P-1] + KAl.kaL_M[0][KAl.J-1] + KAl.kaL_M[0][KAl.M-1];
        cout << "\t\t\t" << "TOTAL KALORI \t: " << KAl.kalori << endl;
    }
};

class BMI{
    public :
    void BB_ideal(){
        system("cls");
        cout << "berat badan anda (kg) : ";
        cin >> Input.data_BB;
        cout << "tinggi badan anda (cm) : " ;
        cin >> Input.data_tinggi;
    }

    void Out_BB_ideal(){
        system ("cls");
        cout << "=========================================" << endl;
        cout << "\t\tBMI" << endl;
        cout << "=========================================" << endl;;
        cout << "| berat badan\t\t|\t" << Input.data_BB << "\t|" << endl;
        cout << "--------------------------------------" << endl;
        cout << "| tinggi badan\t\t|\t" << Input.data_tinggi <<  "\t|" << endl;
        cout << "--------------------------------------" << endl;
        Input.data_BMI = Input.data_BB/(Input.data_tinggi/100)^2;
        if(Input.data_BMI < 18.5 ){
            cout << "kategori badan mu adalah kurus" << endl;
            cout << "=========================================" << endl;
        }
        else if(Input.data_BMI >= 18.5 || Input.data_BMI <= 24.9 ){
            cout << "kategori badan mu adalah NORMAL" << endl;
            cout << "======================================" << endl;
        }
        else if(Input.data_BMI >= 25 || Input.data_BMI <= 29.9 ){
            cout << "kategori badan mu adalah OVERWEIGHT" << endl;
            cout << "======================================" << endl;
        }
        else if(Input.data_BMI >= 30  ){
            cout << "kategori badan mu adalah OBESITAS" << endl;
            cout << "======================================" << endl;
        }
    }
};

class Program{
    public:
    int angka;

    void Data_User(){
        cout << "==================================================================================" << endl;
        cout << "|\tnama\t\t|\t\t" << "jenis kelamin\t\t|\t"  << "umur\t|" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "|\t" << User.data_name << "\t\t|\t\t" << User.data_jenisL[i-1] << "\t\t\t|\t" << User.data_umur << "\t| "<< endl;
        cout << "==================================================================================" << endl;
    }

    void home(){
    system("cls");
        cout << "=================================" << endl;
        cout << "\tPROGRAM TUBUH SEHAT " << endl;
        cout << "=================================" << endl;
        cout << "| 1.| Cek BMR     \t\t|" << endl;
        cout << "---------------------------------" << endl;
        cout << "| 2.| Cek kalori \t\t|" << endl;
        cout << "---------------------------------" << endl;
        cout << "| 3.| Cek Berat badan Ideal \t| " << endl;
        cout << "---------------------------------" << endl;
        cout << "| 4.| Data\t\t\t| " << endl;
        cout << "=================================" << endl;
        cout << "Apa yang anda cari : " << endl;
        cin >> angka;
    }

    void Data_first(){
        cout << "=========================" << endl;
        cout << "|\tDATA USER\t|" << endl;
        cout << "=========================" << endl;
        cout << "masukan nama : " ;
        cin >> User.data_name;
        cout << "jenis kelamin  (1. Pria | 2. Wanita) : " ;
        cin >> i;
        cout << "masukan umur : " ;
        cin >> User.data_umur;
    }
};

int main (){
    char User_Input;
    
    Program mylist;
    BMR mybmr;
    Kal_ori mykal;
    BMI mybmi;
    mylist.Data_first();
    system("cls");
    do{
        mylist.home();
        if(mylist.angka == 1){
            mybmr.Bmr();
            mybmr.Out_BMR();
             cout << "tekan B untuk kembali, tekan apa saja untuk berhenti : " << endl;
            cin >> User_Input;    
        }
        else if(mylist.angka == 2){
            mykal.Show_Menu();
            mykal.kalori();
            mykal.Out_kalori();
            cout << "tekan B untuk kembali, tekan apa saja untuk berhenti  " << endl;
            cin >> User_Input;
           
        }
        else if(mylist.angka == 3){
            mybmi.BB_ideal();
            mybmi.Out_BB_ideal();
            cout << "tekan B untuk kembali, tekan apa saja untuk berhenti : " << endl;
            cin >> User_Input;   
        }
        else if(mylist.angka == 4){
         system("cls");
         mylist.Data_User();
         cout << "tekan B untuk kembali, tekan T untuk mengganti data : " << endl;
         cin >> User_Input;
          if (User_Input == 'T' || User_Input == 't'){
            system ("cls");
            mylist.Data_first();
            system("cls");
            mylist.Data_User();
            cout << "tekan B untuk kembali, tekan apa saja untuk berhenti : ";
            cin >> User_Input;
         }
         }
        }while(User_Input == 'B' || User_Input == 'b');
return 0;
}