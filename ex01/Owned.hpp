#pragma once

//Comment out struct and uncomment commented lines for other implementation
struct Enemy { int hp = 100; };

class Owned {
public:
    //explicit Owned(Enemy newEnemy) : m_enemy(newEnemy);
    Owned() : m_enemy(new Enemy){}
    ~Owned () {delete m_enemy;}
    Owned (const Owned&) = delete;
    Owned& operator=(const Enemy&) = delete;
    int hp() const;
private:
    Enemy* m_enemy;
};