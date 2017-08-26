# SteeringWheelControl

Arduino project for controlling music over bluetooth using exsisting steering wheel buttons. This is accomplished by cutting the wires from the radio to the steering wheel. The arduino attaches to the wheel side buttons (which are a set of resistors), while another pack of resistors and switches (controlled by the arduino) is attached to the radio side. This allows the wheel buttons to still control the radio. In addition to reading from the wheel and controlling the resistor pack, the arduino also controls three switches soldered onto a commercial bluetooth receiver plugged into the cars aux port. This allows fwd, rwd, and play/pause control of a phone connected to the bluetooth reciever.

The knowledge gained in the project allowed the LidarCruise project to become a reality. The cruise control wiring basics are the same as the radio control. From this, I already knew how to read and write to and from steering wheel controls.
