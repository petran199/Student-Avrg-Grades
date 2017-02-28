
#include "texnikes.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace table;

//dimiourgia revma isodou
ifstream in;
//metavlites
double Ddata(0);
string Sdata;

//dimiourgia pinakwn string- double 
double** DarayVathmoi = Dcreate2Dtbl(30, 7);
string** SarayStudents = Screate2Dtbl(5, 3);
double** DarayAvg = Dcreate2Dtbl(5, 7);


int main() {
	//anoigma arxeiou
	in.open("studentsD.txt");

	// ean apotixei na emfanixei mnm  kai na exitarei
	if (in.fail()) {
		cerr << "error opening the file\n";
		exit(EXIT_FAILURE);
	}
	// kathos dn ta exei diavasei ola sto arxeio na trexei
	while (!in.eof()) {
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 7; j++) {
				in >> Ddata;
				Dset2Dtbl(DarayVathmoi, i, j, Ddata);
			}
		}
		
	}
	//klinoume to revma gia na to anoixoume xana se alo arxeio
	in.close();

	//anoigma toy epomenoy arxeiou(onomata mathitwn)
	in.open("studentsH.txt");
	if (in.fail()) {
		cerr << "cannot open studentsH.txt ";
		exit(EXIT_FAILURE);
	}
	
	while (!in.eof()) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 3; j++) {
			in >> Sdata;
			//gemisma toy pinaka SarayVathmoi me ta stoixeia twn mathitwn(onomatepwnymo klp)
			Sset2Dtbl(SarayStudents, i, j, Sdata);
			}
		}
		//swap na deixnei prwta to epwnimo kai meta to onoma ston pinaka SarayVathmoi
		Sswap(SarayStudents,5, 1, 2);
		
	}
	//Sptr2Dtbl(SarayStudents, 5, 3);
	
	//dimiourgei apo ton pinaka DarayVathmoi tous mesous orous mathimatwn anna id  ston pinaka DarayAvg
	AvgVathmoi(DarayVathmoi, DarayAvg, 30,7);
	//Sptr2Dtbl(SarayStudents, 5, 3);

	//sortarisma pinaka vathmwn kata fthinousa
	sortArayBasedClmn(DarayAvg, 0, 5, 6);
	//Dptr2Dtbl(DarayAvg, 5, 7);

	//sortarisma toy pinaka students  wste na sibiptei me to sortarisma twn vathmwn (koina id me vasi tin fthinousa sort tou DarayAvg)
	sortBasedId(SarayStudents, DarayAvg, 0, 3);
	
	//teliki ektipwsi twn apotelesmatwn vasi to zitoumeno tis askisis
	prtFinal(SarayStudents, DarayAvg, 0, 5, 1, 3, 1, 7, 3);
	


	
	//klinoume to revma efoson exoume teleiwsei me to diavasma tou arxeiou
	in.close();

	//diagrafoume tous dinamika kataxwrimenous pinakes apo tin mnimi
	Ddelete2Dtbl(DarayVathmoi, 7);
	Sdelete2Dtbl(SarayStudents, 3);
	Ddelete2Dtbl(DarayAvg, 5);
}
