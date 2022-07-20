int readVal; //declare variable to read
int j;  //declare variable for the loop

void setup() {
  Serial.begin(115200); //begin serial monitor
  pinMode(A1, INPUT); //Analog pin A1 is active and will be for input
  analogReference(EXTERNAL);  //we want to use an xternal reference voltage

  for (j=0; j <= 420; j++)  //for loop to read data from pin A1 420 times
  {
    readVal= analogRead(A1);  //reads data from pin A1
    delayMicroseconds(1); //delay time in microseconds
    Serial.println(readVal);  //prints the data on the screen
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
