#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846

GLfloat position_village_cloud1 = 0.0f;
GLfloat position_village_cloud2 = 0.0f;
GLfloat position_village_sun = 0.0f;

GLfloat speed_village_cloud1 = 0.01f;
GLfloat speed_village_cloud2 = 0.0125f;
GLfloat speed_village_sun = 0.009f;




void update_village_cloud1(int value) {
if(position_village_cloud1 > 1.5)
        position_village_cloud1 = -1.0f;
    position_village_cloud1 += speed_village_cloud1;
	glutPostRedisplay();
	glutTimerFunc(100, update_village_cloud1, 0);
}

void update_village_cloud2(int value) {
if(position_village_cloud2 > 1.6)
        position_village_cloud2 = -1.6f;
    position_village_cloud2 += speed_village_cloud2;
	glutPostRedisplay();
	glutTimerFunc(100, update_village_cloud2, 0);
}

void update_village_sun(int value) {
if(position_village_sun > 1.8)
        position_village_sun = -1.0f;
    position_village_sun += speed_village_sun;
	glutPostRedisplay();
	glutTimerFunc(100, update_village_sun, 0);
}

void SpecialInput(int key, int x, int y)
{
switch(key)
    {
    case GLUT_KEY_UP:
    speed_village_cloud1 += 0.1f;
    break;
    case GLUT_KEY_DOWN:
    speed_village_cloud1 -= 0.1f;
    break;
    case GLUT_KEY_LEFT:
    break;
    case GLUT_KEY_RIGHT:
    break;
    }
glutPostRedisplay();
}

void Draw_cloud_village(){


    //Cloud_1
    glPushMatrix();
    glTranslatef(position_village_cloud1, 0.0f, 0.0f);
    int p7;

	GLfloat c7=-0.456f; GLfloat d7=0.9f; GLfloat radius_cloud_7 =0.075f;
	int triangleAmount_cloud_7 = 100;

	GLfloat twicePi_cloud_7 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c7, d7); // center of circle
		for(p7 = 0; p7 <= triangleAmount_cloud_7; p7++) {
			glVertex2f( c7 + (radius_cloud_7 * cos(p7 * twicePi_cloud_7 / triangleAmount_cloud_7)),
                        d7 + (radius_cloud_7 * sin(p7 * twicePi_cloud_7 / triangleAmount_cloud_7)) );
		}
	glEnd();


	//Cloud_2
	int p8;

	GLfloat c8=-0.375f; GLfloat d8=0.95f; GLfloat radius_cloud_8 =0.1f;
	int triangleAmount_cloud_8 = 100;

	GLfloat twicePi_cloud_8 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c8, d8); // center of circle
		for(p8 = 0; p8 <= triangleAmount_cloud_8; p8++) {
			glVertex2f( c8 + (radius_cloud_8 * cos(p8 * twicePi_cloud_8 / triangleAmount_cloud_8)),
                        d8 + (radius_cloud_8 * sin(p8 * twicePi_cloud_8 / triangleAmount_cloud_8)) );
		}
	glEnd();



	//Cloud_3
	int p9;

	GLfloat c9=-0.3f; GLfloat d9=0.85f; GLfloat radius_cloud_9 =0.1f;
	int triangleAmount_cloud_9 = 100;

	GLfloat twicePi_cloud_9 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c9, d9); // center of circle
		for(p9 = 0; p9 <= triangleAmount_cloud_9; p9++) {
			glVertex2f( c9 + (radius_cloud_9 * cos(p9 * twicePi_cloud_9 / triangleAmount_cloud_9)),
                        d9 + (radius_cloud_9 * sin(p9 * twicePi_cloud_9 / triangleAmount_cloud_9)) );
		}
	glEnd();
    glPopMatrix();


	//Cloud_4
	glPushMatrix();
    glTranslatef(position_village_cloud2, 0.0f, 0.0f);
	int p10;

	GLfloat c10=0.5f; GLfloat d10=0.85f; GLfloat radius_cloud_10 =0.1f;
	int triangleAmount_cloud_10 = 100;

	GLfloat twicePi_cloud_10 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c10, d10); // center of circle
		for(p10 = 0; p10 <= triangleAmount_cloud_10; p10++) {
			glVertex2f( c10 + (radius_cloud_10 * cos(p10 * twicePi_cloud_10 / triangleAmount_cloud_10)),
                        d10 + (radius_cloud_10 * sin(p10 * twicePi_cloud_10 / triangleAmount_cloud_10)) );
		}
	glEnd();


	//Cloud_5
	int p11;

	GLfloat c11=0.375f; GLfloat d11=0.95f; GLfloat radius_cloud_11 =0.1f;
	int triangleAmount_cloud_11 = 100;

	GLfloat twicePi_cloud_11 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c11, d11); // center of circle
		for(p11 = 0; p11 <= triangleAmount_cloud_11; p11++) {
			glVertex2f( c11 + (radius_cloud_11 * cos(p11 * twicePi_cloud_11 / triangleAmount_cloud_11)),
                        d11 + (radius_cloud_11 * sin(p11 * twicePi_cloud_11 / triangleAmount_cloud_11)) );
		}
	glEnd();


	//Cloud_6
	int p12;

	GLfloat c12=0.375f; GLfloat d12=0.85f; GLfloat radius_cloud_12 =0.1f;
	int triangleAmount_cloud_12 = 100;

	GLfloat twicePi_cloud_12 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c12, d12); // center of circle
		for(p12 = 0; p12 <= triangleAmount_cloud_12; p12++) {
			glVertex2f( c12 + (radius_cloud_12 * cos(p12 * twicePi_cloud_12 / triangleAmount_cloud_12)),
                        d12 + (radius_cloud_12 * sin(p12 * twicePi_cloud_12 / triangleAmount_cloud_12)) );
		}
	glEnd();
	glPopMatrix();

}




