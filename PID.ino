#define kp 3
#define kd 0
#define ki 0

void pid()
{

  calculateError();
  if (setPos >= 4)
  {
    right(Linemaxs, Linemins);
  }
  else if (setPos <= -4)
  {
    left(Linemaxs, Linemins);
  }
  else {
    int  rateofchange = error - prevError;
    int integral = integral + error;
    int correct = (kp * error + ki * integral + kd * prevError);
    prevError = error;

    // Serial.print(correct);
    int rightMotor = (avgSpeed + correct);
    if (rightMotor > Linemaxs)
      rightMotor = Linemaxs + errorTurning;
    int leftMotor = (avgSpeed - correct);
    if (leftMotor > Linemaxs)
      leftMotor = Linemaxs;
    int CRM = rightMotor;
    int CLM = leftMotor;
    if (printv)
    {
      Serial.print(",");
      Serial.print(error);
      Serial.print(",");
      Serial.print(CRM);
      Serial.print(",");
      Serial.print(CLM);
      Serial.println(",");
    }
    analogWrite(a[0], Linemins);
    analogWrite(a[1], CRM);
    analogWrite(a[2], Linemins);
    analogWrite(a[3], CLM);
  }
}
