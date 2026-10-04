#include <iostream>
#include <vector>

using namespace std;

class Hack {
    
    public:
    
    void User1() {
        cout << "Call" << endl;
    }
};

class Nomal: public Hack {
    
    public:
    
    Nomal() {
        cout << "constructor" << endl;
    }

   ~Nomal() {
       cout << "Destructor" << endl;
   }

    int Hell[3] = {0x22, 0x55, 0x66};
    
    vector<int>Night;
    
    void Holly() {
   
    Night.push_back(33);
    Night.push_back(44);

        for (int i = 0; i < Night.size(); i++) {
            cout << Night[i] << endl;
        }
    }
private:
int Hunny = 777;
};

int main() {
    
    Nomal m;
    
    for (int i = 0; i < 3; i++){ 
        cout << i << endl;
    }
   if (m.Hell[1] >= m.Hell[2]) {
       cout << m.Hell[2] << endl;
   }
   m.Holly();
   m.User1();
   
   
   return 0;
}