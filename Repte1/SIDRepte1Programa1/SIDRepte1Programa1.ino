/****************************************************************
**                 Sortides i entrades digitals                **
**                          TÏTOL: REPTE 1                     **
**                             PROGRAMA1                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:18/02/2017  **
****************************************************************/
//********************* VARIABLES *******************************
const int led0 = 12;
const int led1 = 11;
const int led2 = 10;
const int led3= 9;
const int led4= 8;
const int led5= 7;
const int led6= 6;
const int led7= 5;




//*********************** SETUP *********************************

void setup()  {
pinMode (led0, OUTPUT);
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);
pinMode (led6, OUTPUT);
pinMode (led7, OUTPUT);

}




//************************ LOOP *********************************
void loop() {
{
  delay(500);
  
digitalWrite (led0, HIGH);
digitalWrite (led1, HIGH);
digitalWrite (led2, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led4, HIGH);
digitalWrite (led5, HIGH);
digitalWrite (led6, HIGH);
digitalWrite (led7, HIGH);
}

delay(500);

{
digitalWrite (led0, LOW);
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
digitalWrite (led6, LOW);
digitalWrite (led7, LOW);
}
}
      
//****************** FUNCIONS ***********************************


