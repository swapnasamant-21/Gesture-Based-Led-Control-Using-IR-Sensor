#define ir_left 18
#define ir_right 19
//#define green 22
//#define red 21

int red = 0;
int green = 0;
int count = 0;
void setup() 
{
  pinMode(ir_left,INPUT);
  pinMode(ir_right,INPUT);
  pinMode(22,OUTPUT);
  pinMode(21,OUTPUT);
}

void loop() {
  int x = digitalRead(ir_left);
  int y = digitalRead(ir_right);
  while(x == LOW && y == LOW)
  {
    digitalWrite(21,LOW);
    digitalWrite(22,LOW);
   x = digitalRead(ir_left);
   y = digitalRead(ir_right);
  
  if(x == HIGH && y==LOW)
  {
    red=!red;
    digitalWrite(21,red);
    digitalWrite(22,LOW);

   delay(500);
  }
  if(y == HIGH && x==LOW)
  {
   green=!green;
   digitalWrite(22,green); 
   digitalWrite(21,LOW);

   delay(500);
   }  
 }
}