void display() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(10);

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

    //grass
    glBegin(GL_QUADS);
    //glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.160f, 0.874f, 0.086f); //
    glVertex2f(-1.0f, 1.0f);   // D
    glVertex2f(1.0f, 1.0f);   // E
    glVertex2f(1.0f, -1.0f); // G
    glVertex2f(-1.0f, -1.0f);

    glEnd();


    //SKY
    glBegin(GL_QUADS);
    //glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.058f, 0.678f, 0.960f); //
    glVertex2f(-1.0f,0.1f);   // D
    glVertex2f(-1.0f, 1.0f);   // E
    glVertex2f(1.0f, 1.0f); // G
    glVertex2f(1.0f, 0.7f);

    glEnd();


    //Village_Sun

    glPushMatrix();
    glTranslatef(position_village_sun, 0.0f, 0.0f);
    int j1;

    GLfloat a1 = -0.6f;
    GLfloat b1 = 0.7f;
    GLfloat radius_sun1 = 0.1f;
    int triangleAmount_sun1 = 100; //# of lines used to draw circle

    GLfloat twicePi_sun1 = 2.0f * PI;

    glColor3f(0.960f, 0.878f, 0.058f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a1, b1); // center of circle
    for(j1 = 0; j1 <= triangleAmount_sun1; j1++)
    {
        glVertex2f(a1 + (radius_sun1 * cos(j1 * twicePi_sun1 / triangleAmount_sun1)),
                   b1 + (radius_sun1 * sin(j1 * twicePi_sun1 / triangleAmount_sun1)) );
    }
    glEnd();
    glPopMatrix();


    //cloud
    Draw_cloud_village();



	//Hill 1
     glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(-1.3f,0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.3f, 0.31f);
     glEnd();

