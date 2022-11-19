                                                                                                                                                                                           /*
  L298N DC MOTOR DRIVER MODULE
  modified on 25 Sep 2020
  by Saeed Olfat @ Electropeak
  Home<iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" title="&#8220;Home&#8221; &#8212; Electropeak" src="https://electropeak.com/learn/embed/#?secret=BJddHKonOV" data-secret="BJddHKonOV" width="600" height="338" frameborder="0" marginwidth="0" marginheight="0" scrolling="no"></iframe>
*/

void setup() {
  pinMode(8, OUTPUT); //IN2
  pinMode(9, OUTPUT); //IN1
  pinMode(10, OUTPUT); //Enable Pin
}
void loop() {

// Full speed forward
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  delay(3000);

// Full speed backward
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

  delay(3000);

// 0 to 100% speed in forward mode
  for (int i=0;i<256;i++)
  {   digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      analogWrite(10, i);
      delay(20);      
      }

  delay(50);

  // 0 to 100% speed in backward mode
        for (int i=0;i<256;i++)
  {   digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      analogWrite(10, i);
      delay(20);      
      }

        delay(50);
}
