#include <stdio.h>
#include "sensor_module.h"
#include "temperature_controller.h"

int main() {
    struct TemperatureController* controller = createController(26.0);

    // Update and display temperature using abstraction and encapsulation
    updateTemperature(controller);
    displayTemperature(controller);

    // Cleanup
    destroyController(controller);

    return 0;
}
