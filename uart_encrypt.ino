String plainText = "HELLO World"; 
String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
String key =      "FGHIJKLMYNOABCEPQDWXRSTUVZ";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  plainText.toUpperCase();
}

String encrypt(String plainText);

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(plainText);
  String en = encrypt(plainText);
  Serial.println(en);
  delay(1000);
}

String encrypt(String plainText)
{
  String cipherText=""; 
  for (int i=0; i<plainText.length(); i++){
    char c = plainText[i];
    Serial.println(c);
    if ((int(c)<65||int(c)>90)  ) {
      cipherText+=c;
      continue;
    }else{
      for(int j=0; j<26; i++){
        if(c == alphabet[j]){
          cipherText += key[j];
          Serial.println(cipherText);
          continue;
        }
      }
    }
    
  }
  return cipherText;
}
