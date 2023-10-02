#include "temperature_controller.h"
#include "sensor_module.h"
#include <stdlib.h>

struct TemperatureController* createController(float setTemperature) {
    struct TemperatureController* controller = (struct TemperatureController*)malloc(sizeof(struct TemperatureController));
    if (controller != NULL) {
        controller->setTemperature = setTemperature;
        controller->currentTemperature = 0.0;
        initializeSensor();
    }
    return controller;
}

void updateTemperature(struct TemperatureController* controller) {
    // Read current temperature from sensor (encapsulated)
    controller->currentTemperature = readTemperature();
}

void displayTemperature(const struct TemperatureController* controller) {
    printf("Set Temperature: %.2f\n", controller->setTemperature);
    printf("Current Temperature: %.2f\n", controller->currentTemperature);
}

void destroyController(struct TemperatureController* controller) {
    free(controller);
}
