#include <GL/glut.h>
#include <math.h>
#define PI           3.14159265358979323846


GLfloat position_land_moon = 0.0f;
GLfloat position_boat1 = 0.0f;
GLfloat position_boat3 = 0.0f;


GLfloat speed_land_moon = 0.009f;
GLfloat speed_boat1 = 0.01f;
GLfloat speed_boat3 = 0.01f;





void update_land_moon(int value) {
if(position_land_moon > 1.8)
        position_land_moon = -1.0f;
    position_land_moon += speed_land_moon;
	glutPostRedisplay();
	glutTimerFunc(100, update_land_moon, 0);
}

void update_boat1(int value) {
if(position_boat1 > 1.3)
        position_boat1 = -1.0f;
    position_boat1 += speed_boat1;
	glutPostRedisplay();
	glutTimerFunc(100, update_boat1, 0);
}

void update_boat3(int value) {
if(position_boat3 > 2)
        position_boat3 = -1.0f;
    position_boat3 += speed_boat3;
	glutPostRedisplay();
	glutTimerFunc(100, update_boat3, 0);
}



void SpecialInput(int key, int x, int y)
{
switch(key)
    {
    case GLUT_KEY_UP:
    speed_boat1 += 0.1f;
    break;
    case GLUT_KEY_DOWN:
    speed_boat1 -= 0.1f;
    break;
    case GLUT_KEY_LEFT:
    break;
    case GLUT_KEY_RIGHT:
    break;
    }
glutPostRedisplay();
}



