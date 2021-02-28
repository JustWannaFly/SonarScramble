#include "stdafx.h"
#include "Commands.h"

Commands::Commands() {
    initValues();
}

void Commands::initValues() {
    close = false;

    up = false;
    down = false;
    right = false;
    left = false;
}

void Commands::reset() {
    initValues();
}