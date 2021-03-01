/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;
float ss=0;
float aa=0;

/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);


//sky
    glPushMatrix();
    glTranslated(2,1,-10);
    glRotated(180,0,1,0);
    glScaled(15,15,3);
    glColor3ub(31, 41, 100);
    glutSolidSphere(1,slices,stacks);
    glPopMatrix();



//land

    glPushMatrix();
      glTranslated(2,-2.5,-10);
      glRotated(180,0,1,0);
     glScaled(15,10,3);
     glColor3ub(172, 209, 224);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();
glPushMatrix();
glTranslated(aa,0,ss);

//cloth
 glPushMatrix();
     glTranslated(0,-1.6,-6);
     glRotated(-90,0.1,0,0);
     glColor3ub(255, 95, 0);
     glScaled(1.5,1.7,2);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

//3black

  glPushMatrix();

glTranslated(0,-.5,-4);
     glRotated(90,1,0,0);
     glScaled(.1,.1,.1);
     glColor3f(0,0,0);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

       glPushMatrix();

   glTranslated(0,-.8,-4);
     glRotated(90,1,0,0);
     glScaled(.1,.1,.1);
     glColor3f(0,0,0);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

       glPushMatrix();

glTranslated(0,-1.1,-4);
     glRotated(90,1,0,0);
     glScaled(.1,.1,.1);
     glColor3f(0,0,0);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

     //second

glPushMatrix();
     glTranslated(0,-.35,-5.7);
     glRotated(-90,0.1,0,0);
     glColor3ub(0, 234, 0);
     glScaled(1,1,1);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

    //face

     glPushMatrix();
     glTranslated(0,.8,-5.8);
     glRotated(90,1,0,0);
     glScaled(1.5,1.5,1.5);
     glColor3ub(244, 224, 190);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

//left leg

     glPushMatrix();

glTranslated(-.74,-2.2,-6);

     glRotated(90,1,0,0);
     glScaled(.9,.9,.9);
     glColor3ub(128, 128, 128);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();


 glPushMatrix();
glTranslated(-.74,-2.8,-6.1);
     glRotated(-90,0.1,0,0);
     glColor3ub(0,0,0);
     glScaled(.95,1,1);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

//right leg
     glPushMatrix();

glTranslated(.74,-2.2,-6);
     glRotated(90,1,0,0);
     glScaled(.9,.9,.9);
     glColor3ub(128, 128, 128);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

glPushMatrix();
glTranslated(.74,-2.8,-6.1);
     glRotated(-90,0.1,0,0);
     glColor3ub(0,0,0);
     glScaled(.95,1,1);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();


     //hand

          glPushMatrix();
     glTranslated(1,-.55,-6);
       glRotated(60,0,1,0);
     glScaled(1.3,.2,.5);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

 glPushMatrix();
     glTranslated(-1,-.55,-6);
       glRotated(-60,0,1,0);
     glScaled(1.3,.2,.5);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();


     //mouse
     glPushMatrix();
     glTranslated(0,.3,-3);
       glRotated(180,0,.5,-1);
     glScaled(.2,-.2,.2);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

     //white
        glPushMatrix();
     glTranslated(0,0.1,-3);
       glRotated(-180,0,.5,-1);
       glColor3f(1,1,1);
     glScaled(.1,.1,.1);
     glutSolidCube(.3);
     glPopMatrix();

      glPushMatrix();
     glTranslated(-.04,0.1,-3);
       glRotated(-180,0,.5,-1);
       glColor3f(1,1,1);
     glScaled(.1,.1,.1);
     glutSolidCube(.3);
     glPopMatrix();

 glPushMatrix();
     glTranslated(.04,0.1,-3);
       glRotated(-180,0,.5,-1);
       glColor3f(1,1,1);
     glScaled(.1,.1,.1);
     glutSolidCube(.3);
     glPopMatrix();

//eye
//right
       glPushMatrix();

glTranslated(.32,.73,-4);
     glRotated(90,1,0,0);
     glScaled(.1,.1,.1);
     glColor3f(0,0,0);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();
//white
      glPushMatrix();

glTranslated(.35,.8,-4.3);
     glRotated(90,0,1,0);
     glScaled(.2,.3,.2);
     glColor3f(1,1,1);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();


     //left
       glPushMatrix();

glTranslated(-.32,.73,-4);
     glRotated(90,1,0,0);
     glScaled(.1,.1,.1);
     glColor3f(0,0,0);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();

//white
  glPushMatrix();

glTranslated(-.35,.8,-4.3);
     glRotated(90,0,1,0);
     glScaled(.2,.3,.2);
     glColor3f(1,1,1);
     glutSolidSphere(1,slices,stacks);
     glPopMatrix();



     //upeye
     //left

          glPushMatrix();
     glTranslated(-.4,1.3,-4.3);
       glRotated(120,1,0,1);
     glScaled(.05,.2,.2);
     glColor3f(0,0,0);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

     //right

          glPushMatrix();
     glTranslated(.35,1.3,-4.3);
       glRotated(120,1,0,1);
     glScaled(.05,.2,.2);
     glColor3f(0,0,0);
     glutSolidCone(1,2,slices,stacks);
     glPopMatrix();

     glPopMatrix();
    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {

        case 'a':
            ss-=0.01;
            break;
        case 'd':
            ss+=0.01;
            break;

        case 'w':
            aa+=0.01;
             break;

        case 's':
            aa-=0.01;
             break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
