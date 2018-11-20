#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
float x1,yy1,x2,y2,xc,yc,r;
float  counter=200.0;


void PRINT_Circle_1(float x, float y)
 {
   glBegin(GL_POINTS);
   glColor3f(0,0,0);

   glVertex2d(y+xc,-x+yc);
   glVertex2d(-y+xc,-x+yc);
   glVertex2d(-x+xc,-y+yc);
   glVertex2d(x+xc,-y+yc);

   glEnd();
}
void PRINT_Circle_2(float x, float y)
 {

   glBegin(GL_POINTS);
   glVertex2d(x+xc,y+yc);
   glVertex2d(y+xc,x+yc);
   glVertex2d(-y+xc,x+yc);
   glVertex2d(y+xc,-x+yc);
   glVertex2d(-y+xc,-x+yc);
   glVertex2d(-x+xc,-y+yc);
   glVertex2d(-x+xc,y+yc);
   glVertex2d(x+xc,-y+yc);

   glEnd();

}
void PRINT_Line(float x, float y)
{
    glBegin(GL_POINTS);
    glVertex2d(x,y);
    glEnd();
}
void midpointcircle()
{
    float x = 0;float y = r;float p = 1 - r;
    PRINT_Circle_1(x,y);
    while(x<=y){
        if(p<0){
            x++;p = p + 2*(x) + 1;
        }
        else{
            x++,y--;p = p + 2*(x) + 1 - 2*(y);
        }
        PRINT_Circle_1(x,y);
    }
}
void midpointcircle2()
{
    float x = 0;float y = r;float p = 1 - r;
    PRINT_Circle_2(x,y);
    while(x<=y){
        if(p<0){
            x++;p = p + 2*(x) + 1;
        }
        else{
            x++,y--;p = p + 2*(x) + 1 - 2*(y);
        }
        PRINT_Circle_2(x,y);
    }
}
void DDA(float sx,float sy,float ex,float ey)
  {
      float dx = ex - sx;float dy = ey - sy;float m = dy/dx;float x = sx;float y = sy;
      if(m<1)
      {
          while(1)
          {
              if(x==ex and y==ey) break;
              x++;y = y + m;
              PRINT_Line(x,round(y));
          }
      }
      else if(m>1)
      {
          while(1){
              if(x==ex and y==ey) break;
              y++;x = x + 1/m;
              PRINT_Line(round(x),y);
          }
      }
  }
void car1()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

   ///Bottom Part
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,200);
   glVertex2f(300,200);
   glVertex2f(300,100);

   ///Top Part
   glBegin(GL_POLYGON);
   glVertex2f(100,200);
   glVertex2f(130,300);
   glVertex2f(180,300);
   glVertex2f(180,200);

   glEnd();
}
void wheel()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);
   ///

    xc=150;
    yc=100;
    r=18;
midpointcircle();

    xc=150;
    yc=100;
    r=17;
midpointcircle();
    xc=150;
    yc=100;
    r=16;
midpointcircle();
    xc=150;
    yc=100;
    r=15;
midpointcircle();
    xc=150;
    yc=100;
    r=14;
midpointcircle();
    xc=150;
    yc=100;
    r=13;
midpointcircle();
    xc=150;
    yc=100;
    r=12;
midpointcircle();
    xc=150;
    yc=100;
    r=11;
    midpointcircle();
    xc=150;
    yc=100;
    r=10;
    midpointcircle();
   xc=150;
    yc=100;
    r=9;
    midpointcircle();
    xc=150;
    yc=100;
    r=8;
    midpointcircle();
///

    xc=250;
    yc=100;
    r=18;
midpointcircle();

    xc=250;
    yc=100;
    r=17;
midpointcircle();
    xc=250;
    yc=100;
    r=16;
midpointcircle();
    xc=250;
    yc=100;
    r=15;
midpointcircle();
    xc=250;
    yc=100;
    r=14;
midpointcircle();
    xc=250;
    yc=100;
    r=13;
midpointcircle();
    xc=250;
    yc=100;
    r=12;
midpointcircle();
    xc=250;
    yc=100;
    r=11;
    midpointcircle();
    xc=250;
    yc=100;
    r=10;
    midpointcircle();
    xc=250;
    yc=100;
    r=9;
    midpointcircle();
    xc=250;
    yc=100;
    r=8;
}
void weight()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

   glBegin(GL_POLYGON);
   glVertex2f(200,200);
   glVertex2f(230,250);
   glVertex2f(250,250);
   glVertex2f(280,200);

   glEnd();
}
void light1()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,130);
   glVertex2f(120,130);
   glVertex2f(120,100);
   glEnd();
}
void light2()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

   glBegin(GL_POLYGON);
   glVertex2f(290,100);
   glVertex2f(290,110);
   glVertex2f(300,110);
   glVertex2f(300,100);
   glEnd();
}

void car2()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

   glBegin(GL_POLYGON);
   glVertex2f(120,220);
   glVertex2f(140,280);
   glVertex2f(170,280);
   glVertex2f(170,220);

   glEnd();

}
void human()
{

   glLoadIdentity();
   counter=counter-0.05;
   glTranslated(counter,100,0.0);

///
     xc=158;
    yc=250;
    r=10;
midpointcircle2();
xc=151;
    yc=250;
    r=3;
midpointcircle2();xc=151;
    yc=250;
    r=2;
midpointcircle2();xc=151;
    yc=250;
    r=1;
midpointcircle2();
xc=157;
    yc=250;
    r=3;
midpointcircle2();

xc=157;
    yc=250;
    r=2;
midpointcircle2();
xc=157;
    yc=250;
    r=1;
midpointcircle2();
///
x1=145;
    yy1=222;
    x2=158;
    y2=235;
      DDA(x1,yy1,x2,y2);

x1=158;
    yy1=220;
    x2=158;
    y2=240;
      DDA(x1,yy1,x2,y2);
      x1=159;
    yy1=220;
    x2=159;
    y2=240;
      DDA(x1,yy1,x2,y2);
      x1=157;
    yy1=220;
    x2=157;
    y2=240;
      DDA(x1,yy1,x2,y2);
        x1=161;
    yy1=220;
    x2=161;
    y2=240;
      DDA(x1,yy1,x2,y2);
      x1=160;
    yy1=220;
    x2=160;
    y2=240;
      DDA(x1,yy1,x2,y2);

}
void display()
{

  glClear(GL_COLOR_BUFFER_BIT);


  glColor3f(1.0,1.0,0.0);
  car1();

  glColor3f(1.0,1.0,1.0);
  car2();
  wheel();
  glColor3f(1.0,1.0,1.0);
  light1();
  glColor3f(1.0,0.0,0.0);
  light2();
  glColor3f(1.0,0.0,1.0);
  human();
  glColor3f(0.0,0.0,0.0);
  weight();
  glutSwapBuffers();
  glFlush();



}
void Init()
{
    glClearColor(0.5,0.5,0.5,0.1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(20,20);
    glutCreateWindow("Moving Truck");
    Init();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
