/****************************************************************
**                  Sortides i entrades digitals               **
**                          TÏTOL: Repte 3                     **
**                            projecte 1                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:18/03/2017  **
****************************************************************/
//********************* VARIABLES *******************************
const int LedPinA = 5;
const int LedPinB = 6;
const int LedPinC = 7;
const int LedPinD = 8;
const int LedPinE = 9;
const int LedPinF = 10;
const int LedPinG = 11;



//*********************** SETUP *********************************

void setup()               // run once, when the sketch starts
 {
  pinMode(LedPinA, OUTPUT);
  pinMode(LedPinB, OUTPUT);
  pinMode(LedPinC, OUTPUT);
  pinMode(LedPinD, OUTPUT);
  pinMode(LedPinE, OUTPUT);
  pinMode(LedPinF, OUTPUT);
  pinMode(LedPinG, OUTPUT);
  
    
 }    

//************************ LOOP *********************************
void loop()         // we need this to be here even thought its empty  
{
  delay(1000);
    digitalWrite (LedPinA, HIGH);   // display marca 0 
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, HIGH);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, LOW);

    delay(1000);

    digitalWrite (LedPinA, LOW);    // display marca 1 
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, LOW);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, LOW);
    digitalWrite (LedPinG, LOW);

    delay(1000);

    digitalWrite (LedPinA, HIGH);     // display marca 2 
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, LOW);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, HIGH);
    digitalWrite (LedPinF, LOW);
    digitalWrite (LedPinG, HIGH);

    delay(1000);

    digitalWrite (LedPinA, HIGH);     // display marca 3 
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, LOW);
    digitalWrite (LedPinG, HIGH);

    delay(1000);

    digitalWrite (LedPinA, LOW);     // display marca 3 
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, LOW);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, HIGH);

    delay(1000);

    digitalWrite (LedPinA, HIGH);     // display marca 5 
    digitalWrite (LedPinB, LOW);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, HIGH);

        delay(1000);

    digitalWrite (LedPinA, HIGH);     // display marca 6 
    digitalWrite (LedPinB, LOW);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, HIGH);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, HIGH);

    delay(1000); 

       digitalWrite (LedPinA, HIGH);     // display marca 7
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, LOW);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, LOW);
    digitalWrite (LedPinG, LOW);

    delay(1000);


        digitalWrite (LedPinA, HIGH);     // display marca 8
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, HIGH);
    digitalWrite (LedPinE, HIGH);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, HIGH);

    delay(1000);

       digitalWrite (LedPinA, HIGH);     // display marca 9
    digitalWrite (LedPinB, HIGH);
    digitalWrite (LedPinC, HIGH);
    digitalWrite (LedPinD, LOW);
    digitalWrite (LedPinE, LOW);
    digitalWrite (LedPinF, HIGH);
    digitalWrite (LedPinG, HIGH);


    
}






//****************** FUNCIONS ***********************************


