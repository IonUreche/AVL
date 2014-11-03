// Author : Ion Ureche
// Year : 2014
// Topic : AVL, Balanced binary search tree
#include <fstream>
#include <conio.h>
#include <iostream>
#include <string>
#include "AVL.h"
using namespace std;

int main(){
	AVL<int> Arb;
	AVL<string> AS;
	AVL<double> AD;
	int N = 5, A, i;

	N = 30;

	int v[15] = { 1, 2, 3, 6, 5, 4, 9, 7, 8, 12, 10, 11, 15, 13, 14 };

	for (i = 0; i<15; ++i)
	{
		Arb.Insert(v[i]);
	}
	
	Arb.PrintInOrderTraversal(cout);
	cout << '\n';
	_getch();

	Arb.Delete(3);
	Arb.Delete(5);
	Arb.Delete(15);
	Arb.Delete(11);

	Arb.PrintInOrderTraversal(cout);

	cout << '\n';

	cout << "MAX = " << Arb.Max() << '\n';
	cout << "MIN = " << Arb.Min() << '\n';

	AS.Insert("abcsad");
	AS.Insert("rwabcfewsad");
	AS.Insert("faabcsad"); 
	AS.Insert("wrabcsad");
	AS.Insert("qeabcsad"); 
	AS.Insert("cqeabcsad");

	AS.PrintInOrderTraversal(cout);
	_getch();

	AD.Insert(3.14);
	AD.Insert(15.14);
	AD.Insert(1232143.14);
	AD.Insert(53.142124);
	AD.Insert(1233.144);

	cout << '\n';
	AD.PrintInOrderTraversal(cout);
	_getch();

	return 0;
}