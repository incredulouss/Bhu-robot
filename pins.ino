

#define inchmove 80
#define smallInch 30
#define gridInch 160
//#define threshold 600

#define turnSpeed 200
//#define maxs 200
#define avgSpeed 200
//#define mins 0
#define Linemaxs 200
#define Linemins 0

#define pwdavg 160
//*wall following**///////////////////////

//////////////////////GRID /////////////////////////

//int count = 0;
//int temp = 0;


////////////////////////////////////// slect the preference of the turn ex. for left assignn value 0 , for right value 1///////

int turnDirection = 0;
//constants
//* MOTORS *//////////////////////////////////////////////////////////////////////////////////////////////////////
int a[] = {5, 6, 10, 9};
int errorTurning = 0;
////////*CONTROL*///////////////////////////////////////////////////////////////////////////////////////////////////
long error = 0;
float lineDis = 0;
int prevError = 0;
int setWal = 0;
boolean printv = 0;

////////*SENSORS*/////////////////////////////////////////////////////////////////////////////////////////////////////
////////there are 6 SENSORS////////////////////////////////////
//distance between sensors in millimeters from the middle

float sensor[] = {0, 1, 2, 3, 4, 5};
float sen[6];
int senVal[6];//receive sensor values
int normaliseVal[6];
//int maxVal[] = {645, 607, 580, 616, 451, 765};
//int minVal[] = {124,224,124,123,124, 352};
int maxVal[] = {0,0,0,0,0,0};
int minVal[] = {1000,1000,1000,1000,1000,1000};
int threshold[6];
int digitalVal[6];
long q = 0;
long setPos = 0;
int prevPos = 0;

/////////////////////////////////////*********** Different color Led ****************////////////////////////
//int blueLed = 13;
int redLed  = 2;
int greenLed = 3;