void display_night_land() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3);

    // Draw the axes
    glBegin(GL_LINES);


    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();


    //SKY
    glBegin(GL_QUADS);
    //glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.027, 0.000, 0.345); //
    glVertex2f(-1.0f,0.45f);   // D
    glVertex2f(-1.0f, 1.0f);   // E
    glVertex2f(1.0f, 1.0f); // G
    glVertex2f(1.0f, 0.65f);

    glEnd();

    glPointSize(3.0f); // Set the size of the stars
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.7f, 0.8f);  // Star 1
    glVertex2f(0.3f, 0.6f);   // Star 2
    glVertex2f(-0.1f, 0.3f);  // Star 3
    glVertex2f(0.6f, 0.9f);   // Star 4
    glVertex2f(-0.9f, 0.4f);  // Star 5
    glVertex2f(0.2f, 0.7f);   // Star 6
    glVertex2f(-0.5f, 0.9f);  // Star 7
    glVertex2f(0.8f, 0.5f);   // Star 8
    glVertex2f(-0.3f, 0.6f);  // Star 9
    glVertex2f(0.1f, 0.85f);
    glVertex2f(-0.4f, 0.75f); // Star 11
    glVertex2f(0.4f, 0.8f);   // Star 12
    glVertex2f(-0.8f, 0.6f);  // Star 13
    glVertex2f(0.7f, 0.7f);   // Star 14
    glVertex2f(-0.2f, 0.9f);  // Star 15
    glVertex2f(0.5f, 0.55f);  // Star 16
    glVertex2f(-0.6f, 0.5f);  // Star 17
    glVertex2f(0.9f, 0.85f);  // Star 18
    glVertex2f(-0.7f, 0.95f); // Star 19
    glVertex2f(0.0f, 0.65f);  // Star 20
    glVertex2f(-0.85f, 0.7f); // Star 21
    glVertex2f(0.15f, 0.95f); // Star 22
    glVertex2f(-0.25f, 0.55f); // Star 23
    glVertex2f(0.35f, 0.75f); // Star 24
    glVertex2f(-0.95f, 0.85f); // Star 25
    glVertex2f(0.55f, 0.65f); // Star 26
    glVertex2f(-0.15f, 0.8f); // Star 27
    glVertex2f(0.75f, 0.9f);  // Star 28
    glVertex2f(-0.65f, 0.65f); // Star 29
    glVertex2f(0.45f, 0.5f);
    glEnd();

    //moon

    glPushMatrix();
    glTranslatef(position_land_moon, 0.0f, 0.0f);
    int j;

	GLfloat a=-0.8f; GLfloat b=0.8f; GLfloat radius_moon =0.1f;
	int triangleAmount_moon = 100; //# of lines used to draw circle


	GLfloat twicePi_moon = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmount_moon;j++) {
			glVertex2f( a + (radius_moon * cos(j *  twicePi_moon / triangleAmount_moon)),
                        b + (radius_moon * sin(j * twicePi_moon / triangleAmount_moon)) );
		}
	glEnd();
	glPopMatrix();


	//Road and ....
    glBegin(GL_QUADS);
    glColor3f(0.361, 0.251, 0.200); //
    glVertex2f(-1.0f, 0.0f); // a
    glVertex2f(1.0f, 0.0f); //b
    glVertex2f(1.0f, -1.0f); //c
    glVertex2f(-1.0f, -1.0f); //d
    glEnd();


    //land--1
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.7f, 0.0f); // a
    glVertex2f(-0.31f, 0.0f); //b
    glVertex2f(-0.31f, -0.13f); //c
    glVertex2f(-0.8f, -0.15f); //d
    glEnd();


    //land--2
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.3f, 0.0f); // a
    glVertex2f(-0.12f, 0.0f); //b
    glVertex2f(-0.15f, -0.25f); //c
    glVertex2f(-0.3f, -0.4f); //d
    glEnd();


    //land--3
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.11f, 0.0f); // a
    glVertex2f(0.2f, 0.0f); //b
    glVertex2f(0.19f, -0.24f); //c
    glVertex2f(-0.13f, -0.24f); //d
    glEnd();


    //land--4
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(0.21f, 0.0f); //a
    glVertex2f(0.41f, 0.0f); // b
    glVertex2f(0.47f, -0.24f); //c
    glVertex2f(0.21f, -0.24f); //d
    glEnd();


    //land---5
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(0.43f, 0.0f); //a
    glVertex2f(1.0f, 0.0f); // b
    glVertex2f(1.0f, -0.6f); //c
    glVertex2f(0.56f, -0.5f); //d
    glEnd();


    //land--6
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.81f, -0.17f); // a
    glVertex2f(-0.61f, -0.16f); //b
    glVertex2f(-0.61f, -0.55f); //c
    glVertex2f(-1.0f, -0.7f); //d
    glEnd();


    //land--7
    glBegin(GL_POLYGON);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.6f, -0.16f); // a
    glVertex2f(-0.31f, -0.14f); //b
    glVertex2f(-0.31f, -0.41f); //c
    glVertex2f(-0.38f, -0.51f); //d
    glVertex2f(-0.6f, -0.55f); //e
    glEnd();

    //land--8
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.13f, -0.25f); // a
    glVertex2f(0.47f, -0.25f); //b
    glVertex2f(0.54f, -0.5f); //c
    glVertex2f(-0.37f, -0.51f); //d

    glEnd();


    //River
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.6); //
    glVertex2f(-1.0f, 0.0f); // a
    glVertex2f(-0.7f, 0.0f); //b
    glVertex2f(-1.0f, -0.7f); //c

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.6); //
    glVertex2f(-1.0f, 0.0f); // a
    glVertex2f(-1.0f, 0.45f); //b
    glVertex2f(1.0f, 0.65f); //c
    glVertex2f(1.0f, 0.0f); //d

    glEnd();


    //Boat 1
    glPushMatrix();
    glTranslatef(position_boat1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.0, 0.0); //
    glVertex2f(-0.15f, 0.3f); // a
    glVertex2f(0.15f, 0.3f); //b
    glVertex2f(0.08f, 0.2f); //c
    glVertex2f(-0.08f, 0.2f); //d

    glEnd();


    //Roof
    glBegin(GL_QUADS);
    glColor3f(0.337, 0.301, 0.043); //
    glVertex2f(-0.08f, 0.3f); // a
    glVertex2f(0.08f, 0.3f); //b
    glVertex2f(0.08f, 0.35f); //c
    glVertex2f(-0.08f, 0.35f); //d
    glEnd();



    //pal 1
    glBegin(GL_QUADS);
    glColor3f(0.458, 0.121, 0.419); //
    glVertex2f(0.0f, 0.55f); // a
    glVertex2f(0.1f, 0.46f); //b
    glVertex2f(0.1f, 0.4f); //c
    glVertex2f(0.0f, 0.35f); //d

    glEnd();


    //BoiTHA 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.1f, 0.4f);
    glEnd();
    glPopMatrix();

    //Boat 2---still
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0 , 0.0); //
    glVertex2f(0.58f, 0.05f); // a
    glVertex2f(0.72f, 0.05f); //b
    glVertex2f(0.8f, 0.15f); //c
    glVertex2f(0.5f, 0.15f); //d

    glEnd();

    //Bambo
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.05f);
    glVertex2f(0.45f, 0.2f);
    glEnd();

    //Dori
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.53f, 0.15f);
    glEnd();

    //Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.392, 0.176, 0.105); //
    glVertex2f(0.58f, 0.15f); // a
    glVertex2f(0.72f, 0.15f); //b
    glVertex2f(0.72f, 0.19f); //c
    glVertex2f(0.58f, 0.19f); //d
    glEnd();


    //Boat 3
    glPushMatrix();
    glTranslatef(position_boat3, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.0, 0.0); //
    glVertex2f(-0.9f, 0.18f); // a
    glVertex2f(-0.76f, 0.18f); //b
    glVertex2f(-0.68f, 0.28f); //c
    glVertex2f(-0.98f, 0.28f); //d
    glEnd();

    //Boitha
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.99f, 0.12f);
    glVertex2f(-0.94f, 0.35f);
    glEnd();

    //Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.525, 0.094, 0.450); //
    glVertex2f(-0.9f, 0.28f); // a
    glVertex2f(-0.76f, 0.28f); //b
    glVertex2f(-0.76f, 0.32f); //c
    glVertex2f(-0.9f, 0.32f); //d
    glEnd();
    glPopMatrix();

    //tree--1
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.8f, -0.45f); // a
    glVertex2f(-0.81f, -0.45f); //b
    glVertex2f(-0.5f, 0.7f); //c
    glVertex2f(-0.49f, 0.7f); //d

    glEnd();


    //Tree-- 2
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.7f, -0.45f); // a
    glVertex2f(-0.71f, -0.45f); //b
    glVertex2f(-0.7f, 0.7f); //c
    glVertex2f(-0.71f, 0.7f); //d

    glEnd();


    //leaf for tree22
    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.75, 0.6f);
    glVertex2f(-0.65f, 0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.76, 0.7f);
    glVertex2f(-0.64f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.75, 0.8f);
    glVertex2f(-0.66f, 0.6f);
    glEnd();


    //leaf for tree11
    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.58, 0.7f);
    glVertex2f(-0.42f, 0.7f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.58, 0.8f);
    glVertex2f(-0.43f, 0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.109, 0.388, 0.070);
    glVertex2f(-0.5, 0.81f);
    glVertex2f(-0.5f, 0.58f);
    glEnd();


    //thelagari

    //circle 2
    int n;
    GLfloat a4 = 0.1f, b4 = -0.64f, radius4 = 0.1f;
    int triangleAmount4 = 100;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a4, b4);
    for(n = 0; n <= triangleAmount4; n++)
    {
        glVertex2f(a4 + (radius4 * cos(n * twicePi4 / triangleAmount4)),
                   b4 + (radius4 * sin(n * twicePi4 / triangleAmount4)));
    }
    glEnd();



    //inside circle 2
    int o;
    GLfloat a5 = 0.1f, b5 = -0.64f, radius5 = 0.08f;
    int triangleAmount5 = 100;
    GLfloat twicePi5 = 2.0f * PI;
    glColor3f(0.361, 0.251, 0.200);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a5, b5);
    for(o = 0; o <= triangleAmount5; o++)
    {
        glVertex2f(a5 + (radius5 * cos(o * twicePi5 / triangleAmount5)),
                   b5 + (radius5 * sin(o * twicePi5 / triangleAmount5)));
    }
    glEnd();

    //Rod
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, -0.64f);
    glVertex2f(0.1f, -0.54f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, -0.64f);
    glVertex2f(0.15f, -0.55f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, -0.64f);
    glVertex2f(0.05f, -0.55f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, -0.64f);
    glVertex2f(0.01f, -0.61f);
    glEnd();



    //quad

    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.95f); // a
    glVertex2f(0.6f, -0.7f); //b
    glVertex2f(0.55f, -0.4f); //c
    glVertex2f(-0.2f, -0.75f); //d
    glEnd();



    //Wood in Thelagari
    glBegin(GL_LINES);
    glColor3f(0.361, 0.251, 0.200);
    glVertex2f(-0.2, -0.78f);
    glVertex2f(0.553f, -0.43f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.361, 0.251, 0.200);
    glVertex2f(-0.2, -0.82f);
    glVertex2f(0.56f, -0.47f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.361, 0.251, 0.200);
    glVertex2f(-0.2, -0.86f);
    glVertex2f(0.57f, -0.52f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.361, 0.251, 0.200);
    glVertex2f(-0.2, -0.9f);
    glVertex2f(0.59f, -0.57f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.361, 0.251, 0.200);
    glVertex2f(-0.2, -0.94f);
    glVertex2f(0.65f, -0.62f);
    glEnd();


    //Holder back
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.98f); // a
    glVertex2f(-0.21f, -0.98f); //b
    glVertex2f(-0.21f, -0.73f); //c
    glVertex2f(-0.2f, -0.73f); //d
    glEnd();

    //holder front
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.75f); // a
    glVertex2f(0.62f, -0.75f); //b
    glVertex2f(0.538f, -0.35f); //c
    glVertex2f(0.501f, -0.35f); //d
    glEnd();


    //holder 1
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.7f); // a
    glVertex2f(0.75f, -0.61f); //b
    glVertex2f(0.75f, -0.58f); //c
    glVertex2f(0.59f, -0.67f); //d
    glEnd();


    //holder 2
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.55f, -0.43f); // a
    glVertex2f(0.7f, -0.37f); //b
    glVertex2f(0.7f, -0.35f); //c
    glVertex2f(0.54f, -0.4f); //d
    glEnd();

    //circle 1
    int l;
    GLfloat a2 = 0.3f, b2 = -0.85f, radius2 = 0.1f;
    int triangleAmount2 = 100;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a2, b2);
    for(l = 0; l <= triangleAmount2; l++)
    {
        glVertex2f(a2 + (radius2 * cos(l * twicePi2 / triangleAmount2)),
                   b2 + (radius2 * sin(l * twicePi2 / triangleAmount2)));
    }
    glEnd();


    //inside the circle 1
    int m;
    GLfloat a3 = 0.3f, b3 = -0.85f, radius3 = 0.08f;
    int triangleAmount3 = 100;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3f(0.361, 0.251, 0.200);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a3, b3);
    for(m = 0; m <= triangleAmount3; m++)
    {
        glVertex2f(a3 + (radius3 * cos(m * twicePi3 / triangleAmount3)),
                   b3 + (radius3 * sin(m * twicePi3 / triangleAmount3)));
    }
    glEnd();


    //small cirlcle inside circle 1
    int q;
    GLfloat a7 = 0.3f, b7 = -0.85f, radius7 = 0.02f;
    int triangleAmount7 = 100;
    GLfloat twicePi7 = 2.0f * PI;
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a7, b7);
    for(q = 0; q <= triangleAmount7; q++)
    {
        glVertex2f(a7 + (radius7 * cos(q * twicePi7 / triangleAmount7)),
                   b7 + (radius7 * sin(q * twicePi7 / triangleAmount7)));
    }
    glEnd();


    //ROd for circle 1
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.3f, -0.75f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.33f, -0.77f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.37f, -0.79f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.39f, -0.85f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.38f, -0.89f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.34f, -0.94f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.3f, -0.94f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.25f, -0.93f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.22f, -0.89f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.22f, -0.85f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.22f, -0.81f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, -0.85f);
    glVertex2f(0.26f, -0.78f);
    glEnd();

    glFlush();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Land");
    glutDisplayFunc(display_night_land);
    glutTimerFunc(15, update_land_moon, 0);
    glutTimerFunc(15, update_boat1, 0);
    glutTimerFunc(15, update_boat3, 0);

    glutMainLoop();
    return 0;
}
