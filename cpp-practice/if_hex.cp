#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Newbe {
    
    public:
    
    int Ting[3] = {0x33, 0x55, 0x77};
    
    void Ding() {
        
        for (int i = 0; i < 3; i++) {
            cout << i << endl;
        
            if (Ting[i] <= 0x77) {
                cout << hex << Ting[i] << endl;
            }
        }
    }
};
// if 안 부등호 방식 원리 가 많이 해깔리기 쉽다 난 아직도 해깔린다
// if (Ting[i] < 0x77) 일때 고정값이 더큰가? 할땐 고정값 제외한 아래 값 들이 출력된다
// if (Ting[i] <= 0x77) 일때 변수보다 고정값이 크고 같은가? 일때 고정값 부터 그 아래 값을이 다 나온다 
// 하나더 알아낸건 if 출력이다 hex 라는게 16진법이라는것이다. 외에 10진법 8진법 2진법 단어도 알게됬다
int main() {
    
    Newbe m;
    
    m.Ding();
    
    return 0;
}
