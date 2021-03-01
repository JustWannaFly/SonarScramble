#pragma once

class Commands {
private:
    void initValues();
public:
	Commands();
    void reset();
	bool close = false;
    
    bool up = false;
    bool down = false;
    bool left = false;
    bool right = false;
};