//Hill 2
     glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(-0.5f,0.25f);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.5f, 0.55f);


    glEnd();

    //Hill 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(0.3f,0.5f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(1.3f, 0.65f);

    glEnd();


    // School
    //1st part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f);
    glVertex2f(0.2f,0.3f);   //a
    glVertex2f(0.6f,0.3f);   //b
    glVertex2f(0.6f,-0.4f); //d
    glVertex2f(0.2,-0.4); // c
    glEnd();
    //2nd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f,0.3f);   // b
    glVertex2f(0.85f,0.1f);   //e
    glVertex2f(0.85f,-0.6f); //h
    glVertex2f(0.6f,-0.4f); // d
    glEnd();

    //3rd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f,0.1f);   // E
    glVertex2f(1.0f,0.1f);   // f
    glVertex2f(1.0f,-0.6f); // g
    glVertex2f(0.85f,-0.6f); // h
    glEnd();



   //4th_part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f,0.7f);   // j
    glVertex2f(1.0f,0.7f);   //k
    glVertex2f(1.0f,0.1f); // f
    glVertex2f(0.85f,0.1f); // e
    glEnd();

    //5th part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f,0.7f);   //i
    glVertex2f(0.85f,0.7f);   //j
    glVertex2f(0.85f,0.1f); // e
    glVertex2f(0.6f,0.3f); // b
    glEnd();

    //1st_class

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f);
    glVertex2f(0.2f,0.2f);   //l
    glVertex2f(0.4f,0.2f);   //m
    glVertex2f(0.4f,-0.3f); // n
    glVertex2f(0.2f,-0.3f); // o
    glEnd();



//Door 1st_class
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.22f,0.05f);   //t
    glVertex2f(0.3f,0.05f);   //u
    glVertex2f(0.3f,-0.3f); // v
    glVertex2f(0.22f,-0.3f); // w
    glEnd();

