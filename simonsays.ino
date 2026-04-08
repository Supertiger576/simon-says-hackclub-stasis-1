// might not work yet
int button1 = D0;
int button2 = D1;
int button3 = D2;
int button4 = D8;
int LED1 = D3;
int LED2 = D4;
int LED3 = D5;
int LED4 = D7;
int numberslist[100];
int numberslistlength = 0;
bool failed = false;
void setup() {

pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(button3, INPUT_PULLUP);
pinMode(button4, INPUT_PULLUP);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
randomSeed(analogRead(A0));

}

void loop() {
    if (digitalRead(button1) == LOW) {
        delay(3000);
        if (digitalRead(button1) == LOW) {
            while(digitalRead(button1) == LOW) {
                1+1;
            }
            while(true) {
                if(failed){
                    numberslistlength = 0;
                    failed = false;
                    break;
                }
                if (numberslistlength >= 99) {
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,HIGH);
                    delay(10000);
                    break;
                }
                    int r = random(1, 5);
                    numberslist[numberslistlength] = r;
                    numberslistlength +=1;
                    for (int i=0; i<numberslistlength; i++) {

                        if ((numberslist[i]) == 1) {
                            digitalWrite(LED1,HIGH);
                            delay(500);
                            digitalWrite(LED1,LOW);
                        }
                        else if ((numberslist[i]) == 2) {
                            digitalWrite(LED2,HIGH);
                            delay(500);
                            digitalWrite(LED2,LOW);
                        }
                        else if ((numberslist[i]) == 3) {
                            digitalWrite(LED3,HIGH);
                            delay(500);
                            digitalWrite(LED3,LOW);
                        }
                        else if ((numberslist[i]) == 4) {
                            digitalWrite(LED4,HIGH);
                            delay(500);
                            digitalWrite(LED4,LOW);
                        }
                    delay(100);
                    }
                    delay(100);
                        if(failed){
                            numberslistlength = 0;
                            failed = false;
                            break;
                        }
                        for (int i=0; i<numberslistlength; i++) {
                            while(digitalRead(button1)==HIGH && digitalRead(button2)==HIGH && digitalRead(button3)==HIGH && digitalRead(button4)==HIGH){
                                1+1;
                            }
                            if(digitalRead(button1) == LOW) {
                                if (numberslist[i] == 1) {
                                    while(digitalRead(button1) == LOW) {
                                        1+1;
                                    }
                                }
                                else {
                                    failed = true;
                                    break;
                                }
                            }
                            else if(digitalRead(button2) == LOW) {
                                if (numberslist[i] == 2) {
                                    while(digitalRead(button2) == LOW) {
                                        1+1;
                                    }
                                }
                                else {
                                    failed = true;
                                    break;
                                }
                            }
                            else if(digitalRead(button3) == LOW) {
                                if (numberslist[i] == 3) {
                                    while(digitalRead(button3) == LOW) {
                                        1+1;
                                    }
                                }
                                else {
                                    failed = true;
                                    break;      
                                }
                            }
                            else if(digitalRead(button4) == LOW) {
                                if (numberslist[i] == 4 ){
                                    while(digitalRead(button4) == LOW) {
                                        1+1;
                                    }
                                }
                                else {
                                    failed = true;
                                    break;
                                }
        
                            }
                        } 
                        
                    }
                }
            }
        }
