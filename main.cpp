//Circle using GL_TRIANGLE_FAN
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j=0.0;
GLfloat i = 0.0f;

GLfloat position = -1.0f; // car position
GLfloat speed = 0.04f; // car speed
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.05f;


GLfloat position2= 0.0f;
GLfloat speed2 = 0.05f;

GLfloat positionplane = -1.0f;
GLfloat speedplane = 0.5f;


GLfloat positionShip = 0.0f;
GLfloat speedShip = 0.08f;


GLfloat positionShip1 = 0.0f;
GLfloat speedShip1 = 0.06f;


GLfloat positionbird = -0.2f;
GLfloat speedbird = 0.01f;







GLfloat positionrain = 0.0f;
GLfloat speedrain = 0.05f;

void updaterain(int value) {

    if(positionrain >0.1f)
        positionrain = 0.0f;

    positionrain += speedrain;

	glutPostRedisplay();


	glutTimerFunc(100, updaterain, 0);
}






void updatebird(int value) {
    if(positionbird >0.5)
        positionbird =-1.8f;
    positionbird += speedbird;
	glutPostRedisplay();
	glutTimerFunc(100, updatebird, 0);
}

void update(int value) {
if(position >1.5)
        position =-2.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}




void update2(int value) {
if(position2 >1.5)
        position2 =-2.0f;
    position2 += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}

void update1(int value) {
if(position1 <- 1.0)
        position1 = 1.0f;
    position1 -= speed1;
	glutPostRedisplay();
	glutTimerFunc(100, update1, 0);

}

void updateplane(int value) {
    if(positionplane > 8.0)
        positionplane = -5.0f;
    positionplane += speedplane;
	glutPostRedisplay();
	glutTimerFunc(100, updateplane, 0);
}

void updateShip(int value) {
    if(positionShip <-7.0)
        positionShip = 6.0f;
    positionShip -= speedShip;
	glutPostRedisplay();
	glutTimerFunc(100, updateShip, 0);
}

void updateShip1(int value) {
    if(positionShip1 > 6.0)
        positionShip1 = -6.0f;
    positionShip1 += speedShip1;
	glutPostRedisplay();
	glutTimerFunc(100, updateShip1, 0);
}






void display_day(){

            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glLoadIdentity();

//sky
    glBegin(GL_QUADS);
    glColor3ub(45, 221, 252);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    glBegin(GL_QUADS); // grass
    glColor3ub(51, 204, 51);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();

	//sun

    int i;

	GLfloat x=-.2f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3f(1.000, 1.000, 0.000);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//cloud1
	glTranslatef(positionbird,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
GLfloat a=-.25f; GLfloat b=.83f; GLfloat radius1 =.07f;
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
GLfloat e=-.3f; GLfloat f=.83f; GLfloat radius2 =.06f;
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
GLfloat p= -.2f; GLfloat q =.84f; GLfloat radius3 =.06f;
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();





//cloud2gl

glTranslatef(positionbird,0,0);
glTranslatef(0.5,0.05,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();






//cloud3

glTranslatef(positionbird,0,0);
glTranslatef(1.1,-0.02,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(230, 230, 230);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();












//hill
  //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.65);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.67);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.65);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();





    glBegin(GL_TRIANGLES);
    glColor3ub(102, 102, 0);
    glVertex2f(0.5,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.65,0.7);
    glEnd();


   gluOrtho2D(-5,5,-4,4);
   //building
glColor3ub(255, 140, 26);
	glBegin(GL_QUADS);
	glVertex2f(-5,3);
	glVertex2f(-5,.5);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.9,3);
	glEnd();
glColor3ub(204, 102, 0);
	glBegin(GL_QUADS);
	glVertex2f(-3.9,3);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.7,.5);
	glVertex2f(-3.7,2.7);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.85,2.8);
	glVertex2f(-4.85,2.4);
	glVertex2f(-4.5,2.4);
	glVertex2f(-4.5,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.4,2.8);
	glVertex2f(-4.4,2.4);
	glVertex2f(-4.05,2.4);
	glVertex2f(-4.05,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,2.2);
	glVertex2f(-4.85,1.8);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.5,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1.6);
	glVertex2f(-4.85,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1);
	glVertex2f(-4.85,.5);
	glVertex2f(-4.5,.5);
	glVertex2f(-4.5,1);
	glEnd();
	////
glColor3ub(204, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.6,2.5);
	glVertex2f(-4.6,.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.5,2.5);
	glEnd();
glColor3ub(172, 57, 115);
	glBegin(GL_QUADS);
	glVertex2f(-3.5,2.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.3,.5);
	glVertex2f(-3.3,2.2);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.45,2.3);
	glVertex2f(-4.45,1.9);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,2.3);
	glVertex2f(-4,1.9);
	glVertex2f(-3.65,1.9);
	glVertex2f(-3.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.7);
	glVertex2f(-4.45,1.3);
	glVertex2f(-4.1,1.3);
	glVertex2f(-4.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.7);
	glVertex2f(-4,1.3);
	glVertex2f(-3.65,1.3);
	glVertex2f(-3.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.1);
	glVertex2f(-4.45,.7);
	glVertex2f(-4.1,.7);
	glVertex2f(-4.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.1);
	glVertex2f(-4,.7);
	glVertex2f(-3.65,.7);
	glVertex2f(-3.65,1.1);
	glEnd();
	////
glColor3ub(178, 178, 102);
	glBegin(GL_QUADS);
	glVertex2f(-2.6,2.5);
	glVertex2f(-2.6,.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.5,2.5);
	glEnd();
glColor3ub(136, 136, 68);
	glBegin(GL_QUADS);
	glVertex2f(-1.5,2.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.3,.5);
	glVertex2f(-1.3,2.2);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-2.45,2.3);
	glVertex2f(-2.45,1.9);
	glVertex2f(-2.1,1.9);
	glVertex2f(-2.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,2.3);
	glVertex2f(-2,1.9);
	glVertex2f(-1.65,1.9);
	glVertex2f(-1.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.7);
	glVertex2f(-2.45,1.3);
	glVertex2f(-2.1,1.3);
	glVertex2f(-2.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.7);
	glVertex2f(-2,1.3);
	glVertex2f(-1.65,1.3);
	glVertex2f(-1.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.1);
	glVertex2f(-2.45,.7);
	glVertex2f(-2.1,.7);
	glVertex2f(-2.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.1);
	glVertex2f(-2,.7);
	glVertex2f(-1.65,.7);
	glVertex2f(-1.65,1.1);
	glEnd();

	////
glColor3ub(204, 102, 204);
	glBegin(GL_QUADS);
	glVertex2f(-3.25,2);
	glVertex2f(-3.25,.5);
	glVertex2f(-2.2,.5);
	glVertex2f(-2.2,2);
	glEnd();
glColor3ub(191, 64, 191);
	glBegin(GL_QUADS);
	glVertex2f(-2.2,2);
	glVertex2f(-2.2,.5);
	glVertex2f(-2,.5);
	glVertex2f(-2,1.7);
	glEnd();
////windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-3.15,1.8);
	glVertex2f(-3.15,1.4);
	glVertex2f(-2.8,1.4);
	glVertex2f(-2.8,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.8);
	glVertex2f(-2.7,1.4);
	glVertex2f(-2.35,1.4);
	glVertex2f(-2.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-3.15,1.2);
	glVertex2f(-3.15,.8);
	glVertex2f(-2.8,.8);
	glVertex2f(-2.8,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.2);
	glVertex2f(-2.7,.8);
	glVertex2f(-2.35,.8);
	glVertex2f(-2.35,1.2);
	glEnd();

	////
glColor3ub(102, 153, 153);
	glBegin(GL_QUADS);
	glVertex2f(-1.1,2.5);
	glVertex2f(-1.1,.5);
	glVertex2f(0,.5);
	glVertex2f(0,2.5);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(0,2.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.2,2.2);
	glEnd();

//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-.95,2.3);
	glVertex2f(-.95,1.9);
	glVertex2f(-.6,1.9);
	glVertex2f(-.6,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,2.3);
	glVertex2f(-.5,1.9);
	glVertex2f(-.15,1.9);
	glVertex2f(-.15,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.7);
	glVertex2f(-.95,1.3);
	glVertex2f(-.6,1.3);
	glVertex2f(-.6,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.7);
	glVertex2f(-.5,1.3);
	glVertex2f(-.15,1.3);
	glVertex2f(-.15,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.1);
	glVertex2f(-.95,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.6,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.1);
	glVertex2f(-.5,.7);
	glVertex2f(-.15,.7);
	glVertex2f(-.15,1.1);
	glEnd();
