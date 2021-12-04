// Written by Travis Schauer
// 11/6/20

#include <iostream>
#include <iomanip>

using namespace std;

void HeadingReciprocal(float &heading) {
    int reciprocal;

    cout << "\n0 returns to main menu." << endl;
    cout << "Enter heading: " << endl;
    cin >> heading;

    reciprocal = heading + 180;

    if (reciprocal > 360) {
        reciprocal = reciprocal - 360;
    }

    cout << "Reciprocal: " << reciprocal << endl;

}

void NmToKm(float &nm) {
    float km;

    cout << "\n0 returns to main menu." << endl;
    cout << "Enter NM: " << endl;
    cin >> nm;

    km = nm * 1.852;

    cout << km << " KM" << endl;
}

void KphToKts(float &kph) {
    float kts;

    cout << "\n0 returns to main menu." << endl;
    cout << "Enter KPH: " << endl;
    cin >> kph;

    kts = kph / 1.852;

    cout << kts << " KTS" << endl;
}

void MetersToFeet(float &meters) {
    float feet;

    cout << "\n0 returns to main menu." << endl;
    cout << "Enter METERS: " << endl;
    cin >> meters;

    feet = meters * 3.281;

    cout << feet << " feet" << endl;
}

void DmsToDd() {
    float degrees, minutes, seconds, dd;

    cout << "\nEnter Degrees (*), then minutes ('), and then seconds('')" << endl;
    cout << " IE: 30 15 50" << endl;
    cin >> degrees;
    cin >> minutes;
    cin >> seconds;

    dd = degrees + (minutes / 60) + (seconds / 3600);

    cout << dd << " degrees" << endl;
}

void MainMenu(int &type) {
    float nm = -1, heading = -1, kph = -1, meters = -1;

    cout << "Type the integer corresponding to the function:" << endl;
    cout << "0: Exits Program" << endl;
    cout << "1: Heading Reciprocal" << endl;
    cout << "2: NM ---> KM" << endl;
    cout << "3: KPH ---> KTS" << endl;
    cout << "4: Meters ---> Feet" << endl;
    cout << "5: DMS ---> DD" << endl;
    cin >> type;

    if (type == 1) {

        while (heading != 0) {
            HeadingReciprocal(heading);
        }

    } else if (type == 2) {

        while (nm != 0) {
            NmToKm(nm);
        }

    } else if (type == 0) {
        cout << "Exiting program..." << endl;
    } else if (type == 3) {

        while (kph != 0) {
            KphToKts(kph);
        }

    } else if (type == 4) {

        while (meters != 0) {
            MetersToFeet(meters);
        }
    }
    else if (type == 5) {
            DmsToDd();
    } else {
        cout << "Invalid value" << endl;
    }

    cout << " " << endl;
}

int main() {
    int type = -1;

    while (type != 0) {
        MainMenu(type);
    }
    
    //cout << " " << endl;
    //system("pause");

    return 0;
}
