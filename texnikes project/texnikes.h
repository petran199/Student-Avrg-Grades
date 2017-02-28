
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

namespace table {
	//dimiourgia integer table dinamika
	int** create2Dtbl(int noRows, int noClmns) {
		int** aray = new int* [noRows];
		for (int i = 0; i < noRows; i++) {
			aray[i] = new int[noClmns];

		}
		return aray;
	}

	//dimiourgia string table dinamika
	string** Screate2Dtbl(int noRows, int noClmns) {
		string** aray = new string*[noRows];
		for (int i = 0; i < noRows; i++) {
			aray[i] = new string[noClmns];
		}
		return aray;
	}

	// dimiourgia double table dinamika
	double** Dcreate2Dtbl(int noRows, int noClmns) {
		double** aray = new double*[noRows];
		for (int i = 0; i < noRows; i++) {
			aray[i] = new double[noClmns];
		}
		return aray;
	}

	//diagrafi tou dinamikou integer pinaka
	void delete2Dtbl(int** aray, int noClmns) {
		for (int i = 0; i < noClmns; i++) delete[] aray[i];
		delete[] aray;
	}

	//diagrafi toy dinamikou double pinaka
	void Ddelete2Dtbl(double** aray, int noClmns) {
		for (int i = 0; i < noClmns; i++) delete[] aray[i];
		delete[] aray;
	}

	//diagrafi toy dinamikou char pinaka
	void Sdelete2Dtbl(string** aray, int noClmns) {
		for (int i = 0; i < noClmns; i++) delete[] aray[i];
		delete[] aray;
	}

	//ektipwsi integer pinaka
	void ptr2Dtbl(int** aray, int noRows, int noClmns) {
		for (int i = 0; i < noRows; i++) {
			for (int j = 0; j < noClmns; j++) {
				cout.width(5);
				cout << aray[i][j];
				
			}
			cout << endl;
		}
		cout << endl;
	}

	//ektipwsi double pinaka
	void Dptr2Dtbl(double** aray, int noRows, int noClmns) {
		for (int i = 0; i < noRows; i++) {
			for (int j = 0; j < noClmns; j++) {
				cout.width(7);
				cout.precision(3);
				cout << aray[i][j];
				
			}
			cout << endl;
		}
		cout << endl;
	}