////
glColor3ub(133, 133, 173);
	glBegin(GL_QUADS);
	glVertex2f(.4,2);
	glVertex2f(.4,.5);
	glVertex2f(1.5,.5);
	glVertex2f(1.5,2);
	glEnd();

	glColor3ub(153, 153, 102); //Sign board stand
	glBegin(GL_QUADS);
	glVertex2f(.97,2);
	glVertex2f(.97,2.3);
	glVertex2f(0.93,2.3);
	glVertex2f(0.93,2.0);
	glEnd();

	glColor3ub(179, 179, 179); //Sign board
	glBegin(GL_QUADS);
	glVertex2f(1.3,2.5);
	glVertex2f(.6,2.5);
	glVertex2f(.6,2.1);
	glVertex2f(1.3,2.1);
	glEnd();

    glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(.98,2.15);
	glVertex2f(.98,2.45);
	glVertex2f(.92,2.45);
	glVertex2f(.92,2.15);
	glEnd();


	glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(1.14,2.27);
	glVertex2f(.77,2.27);
	glVertex2f(.77,2.33);
	glVertex2f(1.14,2.33);
	glEnd();




////windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(.55,1.8);
	glVertex2f(.55,1.4);
	glVertex2f(.9,1.4);
	glVertex2f(.9,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.8);
	glVertex2f(1,1.4);
	glVertex2f(1.35,1.4);
	glVertex2f(1.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(.55,1.2);
	glVertex2f(.55,.8);
	glVertex2f(.9,.8);
	glVertex2f(.9,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.2);
	glVertex2f(1,.8);
	glVertex2f(1.35,.8);
	glVertex2f(1.35,1.2);
	glEnd();

////
glColor3ub(71, 107, 107);
	glBegin(GL_QUADS);
	glVertex2f(1.7,2.7);
	glVertex2f(1.7,.5);
	glVertex2f(1.9,.5);
	glVertex2f(1.9,3);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(1.9,3);
	glVertex2f(1.9,.5);
	glVertex2f(3,.5);
	glVertex2f(3,3);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(2.05,2.8);
	glVertex2f(2.05,2.4);
	glVertex2f(2.4,2.4);
	glVertex2f(2.4,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.8);
	glVertex2f(2.5,2.4);
	glVertex2f(2.85,2.4);
	glVertex2f(2.85,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,2.2);
	glVertex2f(2.05,1.8);
	glVertex2f(2.4,1.8);
	glVertex2f(2.4,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.2);
	glVertex2f(2.5,1.8);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1.6);
	glVertex2f(2.05,1.2);
	glVertex2f(2.4,1.2);
	glVertex2f(2.4,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1.6);
	glVertex2f(2.5,1.2);
	glVertex2f(2.85,1.2);
	glVertex2f(2.85,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1);
	glVertex2f(2.05,.5);
	glVertex2f(2.4,.5);
	glVertex2f(2.4,1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1);
	glVertex2f(2.5,.5);
	glVertex2f(2.85,.5);
	glVertex2f(2.85,1);
	glEnd();

////
glColor3ub(0, 134, 179);
	glBegin(GL_QUADS);
	glVertex2f(3.8,3.2);
	glVertex2f(3.8,.5);
	glVertex2f(4,.5);
	glVertex2f(4,3.5);
	glEnd();
glColor3ub(0, 153, 204);
	glBegin(GL_QUADS);
	glVertex2f(4,3.5);
	glVertex2f(4,.5);
	glVertex2f(5,.5);
	glVertex2f(5,3.5);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(4.15,3.3);
	glVertex2f(4.15,2.9);
	glVertex2f(4.5,2.9);
	glVertex2f(4.5,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,3.3);
	glVertex2f(4.6,2.9);
	glVertex2f(4.95,2.9);
	glVertex2f(4.95,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.7);
	glVertex2f(4.15,2.3);
	glVertex2f(4.5,2.3);
	glVertex2f(4.5,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.7);
	glVertex2f(4.6,2.3);
	glVertex2f(4.95,2.3);
	glVertex2f(4.95,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.1);
	glVertex2f(4.15,1.7);
	glVertex2f(4.5,1.7);
	glVertex2f(4.5,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.1);
	glVertex2f(4.6,1.7);
	glVertex2f(4.95,1.7);
	glVertex2f(4.95,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,1.5);
	glVertex2f(4.15,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,1.5);
	glVertex2f(4.6,1.1);
	glVertex2f(4.95,1.1);
	glVertex2f(4.95,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,.9);
	glVertex2f(4.15,.7);
	glVertex2f(4.5,.7);
	glVertex2f(4.5,.9);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,.9);
	glVertex2f(4.6,.7);
	glVertex2f(4.95,.7);
	glVertex2f(4.95,.9);
	glEnd();
////
glColor3ub(122, 122, 82);
	glBegin(GL_QUADS);
	glVertex2f(3.1,2.2);
	glVertex2f(3.1,.5);
	glVertex2f(3.3,.5);
	glVertex2f(3.3,2.5);
	glEnd();
glColor3ub(138, 138, 92);
	glBegin(GL_QUADS);
	glVertex2f(3.3,2.5);
	glVertex2f(3.3,.5);
	glVertex2f(4.4,.5);
	glVertex2f(4.4,2.5);
	glEnd();
