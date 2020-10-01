/*
4x4x4 LED Cube
Connection Setup: 
 Columns
  [(x,y)-Pin] 
 (1,1)-13
 (1,2)-12 
 (1,3)-11
 (1,4)-10
 (2,1)-9  
 (2,2)-8  
 (2,3)-7
 (2,4)-6
 (3,1)-5 
 (3,2)-4 
 (3,3)-3 
 (3,4)-2
 (4,1)-1 
 (4,2)-0 
 (4,3)-A5 
 (4,4)-A4
 Layers
 [layer-Pin] 
 a-A0  
b-A1 
c-A2 
d-A3
*/
//initializing and declaring led rows
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0, A5,A4};
//initializing and declaring led layers
  int layer[4]={A0,A1,A2,A3};

 
void setup()
{
  //setting rows to ouput
  for(int i = 0; i<16; i++)
  {
    pinMode(column[i], OUTPUT);
  }
  //setting layers to output
  for(int i = 0; i<4; i++)
  {
    pinMode(layer[i], OUTPUT);
  }
}
void loop()
{
  turnOff();//turn all off
  turnOn();//turn all on
  rowlayerwiseflickering();// function to blink led rowwise
  columnlayerwiseflickering();//function to blink led columnwise
  propeller();//function to blink led in propeller pattern
  }
// Functions

void turnOff() // turn off
 {
   for(int i = 0; i<16; i++)
   {
     digitalWrite(column[i], 1);
   }
   for(int i = 0; i<4; i++)
   {
     digitalWrite(layer[i], 0);
   }
 }
 
void turnOn() //turn on
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  //turning on layers
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}

void rowlayerwiseflickering()

  {
      for(int i = 0; i<4; i++)
    {
      digitalWrite(layer[i],1 );
      delay(100);
    }
      for(int i = 4; i>0; i--)
    {
      digitalWrite(layer[i], 0);
      delay(100);
    }
      for(int i=0;i<4;i++)
    {
      digitalWrite(layer[i],1 );
      delay(100);
    }
      for(int i = 4; i>0; i--)
    {
      digitalWrite(layer[i], 0);
      delay(100);
    }
for(int i = 0; i<4; i++)
    {
      digitalWrite(layer[i],1 );
      delay(100);
    }
      for(int i = 4; i>0; i--)
    {
      digitalWrite(layer[i], 0);
      delay(100);
    }

}

void columnlayerwiseflickering()
{
    for(int i = 0; i<4; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
    for(int i = 4; i<8; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
    for(int i = 8; i<12; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
    for(int i = 12; i<16; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
   }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
    for(int i = 4; i<8; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
    for(int i = 8; i<12; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
    for(int i = 12; i<16; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
     for(int i = 12; i<16; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
    for(int i = 8; i<12; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
   for(int i = 4; i<8; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
   for(int i = 0; i<4; i++)
    {
      digitalWrite(column[i], 1);
      delay(100);
    }
   for(int i = 12; i<16; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
     for(int i = 8; i<12; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
    for(int i = 4; i<8; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(column[i], 0);
      delay(100);
    }
  }
void propeller()
{
  for(int i = 0; i<4; i++)
    {
      
      digitalWrite(column[0], 1);
      digitalWrite(column[5], 1);
      digitalWrite(column[10], 1);
      digitalWrite(column[15], 1);
      delay(100);

      
      digitalWrite(column[4], 1);
      digitalWrite(column[5], 1);
      digitalWrite(column[10], 1);
      digitalWrite(column[11], 1);
      delay(100);
     
      
      digitalWrite(column[6], 1);
      digitalWrite(column[7], 1);
      digitalWrite(column[8], 1);
      digitalWrite(column[9], 1);
      delay(100);
      
      
      digitalWrite(column[3], 1);
      digitalWrite(column[6], 1);
      digitalWrite(column[9], 1);
      digitalWrite(column[12], 1);
      delay(100);
      
      
      digitalWrite(column[2], 1);
      digitalWrite(column[6], 1);
      digitalWrite(column[9], 1);
      digitalWrite(column[13], 1);
      delay(100);
      
      
      digitalWrite(column[1], 1);
      digitalWrite(column[5], 1);
      digitalWrite(column[10], 1);
      digitalWrite(column[14], 1);
      delay(100);
    }
  }
