
// Base NetCopter header
#include "../netcopter.h"

// Modules
#include "Module/testmotor/ModuleTestMotorControl.h"

// Initialize NetCopter
NetCopter netCopter;

// Initialize modules
ModuleTestMotorControl moduleTestMotorControl;

void setup() {
    netCopter.loadModule(moduleTestMotorControl);
}

void loop() {
}

// This isn't actually Arduino :P
int main() { setup(); while (1) { loop(); } }