//windows
glColor3ub(51, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(3.45,2.3);
	glVertex2f(3.45,1.9);
	glVertex2f(3.8,1.9);
	glVertex2f(3.8,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,2.3);
	glVertex2f(3.9,1.9);
	glVertex2f(4.25,1.9);
	glVertex2f(4.25,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.7);
	glVertex2f(3.45,1.3);
	glVertex2f(3.8,1.3);
	glVertex2f(3.8,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.3);
	glVertex2f(4.25,1.3);
	glVertex2f(4.25,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.1);
	glVertex2f(3.45,.7);
	glVertex2f(3.8,.7);
	glVertex2f(3.8,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,.7);
	glVertex2f(4.25,.7);
	glVertex2f(4.25,1.1);
	glEnd();






    glBegin(GL_QUADS); //river
    glColor3ub(35, 200, 255);
	glVertex2f(-5,-2.3);
	glVertex2f(-5,-4);
	glVertex2f(5,-4);
	glVertex2f(5,-2.3);
	glEnd();




    glTranslatef(positionShip1,0.0f, 0.0f);
    glBegin(GL_POLYGON); //ship1
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship1 shape1
    glColor3ub(230, 115, 0);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



    glBegin(GL_QUADS); //ship1 shape1 window1
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



	glBegin(GL_QUADS); //ship1 shape2
    glColor3ub(153, 77, 0);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();




	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window2
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship1 shape2 window4
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window5
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window6
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();











	glPushMatrix();

	//road
	glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.1);
    glVertex2f(-1, -.1);
    glEnd();


    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);

    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();




    //car1
    glPushMatrix();

    glTranslatef(position2, 0, 0);
    glBegin(GL_POLYGON);//car1 shape
    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.355,-.24);
    glVertex2f(-.555,-.24);
    glVertex2f(-.565,-.33);


    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_QUADS);//car1 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.335,-.33);
    glVertex2f(-.36,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





    glTranslatef(0.6f, 0.12f, 0.0f);
    glBegin(GL_POLYGON);//car2 shape
    glColor3ub(204, 0, 0);
    glVertex2f(-.30,-.33);
    glVertex2f(-.355,-.25);
    glVertex2f(-.555,-.25);
    glVertex2f(-.565,-.33);


    glColor3ub(204, 0, 0);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_QUADS);//car1 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.32,-.33);
    glVertex2f(-.35,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glPopMatrix();
glLoadIdentity();

	//plane
	gluOrtho2D(-5,5,-4,4);
	glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(159, 190, 223);
	glBegin(GL_POLYGON);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.1,3.3);
	glVertex2f(-1.9,3.3);
	glVertex2f(-1.7,3.4);
	glVertex2f(-2.1,3.6);
	glEnd();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(159, 190, 223);
	glBegin(GL_QUADS);
	glVertex2f(-2.5,3.5);
	glVertex2f(-2.2,3.5);
	glVertex2f(-2.7,3.8);
	glVertex2f(-2.8,3.8);
	glEnd();
		glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);// plane body
    glBegin(GL_QUADS);
    glColor3ub(159, 190, 223);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.3,3.7);
	glVertex2f(-3.3,3.6);
	glVertex2f(-3.1,3.3);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(57, 113, 172);
	glVertex2f(-1.9,3.45);
	glVertex2f(-2,3.55);
	glVertex2f(-2.1,3.55);
	glVertex2f(-2.1,3.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(57, 113, 172);
	glVertex2f(-2.2,3.45);
	glVertex2f(-2.2,3.55);
	glVertex2f(-2.3,3.55);
	glVertex2f(-2.3,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(57, 113, 172);
	glVertex2f(-2.35,3.45);
	glVertex2f(-2.35,3.55);
	glVertex2f(-2.45,3.55);
	glVertex2f(-2.45,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(57, 113, 172);
	glVertex2f(-2.5,3.45);
	glVertex2f(-2.5,3.55);
	glVertex2f(-2.6,3.55);
	glVertex2f(-2.6,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(57, 113, 172);
	glVertex2f(-2.65,3.45);
	glVertex2f(-2.65,3.54);
	glVertex2f(-2.75,3.54);
	glVertex2f(-2.75,3.45);

    glEnd();




    glPopMatrix();







	//lamp post 1
glScalef(1.2,1.2,0);
glTranslatef(0,.5,0);

	 glBegin(GL_QUADS);
	 glColor3ub(214, 214, 194);
     glVertex2f(-3.0f,-0.9f);
    glVertex2f(-3.1f,-0.9f);
    glVertex2f(-3.1f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-3.0f,-0.4f);
    glVertex2f(-2.8f,-0.4f);
    glVertex2f(-2.8f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

   glBegin(GL_TRIANGLES);
    glVertex2f(-2.9f,-0.5f);
    glVertex2f(-2.7f,-0.5f);
    glVertex2f(-2.8f,-0.4f);
    glEnd();

	//lamp post 2


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(-1.0f,-0.9f);
    glVertex2f(-1.1f,-0.9f);
    glVertex2f(-1.1f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.8f,-0.4f);
    glEnd();

	//lamp post 3


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.0f,-0.9f);
    glVertex2f(1.1f,-0.9f);
    glVertex2f(1.1f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1.0f,-0.4f);
    glVertex2f(0.8f,-0.4f);
    glVertex2f(0.8f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.8f,-0.4f);
    glEnd();

    //lamp post 4

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.0f,-0.9f);
    glVertex2f(3.1f,-0.9f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(3.0f,-0.4f);
    glVertex2f(2.8f,-0.4f);
    glVertex2f(2.8f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(2.8f,-0.4f);
    glEnd();

glLoadIdentity();
    //trafic light
gluOrtho2D(-5,5,-4,4);
glScalef(1.5,1.5,0);
glTranslatef(0,.5,0);


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.8,-.8);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.8);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.7,0.1);
glVertex2f(1.7,-.4);
glVertex2f(2,-.4);
glVertex2f(2,0.1);
glEnd();


glBegin(GL_QUADS);//red light
glColor3ub(238, 24, 3);
glVertex2f(1.8,0);
glVertex2f(1.8,-.1);
glVertex2f(1.9,-.1);
glVertex2f(1.9,0);
glEnd();

glBegin(GL_QUADS);//yellow light
glColor3ub(249, 237, 0);
glVertex2f(1.8,-.1);
glVertex2f(1.8,-.2);
glVertex2f(1.9,-.2);
glVertex2f(1.9,-.1);
glEnd();


glBegin(GL_QUADS);//green light
glColor3ub(162, 201, 9);
glVertex2f(1.8,-.2);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.2);
glEnd();






    glScalef(0.7,0.7,0);
    glTranslatef(4.5,-0.65,0);
    glTranslatef(positionShip1,0.0f, 0.0f);

    glBegin(GL_POLYGON); //ship2
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship2 shape1
    glColor3ub(0, 128, 128);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



	glBegin(GL_QUADS); //ship2 shape2
    glColor3ub(49, 155, 102);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();

    glBegin(GL_QUADS); //ship2 shape1 window1
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();







	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window2
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship2 shape2 window4
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window5
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window6
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();



    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();




    glTranslatef(.45,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.85,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();





    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();







	       glFlush();
}




void display_night(){

            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glLoadIdentity();

//sky
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 51);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    glBegin(GL_QUADS); // grass
    glColor3ub(0, 77, 0);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();

	//moon

    int i;

	GLfloat x=-0.7; GLfloat y=.8f; GLfloat radius =.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255, 255, 230);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//cloud1
	glTranslatef(positionbird,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat a=-.25f; GLfloat b=.83f; GLfloat radius1 =.07f;
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat e=-.3f; GLfloat f=.83f; GLfloat radius2 =.06f;
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat p= -.2f; GLfloat q =.84f; GLfloat radius3 =.06f;
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();





//cloud2gl

glTranslatef(positionbird,0,0);
glTranslatef(0.5,0.05,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();






//cloud3

glTranslatef(positionbird,0,0);
glTranslatef(1.1,-0.02,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();












//hill
  //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.65);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.67);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.65);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();





    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.5,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.65,0.7);
    glEnd();


   gluOrtho2D(-5,5,-4,4);
   //building
glColor3ub(255, 140, 26);
	glBegin(GL_QUADS);
	glVertex2f(-5,3);
	glVertex2f(-5,.5);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.9,3);
	glEnd();
glColor3ub(204, 102, 0);
	glBegin(GL_QUADS);
	glVertex2f(-3.9,3);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.7,.5);
	glVertex2f(-3.7,2.7);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-4.85,2.8);
	glVertex2f(-4.85,2.4);
	glVertex2f(-4.5,2.4);
	glVertex2f(-4.5,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.4,2.8);
	glVertex2f(-4.4,2.4);
	glVertex2f(-4.05,2.4);
	glVertex2f(-4.05,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,2.2);
	glVertex2f(-4.85,1.8);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.5,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1.6);
	glVertex2f(-4.85,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1);
	glVertex2f(-4.85,.5);
	glVertex2f(-4.5,.5);
	glVertex2f(-4.5,1);
	glEnd();
	////
glColor3ub(204, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.6,2.5);
	glVertex2f(-4.6,.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.5,2.5);
	glEnd();
glColor3ub(172, 57, 115);
	glBegin(GL_QUADS);
	glVertex2f(-3.5,2.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.3,.5);
	glVertex2f(-3.3,2.2);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-4.45,2.3);
	glVertex2f(-4.45,1.9);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,2.3);
	glVertex2f(-4,1.9);
	glVertex2f(-3.65,1.9);
	glVertex2f(-3.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.7);
	glVertex2f(-4.45,1.3);
	glVertex2f(-4.1,1.3);
	glVertex2f(-4.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.7);
	glVertex2f(-4,1.3);
	glVertex2f(-3.65,1.3);
	glVertex2f(-3.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.1);
	glVertex2f(-4.45,.7);
	glVertex2f(-4.1,.7);
	glVertex2f(-4.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.1);
	glVertex2f(-4,.7);
	glVertex2f(-3.65,.7);
	glVertex2f(-3.65,1.1);
	glEnd();
	////
glColor3ub(178, 178, 102);
	glBegin(GL_QUADS);
	glVertex2f(-2.6,2.5);
	glVertex2f(-2.6,.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.5,2.5);
	glEnd();
glColor3ub(136, 136, 68);
	glBegin(GL_QUADS);
	glVertex2f(-1.5,2.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.3,.5);
	glVertex2f(-1.3,2.2);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-2.45,2.3);
	glVertex2f(-2.45,1.9);
	glVertex2f(-2.1,1.9);
	glVertex2f(-2.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,2.3);
	glVertex2f(-2,1.9);
	glVertex2f(-1.65,1.9);
	glVertex2f(-1.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.7);
	glVertex2f(-2.45,1.3);
	glVertex2f(-2.1,1.3);
	glVertex2f(-2.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.7);
	glVertex2f(-2,1.3);
	glVertex2f(-1.65,1.3);
	glVertex2f(-1.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.1);
	glVertex2f(-2.45,.7);
	glVertex2f(-2.1,.7);
	glVertex2f(-2.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.1);
	glVertex2f(-2,.7);
	glVertex2f(-1.65,.7);
	glVertex2f(-1.65,1.1);
	glEnd();

	////
glColor3ub(204, 102, 204);
	glBegin(GL_QUADS);
	glVertex2f(-3.25,2);
	glVertex2f(-3.25,.5);
	glVertex2f(-2.2,.5);
	glVertex2f(-2.2,2);
	glEnd();
glColor3ub(191, 64, 191);
	glBegin(GL_QUADS);
	glVertex2f(-2.2,2);
	glVertex2f(-2.2,.5);
	glVertex2f(-2,.5);
	glVertex2f(-2,1.7);
	glEnd();
////windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-3.15,1.8);
	glVertex2f(-3.15,1.4);
	glVertex2f(-2.8,1.4);
	glVertex2f(-2.8,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.8);
	glVertex2f(-2.7,1.4);
	glVertex2f(-2.35,1.4);
	glVertex2f(-2.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-3.15,1.2);
	glVertex2f(-3.15,.8);
	glVertex2f(-2.8,.8);
	glVertex2f(-2.8,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.2);
	glVertex2f(-2.7,.8);
	glVertex2f(-2.35,.8);
	glVertex2f(-2.35,1.2);
	glEnd();

	////
glColor3ub(102, 153, 153);
	glBegin(GL_QUADS);
	glVertex2f(-1.1,2.5);
	glVertex2f(-1.1,.5);
	glVertex2f(0,.5);
	glVertex2f(0,2.5);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(0,2.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.2,2.2);
	glEnd();

		glColor3ub(153, 153, 102); //Sign board stand
	glBegin(GL_QUADS);
	glVertex2f(.97,2);
	glVertex2f(.97,2.3);
	glVertex2f(0.93,2.3);
	glVertex2f(0.93,2.0);
	glEnd();

	glColor3ub(179, 179, 179); //Sign board
	glBegin(GL_QUADS);
	glVertex2f(1.3,2.5);
	glVertex2f(.6,2.5);
	glVertex2f(.6,2.1);
	glVertex2f(1.3,2.1);
	glEnd();

    glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(.98,2.15);
	glVertex2f(.98,2.45);
	glVertex2f(.92,2.45);
	glVertex2f(.92,2.15);
	glEnd();


	glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(1.14,2.27);
	glVertex2f(.77,2.27);
	glVertex2f(.77,2.33);
	glVertex2f(1.14,2.33);
	glEnd();

//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-.95,2.3);
	glVertex2f(-.95,1.9);
	glVertex2f(-.6,1.9);
	glVertex2f(-.6,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,2.3);
	glVertex2f(-.5,1.9);
	glVertex2f(-.15,1.9);
	glVertex2f(-.15,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.7);
	glVertex2f(-.95,1.3);
	glVertex2f(-.6,1.3);
	glVertex2f(-.6,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.7);
	glVertex2f(-.5,1.3);
	glVertex2f(-.15,1.3);
	glVertex2f(-.15,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.1);
	glVertex2f(-.95,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.6,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.1);
	glVertex2f(-.5,.7);
	glVertex2f(-.15,.7);
	glVertex2f(-.15,1.1);
	glEnd();
////
glColor3ub(133, 133, 173);
	glBegin(GL_QUADS);
	glVertex2f(.4,2);
	glVertex2f(.4,.5);
	glVertex2f(1.5,.5);
	glVertex2f(1.5,2);
	glEnd();
////windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(.55,1.8);
	glVertex2f(.55,1.4);
	glVertex2f(.9,1.4);
	glVertex2f(.9,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.8);
	glVertex2f(1,1.4);
	glVertex2f(1.35,1.4);
	glVertex2f(1.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(.55,1.2);
	glVertex2f(.55,.8);
	glVertex2f(.9,.8);
	glVertex2f(.9,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.2);
	glVertex2f(1,.8);
	glVertex2f(1.35,.8);
	glVertex2f(1.35,1.2);
	glEnd();

////
glColor3ub(71, 107, 107);
	glBegin(GL_QUADS);
	glVertex2f(1.7,2.7);
	glVertex2f(1.7,.5);
	glVertex2f(1.9,.5);
	glVertex2f(1.9,3);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(1.9,3);
	glVertex2f(1.9,.5);
	glVertex2f(3,.5);
	glVertex2f(3,3);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(2.05,2.8);
	glVertex2f(2.05,2.4);
	glVertex2f(2.4,2.4);
	glVertex2f(2.4,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.8);
	glVertex2f(2.5,2.4);
	glVertex2f(2.85,2.4);
	glVertex2f(2.85,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,2.2);
	glVertex2f(2.05,1.8);
	glVertex2f(2.4,1.8);
	glVertex2f(2.4,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.2);
	glVertex2f(2.5,1.8);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1.6);
	glVertex2f(2.05,1.2);
	glVertex2f(2.4,1.2);
	glVertex2f(2.4,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1.6);
	glVertex2f(2.5,1.2);
	glVertex2f(2.85,1.2);
	glVertex2f(2.85,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1);
	glVertex2f(2.05,.5);
	glVertex2f(2.4,.5);
	glVertex2f(2.4,1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1);
	glVertex2f(2.5,.5);
	glVertex2f(2.85,.5);
	glVertex2f(2.85,1);
	glEnd();

////
glColor3ub(0, 134, 179);
	glBegin(GL_QUADS);
	glVertex2f(3.8,3.2);
	glVertex2f(3.8,.5);
	glVertex2f(4,.5);
	glVertex2f(4,3.5);
	glEnd();
glColor3ub(0, 153, 204);
	glBegin(GL_QUADS);
	glVertex2f(4,3.5);
	glVertex2f(4,.5);
	glVertex2f(5,.5);
	glVertex2f(5,3.5);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(4.15,3.3);
	glVertex2f(4.15,2.9);
	glVertex2f(4.5,2.9);
	glVertex2f(4.5,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,3.3);
	glVertex2f(4.6,2.9);
	glVertex2f(4.95,2.9);
	glVertex2f(4.95,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.7);
	glVertex2f(4.15,2.3);
	glVertex2f(4.5,2.3);
	glVertex2f(4.5,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.7);
	glVertex2f(4.6,2.3);
	glVertex2f(4.95,2.3);
	glVertex2f(4.95,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.1);
	glVertex2f(4.15,1.7);
	glVertex2f(4.5,1.7);
	glVertex2f(4.5,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.1);
	glVertex2f(4.6,1.7);
	glVertex2f(4.95,1.7);
	glVertex2f(4.95,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,1.5);
	glVertex2f(4.15,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,1.5);
	glVertex2f(4.6,1.1);
	glVertex2f(4.95,1.1);
	glVertex2f(4.95,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,.9);
	glVertex2f(4.15,.7);
	glVertex2f(4.5,.7);
	glVertex2f(4.5,.9);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,.9);
	glVertex2f(4.6,.7);
	glVertex2f(4.95,.7);
	glVertex2f(4.95,.9);
	glEnd();
////
glColor3ub(122, 122, 82);
	glBegin(GL_QUADS);
	glVertex2f(3.1,2.2);
	glVertex2f(3.1,.5);
	glVertex2f(3.3,.5);
	glVertex2f(3.3,2.5);
	glEnd();
