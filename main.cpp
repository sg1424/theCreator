#include <iostream>
#include <regex>
#include <string>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
srand(time(0));

int v3;
char UK;
string partOne;

ofstream outStrings;
outStrings.open ("list_strings.txt");

for (int r = 0; r < 25; r++){

partOne = "";

// 1     PART ONE    create a set characters and put into a string

	for (int p = 0; p < 15; p++){
		v3 = rand() % 95+ 33; // v3 in the range 32-128
		UK = v3;
		partOne += UK;
	}
cout << "partOne  is " << partOne << "\n";

//  1                                end of PART ONE

//  2  PART TWO  create out put file and store new


outStrings << partOne << endl; 

}

//  2                                 end of PART TWO	
	string regString = "";
	
	//   file for input data
	
	ifstream regInput ("list_strings.txt");
	
	if(regInput.is_open()){
		regex sampA("[A-Z]+"); 
//		regex sampA("[[:digit:]]"); 
		cout << "file open successful \n";



		while(!regInput.eof()){
			regInput >> regString;
			 cout << "first output   " << regString << endl;
//			if (regex_match ( regString ,sampA ) )
//			if (regex_match ( regString ,sampA ) ){
//			 cout << " second output"<< regString << endl;
//			}

			smatch smFirst;
			regex look("([~]+)");
//   target is still regString
	bool b = 1;
		b = (regex_search( regString, smFirst, look));
			if (b){
			 cout << " third output  " << regString << "  " << smFirst.position() << "\n   string  " << smFirst.str() << endl;
			}


			string testa = "A";

			
			}
		
	}
	else cout << " unable to open \n";


	return 0;
}
