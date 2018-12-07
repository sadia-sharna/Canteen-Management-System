#include "iGraphics.h"
#define WINDOW_X 1024
#define WINDOW_Y 612
#define BOX_HEIGHT 50
#define BOX_WIDTH 128

#define BURGER_X 27
#define BURGER_H 491
#define BURGER_LEN 132
#define BURGER_Y 454

#define SANDWICH_X 26
#define SANDWICH_Y 297
#define SANDWICH_LEN 132
#define SANDWICH_H 332

#define PIZZA_X 22
#define PIZZA_Y 129
#define PIZZA_LEN 127
#define PIZZA_H 164

#define BIRIYANI_X 599
#define BIRIYANI_Y 452
#define BIRIYANI_LEN 704
#define BIRIYANI_H 485

#define NESCAFE_X 599
#define NESCAFE_Y 299
#define NESCAFE_LEN 704
#define NESCAFE_H 331

#define TEA_X 599
#define TEA_Y 130
#define TEA_LEN 704
#define TEA_H 163

#define CAKE_X 27
#define CAKE_H 491
#define CAKE_LEN 132
#define CAKE_Y 454

#define PUDDING_X 26
#define PUDDING_Y 297
#define PUDDING_LEN 132
#define PUDDING_H 332

#define PATTIS_X 22
#define PATTIS_Y 129
#define PATTIS_LEN 127
#define PATTIS_H 164

#define POROTA_X 599
#define POROTA_Y 452
#define POROTA_LEN 704
#define POROTA_H 485

#define ICECREAM_X 599
#define ICECREAM_Y 299
#define ICECREAM_LEN 704
#define ICECREAM_H 331

#define PEPSI_X 599
#define PEPSI_Y 130
#define PEPSI_LEN 704
#define PEPSI_H 163

#define PAGE1_NEXT_X 385
#define PAGE1_NEXT_Y 17
#define PAGE1_NEXT_LEN 595
#define PAGE1_NEXT_H 61

#define PAGE2_NEXT_X 568
#define PAGE2_NEXT_Y 9
#define PAGE2_NEXT_LEN 781
#define PAGE2_NEXT_H 58


#define PAGE2_PREV_X 224
#define PAGE2_PREV_Y 12
#define PAGE2_PREV_LEN 452
#define PAGE2_PREV_H 90

#define HOMEPAGE_MENU_X 34
#define HOMEPAGE_MENU_Y 371
#define HOMEPAGE_MENU_LEN 234
#define HOMEPAGE_MENU_H 423

#define PLUS_X 560
#define PLUS_Y 213
#define PLUS_LEN 598
#define PLUS_H 247

#define MINUS_PREV_X 632
#define MINUS_PREV_Y 213
#define MINUS_PREV_LEN 667
#define MINUS_PREV_H 247

#define MIDDLEBOX_X 601
#define MIDDLEBOX_Y 214
#define MIDDLEBOX_LEN 630
#define MIDDLEBOX_H 248

#define BACK_X 87
#define BACK_H 60
#define BACK_LEN 228
#define BACK_Y 20

#define HP_X 783
#define HP_H 62
#define HP_LEN 918
#define HP_Y 23

#define CANTEEN_X 572
#define CANTEEN_H 83
#define CANTEEN_LEN 748
#define CANTEEN_Y 40


#define AVAILABLE_X_TEXT 222
#define AVAILABLE_Y_TEXT 389

#define STRINGNUMBER_X 260
#define STRINGNUMBER_Y 388

#define  AVAILABLE_X 400
#define  AVAILABLE_H 282
#define  AVAILABLE_LEN 664
#define  AVAILABLE_Y 252


#define ABOUT_X 771
#define ABOUT_Y 40
#define ABOUT_LEN 964
#define ABOUT_H 82

#define BURGER_P 30
#define SANDWICH_P 30
#define PIZZA_P 35
#define BIRIYANI_P 90
#define COFFEE_P 15
#define TEA_P 5
#define CAKE_P 10
#define PUDDING_P 20
#define PATTIS_P 20
#define POROTA_P 12
#define ICECREAM_P 25
#define PEPSI_P 20

