/** 
*
* Author: 		Robert Skelton
* Date 			12.18.13
* Filename: 	asciiConverter.cpp
* Email: 		robertjskelton@gmail.com
* Description:  Converts a given text string into an ASCII art string. 
*
*/


#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int methodA () {
	cout << endl;
	cout << "       AA   	" << endl;
	cout << "      AAAA     " << endl;
	cout << "     AAAAAA" << endl;
	cout << "    AAA  AAA" << endl;
	cout << "   AAA    AAA" << endl;
	cout << "  AAAAAAAAAAAA" << endl;
	cout << " AAA        AAA" << endl;
	cout << "AAA          AAA" << endl;
	return 0;
}

int methodB () {
	cout << endl;
	cout << "BBBBBBB   	" << endl;
	cout << "BB     BB " << endl;
	cout << "BB     BB" << endl;
	cout << "BBBBBBB" << endl;
	cout << "BB     BB " << endl;
	cout << "BB     BB  " << endl;
	cout << "BB     BB " << endl;
	cout << "BBBBBBB" << endl;
	return 0;
}

int methodC () {
	cout << endl;
	cout << "      CCC	" << endl;
	cout << "    CC   CC " << endl;
	cout << "  CC       CC       " << endl;
	cout << "CC              " << endl;
	cout << "CC             " << endl;
	cout << "  CC       CC      " << endl;
	cout << "    CC   CC" << endl;
	cout << "      CCC" << endl;
	return 0;
}

int methodD () {
	cout << endl;
	cout << "DDDDDDD   	" << endl;
	cout << "DD     DD " << endl;
	cout << "DD     DD" << endl;
	cout << "DD     DD" << endl;
	cout << "DD     DD " << endl;
	cout << "DD     DD  " << endl;
	cout << "DD     DD " << endl;
	cout << "DDDDDDD" << endl;
	return 0;
}

int methodE () {
	cout << endl;
	cout << "EEEEEEEEEE 	" << endl;
	cout << "EE      " << endl;
	cout << "EE     " << endl;
	cout << "EEEEEEEEEE" << endl;
	cout << "EE " << endl;
	cout << "EE" << endl;
	cout << "EE" << endl;
	cout << "EEEEEEEEEE" << endl;
	return 0;
}

int methodF () {
	cout << endl;
	cout << "FFFFFFFFFF 	" << endl;
	cout << "FF      " << endl;
	cout << "FF     " << endl;
	cout << "FFFFFFFFFF" << endl;
	cout << "FF " << endl;
	cout << "FF" << endl;
	cout << "FF" << endl;
	cout << "FF" << endl;
	return 0;
}

int methodG () {
	cout << endl;
	cout << "      GGG	" << endl;
	cout << "    GG   GG " << endl;
	cout << "  GG      GG       " << endl;
	cout << "GG              " << endl;
	cout << "GG      GGGG    " << endl;
	cout << "  GG      GG       " << endl;
	cout << "    GG   GG" << endl;
	cout << "      GGG" << endl;
	return 0;
}

int methodH () {
	cout << endl;
	cout << "HH     HH	" << endl;
	cout << "HH     HH  " << endl;
	cout << "HH     HH" << endl;
	cout << "HHHHHHHHH" << endl;
	cout << "HH     HH" << endl;
	cout << "HH     HH" << endl;
	cout << "HH     HH" << endl;
	cout << "HH     HH" << endl;
	return 0;
}

int methodI () {
	cout << endl;
	cout << "IIIIIIIIIIII	" << endl;
	cout << "     II  " << endl;
	cout << "     II  " << endl;
	cout << "     II  " << endl;
	cout << "     II  " << endl;
	cout << "     II  " << endl;
	cout << "     II  " << endl;
	cout << "IIIIIIIIIIII " << endl;
	return 0;
}

int methodJ () {
	cout << endl;
	cout << "JJJJJJJJJJJJJJ" << endl;
	cout << "      JJ " << endl;
	cout << "      JJ " << endl;
	cout << "      JJ " << endl;
	cout << "      JJ " << endl;
	cout << "      JJ " << endl;
	cout << "JJ    JJ " << endl;
	cout << " JJJJJJ " << endl;
	return 0;
}

