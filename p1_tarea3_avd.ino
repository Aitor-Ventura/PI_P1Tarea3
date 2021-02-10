/*  Menú "monitor serie" del que el usuario es capaz de elegir
 *  seis opciones por teclado
 */

// Checkeo numero que se introduce
int num = 0;

void setup() {
  DDRA = B11111111;
  PORTA = 0xFF;
  // Activamos los pines
  pinMode(49, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(46, OUTPUT);
  // Apagados inicialmente
  pinMode(49, LOW);
  pinMode(48, LOW);
  pinMode(47, LOW);
  pinMode(46, LOW);

  // Monitor serie
  Serial.begin(9600);
  Serial.println("\n1. Parpadeo de unidades");
  Serial.println("2. Parpadeo de decenas");
  Serial.println("3. Parpadeo de centenas");
  Serial.println("4. Parpadeo de unidades de millar");
  Serial.println("5. Parpadeo secuencial");
  Serial.println("6. Caracter hexadecimal");
}

void loop() {
  if (Serial.available() > 0) {
    // num = opcion que introducimos por teclado
    num = Serial.read();
    switch (num) {
      // Que dependa del digito que introduzcamos, hacemos
      // una accion u otra
      case '1':
        pinMode(49, HIGH);
        delay(1000);
        pinMode(49, LOW);
        break;
      case '2':
        pinMode(48, HIGH);
        delay(1000);
        pinMode(48, LOW);
        break;
      case '3':
        pinMode(47, HIGH);
        delay(1000);
        pinMode(47, LOW);
        break;
      case '4':
        pinMode(46, HIGH);
        delay(1000);
        pinMode(46, LOW);
        break;
      case '5':
        pinMode(49, HIGH);
        delay(1000);
        pinMode(49, LOW);

        pinMode(48, HIGH);
        delay(1000);
        pinMode(48, LOW);

        pinMode(47, HIGH);
        delay(1000);
        pinMode(47, LOW);

        pinMode(46, HIGH);
        delay(1000);
        pinMode(46, LOW);
        break;
      case '6':
        Serial.println("Introduce numero");
        while (!Serial.available()) {
          delay(200);
          num = Serial.read();
          if (num != -1) {
            switch (num) {
              case '0':
                PORTA = 0x3F;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '1':
                PORTA = 0x06;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '2':
                PORTA = 0x5B;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '3':
                PORTA = 0x4F;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '4':
                PORTA = 0x66;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '5':
                PORTA = 0x6D;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '6':
                PORTA = 0x7D;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '7':
                PORTA = 0x07;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '8':
                PORTA = 0x7F;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case '9':
                PORTA = 0x67;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'A':
                PORTA = 0x77;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'B':
                PORTA = 0x7C;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'C':
                PORTA = 0x39;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'D':
                PORTA = 0x5E;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'E':
                PORTA = 0x79;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
              case 'F':
                PORTA = 0x71;
                pinMode(49, HIGH);
                delay(1000);
                pinMode(49, LOW);
                break;
            }
            // break del switch
            break;
          }
        }
        // break del while
        break;
    }
  }
}
