# include <Servo.h>
Servo myservo1;
Servo myservo2;

// int t = 0;


void setup() {
  // put your setup code here, to run once:
myservo1.attach(9);
myservo2.attach(10);
}

void loop() {
  // Motor Loop
  // int res = 5;
  // for (t = 0; t<=188*res; t+=1){
  //   myservo1.write(90+90*sin(.1*t/res));
  //   myservo2.write(90+90*cos(.1*t/res));
  //   delay(45/res);
  // // }
  double period = .5; //seconds
  int res = 200; //samples per cycle
  double mag = 1; //between 0 and 1 -> 0 to 90 deg
  double phi1 = 0;
  double phi2= 0;
  for(double t=0; t<2*PI; t+=2*PI/res){
    myservo1.write(90+mag*90*sin(t-phi1));
    myservo2.write(90+mag*90*cos(t-phi2));
    delay(1000*period/res); //period = res*delay (units are ms)
  }
}
