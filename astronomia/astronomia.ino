int led = 10; //Define a porta do led 
int ldr = A0; //Define a porta do sensor ldr
int valorldr = 0;//Declara a variável como inteiro 

void setup() {
  pinMode(led, OUTPUT); //Define led  como saída
  pinMode(ldr, INPUT); //Define ldr como entrada 
  Serial.begin(9600); //Inicialização da comunicação serial, com velocidade de comunicação de 9600
}

void loop() {
  valorldr = analogRead(ldr);//Lê o valor do sensor ldr 
  Serial.println(valorldr);//Mostra os valores no monitor serial 

  if ((valorldr) > 500) { // Define o qual valor aciona o led IMPORTANTE talvez esse valor tenha que ser alterado depois 
    digitalWrite(led, HIGH);//aciona o led
  }

  else { 
    digitalWrite(led, LOW);
}
 

//feito por João Marcelo Guimrães 3E Sesi Djalma Pessoa

/*
──────▄▄▄▄▄███████████████████▄▄▄▄▄──────
────▄██████████▀▀▀▀▀▀▀▀▀▀██████▀████▄────
──▄██▀████████▄─────────────▀▀████─▀██▄──
─▀██▄▄██████████████████▄▄▄─────────▄██▀─
───▀█████████████████████████▄────▄██▀───
─────▀████▀▀▀▀▀▀▀▀▀▀▀▀█████████▄▄██▀─────
───────▀███▄──────────────▀██████▀───────
─────────▀██████▄─────────▄████▀─────────
────────────▀█████▄▄▄▄▄▄▄███▀────────────
──────────────▀████▀▀▀████▀──────────────
────────────────▀███▄███▀────────────────
───────────────────▀█▀───────────────────
*/
