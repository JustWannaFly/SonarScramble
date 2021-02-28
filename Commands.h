#pragma once

class Commands {
private:
    void initValues();
public:
	Commands();
    void reset();
	bool close;
    
    bool up;
    bool down;
    bool left;
    bool right;
};