//Window 1st_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.32f,0.05f);   //x
    glVertex2f(0.4f,0.05f);   //y
    glVertex2f(0.4f,-0.1f); // z
    glVertex2f(0.32f,-0.1f); // A1
    glEnd();

    //2st_class
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f);
    glVertex2f(0.43f,0.2f);   //p
    glVertex2f(0.6f,0.2f);   //q
    glVertex2f(0.6f,-0.3f); // r
    glVertex2f(0.43f,-0.3f); // s
    glEnd();

   //Window 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.43f,0.05f);   //b1
    glVertex2f(0.5f,0.05f);   //c1
    glVertex2f(0.5f,-0.1f); // d1
    glVertex2f(0.43f,-0.1f); // e1
    glEnd();

    ////Door 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.52f,0.05f);   //f1
    glVertex2f(0.59f,0.05f);   //g1
    glVertex2f(0.59f,-0.3f); // h1
    glVertex2f(0.52f,-0.3f); // i1
    glEnd();

    //3rd_class

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.62f,0.2f);   // j1
    glVertex2f(0.75f,0.1f);   //k1
    glVertex2f(0.75f,-0.4f); //l1
    glVertex2f(0.62f,-0.3f);//m1
    glEnd();

    //3rd_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f,0.0f);   // d2
    glVertex2f(0.69f,-0.05f);   //e2
    glVertex2f(0.69f,-0.355f); //f2
    glVertex2f(0.64f,-0.32f);//g2
    glEnd();

    //3rd_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f,-0.05f);   // h2
    glVertex2f(0.75f,-0.05f);   //i2
    glVertex2f(0.75f,-0.18f); //j2
    glVertex2f(0.7f,-0.17f);//k2
    glEnd();




    //4th class
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.77f,0.1f);   // n1
    glVertex2f(0.83f,0.03f);   //o1
    glVertex2f(0.83f,-0.47); //p1
    glVertex2f(0.77f,-0.4f);//q1
    glEnd();

    //4th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f,-0.05f);   // z1
    glVertex2f(0.81f,-0.07f);   //a2
    glVertex2f(0.81f,-0.45); //b2
    glVertex2f(0.78f,-0.42f);//c2
    glEnd();


    //5th_class
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.87f,0.0f);   // r1
    glVertex2f(1.0f,0.0f);   // s1
    glVertex2f(1.0f,-0.5f); // t1
    glVertex2f(0.87f,-0.5f); // u1
    glEnd();


    //5th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f,-0.1f);   // v1
    glVertex2f(0.96f,-0.1f);   // w1
    glVertex2f(0.96f,-0.3f); // x1
    glVertex2f(0.87f,-0.3f); // y1
    glEnd();

    //6th_class_

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.62f,0.6f);   // m2
    glVertex2f(0.75f,0.6f);   // n2
    glVertex2f(0.75f,0.25f); // o2
    glVertex2f(0.62f,0.35f); // p2
    glEnd();

    //6th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f,0.55f);   // y2
    glVertex2f(0.69f,0.55f);   //z2
    glVertex2f(0.69f,0.295f); //a3
    glVertex2f(0.64f,0.335f);//b3
    glEnd();

    //6th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f,0.55f);   // c3
    glVertex2f(0.75f,0.55f);   //d3
    glVertex2f(0.75f,0.4225f); //e3
    glVertex2f(0.7f,0.4225f);//f3
    glEnd();


    //7th class
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.77f,0.6f);   // q2
    glVertex2f(0.83f,0.6f);   //r2
    glVertex2f(0.83f,0.2); //s2
    glVertex2f(0.77f,0.25f);//t2
    glEnd();

     //7th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f,0.55f);   // z1
    glVertex2f(0.81f,0.55f);   //a2
    glVertex2f(0.81f,0.215); //b2
    glVertex2f(0.78f,0.24f);//c2
    glEnd();



    //8th_class

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.87f,0.6f);   // u2
    glVertex2f(1.0f,0.6f);   // v2
    glVertex2f(1.0f,0.2f); // w2
    glVertex2f(0.87f,0.2f); // x2
    glEnd();

    //8th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f,0.5f);   // v1
    glVertex2f(0.96f,0.5f);   // w1
    glVertex2f(0.96f,0.3f); // x1
    glVertex2f(0.87f,0.3f); // y1
    glEnd();







   //Karnis_Design
   //1st_part
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f);
    glVertex2f(0.19f,0.3f);   //a
    glVertex2f(0.6f,0.3f);   //b
    glVertex2f(0.6f,0.31f); //
    glVertex2f(0.19,0.31); //
    glEnd();

    //2nd part
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.6f,0.3f);   // b
    glVertex2f(0.85f,0.1f);   //e
    glVertex2f(0.85f,0.11f); //
    glVertex2f(0.6f,0.31f); //
    glEnd();

    //3rd_part
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.85f,0.1f);   // e
    glVertex2f(1.0f,0.1f);   // f
    glVertex2f(1.0f,0.11f); // g
    glVertex2f(0.85f,0.11f); // h
    glEnd();

    //4th_and_5th_part
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.0f); //
    glVertex2f(0.59f,0.7f);   // e
    glVertex2f(1.0f,0.7f);   // f
    glVertex2f(1.0f,0.71f); // g
    glVertex2f(0.59f,0.71f); // h
    glEnd();



    //Flag_Base

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f, 0.0f); //
    glVertex2f(0.25f,-0.5f);   // e
    glVertex2f(0.3f,-0.5f);   // f
    glVertex2f(0.3f,-0.55f); // g
    glVertex2f(0.25f,-0.55f); // h
    glEnd();

    //flag line
    glBegin(GL_LINES);
    glColor3f(0.541, 0.518, 0.451);

    glVertex2f(0.275f, -0.5f);
    glVertex2f(0.275f, 0.52f);
    glEnd();

    //bd_flag
    //Quad
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.275f, 0.5f);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.275f, 0.4f);
    glEnd();

    //Circle
    int i;
	GLfloat x=0.3375f; GLfloat y=0.45f; GLfloat radius =0.03f;
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glColor3f(0.8f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


    //School_Name
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.55f,0.3f);
    glVertex2f(0.55f,0.4f);
    glVertex2f(0.3,0.4);
    glEnd();


    //Road

    //up
    glBegin(GL_QUADS);
    glColor3f(0.847, 0.811, 0.811); //
    glVertex2f(-0.1f, 0.37f);   // E
    glVertex2f(0.175f, 0.45f);
    glVertex2f(0.175f, -0.5f); // G
    glVertex2f(-0.09f, -0.37f); // F
    glEnd();


    //Down
    glBegin(GL_QUADS);
    glColor3f(0.847, 0.811, 0.811); //
    glVertex2f(-0.32f, -1.0f);   // E
    glVertex2f(-0.09f, -0.37f);
    glVertex2f(0.175f, -0.5f); // G
    glVertex2f(0.275f, -1.0f); // F
    glEnd();




    //2nd house

    // Roof
    glBegin(GL_POLYGON);
    glColor3f(0.823f, 0.537f, 0.294f); //
    glVertex2f(-0.4f,0.2f);   // D
    glVertex2f(-0.22f,0.2f);   // E
    glVertex2f(-0.1f, -0.1f); // G
    glVertex2f(-0.43f, -0.1f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();


    //square
    glBegin(GL_QUADS);
    glColor3f(0.780f, 0.682f, 0.160f); //
    glVertex2f(-0.45f, -0.1f);   // E
    glVertex2f(-0.12f, -0.1f);
    glVertex2f(-0.12f, -0.35f); // G
    glVertex2f(-0.45f, -0.35f); // F
    glEnd();


    //Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.32f, -0.15f);   // E
    glVertex2f(-0.25f, -0.15f);
    glVertex2f(-0.25f, -0.35f); // G
    glVertex2f(-0.32f, -0.35f); // F
    glEnd();

    //Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.45f, -0.35f); // F
    glVertex2f(-0.12f, -0.35f); // G
    glVertex2f(-0.12f, -0.38f);
    glVertex2f(-0.45f, -0.38f);   // E
    glEnd();


    //House 1

    // Roof
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f,0.2f);   // D
    glVertex2f(-0.5f,0.2f);   // E
    glVertex2f(-0.43f, -0.1f); // G
    glVertex2f(-0.7f, -0.1f); // F
    glEnd();


    //square
    glBegin(GL_QUADS);
    glColor3f(0.701f, 0.721f, 0.580f); //
    glVertex2f(-0.7f, -0.1f);   // D
    glVertex2f(-0.45f, -0.1f);   // E
    glVertex2f(-0.45f, -0.4f); // G
    glVertex2f(-0.7f, -0.4f); // F
    glEnd();


    //windowside polygon
    glBegin(GL_POLYGON);
    glColor3f(0.784f, 0.823f, 0.517f); //
    glVertex2f(-0.8f,0.2f);   // D
    glVertex2f(-0.7f, -0.1f);   // E
    glVertex2f(-0.7f, -0.4f); // G
    glVertex2f(-0.9F, -0.4F); // F
    glVertex2f(-0.9F, -0.1F); // F
    glEnd();

    //window
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.85f, -0.18f);   // D
    glVertex2f(-0.78f, -0.18f);   // E
    glVertex2f(-0.78f, -0.27f); // G
    glVertex2f(-0.85f, -0.27f); // F
    glEnd();


    //Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.6f, -0.2f);   // D
    glVertex2f(-0.53f, -0.2f);   // E
    glVertex2f(-0.53f, -0.4f); // F
    glVertex2f(-0.6f, -0.4f); // G
    glEnd();

    //Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.9f, -0.4f); // F
    glVertex2f(-0.45f, -0.4f); // G
    glVertex2f(-0.45f, -0.44f);
    glVertex2f(-0.9f, -0.44f);   // E
    glEnd();

