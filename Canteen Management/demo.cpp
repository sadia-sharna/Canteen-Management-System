/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
#define BALLSPEED 1
#define S 20

	//double xco=-5, yco=-5;
	double cx=200,cy=10+15,r=15;
	int i,t,f=0;

	/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	
	//place your drawing codes here	
	iClear();
	//iFilledCircle(xco, yco, 5);
	//iText(300,300 , "WELCOME TO THE HELL", GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,255);
	//double x1=100,y1=100,x2=200,y2=100;

	//int i;
	//for(i=0;i<5;i++)
	//{
	//iLine(x1,y1,x2,y2);
	iFilledRectangle((200-50),0,100,10);
	iFilledCircle(cx,cy,r);

	
	//x1=x2+10;
	
	//x2=(x2+100);
	//cx=(x1+x2)/2;
	//if(i%2==0)
		//iSetColor(250,0,0);
	//else
		//iSetColor(0, 0 , 250);
	
	//}
	
	
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//xco=mx;
	//yco=my;
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	//if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	//{
		//printf("left button clicked at %d and %d\n", mx, my);
		//place your codes here	
	//}
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
	//place your code here
	
 
	//xco = mx;
	//yco = my;
	//if(mx== 2){}        /*Something to do with mx*/
	//else if(my== 2){}   /*Something to do with my*/
 
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
	//place your codes for other keys here
}

void func(void)
{
//code of the task that will be repeated.
	
	/*if(cx<=400 && cy<=200)
	{
		cx++;
		cy++;
	}
	
	else if(cx>=200 && cy>=400)
	{
	cx--;
	cy++;
	}
	else if(cx>=0 && cy>=200)
	{
	cx--;
	cy--;
	}
	else if(cx>=200 && cy>=400)
	{
	cx++;
	cy--;
	}
	*/
	if(f==0)
	{
		cx=cx+S;
		cy=cy+S;
		printf("%lf\n",cx);
		if(cx>=(400-15)) f=1;
	}
	else if(f==1)
	{
		cx=cx-S;
		cy=cy+s;
		printf("%lf\n",cy);
		
		if(cy>=(400-15)) f=2;
	}
	else if(f==2)
	{
		cx=cx-S;
		cy=cy-S;
		printf("%lf\n",cx);
		
		if(cx<=(0+15)) f=3;
	}
	else if(f==3)
	{
		cx=cx+S;
		cy=cy-S;
		printf("%lf\n",cy);
		
		if(cy<=(15+10)) f=0;

	}
}

	
int main()
{
	
	t = iSetTimer(BALLSPEED, func);
	
	
	//place your own initialization codes here. 
	iInitialize(400, 400, "CSE !st year 1st semester A2-1");
	
	return 0;
}