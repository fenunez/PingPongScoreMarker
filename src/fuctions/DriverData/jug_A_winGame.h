void jug_A_winGame(){
  resetAll();
  timeWin.initOn();
  byte i = 0;
  while (i != 5){
    if (timeWin.read() == 1){
      Serial.println("Jugador A gana el partido!");
      i++;
    }
  }
}
