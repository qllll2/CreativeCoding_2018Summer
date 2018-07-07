import processing.serial.*;
Serial myPort;
int valr;
void setup(){
 size(800, 800);

  background(0);
  myPort= new Serial(this,"com3",9600);
}
void draw(){
if(myPort.available()>0){
valr=myPort.read();
}
//println(valr);
  float ellipseX = random(800);

  float ellipseY = random(800);

  fill(random(255), random(255), valr, 300-valr);

  noStroke();

  float ellipseD = valr;

  ellipse(ellipseX, ellipseY, ellipseD, ellipseD);

}