#define AMOUNT_X 701
#define AMOUNT_Y 389
int WELCOME_X=0,WELCOME_Y=300,flag=0,food_number;
double t;
char sell_item[100];
char plus_minus_burger[100];
char plus_minus_sandwich[100];
char plus_minus_pizza[100];
char plus_minus_biriyani[100];
char plus_minus_nescafe[100];
char plus_minus_tea[100];
char plus_minus_pudding[100];
char plus_minus_cake[100];
char plus_minus_pattis[100];
char plus_minus_icecream[100];
char plus_minus_porota[100];
char plus_minus_pepsi[100];



int homepage=0,passive_mouse=0,mode=-1;

int available[15],ara[15];
int count,temp;
char burger_str[100];//burger_str1[100];
char sandwich_str[100];//sandwich_str1[100];
char pizza_str[100];//pizza_str1[100];
char biriyani_str[100];//biriyani_str1[100];
char nescafe_str[100];//nescafe_str1[100];
char tea_str[100];//tea_str1[100];
char pudding_str[100];//pudding_str1[100];
char cake_str[100];//cake_str1[100];
char pattis_str[100];//pattis_str1[100];
char icecream_str[100];//icecream_str1[100];
char porota_str[100];//porota_str1[100];
char pepsi_str[100];//pepsi_str1[100];


int loop_i,j,rem,res=0;
int total[15]= {60,80,50,65,85,90,35,30,86,50,100,92};
char burger_str1[100]={'6','0'};
char sandwich_str1[100]={'8','0'};
char pizza_str1[100]={'5','0'};
char biriyani_str1[100]={'6','5'};
char nescafe_str1[100]={'8','5'};
char tea_str1[100]={'9','0'};
char pudding_str1[100]={'3','5'};
char cake_str1[100]={'3','0'};
char pattis_str1[100]={'8','6'};
char icecream_str1[100]={'5','0'};
char porota_str1[100]={'1','0','0'};
char pepsi_str1[100]={'9','2'};

void Homepage()
{
	iShowBMP(0,0,"Homepage.bmp");
   //iShowBMP(0,0,"Homepage.bmp");
   //iFilledRectangle(HOMEPAGE_MENU_X,HOMEPAGE_MENU_LEN,HOMEPAGE_MENU_Y,HOMEPAGE_MENU_H);
  iSetColor(255,0,0);
  iText(WELCOME_X,WELCOME_Y,"WELCOME TO AUST CAFETERIA",GLUT_BITMAP_TIMES_ROMAN_24);
  //iText(250,300-70,"To  show  the  Food Menu  Click  on  the  screen",GLUT_BITMAP_TIMES_ROMAN_24);

}

void foodmenu1()
{

	iShowBMP(0,0,"FoodMenu11.bmp");

}
void foodmenu2()
{
    iShowBMP(0,0,"FoodMenu2.bmp");
}
void buyfood()
{
	  iShowBMP(0,0,"redfood1.bmp");
}
void canteenManagement()
{
       iShowBMP(0,0,"TOTALSELL.bmp");
	
	//iText(148,530,"Total sell:",GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(27,157,157);
	 iText(582,350,sell_item,GLUT_BITMAP_TIMES_ROMAN_24);
	
}

