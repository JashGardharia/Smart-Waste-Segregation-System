#include <AccelStepper.h>

const int inductivePin = D5;
const int moisturePin = A0;

const int IN1 = D1;
const int IN2 = D2;
const int IN3 = D3;
const int IN4 = D4;

AccelStepper stepper(AccelStepper::FULL4WIRE, IN1, IN3, IN2, IN4);

const int metalPosition = 0;
const int wetPosition = 800;
const int dryPosition = 1600;

const int moistureThreshold = 600;

unsigned long lastDetection = 0;
unsigned long detectionDelay = 2000;

bool systemReady = true;

void moveToPosition(int target)
{
stepper.moveTo(target);

while(stepper.distanceToGo() != 0)
{
stepper.run();
}
}

bool detectMetal()
{
int state = digitalRead(inductivePin);

if(state == LOW)
{
return true;
}

return false;
}

bool detectWet()
{
int value = analogRead(moisturePin);

if(value < moistureThreshold)
{
return true;
}

return false;
}

void processWaste()
{
bool metal = detectMetal();

if(metal)
{
moveToPosition(metalPosition);
delay(1000);
return;
}

bool wet = detectWet();

if(wet)
{
moveToPosition(wetPosition);
delay(1000);
return;
}

moveToPosition(dryPosition);
delay(1000);
}

void setup()
{
pinMode(inductivePin, INPUT);

stepper.setMaxSpeed(900);
stepper.setAcceleration(600);

moveToPosition(metalPosition);
}

void loop()
{
unsigned long currentTime = millis();

if(systemReady)
{
if(currentTime - lastDetection > detectionDelay)
{
systemReady = false;

processWaste();

lastDetection = millis();

systemReady = true;
}
}
}