glColor3ub(138, 138, 92);
	glBegin(GL_QUADS);
	glVertex2f(3.3,2.5);
	glVertex2f(3.3,.5);
	glVertex2f(4.4,.5);
	glVertex2f(4.4,2.5);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(3.45,2.3);
	glVertex2f(3.45,1.9);
	glVertex2f(3.8,1.9);
	glVertex2f(3.8,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,2.3);
	glVertex2f(3.9,1.9);
	glVertex2f(4.25,1.9);
	glVertex2f(4.25,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.7);
	glVertex2f(3.45,1.3);
	glVertex2f(3.8,1.3);
	glVertex2f(3.8,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.3);
	glVertex2f(4.25,1.3);
	glVertex2f(4.25,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.1);
	glVertex2f(3.45,.7);
	glVertex2f(3.8,.7);
	glVertex2f(3.8,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,.7);
	glVertex2f(4.25,.7);
	glVertex2f(4.25,1.1);
	glEnd();






    glBegin(GL_QUADS); //river
    glColor3ub(0, 51, 102);
	glVertex2f(-5,-2.3);
	glVertex2f(-5,-4);
	glVertex2f(5,-4);
	glVertex2f(5,-2.3);
	glEnd();




    glTranslatef(positionShip1,0.0f, 0.0f);
    glBegin(GL_POLYGON); //ship1
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship1 shape1
    glColor3ub(230, 115, 0);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



    glBegin(GL_QUADS); //ship1 shape1 window1
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



	glBegin(GL_QUADS); //ship1 shape2
    glColor3ub(153, 77, 0);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();




	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window2
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship1 shape2 window4
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window5
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window6
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();











	glPushMatrix();

	//road
	glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.1);
    glVertex2f(-1, -.1);
    glEnd();


    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);

    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();




    //car1
    glPushMatrix();

    glTranslatef(position2,0,0);
    glBegin(GL_POLYGON);//car1 shape
    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.355,-.24);
    glVertex2f(-.555,-.24);
    glVertex2f(-.565,-.33);


    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_QUADS);//car1 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.335,-.33);
    glVertex2f(-.36,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();



    glBegin(GL_TRIANGLES);//car1 light
    glColor3ub(255, 255, 230);
    glVertex2f(-.19,-.355);
    glVertex2f(-.19,-.415);
    glVertex2f(-.255,-.385);

    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





    glTranslatef(0.6f, 0.12f, 0.0f);
    glBegin(GL_POLYGON);//car2 shape
    glColor3ub(204, 0, 0);
    glVertex2f(-.30,-.33);
    glVertex2f(-.355,-.25);
    glVertex2f(-.555,-.25);
    glVertex2f(-.565,-.33);


    glColor3ub(204, 0, 0);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_TRIANGLES);//car1 light
    glColor3ub(255, 255, 230);
    glVertex2f(-.19,-.355);
    glVertex2f(-.19,-.415);
    glVertex2f(-.255,-.385);

    glEnd();



    glBegin(GL_QUADS);//car2 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.32,-.33);
    glVertex2f(-.35,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glPopMatrix();
glLoadIdentity();

	//plane
	gluOrtho2D(-5,5,-4,4);
	glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(0, 77, 230);
	glBegin(GL_POLYGON);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.1,3.3);
	glVertex2f(-1.9,3.3);
	glVertex2f(-1.7,3.4);
	glVertex2f(-2.1,3.6);
	glEnd();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(0, 77, 230);
	glBegin(GL_QUADS);
	glVertex2f(-2.5,3.5);
	glVertex2f(-2.2,3.5);
	glVertex2f(-2.7,3.8);
	glVertex2f(-2.8,3.8);
	glEnd();
		glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);// plane body
    glBegin(GL_QUADS);
    glColor3ub(0, 77, 230);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.3,3.7);
	glVertex2f(-3.3,3.6);
	glVertex2f(-3.1,3.3);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-1.9,3.45);
	glVertex2f(-2,3.55);
	glVertex2f(-2.1,3.55);
	glVertex2f(-2.1,3.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.2,3.45);
	glVertex2f(-2.2,3.55);
	glVertex2f(-2.3,3.55);
	glVertex2f(-2.3,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.35,3.45);
	glVertex2f(-2.35,3.55);
	glVertex2f(-2.45,3.55);
	glVertex2f(-2.45,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.5,3.45);
	glVertex2f(-2.5,3.55);
	glVertex2f(-2.6,3.55);
	glVertex2f(-2.6,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.65,3.45);
	glVertex2f(-2.65,3.54);
	glVertex2f(-2.75,3.54);
	glVertex2f(-2.75,3.45);

    glEnd();




    glPopMatrix();







	//lamp post 1
glScalef(1.2,1.2,0);
glTranslatef(0,.5,0);

	 glBegin(GL_QUADS);
	 glColor3ub(214, 214, 194);
     glVertex2f(-3.0f,-0.9f);
    glVertex2f(-3.1f,-0.9f);
    glVertex2f(-3.1f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-3.0f,-0.4f);
    glVertex2f(-2.8f,-0.4f);
    glVertex2f(-2.8f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

   glBegin(GL_TRIANGLES);
    glVertex2f(-2.9f,-0.5f);
    glVertex2f(-2.7f,-0.5f);
    glVertex2f(-2.8f,-0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,214,51);
    glVertex2f(-2.8,-0.5);
    glVertex2f(-2.9,-0.9);
    glVertex2f(-2.5,-0.9);

    glEnd();

	//lamp post 2


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(-1.0f,-0.9f);
    glVertex2f(-1.1f,-0.9f);
    glVertex2f(-1.1f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);//lamp post 2 light
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.8f,-0.4f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,214,51);
    glVertex2f(-0.8,-0.5);
    glVertex2f(-0.9,-0.9);
    glVertex2f(-0.5,-0.9);

    glEnd();

	//lamp post 3


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.0f,-0.9f);
    glVertex2f(1.1f,-0.9f);
    glVertex2f(1.1f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1.0f,-0.4f);
    glVertex2f(0.8f,-0.4f);
    glVertex2f(0.8f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.8f,-0.4f);
    glEnd();


    glBegin(GL_TRIANGLES);//lamp post 3 light
    glColor3ub(255,214,51);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.9,-0.9);
    glVertex2f(0.5,-0.9);

    glEnd();

    //lamp post 4

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.0f,-0.9f);
    glVertex2f(3.1f,-0.9f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(3.0f,-0.4f);
    glVertex2f(2.8f,-0.4f);
    glVertex2f(2.8f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(2.8f,-0.4f);
    glEnd();


    glBegin(GL_TRIANGLES);//lamp post 3 light
    glColor3ub(255,214,51);
    glVertex2f(2.8,-0.5);
    glVertex2f(2.9,-0.9);
    glVertex2f(2.5,-0.9);

    glEnd();

glLoadIdentity();
    //trafic light
gluOrtho2D(-5,5,-4,4);
glScalef(1.5,1.5,0);
glTranslatef(0,.5,0);


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.8,-.8);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.8);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.7,0.1);
glVertex2f(1.7,-.4);
glVertex2f(2,-.4);
glVertex2f(2,0.1);
glEnd();


glBegin(GL_QUADS);//red light
glColor3ub(238, 24, 3);
glVertex2f(1.8,0);
glVertex2f(1.8,-.1);
glVertex2f(1.9,-.1);
glVertex2f(1.9,0);
glEnd();

glBegin(GL_QUADS);//yellow light
glColor3ub(249, 237, 0);
glVertex2f(1.8,-.1);
glVertex2f(1.8,-.2);
glVertex2f(1.9,-.2);
glVertex2f(1.9,-.1);
glEnd();


glBegin(GL_QUADS);//green light
glColor3ub(162, 201, 9);
glVertex2f(1.8,-.2);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.2);
glEnd();






    glScalef(0.7,0.7,0);
    glTranslatef(4.5,-0.65,0);
    glTranslatef(positionShip1,0.0f, 0.0f);

    glBegin(GL_POLYGON); //ship2
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship2 shape1
    glColor3ub(0, 128, 128);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



	glBegin(GL_QUADS); //ship2 shape2
    glColor3ub(49, 155, 102);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();

    glBegin(GL_QUADS); //ship2 shape1 window1
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();







	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window2
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship2 shape2 window4
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window5
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window6
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();



    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();




    glTranslatef(.45,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.85,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();





    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();







	       glFlush();
}




void display_rain(){

            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glLoadIdentity();

//sky
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 51);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    glBegin(GL_QUADS); // grass
    glColor3ub(0, 77, 0);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();

	//moon

    int i;

	GLfloat x=-0.7; GLfloat y=.8f; GLfloat radius =.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255, 255, 230);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//cloud1
	glTranslatef(positionbird,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat a=-.25f; GLfloat b=.83f; GLfloat radius1 =.07f;
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat e=-.3f; GLfloat f=.83f; GLfloat radius2 =.06f;
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
GLfloat p= -.2f; GLfloat q =.84f; GLfloat radius3 =.06f;
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();





//cloud2gl

glTranslatef(positionbird,0,0);
glTranslatef(0.5,0.05,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();






//cloud3

glTranslatef(positionbird,0,0);
glTranslatef(1.1,-0.02,0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius1 * cos(i *  twicePi / triangleAmount)),
			    b + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius2 * cos(i *  twicePi / triangleAmount)),
			    f + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(128, 128, 128);
    glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius3 * cos(i *  twicePi / triangleAmount)),
			    q + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();












//hill
  //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.65);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.67);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.65);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();





    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.5,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.65,0.7);
    glEnd();


   gluOrtho2D(-5,5,-4,4);
   //building
glColor3ub(255, 140, 26);
	glBegin(GL_QUADS);
	glVertex2f(-5,3);
	glVertex2f(-5,.5);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.9,3);
	glEnd();
glColor3ub(204, 102, 0);
	glBegin(GL_QUADS);
	glVertex2f(-3.9,3);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.7,.5);
	glVertex2f(-3.7,2.7);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-4.85,2.8);
	glVertex2f(-4.85,2.4);
	glVertex2f(-4.5,2.4);
	glVertex2f(-4.5,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.4,2.8);
	glVertex2f(-4.4,2.4);
	glVertex2f(-4.05,2.4);
	glVertex2f(-4.05,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,2.2);
	glVertex2f(-4.85,1.8);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.5,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1.6);
	glVertex2f(-4.85,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1);
	glVertex2f(-4.85,.5);
	glVertex2f(-4.5,.5);
	glVertex2f(-4.5,1);
	glEnd();
	////
glColor3ub(204, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.6,2.5);
	glVertex2f(-4.6,.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.5,2.5);
	glEnd();
