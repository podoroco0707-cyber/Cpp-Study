#include <iostream>
#include <vector>

using namespace std;

class Chun {
    
    public:
    
    void woang() {
        cout << "Call" << endl;
    }
};

class Phon: public Chun {
    
    public:
    
    int Apple[2] = {0x33, 0x90};
    
    Phon() {
        cout << "1chans" << endl;
    }

    ~Phon() {
        cout << "2chans" << endl;
    }
    
    vector<int>You;
    
    void Your() {
    
    You.push_back(22);
    You.push_back(33);
     
    for (int i = 0; i < You.size(); i++){ 
        cout << You[i] << endl;
    }
    }
    private:
    int Son = 111;
    };
    int main() {
        
        Phon m;
        
        m.woang();
        m.Your();
        
        return 0;
    }
    