int methodK () {
	cout << endl;
	cout << "KK   KK " << endl;
	cout << "KK  KK" << endl;
	cout << "KK KK      " << endl;
	cout << "KKK       " << endl;
	cout << "KK KK      " << endl;
	cout << "KK  KK     " << endl;
	cout << "KK   KK  " << endl;
	cout << "KK    KK " << endl;
	return 0;
}

int methodL () {
	cout << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LL" << endl;
	cout << "LLLLLLLLLLLL" << endl;
	return 0;
}

int methodM () {
	cout << endl;
	cout << "MM             MM     " << endl;
	cout << "MMM           MMM   " << endl;
	cout << "MM M         M MM  " << endl;
	cout << "MM  M       M  MM " << endl;
	cout << "MM   M     M   MM " << endl;
	cout << "MM    M   M    MM  " << endl;
	cout << "MM     M M     MM  " << endl;
	cout << "MM      M      MM  " << endl;
	return 0;
}

int methodN () {
	cout << endl;
	cout << "NN       NN     " << endl;
	cout << "NNN      NN        " << endl;
	cout << "NN N     NN       " << endl;
	cout << "NN  N    NN      " << endl;
	cout << "NN   N   NN      " << endl;
	cout << "NN    N  NN       " << endl;
	cout << "NN     N NN       " << endl;
	cout << "NN      NNN  " << endl;
	return 0;
}

int methodO () {
	cout << endl;
	cout << "      OO" << endl;
	cout << "    OO  OO " << endl;
	cout << "  OO      OO " << endl;
	cout << "OO          OO " << endl;
	cout << "  OO      OO" << endl;
	cout << "    OO  OO " << endl;
	cout << "      OO" << endl;
	// ONE LINE SHORTER
	return 0;
}

int methodP () {
	cout << endl;
	cout << "PPPP" << endl;
	cout << "PP  PP" << endl;
	cout << "PP    PP    " << endl;
	cout << "PP  PP      " << endl;
	cout << "PPPP       " << endl;
	cout << "PP     " << endl;
	cout << "PP     " << endl;
	cout << "PP " << endl;
	return 0;
}

int methodQ () {
	cout << endl;
	cout << "      QQ" << endl;
	cout << "    QQ  QQ " << endl;
	cout << "  QQ      QQ " << endl;
	cout << "QQ          QQ " << endl;
	cout << "  QQ      QQ" << endl;
	cout << "    QQ  QQ " << endl;
	cout << "      QQ  QQ" << endl;
	return 0;
}

int methodR () {
	cout << endl;
	cout << "RRRR" << endl;
	cout << "RR  RR" << endl;
	cout << "RR    RR    " << endl;
	cout << "RR  RR      " << endl;
	cout << "RRRR       " << endl;
	cout << "RR  RR   " << endl;
	cout << "RR    RR" << endl;
	cout << "RR      RR" << endl;
	return 0;
}

int methodS () {
	cout << endl;
	cout << "  SSSS" << endl;
	cout << " SS   SS   " << endl;
	cout << "SS       " << endl;
	cout << " SSS " << endl;
	cout << "    SS " << endl;
	cout << "      S " << endl;
	cout << "SS   SS " << endl;
	cout << "  SSSS   " << endl;
	return 0;
}

int methodT () {
	cout << endl;
	cout << "TTTTTTTTTTTTTT" << endl;
	cout << "      TT " << endl;
	cout << "      TT " << endl;
	cout << "      TT " << endl;
	cout << "      TT " << endl;
	cout << "      TT " << endl;
	cout << "      TT " << endl;
	cout << "      TT" << endl;
	return 0;
}

int methodU () {
	cout << endl;
	cout << "UU        UU " << endl;
	cout << "UU        UU " << endl;
	cout << "UU        UU" << endl;
	cout << "UU        UU" << endl;
	cout << "UU        UU" << endl;
	cout << "UU        UU" << endl;
	cout << "UU        UU" << endl;
	cout << " UUUUUUUUUU " << endl;
	return 0;
}

int methodV () {
	cout << endl;
	cout << "VV              VV" << endl;
	cout << " VV            VV" << endl;
	cout << "  VV          VV" << endl;
	cout << "   VV        VV" << endl;
	cout << "    VV      VV" << endl;
	cout << "     VV    VV" << endl;
	cout << "      VV  VV" << endl;
	cout << "       VVVV  " << endl;
	return 0;
}

