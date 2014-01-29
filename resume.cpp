/** 
* Author:       Robert Joseph Skelton
* Email:        robertjskelton@gmail.com
* Phone:		(931)307-9722
* Address: 		332 W. Glenn Ave, Unit E Auburn, Alabama 36830 
*/

#include <string>
#include <iostream>
using namespace std;

int main() {
	/* EDUCATION */
	string university = "Auburn University | Auburn, AL";
	string degree = "Bachelor of Electrical Engineering, Computer Engineering Option";
	double GPA = 3.45;
	const double maxGPA = 4.00;
	string classification = "Senior";
	int numOfHours = 110;

	/* EXPERIENCE */
	string coopJob = "VT Miltope | Hope Hull, AL";
	string coopTitle = "Test Engineering Co-op";
	string yearsWorkedCoop = "August 2011- May 2013, three semesters";
	string tasks1 = "Developed understanding of the manufacturing process and business tactics.";
	string tasks2 = "Tested and troubleshot many computer components, including but not limited to: motherboards, displays, keyboards, RAM, bezels, power supplies, I/O ports, and disc drives.";
	string tasks3 = "Changed hardware and improved computer components when necessary.";

	string highSchoolJob = "Duck River Utility Commission | Tullahoma, TN";
	string highSchoolJobTitle = "Maintenance ";
	string yearsWorkedHighSchool = "2008 - 2010, Summers only";
	string tasks4 = "Cleaned, mowed grass, moved equipment, and regular upkeep of many water filtration machines."; 

	/* SKILLS */
	cout << "Operating systems knowledge includes installing and maintaining: Mac OS X, Windows XP, Vista, 7 and many Linux distributions." << endl;
	cout << "Software knowledge: VMware/VirtualBox, bash, Office." << endl;
	cout << "Android knowledge: rooting, installing custom ROMs, backups, organization of the file system." << endl;
	cout << "Building computers, troubleshooting and replacing hardware components." << endl;
	cout << "Intermediate Java and C++ knowledge. 		 Github: github.com/robertjskelton" << endl;
	cout << "Basic HTML, CSS, and WordPress knowledge. 	 Website: robertjskelton.com" << endl;
	cout << "Basic circuits and hardware design knowledge." << endl;
	cout << "Basic knowledge of SPICE Software: Multisim and PSpice" << endl;

	/* ACHIEVEMENTS AND INVOLVEMENTS */
	cout << "IEEE - Auburn University (2010-2014), Director of Communications (2013-2014)" << endl;
	cout << "Created and maintained an IEEE website and Facebook page." << endl;
	cout << "Linux Club Founder/President - Auburn University (2013-2014)" << endl;
	cout << "Student Projects and Research Committee (SPaRC) - Auburn University (2012-2014)" << endl;
	cout << "Auburn University Presidential Scholarship (2010-2014)" << endl;
	cout << "TVA Power Distributors Scholarship (2010)" << endl;
	cout << "Auburn University Dean’s List" << endl;
	cout << "Eta Kappa Nu Electrical Engineering Honor Society Member (2013-2014)" << endl;
	cout << "Best Serving Alabama Award in America’s Datafest Hackathon at Auburn University for Simulated Hurricane Migration Visualization website (on Github)." << endl;
}
