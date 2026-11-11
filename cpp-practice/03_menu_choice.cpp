#include <iostream>
#include <vector>

using namespace std;
// 코드 실행할려면 설명글 지우고 실행해주세요
class Song {
    
    public:
    
    int choice;   // 설정에 초이스를 넣고
    int n;
    int e;
    
   int Morning[4] = {0x22, 0x33, 0x55, 0x66};
    
    
    void Honda() {
        
        cout << "1번, 2번, 3번, 4번. 골라요" << endl;
        cin >> n;
        cin >> choice;  // 받는 초이스를 안넣어 첫번째 에러 발견해 수정
        
        for (int i = 0; i < 4; i++) {
            
            if (0 == e) {
                break;
            }
        }
    }

       void Yuol() {
        
        if (choice == 1) {
        cout << "1번!! 0x22" << endl;
        
    }else if (choice == 2) {
         cout << "2번!! 0x33" << endl;
         
    }else if(choice == 3) {
        cout << "3번!! 0x55" << endl;
     
    }else if(choice == 4) {
        cout << "4번!! 0x66" << endl;
    
        }else {  // else 를 if 마다 넣어서 끝에 하나로 만듬
            cout << "잘못됫어" << endl;
      }   
            
 }  // 중활고를 덜 닫아 오류를 내서 수정 중괄호 닫기
 void Bector() {
     
     vector<int>Fector;
     
     Fector.push_back(1000);
     Fector.push_back(3000);
     
     for (int i = 0; i < 2; i++) {
         cout << Fector[i] << endl;
     }
 }
        
};

int main() {
    
    Song m;
    
    m.Honda();
    m.Yuol();
    m.Bector();
    
    return 0;
}
