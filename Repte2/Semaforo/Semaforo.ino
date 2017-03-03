/****************************************************************
**                 Sortides i entrades digitals                **
**                          TÏTOL: REPTE 2                     **
**                             PROGRAMA1                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:18/02/2017  **
****************************************************************/
//********************* VARIABLES *******************************
const int led0 = 9;
const int led1 = 8;
const int led2 = 7;
const int led3= 12;
const int led4= 11;
const int led5= 10;





//*********************** SETUP *********************************

void setup()  {
pinMode (led0, OUTPUT);
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);

}




//************************ LOOP *********************************
void loop() {
{
  delay(3000);
  
digitalWrite (led0, HIGH);   //1
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);

}

delay(3000);

{
digitalWrite (led0, HIGH);    //2
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, HIGH);

}
delay(3000);
{
digitalWrite (led0, HIGH);       //3
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, HIGH);
  
}
delay(3000);
{
digitalWrite (led0, HIGH);   //4
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, HIGH);

}
delay(3000);
{
  digitalWrite (led0, HIGH);    //5
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, HIGH);
}
delay(3000);
{
 digitalWrite (led0, HIGH);    //6
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, HIGH);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, HIGH);    //7
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, LOW);    //8
digitalWrite (led1, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, LOW);    //9
digitalWrite (led1, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, LOW);    //10
digitalWrite (led1, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, LOW);    //11
digitalWrite (led1, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, LOW);    //12
digitalWrite (led1, HIGH);
digitalWrite (led2, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
delay(3000);
{
  digitalWrite (led0, HIGH);    //12
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
}
}

      
//****************** FUNCIONS ***********************************


