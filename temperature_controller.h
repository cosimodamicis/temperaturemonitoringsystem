#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

// Structure representing Temperature Controller (Encapsulation)
struct TemperatureController {
    float setTemperature;
    float currentTemperature;
};

// Function prototypes for temperature controller
struct TemperatureController* createController(float setTemperature);
void updateTemperature(struct TemperatureController* controller);
void displayTemperature(const struct TemperatureController* controller);
void destroyController(struct TemperatureController* controller);

#endif
