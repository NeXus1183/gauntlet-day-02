#include <iostream>
#include <memory>

struct Enemy { int hp = 100; };

int fight(bool flee){
    auto e = std::make_unique<Enemy>();
    Enemy* observer = e.get();
    int result = 0;
    if (flee) 
    {
        result = -1;     
    }
    else
    {
        result = observer->hp;
    }
    return result;
}

int main(){
    std::cout << fight(false) << ' ' << fight(true) << '\n';
}