void inIt()
{
   for (int i = 0; i < 4; i++)
    pinMode(a[i], OUTPUT);
}

void forward(int maxs, int mins)
{
  analogWrite(a[0], mins);
  analogWrite(a[1], maxs);
  analogWrite(a[2], mins);
  analogWrite(a[3], maxs);
}
void stopp()
{
  analogWrite(a[0], 0);
  analogWrite(a[1], 0);
  analogWrite(a[2], 0);
  analogWrite(a[3], 0);
}
void brake(int maxs, int mins)
{
  analogWrite(a[0], maxs);
  analogWrite(a[1], mins);
  analogWrite(a[2], maxs);
  analogWrite(a[3], mins);
}
void extremeleft(int maxs, int mins)
{
  analogWrite(a[0], mins);
  analogWrite(a[1], maxs);
  analogWrite(a[2], maxs);
  analogWrite(a[3], mins);
}
void left(int maxs, int mins)
{
  analogWrite(a[0], mins);
  analogWrite(a[1], maxs);
  analogWrite(a[2], mins);
  analogWrite(a[3], mins);
}
void extremeright(int maxs, int mins)
{
  analogWrite(a[0], maxs);
  analogWrite(a[1], mins);
  analogWrite(a[2], mins);
  analogWrite(a[3], maxs);
}
void right(int maxs, int mins)
{
  analogWrite(a[0], mins);
  analogWrite(a[1], mins);
  analogWrite(a[2], mins);
  analogWrite(a[3], maxs);
}
void Rightpwd(int maxs, int mins)
{
  analogWrite(a[1], maxs);
  analogWrite(a[0], 0);
  analogWrite(a[3], mins);
  analogWrite(a[2], 0);
}
void Leftpwd(int maxs, int mins)
{
  analogWrite(a[1], mins);
  analogWrite(a[0], 0);
  analogWrite(a[3], maxs);
  analogWrite(a[2], 0);
}