int methodW () {
	cout << endl;
	cout << "W        W        W" << endl;
	cout << "W       W W       W" << endl;
	cout << "WW     WW WW     WW " << endl;
	cout << "WW     W   W     WW" << endl;
	cout << " WW   WW   WW   WW     " << endl;
	cout << " WW   WW   WW   WW   " << endl;
	cout << "  WW WW     WW WW       " << endl;
	cout << "   WWW       WWW       " << endl;
	return 0;
}

int methodX () {
	cout << endl;
	cout << "XX      XX " << endl;
	cout << " XX    XX" << endl;
	cout << "  XX  XX  " << endl;
	cout << "   XXXX" << endl;
	cout << "    XX " << endl;
	cout << "   XXXX " << endl;
	cout << "  XX  XX" << endl;
	cout << " XX    XX" << endl;
	return 0;
}

int methodY () {
	cout << endl;
	cout << "YY      YY" << endl;
	cout << " YY    YY " << endl;
	cout << "  YY  YY " << endl;
	cout << "   YYYY " << endl;
	cout << "    YY                " << endl;
	cout << "    YY            " << endl;
	cout << "    YY           " << endl;
	cout << "    YY         " << endl;
	return 0;
}

int methodZ () {
	cout << endl;
	cout << "ZZZZZZZZZZZZZZZ" << endl;
	cout << "            ZZ" << endl;
	cout << "          ZZ " << endl;
	cout << "        ZZ" << endl;
	cout << "      ZZ " << endl;
	cout << "    ZZ " << endl;
	cout << "  ZZ " << endl;
	cout << "ZZZZZZZZZZZZZZZ" << endl;
	return 0;
}

int method0 () {
	cout << endl;
	cout << "    00000" << endl;
	cout << "  00     00" << endl;
	cout << "00         00 " << endl;
	cout << "00         00 " << endl;
	cout << "00         00 " << endl;
	cout << "00         00 " << endl;
	cout << "  00     00" << endl;
	cout << "    00000" << endl;
	return 0;
}

int method1 () {
	cout << endl;
	cout << "    11    " << endl;
	cout << "  1111    " << endl;
	cout << "    11    " << endl;
	cout << "    11    " << endl;
	cout << "    11    " << endl;
	cout << "    11    " << endl;
	cout << "    11    " << endl;
	cout << "1111111111" << endl;
	return 0;
}

int method2 () {
	cout << endl;
	cout << "    2222" << endl;
	cout << "  22    22 " << endl;
	cout << "22        22 " << endl;
	cout << "        22 " << endl;
	cout << "      22" << endl;
	cout << "    22 " << endl;
	cout << "  22" << endl;
	cout << "2222222222" << endl;
	return 0;
}

int method3 () {
	cout << endl;
	cout << "333333333" << endl;
	cout << "       33   " << endl;
	cout << "       33   " << endl;
	cout << "333333333" << endl;
	cout << "       33   " << endl;
	cout << "       33   " << endl;
	cout << "       33   " << endl;
	cout << "333333333" << endl;
	return 0;
}

int method4 () {
	cout << endl;
	cout << "44      44 " << endl;
	cout << "44      44 " << endl;
	cout << "44      44 " << endl;
	cout << "4444444444" << endl;
	cout << "        44 " << endl;
	cout << "        44 " << endl;
	cout << "        44 " << endl;
	cout << "        44 " << endl;
	return 0;
}

int method5 () {
	cout << endl;
	cout << "5555555555" << endl;
	cout << "55 " << endl;
	cout << "55 " << endl;
	cout << "5555555555" << endl;
	cout << "        55" << endl;
	cout << "        55 " << endl;
	cout << "        55 " << endl;
	cout << "5555555555" << endl;
	return 0;
}

int method6 () {
	cout << endl;
	cout << "666666666" << endl;
	cout << "66     " << endl;
	cout << "66          " << endl;
	cout << "666666666" << endl;
	cout << "66     66 " << endl;
	cout << "66     66 " << endl;
	cout << "66     66 " << endl;
	cout << "666666666" << endl;
	return 0;
}