glColor3ub(172, 57, 115);
	glBegin(GL_QUADS);
	glVertex2f(-3.5,2.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.3,.5);
	glVertex2f(-3.3,2.2);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-4.45,2.3);
	glVertex2f(-4.45,1.9);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,2.3);
	glVertex2f(-4,1.9);
	glVertex2f(-3.65,1.9);
	glVertex2f(-3.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.7);
	glVertex2f(-4.45,1.3);
	glVertex2f(-4.1,1.3);
	glVertex2f(-4.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.7);
	glVertex2f(-4,1.3);
	glVertex2f(-3.65,1.3);
	glVertex2f(-3.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.1);
	glVertex2f(-4.45,.7);
	glVertex2f(-4.1,.7);
	glVertex2f(-4.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.1);
	glVertex2f(-4,.7);
	glVertex2f(-3.65,.7);
	glVertex2f(-3.65,1.1);
	glEnd();
	////
glColor3ub(178, 178, 102);
	glBegin(GL_QUADS);
	glVertex2f(-2.6,2.5);
	glVertex2f(-2.6,.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.5,2.5);
	glEnd();
glColor3ub(136, 136, 68);
	glBegin(GL_QUADS);
	glVertex2f(-1.5,2.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.3,.5);
	glVertex2f(-1.3,2.2);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-2.45,2.3);
	glVertex2f(-2.45,1.9);
	glVertex2f(-2.1,1.9);
	glVertex2f(-2.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,2.3);
	glVertex2f(-2,1.9);
	glVertex2f(-1.65,1.9);
	glVertex2f(-1.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.7);
	glVertex2f(-2.45,1.3);
	glVertex2f(-2.1,1.3);
	glVertex2f(-2.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.7);
	glVertex2f(-2,1.3);
	glVertex2f(-1.65,1.3);
	glVertex2f(-1.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.1);
	glVertex2f(-2.45,.7);
	glVertex2f(-2.1,.7);
	glVertex2f(-2.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.1);
	glVertex2f(-2,.7);
	glVertex2f(-1.65,.7);
	glVertex2f(-1.65,1.1);
	glEnd();

	////
glColor3ub(204, 102, 204);
	glBegin(GL_QUADS);
	glVertex2f(-3.25,2);
	glVertex2f(-3.25,.5);
	glVertex2f(-2.2,.5);
	glVertex2f(-2.2,2);
	glEnd();
glColor3ub(191, 64, 191);
	glBegin(GL_QUADS);
	glVertex2f(-2.2,2);
	glVertex2f(-2.2,.5);
	glVertex2f(-2,.5);
	glVertex2f(-2,1.7);
	glEnd();
////windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-3.15,1.8);
	glVertex2f(-3.15,1.4);
	glVertex2f(-2.8,1.4);
	glVertex2f(-2.8,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.8);
	glVertex2f(-2.7,1.4);
	glVertex2f(-2.35,1.4);
	glVertex2f(-2.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-3.15,1.2);
	glVertex2f(-3.15,.8);
	glVertex2f(-2.8,.8);
	glVertex2f(-2.8,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.2);
	glVertex2f(-2.7,.8);
	glVertex2f(-2.35,.8);
	glVertex2f(-2.35,1.2);
	glEnd();

	////
glColor3ub(102, 153, 153);
	glBegin(GL_QUADS);
	glVertex2f(-1.1,2.5);
	glVertex2f(-1.1,.5);
	glVertex2f(0,.5);
	glVertex2f(0,2.5);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(0,2.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.2,2.2);
	glEnd();

		glColor3ub(153, 153, 102); //Sign board stand
	glBegin(GL_QUADS);
	glVertex2f(.97,2);
	glVertex2f(.97,2.3);
	glVertex2f(0.93,2.3);
	glVertex2f(0.93,2.0);
	glEnd();

	glColor3ub(179, 179, 179); //Sign board
	glBegin(GL_QUADS);
	glVertex2f(1.3,2.5);
	glVertex2f(.6,2.5);
	glVertex2f(.6,2.1);
	glVertex2f(1.3,2.1);
	glEnd();

    glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(.98,2.15);
	glVertex2f(.98,2.45);
	glVertex2f(.92,2.45);
	glVertex2f(.92,2.15);
	glEnd();


	glColor3ub(255, 51, 51); //Medical sign
	glBegin(GL_QUADS);
	glVertex2f(1.14,2.27);
	glVertex2f(.77,2.27);
	glVertex2f(.77,2.33);
	glVertex2f(1.14,2.33);
	glEnd();

//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(-.95,2.3);
	glVertex2f(-.95,1.9);
	glVertex2f(-.6,1.9);
	glVertex2f(-.6,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,2.3);
	glVertex2f(-.5,1.9);
	glVertex2f(-.15,1.9);
	glVertex2f(-.15,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.7);
	glVertex2f(-.95,1.3);
	glVertex2f(-.6,1.3);
	glVertex2f(-.6,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.7);
	glVertex2f(-.5,1.3);
	glVertex2f(-.15,1.3);
	glVertex2f(-.15,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.1);
	glVertex2f(-.95,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.6,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.1);
	glVertex2f(-.5,.7);
	glVertex2f(-.15,.7);
	glVertex2f(-.15,1.1);
	glEnd();
////
glColor3ub(133, 133, 173);
	glBegin(GL_QUADS);
	glVertex2f(.4,2);
	glVertex2f(.4,.5);
	glVertex2f(1.5,.5);
	glVertex2f(1.5,2);
	glEnd();
////windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(.55,1.8);
	glVertex2f(.55,1.4);
	glVertex2f(.9,1.4);
	glVertex2f(.9,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.8);
	glVertex2f(1,1.4);
	glVertex2f(1.35,1.4);
	glVertex2f(1.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(.55,1.2);
	glVertex2f(.55,.8);
	glVertex2f(.9,.8);
	glVertex2f(.9,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.2);
	glVertex2f(1,.8);
	glVertex2f(1.35,.8);
	glVertex2f(1.35,1.2);
	glEnd();

////
glColor3ub(71, 107, 107);
	glBegin(GL_QUADS);
	glVertex2f(1.7,2.7);
	glVertex2f(1.7,.5);
	glVertex2f(1.9,.5);
	glVertex2f(1.9,3);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(1.9,3);
	glVertex2f(1.9,.5);
	glVertex2f(3,.5);
	glVertex2f(3,3);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(2.05,2.8);
	glVertex2f(2.05,2.4);
	glVertex2f(2.4,2.4);
	glVertex2f(2.4,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.8);
	glVertex2f(2.5,2.4);
	glVertex2f(2.85,2.4);
	glVertex2f(2.85,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,2.2);
	glVertex2f(2.05,1.8);
	glVertex2f(2.4,1.8);
	glVertex2f(2.4,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.2);
	glVertex2f(2.5,1.8);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1.6);
	glVertex2f(2.05,1.2);
	glVertex2f(2.4,1.2);
	glVertex2f(2.4,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1.6);
	glVertex2f(2.5,1.2);
	glVertex2f(2.85,1.2);
	glVertex2f(2.85,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1);
	glVertex2f(2.05,.5);
	glVertex2f(2.4,.5);
	glVertex2f(2.4,1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1);
	glVertex2f(2.5,.5);
	glVertex2f(2.85,.5);
	glVertex2f(2.85,1);
	glEnd();

////
glColor3ub(0, 134, 179);
	glBegin(GL_QUADS);
	glVertex2f(3.8,3.2);
	glVertex2f(3.8,.5);
	glVertex2f(4,.5);
	glVertex2f(4,3.5);
	glEnd();
glColor3ub(0, 153, 204);
	glBegin(GL_QUADS);
	glVertex2f(4,3.5);
	glVertex2f(4,.5);
	glVertex2f(5,.5);
	glVertex2f(5,3.5);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(4.15,3.3);
	glVertex2f(4.15,2.9);
	glVertex2f(4.5,2.9);
	glVertex2f(4.5,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,3.3);
	glVertex2f(4.6,2.9);
	glVertex2f(4.95,2.9);
	glVertex2f(4.95,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.7);
	glVertex2f(4.15,2.3);
	glVertex2f(4.5,2.3);
	glVertex2f(4.5,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.7);
	glVertex2f(4.6,2.3);
	glVertex2f(4.95,2.3);
	glVertex2f(4.95,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.1);
	glVertex2f(4.15,1.7);
	glVertex2f(4.5,1.7);
	glVertex2f(4.5,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.1);
	glVertex2f(4.6,1.7);
	glVertex2f(4.95,1.7);
	glVertex2f(4.95,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,1.5);
	glVertex2f(4.15,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,1.5);
	glVertex2f(4.6,1.1);
	glVertex2f(4.95,1.1);
	glVertex2f(4.95,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,.9);
	glVertex2f(4.15,.7);
	glVertex2f(4.5,.7);
	glVertex2f(4.5,.9);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,.9);
	glVertex2f(4.6,.7);
	glVertex2f(4.95,.7);
	glVertex2f(4.95,.9);
	glEnd();
