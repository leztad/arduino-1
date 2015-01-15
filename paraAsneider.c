int led = 12;
int leda = 13;
int led2 = 4;
int ledb = 8;
int magnetico=2;
int magnetico2=3;

void setup() 
{ 
  Serial.begin(9600);
pinMode(magnetico, OUTPUT); 
pinMode(magnetico2, OUTPUT);
 
pinMode(leda, OUTPUT); 
pinMode(ledb, OUTPUT);
} 
void loop() 
{
  


Serial.print(digitalRead(led));

Serial.print(" ");
Serial.print(digitalRead(led2));
Serial.print("\n");

//digitalWrite(leda, LOW);
//digitalWrite(ledb, LOW);

if (digitalRead(led)==HIGH){
   digitalWrite(ledb, LOW);
   digitalWrite(leda, HIGH);
}

if (digitalRead(led2)==HIGH){ 
  digitalWrite(leda, LOW);
  digitalWrite(ledb, HIGH); 
}
     
if (digitalRead(magnetico)==HIGH){
       
        digitalWrite(led2, LOW);
        
      }else if (digitalRead(magnetico)==LOW){ 
        
        digitalWrite(led, LOW); 
     }else{
     
     
     }

/*
   if (digitalRead(magnetico)==HIGH){
       
        digitalWrite(led, LOW);
      
      }

  if (digitalRead(magnetico2)==HIGH){
       
        digitalWrite(led2, LOW);
  
      
      }


*/

}