void availableitem()
{
	 iShowBMP(0,0,"AVAILABLEFOOD.bmp");
	 iText(221,563,burger_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(221,482,sandwich_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(221,421,pizza_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(221,343,biriyani_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(221,272,nescafe_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(221,195,tea_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,482,pudding_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,563,cake_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,421,pattis_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,272,icecream_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,343,porota_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(701,195,pepsi_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	
}

void about_us()
{
   iShowBMP(0,0,"About our software.bmp");
}

void iDraw()
{

 iClear();
 if(homepage==0)
 {
 Homepage();
 }
 if(homepage==1)
 {
  foodmenu1();
 }
 if(homepage==2)
   {
	   foodmenu2();
 }
 if(homepage==3)
   {
	   buyfood();
   }
 if(homepage==4)
   {
	   canteenManagement();
	  
 }
 if(mode==1 && homepage==3)
 {
	// homepage=3;

	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF BURGER",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,burger_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 
	 iText(607,225,plus_minus_burger,GLUT_BITMAP_HELVETICA_18);


 }
 if(mode==2 &&  homepage==3)
 {
	

	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"SORRY.NOT AVAILABLE",GLUT_BITMAP_TIMES_ROMAN_24);
	 
 }

 if(mode==3 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF SANDWICH : ",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,sandwich_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_sandwich,GLUT_BITMAP_HELVETICA_18);

 }
  if(mode==4 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF PIZZA :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,pizza_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_pizza,GLUT_BITMAP_HELVETICA_18);


 }
   if(mode==5 && homepage==3 )
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF BIRIYANI PACKET :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,biriyani_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_biriyani,GLUT_BITMAP_HELVETICA_18);

 }

    if(mode==6 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF COFFEE :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,nescafe_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_nescafe,GLUT_BITMAP_HELVETICA_18);

 }

	 if(mode==7 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF TEA :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,tea_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_tea,GLUT_BITMAP_HELVETICA_18);

 }

	  if(mode==8 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF PUDDING :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,pudding_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_pudding,GLUT_BITMAP_HELVETICA_18);

 }

	   if(mode==9 && homepage==3)
 {
	 
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF CAKE :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,cake_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_cake,GLUT_BITMAP_HELVETICA_18);

 }

	    if(mode==10 && homepage==3 )
 {
	 
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF PATTIS :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,pattis_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_pattis,GLUT_BITMAP_HELVETICA_18);

 }

		 if(mode==11 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF ICE-CREAM BOX :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,icecream_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_icecream,GLUT_BITMAP_HELVETICA_18);

 }
		  if(mode==12 && homepage==3)
 {
	 
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF POROTA VAJI :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,porota_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_porota,GLUT_BITMAP_HELVETICA_18);

 }
		   if(mode==13 && homepage==3)
 {
	
	 iText(AVAILABLE_X_TEXT,AVAILABLE_Y_TEXT,"AVAILABLE AMOUNT OF PEPSI :",GLUT_BITMAP_TIMES_ROMAN_24);
	 iText(AMOUNT_X,AMOUNT_Y,pepsi_str1,GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(157,157,157);
	 iText(607,225,plus_minus_pepsi,GLUT_BITMAP_HELVETICA_18);

 }

		   if(homepage==4)
 {
	
	        canteenManagement();

 }
			   if(homepage==5)
			   {
				   availableitem();
			   }
			   if(homepage==6)
           {
            about_us();
            }
			   
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{

}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
*/
void burger_management(int mx,int my)
{
	if((mx>=BURGER_X && mx<=BURGER_LEN) && (my>=BURGER_Y &&my<=BURGER_H) && homepage==1)
  {
	 
	total[0]=total[0]-ara[0];
	
	available[0]=available[0]+ara[0];
	ara[0]=0;
	plus_minus_burger[0]='0';	
	
	temp=total[0];
    if(temp>0)
     {
		 mode=1;
		 homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             burger_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        burger_str1[j]=burger_str[loop_i];
    }
     }


	else {
		mode=2;
		homepage=3;
	     }
	
	}
	 
}


