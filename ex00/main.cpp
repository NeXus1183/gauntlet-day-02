#include <iostream>
struct Enemy { int hp = 100; };

int fight(bool flee){
    Enemy* e = new Enemy();
    int result = 0;
    if (flee) 
    {
        result = -1;     
    }
    else
    {
        result = e->hp;
    }
    delete e;
    return result;
}
int main(){
    std::cout << fight(false) << ' ' << fight(true) << '\n';
}