int method7 () {
	cout << endl;
	cout << "7777777777" << endl;
	cout << "        77" << endl;
	cout << "       77 " << endl;
	cout << "      77 " << endl;
	cout << "     77 " << endl;
	cout << "    77 " << endl;
	cout << "   77 " << endl;
	cout << "  77 " << endl;
	return 0;
}

int method8 () {
	cout << endl;
	cout << "8888888888" << endl;
	cout << "88      88" << endl;
	cout << "88      88" << endl;
	cout << "8888888888" << endl;
	cout << "88      88" << endl;
	cout << "88      88" << endl;
	cout << "88      88" << endl;
	cout << "8888888888" << endl;
	return 0;
}

int method9 () {
	cout << endl;
	cout << "9999999999" << endl;
	cout << "99      99" << endl;
	cout << "99      99" << endl;
	cout << "9999999999" << endl;
	cout << "       99" << endl;
	cout << "      99" << endl;
	cout << "     99 " << endl;
	cout << "    99" << endl;
	return 0;
}

int methodSpace () {
	cout << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "           " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "     " << endl;
	cout << "   " << endl;
	cout << "" << endl;
	return 0;
}

int switchLoop(char charIn) {
	switch (charIn) {
		case 'a':
		case 'A':
			methodA();
			break;
		case 'b':
		case 'B':
			methodB();
			break;
		case 'c':
		case 'C':
			methodC();
			break;
		case 'd':
		case 'D':
			methodD();
			break;
		case 'e':
		case 'E':
			methodE();
			break;
		case 'f':
		case 'F':
			methodF();
			break;
		case 'g':
		case 'G':
			methodG();
			break;
		case 'h':
		case 'H':
			methodH();
			break;
		case 'i':
		case 'I':
			methodI();
			break;
		case 'j':
		case 'J':
			methodJ();
			break;
		case 'k':
		case 'K':
			methodK();
			break;
		case 'l':
		case 'L':
			methodL();
			break;
		case 'm':
		case 'M':
			methodM();
			break;
		case 'n':
		case 'N':
			methodN();
			break;
		case 'o':
		case 'O':
			methodO();
			break;
		case 'p':
		case 'P':
			methodP();
			break;
		case 'q':
		case 'Q':
			methodQ();
			break;
		case 'r':
		case 'R':
			methodR();
			break;
		case 'S':
		case 's':
			methodS();
			break;
		case 't':
		case 'T':
			methodT();
			break;
		case 'u':
		case 'U':
			methodU();
			break;
		case 'v':
		case 'V':
			methodV();
			break;
		case 'w':
		case 'W':
			methodW();
			break;
		case 'x':
		case 'X':
			methodX();
			break;
		case 'y':
		case 'Y':
			methodY();
			break;
		case 'z':
		case 'Z':
			methodZ();
			break;
		case ' ':
			methodSpace();
			break;
		case '0':
			method0();
			break;
		case '1':
			method1();
			break;
		case '2':
			method2();
			break;
		case '3':
			method3();
			break;
		case '4':
			method4();
			break;
		case '5':
			method5();
			break;
		case '6':
			method6();
			break;
		case '7':
			method7();
			break;
		case '8':
			method8();
			break;
		case '9':
			method9();
			break;
		default:
			cout << "Input of : " << charIn << " is not a valid input. Try another string." << endl;
		}
	return 0;
}


int main() {
	// string convertThis = "ABCDEFGhijKlMnOPQRsTuVWxYz"; 
	string convertThis = "";
	int stringSize;
	char charMod;
	cout << "This Program will convert your text string to ASCII letters. Enjoy!!" << endl;
	cout << "Enter the string you want converted to ASCII: ";
	getline(cin,convertThis);
	cout << endl;
	cout << "Converting " << convertThis << " to ASCII yields..." << endl;

	// used to write to a file called yourInput.txt
	string fileName = convertThis + ".txt";
	ofstream outputStream;
	outputStream.open(fileName.c_str());

	/*cout << "Enter the letter you want the ASCII string to be displayed with: " << endl;
	cin >> charMod;*/

	stringSize = convertThis.size();
	char charArray[100];
	for (int i = 0; i < stringSize; i++) 
		charArray[i] = convertThis[i];

	for (int i = 0; i < stringSize; i++) {
		outputStream << "Hello!" << endl;
		switchLoop(charArray[i]);
		
	}

	return 0;
}
