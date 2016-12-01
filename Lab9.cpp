#include <iostream>
#include <string>
#include<math.h>
 
using namespace std;
 
int main()
{
	while(true) {
	string equation;
	int degree;
	int A;
	int B;
	int C;
	int D;


	/*cout<<"Please enter equation:"<<endl;
	cin.ignore();
	getline (cin,equation);*/

	cout<<"Please enter degree of your equation from 1 or 2 or 3:"<<endl;
	cin >> degree;

			
	switch ( degree ) {
		case 1:

			cout << "Your equation will be entered in the form Ax + B = 0"<<endl;
			cout << "Enter A"<<endl;
			cin >> A;
			cout << "Enter B"<<endl;
			cin >> B;
			cout << "Equation you entered is: " <<endl;
			cout << A << "x + " << B << " = 0 \n" <<endl;

			int X;

			cout << "Solution:" <<endl;
			cout << A << "x = " << B <<endl;
			X = B/A;
			cout << "x = " << B << "/" << A << endl;
			cout << "x = " << X << "\n" <<endl;

		break;


		case 2:
			cout << "Your equation will be entered in the form Ax(^2) + Bx + C = 0"<<endl;
			cout << "Enter A"<<endl;
			cin >> A;
			cout << "Enter B"<<endl;
			cin >> B;
			cout << "Enter C"<<endl;
			cin >> C;
			cout << "Equation you entered is: " <<endl;
			cout << A << "x(^2) + " << B << "x + " << C << " = 0\n" <<endl;

			cout << "Solution:" <<endl;
			cout << "We are going to use Quadratic formula:" <<endl;
			cout << " x = [b +- root{b(^2) - 4ac}] / 2a \n" <<endl;

			cout << "Substituting values:"  <<endl;
			cout << " x = [" << B << "+- root{" << B << "(^2) - 4*" << A << "*" << C << "}] / 2*" << A <<endl;

			float E;
			float F;
			float G;
			float H;
			float I;
			float J;
			float rootf;

			E=pow(B,2);
			F = E - (4*A*C);

			cout << " x = [" << B << "+- root{" << F << "}] / 2*" << A <<endl;

			rootf = pow(F,0.5);
			cout << " x = [" << B << "+ (" << rootf << ")] / 2*" << A << "\tOR\tx = [" << B << "- (" << rootf << ")] / 2*" << A <<endl;

			G = B + rootf;
			H = B - rootf;

			cout << " x = " << G << " / 2*" << A << "\tOR\tx = " << G << " / 2*" << A <<endl;
			

			I = G / (2*A);
			J = H / (2*A);

			cout << "x = " << I << "\tOR\tx = " << J << endl;
			cout << "\n\n\n";


		break;
		

		case 3:

			cout << "Your equation will be entered in the form Ax(^3) + Bx(^2) + Cx + D = 0"<<endl;
			cout << "Enter A"<<endl;
			cin >> A;
			cout << "Enter B"<<endl;
			cin >> B;
			cout << "Enter C"<<endl;
			cin >> C;
			cout << "Enter D"<<endl;
			cin >> D;

			cout << "Equation you entered is: " <<endl;
			cout << A << "x(^3) + " << B << "x(^2) + " << C << "x + " << D << " = 0\n" <<endl;

		break;

		default:
			cout << "You have entered wrong degree, please enter again\n\n"<<endl;
		break;
	}






	}
system("PAUSE");

}