void sandwich_management(int mx,int my)
{
	if((mx>=SANDWICH_X && mx<=SANDWICH_LEN) && (my>=SANDWICH_Y &&my<=SANDWICH_H) && homepage==1)

	{
		
  
   total[1]=total[1]-ara[1];
   available[1]=available[1]+ara[1];
   plus_minus_sandwich[0]='0';
    ara[1]=0;
	
	
    temp=total[1];
    if(temp>0)
     {
		 mode=3;
		  homepage=3;

    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             sandwich_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        sandwich_str1[j]=sandwich_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
	
}

void pizza_management(int mx,int my)
{
	 if((mx>=PIZZA_X && mx<=PIZZA_LEN) && (my>=PIZZA_Y &&my<=PIZZA_H) && homepage==1)

	{
		
	total[2]=total[2]-ara[2];
	available[2]=available[2]+ara[2];
	ara[2]=0;
	plus_minus_pizza[0]='0';	
	
    temp=total[2];
    if(temp>0)
     {
		 mode=4; 
		 homepage=3;

    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             pizza_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        pizza_str1[j]=pizza_str[loop_i];
    }
     }


	 else{
		mode=2;
	     }
	}
	 
}

void biriyani_management(int mx,int my)
{
	if((mx>= BIRIYANI_X && mx<= BIRIYANI_LEN) && (my>= BIRIYANI_Y &&my<= BIRIYANI_H) && homepage==1)
	{
 
	total[3]=total[3]-ara[3];
	available[3]=available[3]+ara[3];
	    ara[3]=0;
		plus_minus_biriyani[0]='0';	
	
    temp=total[3];
    if(temp>0)
     {
		 mode=5;
		  homepage=3;

    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             biriyani_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        biriyani_str1[j]=biriyani_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
}
}


void nescafe_management(int mx,int my)
{
	if((mx>= NESCAFE_X && mx<= NESCAFE_LEN) && (my>= NESCAFE_Y &&my<= NESCAFE_H) && homepage==1)

	{
		

	total[4]=total[4]-ara[4];
	available[4]=available[4]+ara[4];
	ara[4]=0;
    temp=total[4];
	plus_minus_nescafe[0]='0';	
	
    if(temp>0)
     {
		 mode=6;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             nescafe_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        nescafe_str1[j]=nescafe_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
	}


void tea_management(int mx,int my)
{
	if((mx>= TEA_X && mx<= TEA_LEN) && (my>= TEA_Y &&my<= TEA_H) && homepage==1)

	{
		
	total[5]=total[5]-ara[5];
	available[5]=available[5]+ara[5];
	ara[5]=0;
	plus_minus_tea[0]='0';	
	
    temp=total[5];
    if(temp>0)
     {
		 mode=7;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             tea_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        tea_str1[j]=tea_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
}

void pudding_management(int mx,int my)
{
	if((mx>=PUDDING_X && mx<=PUDDING_LEN) && (my>=PUDDING_Y &&my<=PUDDING_H) && homepage==2)
 	{
		
	total[6]=total[6]-ara[6];
	available[6]=available[6]+ara[6];
	ara[6]=0;
	plus_minus_pudding[0]='0';	
	
    temp=total[6];
    if(temp>0)
     {
		 mode=8;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             pudding_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        pudding_str1[j]=pudding_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
}

void cake_management(int mx,int my)
{
	if((mx>= CAKE_X && mx<= CAKE_LEN) && (my>= CAKE_Y &&my<= CAKE_H) && homepage==2)


	{
		

	total[7]=total[7]-ara[7];
	available[7]=available[7]+ara[7];
	ara[7]=0;
	plus_minus_cake[0]='0';	
	
    temp=total[7];
    if(temp>0)
     {
		 mode=9;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             cake_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        cake_str1[j]=cake_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}

}

void pattis_management(int mx,int my)
{
	if((mx>=PATTIS_X && mx<=PATTIS_LEN) && (my>=PATTIS_Y &&my<=PATTIS_H) && homepage==2)

	{
		
	total[8]=total[8]-ara[8];
	available[8]=available[8]+ara[8];
	ara[8]=0;
	plus_minus_pattis[0]='0';	
	
    temp=total[8];
    if(temp>0)
     {
		 mode=9;
		  homepage=3;

    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             pattis_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        pattis_str1[j]=pattis_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
}


void icecream_management(int mx,int my)
{
	if((mx>=ICECREAM_X && mx<=ICECREAM_LEN) && (my>=ICECREAM_Y &&my<=ICECREAM_H) && homepage==2)

	{
		
	total[9]=total[9]-ara[9];
	available[9]=available[9]+ara[9];
	ara[9]=0;
	plus_minus_icecream[0]='0';	
	
    temp=total[9];
    if(temp>0)
     {
		 mode=11;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             icecream_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        icecream_str1[j]=icecream_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}

}

void porota_management(int mx,int my)
{
	if((mx>= POROTA_X && mx<= POROTA_LEN) && (my>= POROTA_Y &&my<= POROTA_H) && homepage==2)

	{
		
	total[10]=total[10]-ara[10];
	available[10]=available[10]+ara[10];
	ara[10]=0;
	plus_minus_porota[0]='0';	
	
    temp=total[10];
    if(temp>0)
     {
		 mode=12;
		  homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             porota_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        porota_str1[j]=porota_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}

}
void pepsi_management(int mx,int my)
{
	 if((mx>= PEPSI_X && mx<= PEPSI_LEN) && (my>= PEPSI_Y &&my<= PEPSI_H) && homepage==2)

	{
		
	total[11]=total[11]-ara[11];
	available[11]=available[11]+ara[11];
	ara[11]=0;
	plus_minus_pepsi[0]='0';	
	
    temp=total[11];
    if(temp>0)
     {
		 mode=13;
		  
		 homepage=3;
    count=0;
    while(temp>0)
         {
             res=temp/10;
             rem=temp%10;
             temp=res;
             pepsi_str[count]=rem+'0';

             count++;
         }
	 for(loop_i=count-1,j=0;loop_i>=0;loop_i--,j++)
    {
        pepsi_str1[j]=pepsi_str[loop_i];
    }
     }


	else {
		mode=2;
	     }
	}
}


void food_item_burger(int mx,int my)
{
	if(((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3))

{
	ara[0]++;
	sprintf_s(plus_minus_burger,"%d",ara[0]);
}
  if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	
	if(ara[0]>0)
	{
		ara[0]--;
		sprintf_s(plus_minus_burger,"%d",ara[0]);
	}
	
	else
		{
			ara[0]=0;
			sprintf_s(plus_minus_burger,"%d",ara[0]);
	}

	
}


}


void food_item_sandwich(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[1]++;
	sprintf_s(plus_minus_sandwich,"%d",ara[1]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[1]>0)
	ara[1]--;
	else
		ara[1]=0;
	sprintf_s(plus_minus_burger,"%d",ara[1]);
}


}


void food_item_pizza(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[2]++;
	sprintf_s(plus_minus_pizza,"%d",ara[2]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[2]>0)
	ara[2]--;
	else
		ara[2]=0;
	sprintf_s(plus_minus_pizza,"%d",ara[2]);
}


}


void food_item_biriyani(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[3]++;
	sprintf_s(plus_minus_biriyani,"%d",ara[3]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[3]>0)
	ara[3]--;
	else
		ara[3]=0;
	sprintf_s(plus_minus_biriyani,"%d",ara[3]);
}


}

void food_item_nescafe(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[4]++;
	sprintf_s(plus_minus_nescafe,"%d",ara[4]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[4]>0)
	ara[4]--;
	else
		ara[4]=0;
	sprintf_s(plus_minus_nescafe,"%d",ara[4]);
}


}


void food_item_tea(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[5]++;
	sprintf_s(plus_minus_tea,"%d",ara[5]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[5]>0)
	ara[5]--;
	else
		ara[5]=0;
	sprintf_s(plus_minus_tea,"%d",ara[5]);
}


}


void food_item_pudding(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[6]++;
	sprintf_s(plus_minus_pudding,"%d",ara[6]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[6]>0)
	ara[6]--;
	else
		ara[6]=0;
	sprintf_s(plus_minus_pudding,"%d",ara[6]);
}


}


void food_item_cake(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[7]++;
	sprintf_s(plus_minus_cake,"%d",ara[7]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[7]>0)
	ara[7]--;
	else
		ara[7]=0;
	sprintf_s(plus_minus_cake,"%d",ara[7]);
}


}

void food_item_pattis(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[8]++;
	sprintf_s(plus_minus_pattis,"%d",ara[8]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[8]>0)
	ara[8]--;
	else
		ara[8]=0;
	sprintf_s(plus_minus_pattis,"%d",ara[8]);
}


}

void food_item_icecream(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[9]++;
	sprintf_s(plus_minus_icecream,"%d",ara[9]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[9]>0)
	ara[9]--;
	else
		ara[9]=0;
	sprintf_s(plus_minus_icecream,"%d",ara[9]);
}


}

void food_item_porota(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[10]++;
	sprintf_s(plus_minus_porota,"%d",ara[10]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[10]>0)
	ara[10]--;
	else
		ara[10]=0;
	sprintf_s(plus_minus_porota,"%d",ara[10]);
}


}

void food_item_pepsi(int mx,int my)
{
	if((mx>=PLUS_X && mx<=PLUS_LEN) && (my>=PLUS_Y &&my<=PLUS_H) && homepage==3)
{
	ara[11]++;
	sprintf_s(plus_minus_pepsi,"%d",ara[11]);
}
	else if((mx>=MINUS_PREV_X && mx<=MINUS_PREV_LEN) && (my>=MINUS_PREV_Y &&my<=MINUS_PREV_H) && homepage==3)
{
	if(ara[11]>0)
	ara[11]--;
	else
		ara[11]=0;
	sprintf_s(plus_minus_pepsi,"%d",ara[11]);
}


}

void iMouse(int button, int state, int mx, int my)
{
 if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
 {

 if((mx>=242 && mx<=387) && (my>=528 && my<=573) && homepage==0)
  {
  homepage=1;
  }

 if((mx>=412 && mx<=570) && (my>=531 && my<=574) && homepage==0)
  {
  homepage=5;
  }
  
   if((mx>=PAGE1_NEXT_X && mx<=PAGE1_NEXT_LEN) && (my>=PAGE1_NEXT_Y &&my<=PAGE1_NEXT_H) && homepage==1)
  {
  homepage=2;
  }

  if((mx>= PAGE2_NEXT_X && mx<= PAGE2_NEXT_LEN) && (my>= PAGE2_NEXT_Y &&my<= PAGE2_NEXT_H) && homepage==2)
  {
  homepage=0;
  }

   if((mx>=  PAGE2_PREV_X && mx<=  PAGE2_PREV_LEN) && (my>=  PAGE2_PREV_Y && my<=  PAGE2_PREV_H) && homepage==2)
  {
  homepage=1;
  }
   
  if((mx>= 783 && mx<=918 ) && (my>= 25 && my<=62 ) && homepage==3)
    {
		printf("%d",homepage);
		homepage=0;
		printf("%d",homepage);
    }
  if((mx>= CANTEEN_X && mx<= CANTEEN_LEN) && (my>= CANTEEN_Y && my<= CANTEEN_H) && homepage==0)
    {
		
		homepage=4;
		sprintf_s(sell_item,"%d",((available[0]*BURGER_P)+(SANDWICH_P*available[1])+(PIZZA_P*available[2])+(BIRIYANI_P*available[3])+(COFFEE_P*available[4])+(TEA_P*available[5])+(PUDDING_P*available[6])+(CAKE_P*available[7])+(PATTIS_P*available[8])+(ICECREAM_P*available[9])+(POROTA_P*available[10])+(PEPSI_P*available[11])));
    }
   if((mx>= 310 && mx<= 558) && (my>= 21 && my<= 80) && homepage==5)
    {
		homepage=0;
	}

    if((mx>= 104 && mx<=254) && (my>= 20 && my<=60 ) && homepage==3)
    {
		
		homepage=1;
		printf("%d",homepage);
	}
	if((mx>=773 && mx<=964) && (my>=40 && my<=82) && homepage==0)
{

   homepage=6;
}

	if((mx>=344 && mx<=585) && (my>=58 && my<=122) && homepage==6)
{

   homepage=0;
}
	if((mx>=338 && mx<=608) && (my>=82 && my<=141) && homepage==4)
{

   homepage=0;
}
			

   burger_management(mx,my);
   sandwich_management(mx,my);
   pizza_management(mx,my);
   biriyani_management(mx,my);
   nescafe_management(mx,my);
   tea_management(mx,my);
   pudding_management(mx,my);
   cake_management(mx,my);
   pattis_management(mx,my);
   icecream_management(mx,my);
   porota_management(mx,my);
   pepsi_management(mx,my);
   food_item_burger(mx,my);
   food_item_sandwich(mx,my);
   food_item_pizza(mx,my);
   food_item_biriyani(mx,my);
   food_item_nescafe(mx,my);
   food_item_tea(mx,my);
   food_item_pudding(mx,my);
   food_item_cake(mx,my);
   food_item_pattis(mx,my);
   food_item_icecream(mx,my);
   food_item_porota(mx,my);
   food_item_pepsi(mx,my);
  
 }
 //if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
 //{
  //printf("Right button clicked at %d and %d\n", mx, my);
  //place your codes here
 //}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	/*
	if((mx>= HOMEPAGE_MENU_X && mx<= HOMEPAGE_MENU_LEN) && (my>= HOMEPAGE_MENU_Y &&my<= HOMEPAGE_MENU_H) && homepage==0)
  {
       passive_mouse=1;

  }
  */

}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
 //if(key == 'q')
 //{
  //do something with 'q'
 //}
 //place your codes for other keys here
}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

 if(key == GLUT_KEY_END)
 {
  exit(0);
 }

}
void welcome_move()
{
	if(flag==0 && homepage==0)
	{
		if(WELCOME_X>=WINDOW_X) flag=1;
		else WELCOME_X++;
	}
	else if (flag==1 && homepage==0)
	{
		if(WELCOME_X<=0) flag=0;

		else WELCOME_X=0;
	}

}


int main()
{
	int i;
	//total[0]=60;
	//total[1]=80;
	//total[2]=50;
	//total[3]=65;
	//total[4]=85;
	//total[5]=90;
	//total[6]=35;
	//total[7]=30;
	//total[8]=86;
	//total[9]=50;
	//total[10]=100;
	//total[11]=92;
	



  t = iSetTimer(10,welcome_move);
  iInitialize(WINDOW_X,WINDOW_Y, "AUST CAFETERIA");


 return 0;
}