////
glColor3ub(122, 122, 82);
	glBegin(GL_QUADS);
	glVertex2f(3.1,2.2);
	glVertex2f(3.1,.5);
	glVertex2f(3.3,.5);
	glVertex2f(3.3,2.5);
	glEnd();
glColor3ub(138, 138, 92);
	glBegin(GL_QUADS);
	glVertex2f(3.3,2.5);
	glVertex2f(3.3,.5);
	glVertex2f(4.4,.5);
	glVertex2f(4.4,2.5);
	glEnd();
//windows
glColor3ub(255, 209, 26);
	glBegin(GL_QUADS);
	glVertex2f(3.45,2.3);
	glVertex2f(3.45,1.9);
	glVertex2f(3.8,1.9);
	glVertex2f(3.8,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,2.3);
	glVertex2f(3.9,1.9);
	glVertex2f(4.25,1.9);
	glVertex2f(4.25,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.7);
	glVertex2f(3.45,1.3);
	glVertex2f(3.8,1.3);
	glVertex2f(3.8,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.3);
	glVertex2f(4.25,1.3);
	glVertex2f(4.25,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.1);
	glVertex2f(3.45,.7);
	glVertex2f(3.8,.7);
	glVertex2f(3.8,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,.7);
	glVertex2f(4.25,.7);
	glVertex2f(4.25,1.1);
	glEnd();






    glBegin(GL_QUADS); //river
    glColor3ub(0, 51, 102);
	glVertex2f(-5,-2.3);
	glVertex2f(-5,-4);
	glVertex2f(5,-4);
	glVertex2f(5,-2.3);
	glEnd();




    glTranslatef(positionShip1,0.0f, 0.0f);
    glBegin(GL_POLYGON); //ship1
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship1 shape1
    glColor3ub(230, 115, 0);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



    glBegin(GL_QUADS); //ship1 shape1 window1
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



	glBegin(GL_QUADS); //ship1 shape2
    glColor3ub(153, 77, 0);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();




	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window2
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship1 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship1 shape2 window4
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window5
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship1 shape2 window6
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();











	glPushMatrix();

	//road
	glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.1);
    glVertex2f(-1, -.1);
    glEnd();


    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);

    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.6);
    glVertex2f(-.8, -.6);
    glVertex2f(-.8, -.52);
    glVertex2f(-1, -.52);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(226, 226, 226);
    glVertex2f(-1, -.35);
    glVertex2f(-.7, -.35);
    glVertex2f(-.7, -.32);
    glVertex2f(-1, -.32);
    glEnd();
    glLoadIdentity();




    //car1
    glPushMatrix();

    glTranslatef(position2,0,0);
    glBegin(GL_POLYGON);//car1 shape
    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.355,-.24);
    glVertex2f(-.555,-.24);
    glVertex2f(-.565,-.33);


    glColor3ub(255, 51, 153);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_QUADS);//car1 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.335,-.33);
    glVertex2f(-.36,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();



    glBegin(GL_TRIANGLES);//car1 light
    glColor3ub(255, 255, 230);
    glVertex2f(-.19,-.355);
    glVertex2f(-.19,-.415);
    glVertex2f(-.255,-.385);

    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





    glTranslatef(0.6f, 0.12f, 0.0f);
    glBegin(GL_POLYGON);//car2 shape
    glColor3ub(204, 0, 0);
    glVertex2f(-.30,-.33);
    glVertex2f(-.355,-.25);
    glVertex2f(-.555,-.25);
    glVertex2f(-.565,-.33);


    glColor3ub(204, 0, 0);
    glVertex2f(-.32,-.33);
    glVertex2f(-.26,-.33);
    glVertex2f(-.24,-.42);
    glVertex2f(-.26,-.42);
    glVertex2f(-.565,-.42);
    glVertex2f(-.565,-.33);

    glEnd();


    glBegin(GL_TRIANGLES);//car1 light
    glColor3ub(255, 255, 230);
    glVertex2f(-.19,-.355);
    glVertex2f(-.19,-.415);
    glVertex2f(-.255,-.385);

    glEnd();



    glBegin(GL_QUADS);//car2 glass
    glColor3ub(76, 96, 129);
    glVertex2f(-.32,-.33);
    glVertex2f(-.35,-.27);
    glVertex2f(-.41,-.27);
    glVertex2f(-.41,-.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 96, 129);
    glVertex2f(-.42,-.27);
    glVertex2f(-.42,-.33);
    glVertex2f(-.55,-.33);
    glVertex2f(-.55,-.27);
    glEnd();




//////CAR  wheel

   x=-.49; y=-.42f;radius =.035f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd wheel


              	x=-.32f; y=-.42f;radius =.035f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glPopMatrix();
glLoadIdentity();

	//plane
	gluOrtho2D(-5,5,-4,4);
	glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(0, 77, 230);
	glBegin(GL_POLYGON);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.1,3.3);
	glVertex2f(-1.9,3.3);
	glVertex2f(-1.7,3.4);
	glVertex2f(-2.1,3.6);
	glEnd();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);
    glColor3ub(0, 77, 230);
	glBegin(GL_QUADS);
	glVertex2f(-2.5,3.5);
	glVertex2f(-2.2,3.5);
	glVertex2f(-2.7,3.8);
	glVertex2f(-2.8,3.8);
	glEnd();
		glPopMatrix();




    glPushMatrix();
    glTranslatef(positionplane,0.0f, 0.0f);// plane body
    glBegin(GL_QUADS);
    glColor3ub(0, 77, 230);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.3,3.7);
	glVertex2f(-3.3,3.6);
	glVertex2f(-3.1,3.3);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-1.9,3.45);
	glVertex2f(-2,3.55);
	glVertex2f(-2.1,3.55);
	glVertex2f(-2.1,3.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.2,3.45);
	glVertex2f(-2.2,3.55);
	glVertex2f(-2.3,3.55);
	glVertex2f(-2.3,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.35,3.45);
	glVertex2f(-2.35,3.55);
	glVertex2f(-2.45,3.55);
	glVertex2f(-2.45,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.5,3.45);
	glVertex2f(-2.5,3.55);
	glVertex2f(-2.6,3.55);
	glVertex2f(-2.6,3.45);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 230, 128);
	glVertex2f(-2.65,3.45);
	glVertex2f(-2.65,3.54);
	glVertex2f(-2.75,3.54);
	glVertex2f(-2.75,3.45);

    glEnd();




    glPopMatrix();







	//lamp post 1
glScalef(1.2,1.2,0);
glTranslatef(0,.5,0);

	 glBegin(GL_QUADS);
	 glColor3ub(214, 214, 194);
     glVertex2f(-3.0f,-0.9f);
    glVertex2f(-3.1f,-0.9f);
    glVertex2f(-3.1f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-3.0f,-0.4f);
    glVertex2f(-2.8f,-0.4f);
    glVertex2f(-2.8f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

   glBegin(GL_TRIANGLES);
    glVertex2f(-2.9f,-0.5f);
    glVertex2f(-2.7f,-0.5f);
    glVertex2f(-2.8f,-0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,214,51);
    glVertex2f(-2.8,-0.5);
    glVertex2f(-2.9,-0.9);
    glVertex2f(-2.5,-0.9);

    glEnd();

	//lamp post 2


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(-1.0f,-0.9f);
    glVertex2f(-1.1f,-0.9f);
    glVertex2f(-1.1f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);//lamp post 2 light
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.8f,-0.4f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,214,51);
    glVertex2f(-0.8,-0.5);
    glVertex2f(-0.9,-0.9);
    glVertex2f(-0.5,-0.9);

    glEnd();

	//lamp post 3


    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.0f,-0.9f);
    glVertex2f(1.1f,-0.9f);
    glVertex2f(1.1f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1.0f,-0.4f);
    glVertex2f(0.8f,-0.4f);
    glVertex2f(0.8f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.8f,-0.4f);
    glEnd();


    glBegin(GL_TRIANGLES);//lamp post 3 light
    glColor3ub(255,214,51);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.9,-0.9);
    glVertex2f(0.5,-0.9);

    glEnd();

    //lamp post 4

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.0f,-0.9f);
    glVertex2f(3.1f,-0.9f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(3.0f,-0.4f);
    glVertex2f(2.8f,-0.4f);
    glVertex2f(2.8f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(2.8f,-0.4f);
    glEnd();


    glBegin(GL_TRIANGLES);//lamp post 3 light
    glColor3ub(255,214,51);
    glVertex2f(2.8,-0.5);
    glVertex2f(2.9,-0.9);
    glVertex2f(2.5,-0.9);

    glEnd();

glLoadIdentity();
    //trafic light
gluOrtho2D(-5,5,-4,4);
glScalef(1.5,1.5,0);
glTranslatef(0,.5,0);


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.8,-.8);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.8);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 147, 166);
glVertex2f(1.7,0.1);
glVertex2f(1.7,-.4);
glVertex2f(2,-.4);
glVertex2f(2,0.1);
glEnd();


