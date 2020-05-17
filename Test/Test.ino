String A = "Green";
String B = "Green";
String C = "Green";
String D = "Green";
String E = "Green";
String F = "Green";
String G = "Green";
String H = "Green";
String I = "Green";
String J = "Green";

void setup(){
    char position = '0';
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
    Serial.println("Status = " + A);
    Serial.println("- V/S นน. ความดัน");
    Serial.println("- Exq,ABI,inbody");

    Serial.println("Status = " + B);
    Serial.println("- X-ray");
    Serial.println("X-ray ปอด");

    Serial.println("Status = " + C);
    Serial.println("หัวใจ Heart");
    
    Serial.println("Status = " + D);
    Serial.println("Fibro scan");

    Serial.println("Status = " + E);
    Serial.println("CYN");

    Serial.println("Status = " + F);
    Serial.println("Dietitian");

    Serial.println("Status = " + G);
    Serial.println("Eye");

    Serial.println("Status = " + H);
    Serial.println("ENT");

    Serial.println("----------------------------------------------");

    Serial.println("What is your position code : ");

}

void loop(){
    if (Serial.available() > 0) { //เมื่อมีข้อมูลส่งมาทาง Serial ให้ทำ...
        position = Serial.read(); //อ่านค่ามาไว้ในตัวแปร key
        function(position);
        

    }

    if(digitalRead(2) == 0){

    }

}

void String function(A){

}