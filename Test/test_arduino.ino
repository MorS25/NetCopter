
#include "../netcopter.h"

// Initialize NetCopter
NetCopter copter();



void setup() {
    copter.load();
}

void loop() {
}

// This isn't actually Arduino :P
int main() { setup(); while (1) { loop(); } }