glBegin(GL_QUADS);//red light
glColor3ub(238, 24, 3);
glVertex2f(1.8,0);
glVertex2f(1.8,-.1);
glVertex2f(1.9,-.1);
glVertex2f(1.9,0);
glEnd();

glBegin(GL_QUADS);//yellow light
glColor3ub(249, 237, 0);
glVertex2f(1.8,-.1);
glVertex2f(1.8,-.2);
glVertex2f(1.9,-.2);
glVertex2f(1.9,-.1);
glEnd();


glBegin(GL_QUADS);//green light
glColor3ub(162, 201, 9);
glVertex2f(1.8,-.2);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.2);
glEnd();






    glScalef(0.7,0.7,0);
    glTranslatef(4.5,-0.65,0);
    glTranslatef(positionShip1,0.0f, 0.0f);

    glBegin(GL_POLYGON); //ship2
    glColor3ub(153, 0, 0);
	glVertex2f(-2.3,-3.8);
	glVertex2f(-1.8,-3.2);
	glVertex2f(-3.6,-3.2);
	glVertex2f(-3.6,-3.4);
	glVertex2f(-3.4,-3.8);

	glEnd();


	glBegin(GL_QUADS); //ship2 shape1
    glColor3ub(0, 128, 128);
	glVertex2f(-2.2,-3.2);
	glVertex2f(-2.2,-2.9);
	glVertex2f(-3.5,-2.9);
	glVertex2f(-3.5,-3.2);

	glEnd();



	glBegin(GL_QUADS); //ship2 shape2
    glColor3ub(49, 155, 102);
	glVertex2f(-2.3,-2.9);
	glVertex2f(-2.3,-2.6);
	glVertex2f(-3.45,-2.6);
	glVertex2f(-3.45,-2.9);


	glEnd();

    glBegin(GL_QUADS); //ship2 shape1 window1
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();







	glTranslatef(-.4,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window2
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(-.35,0,0);
    glBegin(GL_QUADS); //ship2 shape1 window3
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();



    glTranslatef(0,.3,0);
    glBegin(GL_QUADS); //ship2 shape2 window4
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();




    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window5
    glColor3ub(255, 255, 230);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();


    glTranslatef(0.37,0,0);
    glBegin(GL_QUADS); //ship2 shape2 window6
    glColor3ub(38, 38, 115);
	glVertex2f(-2.4,-3.15);
	glVertex2f(-2.4,-2.95);
	glVertex2f(-2.6,-2.95);
	glVertex2f(-2.6,-3.15);

	glEnd();

	glLoadIdentity();



    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();




    glTranslatef(.45,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();




    glTranslatef(-.85,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();





    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);//tree1 wood
    glColor3ub(115, 77, 38);
    glVertex2f(.397,0);
    glVertex2f(.397,-0.1);
    glVertex2f(.422,-0.1);
    glVertex2f(.422,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0);
    glVertex2f(.45,0);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.03);
    glVertex2f(.45,0.03);
    glVertex2f(0.41,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.37,0.06);
    glVertex2f(.45,0.06);
    glVertex2f(0.41,0.1);
    glEnd();
    glLoadIdentity();





    glTranslatef(positionrain,0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();



glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();

glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();

glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();

glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);

glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);

glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);

glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();
glTranslatef(0.1,0.0,0);
glBegin(GL_LINES);//rain 1
glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.7f);
glVertex2f(-0.96f,-0.72f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.74f);
glVertex2f(-0.93f,-0.76f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.78f);
glVertex2f(-0.94f,-0.80f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.82f);
glVertex2f(-0.93f,-0.84f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.86f);
glVertex2f(-0.96f,-0.88f);


glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.90f);
glVertex2f(-0.96f,-0.92f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.94f);
glVertex2f(-0.93f,-0.96f);







glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.96f,-0.62f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.64f);
glVertex2f(-0.93f,-0.66f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.68f);
glVertex2f(-0.94f,-0.70f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.5f);
glVertex2f(-0.96f,-0.52f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.54f);
glVertex2f(-0.93f,-0.56f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.58f);
glVertex2f(-0.94f,-0.60f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.4f);
glVertex2f(-0.96f,-0.42f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.44f);
glVertex2f(-0.93f,-0.46f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.48f);
glVertex2f(-0.94f,-0.50f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-0.96f,-0.32f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.34f);
glVertex2f(-0.93f,-0.36f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.38f);
glVertex2f(-0.94f,-0.40f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.96f,-0.22f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.24f);
glVertex2f(-0.93f,-0.26f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.28f);
glVertex2f(-0.94f,-0.30f);





glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.1f);
glVertex2f(-0.96f,-0.12f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.14f);
glVertex2f(-0.93f,-0.16f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.18f);
glVertex2f(-0.94f,-0.20f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,-0.0f);
glVertex2f(-0.96f,-0.02f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,-0.04f);
glVertex2f(-0.93f,-0.06f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,-0.08f);
glVertex2f(-0.94f,-0.1f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.02f);
glVertex2f(-0.96f,0.00f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.06f);
glVertex2f(-0.93f,0.04f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.1f);
glVertex2f(-0.94f,0.08f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.12f);
glVertex2f(-0.96f,0.1f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.16f);
glVertex2f(-0.93f,0.14f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.2f);
glVertex2f(-0.94f,0.18f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.22f);
glVertex2f(-0.96f,0.2f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.26f);
glVertex2f(-0.93f,0.24f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.94f,0.28f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.32f);
glVertex2f(-0.96f,0.3f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.36f);
glVertex2f(-0.93f,0.34f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.4f);
glVertex2f(-0.94f,0.38f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.42f);
glVertex2f(-0.96f,0.4f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.46f);
glVertex2f(-0.93f,0.44f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.5f);
glVertex2f(-0.94f,0.48f);




glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.52f);
glVertex2f(-0.96f,0.5f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.56f);
glVertex2f(-0.93f,0.54f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.6f);
glVertex2f(-0.94f,0.58f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.62f);
glVertex2f(-0.96f,0.6f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.66f);
glVertex2f(-0.93f,0.64f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.7f);
glVertex2f(-0.94f,0.68f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.72f);
glVertex2f(-0.96f,0.7f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.76f);
glVertex2f(-0.93f,0.74f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.8f);
glVertex2f(-0.94f,0.78f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.82f);
glVertex2f(-0.96f,0.8f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.86f);
glVertex2f(-0.93f,0.84f);



glColor3ub(219, 233, 255);
glVertex2f(-0.96f,0.9f);
glVertex2f(-0.94f,0.88f);



glColor3ub(219, 233, 255);
glVertex2f(-0.98f,0.92f);
glVertex2f(-0.96f,0.9f);


glColor3ub(219, 233, 255);
glVertex2f(-0.95f,0.96f);
glVertex2f(-0.93f,0.94f);



glEnd();




glLoadIdentity();








	       glFlush();
}






void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {


  break;
    case 'd':
     glutDisplayFunc(display_day);

     break;
    case 'n':
        glutDisplayFunc(display_night);
        break;


         break;
    case 'r':
        glutDisplayFunc(display_rain);
        break;


        default:
     glutPostRedisplay();
    break;
	}
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{

			glutDisplayFunc(display_night);


	}


		if (button == GLUT_RIGHT_BUTTON)
	{

			glutDisplayFunc(display_rain);


	}

}

  int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 800);
   glutInitWindowPosition(100, 50);
   glutCreateWindow("CITY VIEW");
   glutDisplayFunc(display_day);
    glutTimerFunc(100, updateplane, 0);
    glutTimerFunc(100, updateShip, 0);
    glutTimerFunc(100, updateShip1, 0);
    glutTimerFunc(100, updaterain, 0);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, updatebird, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}