//roof_stref

   glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f, 0.2f);   // D
    glVertex2f(-0.79f, 0.19f);   // E
    glVertex2f(-0.9f, -0.1f); // F
    glVertex2f(-0.94f, -0.11f); // G
    glEnd();


    //tree
    glBegin(GL_POLYGON);
    glColor3f(0.466f, 0.470f, 0.211f); //
    glVertex2f(-0.492f,0.16f);   // D
    glVertex2f(-0.492f,0.4f);   // E
    glVertex2f(-0.42f, 0.4f); // G
    glVertex2f(-0.42f, 0.17f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();

    //Tree_Leaf_1

    int k;
	GLfloat e=-0.525f; GLfloat f=0.425f; GLfloat radius_1 =0.1f;
	int triangleAmount_1 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi_1 = 2.0f * PI;

	glColor3f(0.203f, 0.498f, 0.274f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(e, f); // center of circle
		for(k = 0; k <= triangleAmount_1;k++) {
			glVertex2f( e + (radius_1 * cos(k *  twicePi_1 / triangleAmount_1)),
                        f + (radius_1 * sin(k * twicePi_1 / triangleAmount_1)) );
		}
	glEnd();



	//Tree_Leaf_2

    int l;
	GLfloat g=-0.530f; GLfloat h=0.55f; GLfloat radius_2 =0.1f;
	int triangleAmount_2 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi_2 = 2.0f * PI;

	glColor3f(0.203f, 0.498f, 0.274f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(g, h); // center of circle
		for(l = 0; l <= triangleAmount_1;l++) {
			glVertex2f( g + (radius_1 * cos(l *  twicePi_2 / triangleAmount_2)),
                        h + (radius_1 * sin(l * twicePi_2 / triangleAmount_2)) );
		}
	glEnd();



	//Tree_Leaf_3

    int m;
	GLfloat q=-0.456f; GLfloat r=0.65f; GLfloat radius_3 =0.2f;
	int triangleAmount_3 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi_3 = 2.0f * PI;

	glColor3f(0.203f, 0.498f, 0.274f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(q, r); // center of circle
		for(m = 0; m <= triangleAmount_1;m++) {
			glVertex2f( q + (radius_1 * cos(m *  twicePi_3 / triangleAmount_3)),
                        r + (radius_1 * sin(m * twicePi_3 / triangleAmount_3)) );
		}
	glEnd();



	//Tree_Leaf_4

    int n;
	GLfloat s=-0.41f; GLfloat t=0.55f; GLfloat radius_4 =0.1f;
	int triangleAmount_4 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi_4 = 2.0f * PI;

	glColor3f(0.203f, 0.498f, 0.274f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(s, t); // center of circle
		for(n = 0; n <= triangleAmount_1;n++) {
			glVertex2f( s + (radius_1 * cos(n *  twicePi_4 / triangleAmount_4)),
                        t + (radius_1 * sin(n * twicePi_4 / triangleAmount_4)) );
		}
	glEnd();


	//Tree_Leaf_5

    int o;
	GLfloat u=-0.4f; GLfloat v=0.425f; GLfloat radius_5=0.1f;
	int triangleAmount_5 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi_5 = 2.0f * PI;

	glColor3f(0.203f, 0.498f, 0.274f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(u, v); // center of circle
		for(o = 0; o <= triangleAmount_1;o++) {
			glVertex2f( u + (radius_1 * cos(o *  twicePi_5 / triangleAmount_4)),
                        v + (radius_1 * sin(o * twicePi_5 / triangleAmount_4)) );
		}
	glEnd();




    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1000);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("School in village");
    glutDisplayFunc(display);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(15, update_village_cloud1, 0);
    glutTimerFunc(15, update_village_cloud2, 0);
    glutTimerFunc(15, update_village_sun, 0);
    glutMainLoop();
    return 0;
}
