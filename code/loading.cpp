#include <sstream>
//#include <string>
//#include <fstream>
//#include <iostream>
//
//
//using namespace std;
//
//bool loading_data_ReadFile() {
//	const string adres = "gamedata\\saves\\autosave.txt";
//	ifstream Data;
//
//    
//
//Data.open(adres);
//
//    if (!Data.is_open()) {
//        Data.close();
//        return 0;
//    }
//    else {
//        Data.close();
//        
//        string n = " ";
//        float nom;
//   
//        for (Data.open(adres);!Data.eof();) {
//            getline(Data, n);
//            stringstream ss;
//
//            if (n == "<is-start-game>") {
//                getline(Data, n);
//                ss << n;  
//                ss >> start_Play;
//                cout << nom;
//            }
//            if (n == "<level>") {
//                getline(Data, n);
//                ss << n;
//                ss >> nom;
//                cout << nom;
//            }
//        }        
//        Data.close();
//
//
//
//
//        return 1;
//    }
//}