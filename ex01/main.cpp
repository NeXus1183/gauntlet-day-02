#include <iostream>
#include "Owned.hpp"

//Uncomment other fight and struct for other implementation

/*struct Enemy { int hp = 100; };*/

int fight(bool flee){
    Owned e;
    int result = 0;
    if (flee) 
    {
        result = -1;     
    }
    else
    {
        result = e.hp();
    }
    return result;
}

/*int fight(bool flee){
    Enemy newEnemy;
    Owned e = new Owned(newEnemy);
    int result = 0;
    if (flee) 
    {
        result = -1;     
    }
    else
    {
        result = e->m;
    }
    delete e;
    return result;
}*/
int main(){
    std::cout << fight(false) << ' ' << fight(true) << '\n';
}