	//ektipwsi string pinaka
	void Sptr2Dtbl(string **aray, int noRows, int noClmns) {
		for (int i = 0; i < noRows; i++) {
			for (int j = 0; j < noClmns; j++) {
				cout.width(15);
				cout << aray[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}

	// setare mia timi se sigekrimeni grammi kai stili tou integer pinaka 
	void set2Dtbl(int** aray, int row, int clm, int value) {
		aray[row][clm] = value;
	}

	// setare mia timi se sigekrimeni grammi kai stili tou integer pinaka 
	void Dset2Dtbl(double** aray, int row, int clm, double value) {
		aray[row][clm] = value;
	}

	// setare mia timi se sigekrimeni grammi kai stili tou string pinaka 
	void Sset2Dtbl(string** aray, int row, int clm, string value) {
		aray[row][clm] = value;
	}

	//swap timis se string pinaka
	void Sswap(string** aray,int noRows, int clm1, int Clm2) {
		
		for (int i = 0; i < noRows; i++) {
			aray[i][clm1].swap(aray[i][Clm2]);
		}
	}
	
	//mesos oros mathimatwn ana examino
	void AvgVathmoi(double** aray, double** DoubleArayAvg, int noRowsFirst,int noClmnSecond) {
		double mAvg(0), lAvg(0), hAvg(0), geAvg(0), gAvg(0), mo(0), iD(0);
		for (int k = 0; k < noRowsFirst; k += 5) {
			iD = aray[k][0];
			mAvg = mAvg + (aray[k][2] / 6);
			lAvg = lAvg + (aray[k][3] / 6);
			hAvg = hAvg + (aray[k][4] / 6);
			geAvg = geAvg + (aray[k][5] / 6);
			gAvg = gAvg + (aray[k][6] / 6);
			mo = (mAvg + lAvg + hAvg + gAvg + geAvg) / 5;
		}
		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < noClmnSecond; j++) {
				switch (j)
				{
				case 0: Dset2Dtbl(DoubleArayAvg, i, j, iD); break;
				case 1: Dset2Dtbl(DoubleArayAvg, i, j, mAvg); break;
				case 2: Dset2Dtbl(DoubleArayAvg, i, j, lAvg); break;
				case 3: Dset2Dtbl(DoubleArayAvg, i, j, hAvg); break;
				case 4: Dset2Dtbl(DoubleArayAvg, i, j, geAvg); break;
				case 5: Dset2Dtbl(DoubleArayAvg, i, j, gAvg); break;
				case 6: Dset2Dtbl(DoubleArayAvg, i, j, mo); break;
				default:
					break;
				}
			}
		}
		mAvg = lAvg = hAvg = geAvg = gAvg = mo = 0;
		for (int k = 1; k < noRowsFirst; k += 5) {
			iD = aray[k][0];
			mAvg = mAvg + (aray[k][2] / 6);
			lAvg = lAvg + (aray[k][3] / 6);
			hAvg = hAvg + (aray[k][4] / 6);
			geAvg = geAvg + (aray[k][5] / 6);
			gAvg = gAvg + (aray[k][6] / 6);
			mo = (mAvg + lAvg + hAvg + gAvg + geAvg) / 5;
		}
		for (int i = 1; i < 2; i++) {
			for (int j = 0; j < noClmnSecond; j++) {
				switch (j)
				{
				case 0: Dset2Dtbl(DoubleArayAvg, i, j, iD); break;
				case 1: Dset2Dtbl(DoubleArayAvg, i, j, mAvg); break;
				case 2: Dset2Dtbl(DoubleArayAvg, i, j, lAvg); break;
				case 3: Dset2Dtbl(DoubleArayAvg, i, j, hAvg); break;
				case 4: Dset2Dtbl(DoubleArayAvg, i, j, geAvg); break;
				case 5: Dset2Dtbl(DoubleArayAvg, i, j, gAvg); break;
				case 6: Dset2Dtbl(DoubleArayAvg, i, j, mo); break;
				default:
					break;
				}
			}
		}
		mAvg = lAvg = hAvg = geAvg = gAvg = mo = 0;
		for (int k = 2; k < noRowsFirst; k += 5) {
			iD = aray[k][0];
			mAvg = mAvg + (aray[k][2] / 6);
			lAvg = lAvg + (aray[k][3] / 6);
			hAvg = hAvg + (aray[k][4] / 6);
			geAvg = geAvg + (aray[k][5] / 6);
			gAvg = gAvg + (aray[k][6] / 6);
			mo = (mAvg + lAvg + hAvg + gAvg + geAvg) / 5;
		}
		for (int i = 2; i < 3; i++) {
			for (int j = 0; j < noClmnSecond; j++) {
				switch (j)
				{
				case 0: Dset2Dtbl(DoubleArayAvg, i, j, iD); break;
				case 1: Dset2Dtbl(DoubleArayAvg, i, j, mAvg); break;
				case 2: Dset2Dtbl(DoubleArayAvg, i, j, lAvg); break;
				case 3: Dset2Dtbl(DoubleArayAvg, i, j, hAvg); break;
				case 4: Dset2Dtbl(DoubleArayAvg, i, j, geAvg); break;
				case 5: Dset2Dtbl(DoubleArayAvg, i, j, gAvg); break;
				case 6: Dset2Dtbl(DoubleArayAvg, i, j, mo); break;
				default:
					break;
				}
			}
		}
		mAvg = lAvg = hAvg = geAvg = gAvg = mo = 0;
		for (int k = 3; k < noRowsFirst; k += 5) {
			iD = aray[k][0];
			mAvg = mAvg + (aray[k][2] / 6);
			lAvg = lAvg + (aray[k][3] / 6);
			hAvg = hAvg + (aray[k][4] / 6);
			geAvg = geAvg + (aray[k][5] / 6);
			gAvg = gAvg + (aray[k][6] / 6);
			mo = (mAvg + lAvg + hAvg + gAvg + geAvg) / 5;
		}
		for (int i = 3; i < 4; i++) {
			for (int j = 0; j < noClmnSecond; j++) {
				switch (j)
				{
				case 0: Dset2Dtbl(DoubleArayAvg, i, j, iD); break;
				case 1: Dset2Dtbl(DoubleArayAvg, i, j, mAvg); break;
				case 2: Dset2Dtbl(DoubleArayAvg, i, j, lAvg); break;
				case 3: Dset2Dtbl(DoubleArayAvg, i, j, hAvg); break;
				case 4: Dset2Dtbl(DoubleArayAvg, i, j, geAvg); break;
				case 5: Dset2Dtbl(DoubleArayAvg, i, j, gAvg); break;
				case 6: Dset2Dtbl(DoubleArayAvg, i, j, mo); break;
				default:
					break;
				}
			}
		}
		mAvg = lAvg = hAvg = geAvg = gAvg = mo = 0;
		for (int k = 4; k < noRowsFirst; k += 5) {
			iD = aray[k][0];
			mAvg = mAvg + (aray[k][2] / 6);
			lAvg = lAvg + (aray[k][3] / 6);
			hAvg = hAvg + (aray[k][4] / 6);
			geAvg = geAvg + (aray[k][5] / 6);
			gAvg = gAvg + (aray[k][6] / 6);
			mo = (mAvg + lAvg + hAvg + gAvg + geAvg) / 5;
		}
		for (int i = 4; i < 5; i++) {
			for (int j = 0; j < noClmnSecond; j++) {
				switch (j)
				{
				case 0: Dset2Dtbl(DoubleArayAvg, i, j, iD); break;
				case 1: Dset2Dtbl(DoubleArayAvg, i, j, mAvg); break;
				case 2: Dset2Dtbl(DoubleArayAvg, i, j, lAvg); break;
				case 3: Dset2Dtbl(DoubleArayAvg, i, j, hAvg); break;
				case 4: Dset2Dtbl(DoubleArayAvg, i, j, geAvg); break;
				case 5: Dset2Dtbl(DoubleArayAvg, i, j, gAvg); break;
				case 6: Dset2Dtbl(DoubleArayAvg, i, j, mo); break;
				default:
					break;
				}
			}
		}
	}

	// sortaroume me fthinousa timi me vasi to column (dn doulevei kala gia clmn mikrotero tou max clm)
	void sortArayBasedClmn(double** aray,int apoRow, int mexriRow,int clmNoSwap) {
		
		double maxTimi = LDBL_MIN;
		double sv(0);
		 int diktis(0);
		while (apoRow<mexriRow) {
			for (int row = apoRow; row< mexriRow; row++) {
				for (int clm = clmNoSwap; clm < clmNoSwap+1; clm++) {

					//psaxe to mgisto
					if (aray[row][clm] > maxTimi) {
						maxTimi = aray[row][clm];
						diktis = row;
					}
				}
			}
			//swaping values
			for (int row = diktis; row<diktis + 1; row++) {
				for (int clm = clmNoSwap; clm >= 0; clm--) {

					sv = aray[row - row + apoRow][clm];
					aray[row - row + apoRow][clm] = aray[row][clm];
					aray[row][clm] = sv;
				}
			}
			apoRow++;
			maxTimi = LDBL_MIN;
		}

	}

	//sortarisma me vasi to id  vriskei ta id tiy pinaka vatmwn se pio index einai kai kanei sort me tin idia seira ston pinaka students
	void sortBasedId(string** Saray, double** Daray,int apoSclm,int mexriSclm) {
		string l(" ");
		double tras(0);
		char s1[] = { " " };
		int k(0);
		int point(0);
		int cnt(0);
		for (int i = 0; i < 5; i++) {
			
			while (k < 5) {
				l = Saray[k][0];

				strcpy_s(s1, l.c_str());
				tras = atof(s1);
				if (tras == Daray[i][0]) {
					

					point = k;
					k = 0;
					break;
				}
					k++;
			}
			for (int g = point; g < point + 1; g++) {
				if (g == i)continue;
				for (int j = apoSclm; j < mexriSclm; j++) {
					Saray[g][j].swap(Saray[i][j]);
				}
			}

			}


		}

	//teliki ektipwsi me vasi tin askisi
	void prtFinal(string** Saray, double** Daray, int rowFrom, int rowUpto, int SclmFrom, int SclmUpto,  int DclmFrom, int DclmUpto,int precis) {
		string aray[] = { "EPWNYMO","ONOMA","MATHIMATIKA","GLWSSA","ISTORIA","GEWMETRIA","GEWGRAFIA","M.O" };
		for (int t = 0; t < 8; t++) {
			cout.width(15);
			cout << aray[t];
		}
		cout << endl;
		cout << endl;
		int cnt(SclmFrom);
		for (int i = rowFrom, o = rowFrom; i < rowUpto && o < rowUpto; i++, o++) {
				while (cnt < SclmUpto) {
					cout.width(15);
					cout << Saray[i][cnt++];
				}
			cnt = DclmFrom;
				while (cnt < DclmUpto) {
					cout.width(15);
					cout.precision(precis);
					cout << Daray[o][cnt++];
				}
			cout << endl;
			cout << endl;
			cnt = SclmFrom;
		}
		cout << endl;
		cout << endl;
	}
	
}