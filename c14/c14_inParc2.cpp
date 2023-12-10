#include <iostream>
using namespace std;

class Computer {
    public:
    int CPU, RAM, Storage;
    Computer(int c, int r, int s) {
        CPU = c;
        RAM = r;
        Storage = s;
    }

    string getComputerSpec() {
        string cpuSpec = "CPU: " + to_string(CPU) + " GHz";
        string ramSpec = "RAM: " + to_string(RAM) + " MB";
        string stoSpec = "Storage: " + to_string(Storage) + " GB";
        string spec = cpuSpec + "\n" + ramSpec + "\n" + stoSpec;
        return spec;
    }
    string getSpec() {
        return getComputerSpec();
    }
    void printSpec() {
        cout << getSpec() << endl;
    }
};

class Phone : public Computer {
    public:
    string Network, Number;
    Phone(int c, int r, int s, string n, string p) : Computer(c, r, s) {
        Network = n;
        Number = p;
    }
    void Call(string destNum) {
        cout << "Calling.. " << destNum << endl;
    }

    string getPhoneSpec() {
        string netProv = "Network: " + Network;
        string phoNumb = "Number: " + Number;
        string spec = getComputerSpec() + "\n" + netProv + "\n" + phoNumb;
        return spec;
    }
    string getSpec() {
        return getPhoneSpec();
    }
    void printSpec() {
        cout << getSpec() << endl;
    }
};

class SmartPhone : public Phone {
    public:
    int Camera, Battery;
    SmartPhone(int c, int r, int s, string n, string p, int ca, int b) : Phone(c, r, s, n, p) {
        Camera = ca;
        Battery = b;
    }

    string getSmartPhoneSpec() {
        string camPixl = "Camera: " + to_string(Camera) + " MegaPixels";
        string battCap = "Battery: " + to_string(Battery) + "mAh";
        string spec = getPhoneSpec() + "\n" + camPixl + "\n" + battCap;
        return spec;
    }

    string getSpec() {
        return getSmartPhoneSpec();
    }
    void printSpec() {
        cout << getSpec() << endl;
    }
};

int main(){
    SmartPhone myPhone(10, 16384, 1024, "Rogers", "289-577-7437", 11, 11000);
    myPhone.printSpec();
    myPhone.Call("289-577-7433");
}
