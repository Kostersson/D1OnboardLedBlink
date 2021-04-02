# Common function to blink D1 mini onboard led

Remember to set onboard led pin mode as output in setup hook.

``pinMode(BUILTIN_LED, OUTPUT); // initialize onboard LED as output``

## Function
```void blinkLed(int delayInMs)```