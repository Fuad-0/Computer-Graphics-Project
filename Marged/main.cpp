#include<windows.h>
#include<cstdio>

#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

int currentFrame = 1;

// Extra functions start------------------------------------------------


//village var
GLfloat position_village_cloud1 = 0.0f;
GLfloat position_village_cloud2 = 0.0f;
GLfloat position_village_sun = 0.0f;

GLfloat speed_village_cloud1 = 0.01f;
GLfloat speed_village_cloud2 = 0.0125f;
GLfloat speed_village_sun = 0.009f;

//land var
GLfloat position_land_cloud1 = 0.0f;
GLfloat position_land_cloud2 = 0.0f;
GLfloat position_land_sun = 0.0f;
GLfloat position_boat1 = 0.0f;
GLfloat position_boat3 = 0.0f;

GLfloat speed_land_cloud1 = 0.01f;
GLfloat speed_land_cloud2 = 0.0125f;
GLfloat speed_land_sun = 0.009f;
GLfloat speed_boat1 = 0.01f;
GLfloat speed_boat3 = 0.01f;

//sona mosq var
GLfloat position_mosq_cloud1 = 0.0f;
GLfloat position_mosq_cloud2 = 0.0f;
GLfloat position_mosq_sun = 0.0f;
GLfloat position_track1 = 0.0f;
GLfloat position_track2 = 0.0f;

GLfloat speed_mosq_cloud1 = 0.01f;
GLfloat speed_mosq_cloud2 = 0.0125f;
GLfloat speed_mosq_sun = 0.009f;
GLfloat speed_track1 = 0.01f;
GLfloat speed_track2 = 0.01f;

// village-----------------------
void update_village_cloud1(int value)
{
    if (position_village_cloud1 > 1.5)
        position_village_cloud1 = -1.0f;
    position_village_cloud1 += speed_village_cloud1;
    glutPostRedisplay();
    glutTimerFunc(100, update_village_cloud1, 0);
}

void update_village_cloud2(int value)
{
    if (position_village_cloud2 > 1.6)
        position_village_cloud2 = -1.6f;
    position_village_cloud2 += speed_village_cloud2;
    glutPostRedisplay();
    glutTimerFunc(100, update_village_cloud2, 0);
}

void update_village_sun(int value)
{
    if (position_village_sun > 1.8)
        position_village_sun = -1.0f;
    position_village_sun += speed_village_sun;
    glutPostRedisplay();
    glutTimerFunc(100, update_village_sun, 0);
}

void Draw_cloud_village()
{
    // Cloud_1
    glPushMatrix();
    glTranslatef(position_village_cloud1, 0.0f, 0.0f);
    int p7;

    GLfloat c7 = -0.456f;
    GLfloat d7 = 0.9f;
    GLfloat radius_cloud_7 = 0.075f;
    int triangleAmount_cloud_7 = 100;

    GLfloat twicePi_cloud_7 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c7, d7); // center of circle
    for (p7 = 0; p7 <= triangleAmount_cloud_7; p7++)
    {
        glVertex2f(c7 + (radius_cloud_7 * cos(p7 * twicePi_cloud_7 / triangleAmount_cloud_7)),
                   d7 + (radius_cloud_7 * sin(p7 * twicePi_cloud_7 / triangleAmount_cloud_7)));
    }
    glEnd();

    // Cloud_2
    int p8;

    GLfloat c8 = -0.375f;
    GLfloat d8 = 0.95f;
    GLfloat radius_cloud_8 = 0.1f;
    int triangleAmount_cloud_8 = 100;

    GLfloat twicePi_cloud_8 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c8, d8); // center of circle
    for (p8 = 0; p8 <= triangleAmount_cloud_8; p8++)
    {
        glVertex2f(c8 + (radius_cloud_8 * cos(p8 * twicePi_cloud_8 / triangleAmount_cloud_8)),
                   d8 + (radius_cloud_8 * sin(p8 * twicePi_cloud_8 / triangleAmount_cloud_8)));
    }
    glEnd();

    // Cloud_3
    int p9;

    GLfloat c9 = -0.3f;
    GLfloat d9 = 0.85f;
    GLfloat radius_cloud_9 = 0.1f;
    int triangleAmount_cloud_9 = 100;

    GLfloat twicePi_cloud_9 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c9, d9); // center of circle
    for (p9 = 0; p9 <= triangleAmount_cloud_9; p9++)
    {
        glVertex2f(c9 + (radius_cloud_9 * cos(p9 * twicePi_cloud_9 / triangleAmount_cloud_9)),
                   d9 + (radius_cloud_9 * sin(p9 * twicePi_cloud_9 / triangleAmount_cloud_9)));
    }
    glEnd();
    glPopMatrix();

    // Cloud_4
    glPushMatrix();
    glTranslatef(position_village_cloud2, 0.0f, 0.0f);
    int p10;

    GLfloat c10 = 0.5f;
    GLfloat d10 = 0.85f;
    GLfloat radius_cloud_10 = 0.1f;
    int triangleAmount_cloud_10 = 100;

    GLfloat twicePi_cloud_10 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c10, d10); // center of circle
    for (p10 = 0; p10 <= triangleAmount_cloud_10; p10++)
    {
        glVertex2f(c10 + (radius_cloud_10 * cos(p10 * twicePi_cloud_10 / triangleAmount_cloud_10)),
                   d10 + (radius_cloud_10 * sin(p10 * twicePi_cloud_10 / triangleAmount_cloud_10)));
    }
    glEnd();

    // Cloud_5
    int p11;

    GLfloat c11 = 0.375f;
    GLfloat d11 = 0.95f;
    GLfloat radius_cloud_11 = 0.1f;
    int triangleAmount_cloud_11 = 100;

    GLfloat twicePi_cloud_11 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c11, d11); // center of circle
    for (p11 = 0; p11 <= triangleAmount_cloud_11; p11++)
    {
        glVertex2f(c11 + (radius_cloud_11 * cos(p11 * twicePi_cloud_11 / triangleAmount_cloud_11)),
                   d11 + (radius_cloud_11 * sin(p11 * twicePi_cloud_11 / triangleAmount_cloud_11)));
    }
    glEnd();

    // Cloud_6
    int p12;

    GLfloat c12 = 0.375f;
    GLfloat d12 = 0.85f;
    GLfloat radius_cloud_12 = 0.1f;
    int triangleAmount_cloud_12 = 100;

    GLfloat twicePi_cloud_12 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c12, d12); // center of circle
    for (p12 = 0; p12 <= triangleAmount_cloud_12; p12++)
    {
        glVertex2f(c12 + (radius_cloud_12 * cos(p12 * twicePi_cloud_12 / triangleAmount_cloud_12)),
                   d12 + (radius_cloud_12 * sin(p12 * twicePi_cloud_12 / triangleAmount_cloud_12)));
    }
    glEnd();
    glPopMatrix();
}

// // keybord and mouse clickable start
void SpecialInput_keybord(int key, int x, int y)
{
    //village
    if(currentFrame==1){
        if( key == GLUT_KEY_UP ){
            speed_village_cloud1 += 0.01f;
        }
        else if( key==GLUT_KEY_DOWN){
            speed_village_cloud1 -= 0.01f;

        }
        else if( key==GLUT_KEY_LEFT){
            speed_village_cloud2 -= 0.01f;

        }
        else if( key==GLUT_KEY_RIGHT){
            speed_village_cloud2 += 0.01f;

        }
    glutPostRedisplay();
    }
    //land
    else if(currentFrame == 2){
        if(key==GLUT_KEY_UP){
            speed_boat1 += 0.01f;
        }
        else if(key==GLUT_KEY_DOWN){
            speed_boat1 -= 0.01f;
            
        }
        else if(key==GLUT_KEY_LEFT){
            speed_boat3 -= 0.01f;
            
        }
        else if(key==GLUT_KEY_RIGHT){
            speed_boat3 += 0.01f;
        }
        glutPostRedisplay();
    }
    else if(currentFrame == 3){
        switch (key)
        {
        case GLUT_KEY_UP:
            speed_mosq_sun += 0.01f;
            break;
        case GLUT_KEY_DOWN:
            speed_mosq_sun -= 0.01f;
            break;
        case GLUT_KEY_LEFT:
            speed_track2 -= 0.01f;
            break;
        case GLUT_KEY_RIGHT:
            speed_track2 += 0.01f;
            break;
        }
        glutPostRedisplay();

        if(key==GLUT_KEY_UP){
            speed_mosq_sun += 0.01f;

        }
        else if(key==GLUT_KEY_DOWN){
            speed_mosq_sun -= 0.01f;

        }
        else if(key==GLUT_KEY_LEFT){
            speed_track2 -= 0.01f;

        }
        else if(key==GLUT_KEY_RIGHT){
            speed_track2 += 0.01f;

        }
    }
}

void handleMouse_mouse(int button, int state, int x, int y){
    //village
    if(currentFrame==1){
        if (button == GLUT_LEFT_BUTTON){
            speed_village_sun -= 0.01;
        }
        else if (button == GLUT_RIGHT_BUTTON)
        {
            speed_village_sun += 0.01;
        }
        glutPostRedisplay();
    }
    //land
    else if(currentFrame == 2){
        if (button == GLUT_LEFT_BUTTON){
            speed_land_sun -= 0.01;
        }
        else if (button == GLUT_RIGHT_BUTTON)
        {
            speed_land_sun += 0.01;
        }
        glutPostRedisplay();
    }
    //sona mosq
    else if(currentFrame==3){
            if (button == GLUT_LEFT_BUTTON)
        {
            speed_track1 -= 0.008;
        }
        if (button == GLUT_RIGHT_BUTTON)
        {
            speed_track1 += 0.008;
        }
        glutPostRedisplay();
    }
}

// keybord and mouse clickable end


// land----------------------------

void update_land_cloud1(int value)
{
    if (position_land_cloud1 > 1.5)
        position_land_cloud1 = -1.0f;
    position_land_cloud1 += speed_land_cloud1;
    glutPostRedisplay();
    glutTimerFunc(100, update_land_cloud1, 0);
}

void update_land_cloud2(int value)
{
    if (position_land_cloud2 > 1.6)
        position_land_cloud2 = -1.6f;
    position_land_cloud2 += speed_land_cloud2;
    glutPostRedisplay();
    glutTimerFunc(100, update_land_cloud2, 0);
}

void update_land_sun(int value)
{
    if (position_land_sun > 1.8)
        position_land_sun = -1.0f;
    position_land_sun += speed_land_sun;
    glutPostRedisplay();
    glutTimerFunc(100, update_land_sun, 0);
}

void update_boat1(int value)
{
    if (position_boat1 > 1.3)
        position_boat1 = -1.0f;
    position_boat1 += speed_boat1;
    glutPostRedisplay();
    glutTimerFunc(100, update_boat1, 0);
}

void update_boat3(int value)
{
    if (position_boat3 > 2)
        position_boat3 = -1.0f;
    position_boat3 += speed_boat3;
    glutPostRedisplay();
    glutTimerFunc(100, update_boat3, 0);
}

void Draw_land_cloud()
{

    // Cloud_1

    glPushMatrix();
    glTranslatef(position_land_cloud1, 0.0f, 0.0f);
    int p;

    GLfloat c = -0.456f;
    GLfloat d = 0.9f;
    GLfloat radius_cloud__1 = 0.075f;
    int triangleAmount_cloud__1 = 100;

    GLfloat twicePi_cloud__1 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c, d); // center of circle
    for (p = 0; p <= triangleAmount_cloud__1; p++)
    {
        glVertex2f(c + (radius_cloud__1 * cos(p * twicePi_cloud__1 / triangleAmount_cloud__1)),
                   d + (radius_cloud__1 * sin(p * twicePi_cloud__1 / triangleAmount_cloud__1)));
    }
    glEnd();

    // cloud_2
    int p1;

    GLfloat c1 = -0.375f;
    GLfloat d1 = 0.95f;
    GLfloat radius_cloud__2 = 0.1f;
    int triangleAmount_cloud__2 = 100;

    GLfloat twicePi_cloud__2 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c1, d1); // center of circle
    for (p1 = 0; p1 <= triangleAmount_cloud__2; p1++)
    {
        glVertex2f(c1 + (radius_cloud__2 * cos(p1 * twicePi_cloud__2 / triangleAmount_cloud__2)),
                   d1 + (radius_cloud__2 * sin(p1 * twicePi_cloud__2 / triangleAmount_cloud__2)));
    }
    glEnd();

    // cloud_3
    int p2;

    GLfloat c2 = -0.3f;
    GLfloat d2 = 0.85f;
    GLfloat radius_cloud__3 = 0.1f;
    int triangleAmount_cloud__3 = 100;

    GLfloat twicePi_cloud__3 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2, d2); // center of circle
    for (p2 = 0; p2 <= triangleAmount_cloud__3; p2++)
    {
        glVertex2f(c2 + (radius_cloud__3 * cos(p2 * twicePi_cloud__3 / triangleAmount_cloud__3)),
                   d2 + (radius_cloud__3 * sin(p2 * twicePi_cloud__3 / triangleAmount_cloud__3)));
    }
    glEnd();
    glPopMatrix();

    // cloud_4

    glPushMatrix();
    glTranslatef(position_land_cloud2, 0.0f, 0.0f);
    int p3;

    GLfloat c3 = 0.5f;
    GLfloat d3 = 0.85f;
    GLfloat radius_cloud__4 = 0.1f;
    int triangleAmount_cloud__4 = 100;

    GLfloat twicePi_cloud__4 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c3, d3); // center of circle
    for (p3 = 0; p3 <= triangleAmount_cloud__4; p3++)
    {
        glVertex2f(c3 + (radius_cloud__4 * cos(p3 * twicePi_cloud__4 / triangleAmount_cloud__4)),
                   d3 + (radius_cloud__4 * sin(p3 * twicePi_cloud__4 / triangleAmount_cloud__4)));
    }
    glEnd();

    // cloud_5
    int p4;

    GLfloat c4 = 0.375f;
    GLfloat d4 = 0.95f;
    GLfloat radius_cloud__5 = 0.1f;
    int triangleAmount_cloud__5 = 100;

    GLfloat twicePi_cloud__5 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c4, d4); // center of circle
    for (p4 = 0; p4 <= triangleAmount_cloud__5; p4++)
    {
        glVertex2f(c4 + (radius_cloud__5 * cos(p4 * twicePi_cloud__5 / triangleAmount_cloud__5)),
                   d4 + (radius_cloud__5 * sin(p4 * twicePi_cloud__5 / triangleAmount_cloud__5)));
    }
    glEnd();

    // cloud_6
    int p5;

    GLfloat c5 = 0.375f;
    GLfloat d5 = 0.85f;
    GLfloat radius_cloud__6 = 0.1f;
    int triangleAmount_cloud__6 = 100;

    GLfloat twicePi_cloud__6 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c5, d5); // center of circle
    for (p5 = 0; p5 <= triangleAmount_cloud__5; p5++)
    {
        glVertex2f(c5 + (radius_cloud__6 * cos(p5 * twicePi_cloud__6 / triangleAmount_cloud__6)),
                   d5 + (radius_cloud__6 * sin(p5 * twicePi_cloud__6 / triangleAmount_cloud__6)));
    }
    glEnd();
    glPopMatrix();
}


// sona mosq -------------------------------

void update_mosq_cloud1(int value)
{
    if (position_mosq_cloud1 > 1.5)
        position_mosq_cloud1 = -1.0f;
    position_mosq_cloud1 += speed_mosq_cloud1;
    glutPostRedisplay();
    glutTimerFunc(100, update_mosq_cloud1, 0);
}

void update_mosq_cloud2(int value)
{
    if (position_mosq_cloud2 > 1.6)
        position_mosq_cloud2 = -1.6f;
    position_mosq_cloud2 += speed_mosq_cloud2;
    glutPostRedisplay();
    glutTimerFunc(100, update_mosq_cloud2, 0);
}

void update_mosq_sun(int value)
{
    if (position_mosq_sun > 1.85)
        position_mosq_sun = -1.0f;
    position_mosq_sun += speed_mosq_sun;
    glutPostRedisplay();
    glutTimerFunc(100, update_mosq_sun, 0);
}

void update_track1(int value)
{
    if (position_track1 > 1.85)
        position_track1 = -1.0f;
    position_track1 += speed_track1;
    glutPostRedisplay();
    glutTimerFunc(100, update_track1, 0);
}

void update_track2(int value)
{
    if (position_track2 < -1.9)
        position_track2 = 1.0f;
    position_track2 -= speed_track2;
    glutPostRedisplay();
    glutTimerFunc(100, update_track2, 0);
}

void Draw_mosq_cloud()
{

    // Cloud_1

    glPushMatrix();
    glTranslatef(position_mosq_cloud1, 0.0f, 0.0f);
    int p;

    GLfloat c = -0.456f;
    GLfloat d = 0.9f;
    GLfloat radius_cloud__1 = 0.075f;
    int triangleAmount_cloud__1 = 100;

    GLfloat twicePi_cloud__1 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c, d); // center of circle
    for (p = 0; p <= triangleAmount_cloud__1; p++)
    {
        glVertex2f(c + (radius_cloud__1 * cos(p * twicePi_cloud__1 / triangleAmount_cloud__1)),
                   d + (radius_cloud__1 * sin(p * twicePi_cloud__1 / triangleAmount_cloud__1)));
    }
    glEnd();

    // cloud_2
    int p1;

    GLfloat c1 = -0.375f;
    GLfloat d1 = 0.95f;
    GLfloat radius_cloud__2 = 0.1f;
    int triangleAmount_cloud__2 = 100;

    GLfloat twicePi_cloud__2 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c1, d1); // center of circle
    for (p1 = 0; p1 <= triangleAmount_cloud__2; p1++)
    {
        glVertex2f(c1 + (radius_cloud__2 * cos(p1 * twicePi_cloud__2 / triangleAmount_cloud__2)),
                   d1 + (radius_cloud__2 * sin(p1 * twicePi_cloud__2 / triangleAmount_cloud__2)));
    }
    glEnd();

    // cloud_3
    int p2;

    GLfloat c2 = -0.3f;
    GLfloat d2 = 0.85f;
    GLfloat radius_cloud__3 = 0.1f;
    int triangleAmount_cloud__3 = 100;

    GLfloat twicePi_cloud__3 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2, d2); // center of circle
    for (p2 = 0; p2 <= triangleAmount_cloud__3; p2++)
    {
        glVertex2f(c2 + (radius_cloud__3 * cos(p2 * twicePi_cloud__3 / triangleAmount_cloud__3)),
                   d2 + (radius_cloud__3 * sin(p2 * twicePi_cloud__3 / triangleAmount_cloud__3)));
    }
    glEnd();
    glPopMatrix();

    // cloud_4

    glPushMatrix();
    glTranslatef(position_mosq_cloud2, 0.0f, 0.0f);
    int p3;

    GLfloat c3 = 0.5f;
    GLfloat d3 = 0.85f;
    GLfloat radius_cloud__4 = 0.1f;
    int triangleAmount_cloud__4 = 100;

    GLfloat twicePi_cloud__4 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c3, d3); // center of circle
    for (p3 = 0; p3 <= triangleAmount_cloud__4; p3++)
    {
        glVertex2f(c3 + (radius_cloud__4 * cos(p3 * twicePi_cloud__4 / triangleAmount_cloud__4)),
                   d3 + (radius_cloud__4 * sin(p3 * twicePi_cloud__4 / triangleAmount_cloud__4)));
    }
    glEnd();

    // cloud_5
    int p4;

    GLfloat c4 = 0.375f;
    GLfloat d4 = 0.95f;
    GLfloat radius_cloud__5 = 0.1f;
    int triangleAmount_cloud__5 = 100;

    GLfloat twicePi_cloud__5 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c4, d4); // center of circle
    for (p4 = 0; p4 <= triangleAmount_cloud__5; p4++)
    {
        glVertex2f(c4 + (radius_cloud__5 * cos(p4 * twicePi_cloud__5 / triangleAmount_cloud__5)),
                   d4 + (radius_cloud__5 * sin(p4 * twicePi_cloud__5 / triangleAmount_cloud__5)));
    }
    glEnd();

    // cloud_6
    int p5;

    GLfloat c5 = 0.375f;
    GLfloat d5 = 0.85f;
    GLfloat radius_cloud__6 = 0.1f;
    int triangleAmount_cloud__6 = 100;

    GLfloat twicePi_cloud__6 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c5, d5); // center of circle
    for (p5 = 0; p5 <= triangleAmount_cloud__5; p5++)
    {
        glVertex2f(c5 + (radius_cloud__6 * cos(p5 * twicePi_cloud__6 / triangleAmount_cloud__6)),
                   d5 + (radius_cloud__6 * sin(p5 * twicePi_cloud__6 / triangleAmount_cloud__6)));
    }
    glEnd();
    glPopMatrix();
}

// land night----------------------
GLfloat position_land_moon = 0.0f;

GLfloat speed_land_moon = 0.009f;

void update_land_moon(int value)
{
    if (position_land_moon > 1.8)
        position_land_moon = -1.0f;
    position_land_moon += speed_land_moon;
    glutPostRedisplay();
    glutTimerFunc(100, update_land_moon, 0);
}

// night sona -------------------------

GLfloat position_mosq_moon = 0.0f;

GLfloat speed_mosq_moon = 0.009f;

void update_mosq_moon(int value)
{
    if (position_mosq_moon > 1.85)
        position_mosq_moon = -1.0f;
    position_mosq_moon += speed_mosq_moon;
    glutPostRedisplay();
    glutTimerFunc(100, update_mosq_moon, 0);
}

// gram night --------------

GLfloat position_village_moon = 0.0f;
GLfloat speed_village_moon = 0.009f;

void update_village_moon(int value)
{
    if (position_village_moon > 1.8)
        position_village_moon = -1.0f;
    position_village_moon += speed_village_moon;
    glutPostRedisplay();
    glutTimerFunc(100, update_village_moon, 0);
}

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

// extra function ends------------------------------------------------------------------------

// Function prototypes
void display();
void drawGram();
void drawSona();
void drawLandRiver();
void drawGramNight();
void drawSonaNight();
void drawLandRiverNight();
void keyboardInput(unsigned char key, int x, int y);

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    switch (currentFrame)
    {
    case 1:
        drawGram();
        break;
    case 2:
        drawLandRiver();
        break;
    case 3:
        drawSona();
        break;
    case 4:
        drawGramNight();
        break;
    case 5:
        drawLandRiverNight();
        break;
    case 6:
        drawSonaNight();
        break;
    }

    glFlush();
}

// Function to handle keyboard input
void keyboardInput(unsigned char key, int x, int y)
{
    if (key >= '1' && key <= '6')
    {
        currentFrame = key - '0';
        glutPostRedisplay();
    }
}

// Day scenes
void drawGram()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    // grass
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.160f, 0.874f, 0.086f); //
    glVertex2f(-1.0f, 1.0f);           // D
    glVertex2f(1.0f, 1.0f);            // E
    glVertex2f(1.0f, -1.0f);           // G
    glVertex2f(-1.0f, -1.0f);

    glEnd();

    // SKY
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.058f, 0.678f, 0.960f); //
    glVertex2f(-1.0f, 0.1f);           // D
    glVertex2f(-1.0f, 1.0f);           // E
    glVertex2f(1.0f, 1.0f);            // G
    glVertex2f(1.0f, 0.7f);

    glEnd();

    // Village_Sun

    glPushMatrix();
    glTranslatef(position_village_sun, 0.0f, 0.0f);
    int j1;

    GLfloat a1 = -0.6f;
    GLfloat b1 = 0.7f;
    GLfloat radius_sun1 = 0.1f;
    int triangleAmount_sun1 = 100; // # of lines used to draw circle

    GLfloat twicePi_sun1 = 2.0f * PI;

    glColor3f(0.960f, 0.878f, 0.058f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a1, b1); // center of circle
    for (j1 = 0; j1 <= triangleAmount_sun1; j1++)
    {
        glVertex2f(a1 + (radius_sun1 * cos(j1 * twicePi_sun1 / triangleAmount_sun1)),
                   b1 + (radius_sun1 * sin(j1 * twicePi_sun1 / triangleAmount_sun1)));
    }
    glEnd();
    glPopMatrix();

    // cloud
    Draw_cloud_village();

    // Hill 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(-1.3f, 0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.3f, 0.31f);
    glEnd();

    // Hill 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(-0.5f, 0.25f);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.5f, 0.55f);

    glEnd();

    // Hill 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.050, 0.427, 0.074);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(1.3f, 0.65f);

    glEnd();

    // School
    // 1st part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f);
    glVertex2f(0.2f, 0.3f);  // a
    glVertex2f(0.6f, 0.3f);  // b
    glVertex2f(0.6f, -0.4f); // d
    glVertex2f(0.2, -0.4);   // c
    glEnd();
    // 2nd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f, 0.3f);            // b
    glVertex2f(0.85f, 0.1f);           // e
    glVertex2f(0.85f, -0.6f);          // h
    glVertex2f(0.6f, -0.4f);           // d
    glEnd();

    // 3rd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f, 0.1f);           // E
    glVertex2f(1.0f, 0.1f);            // f
    glVertex2f(1.0f, -0.6f);           // g
    glVertex2f(0.85f, -0.6f);          // h
    glEnd();

    // 4th_part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f, 0.7f);           // j
    glVertex2f(1.0f, 0.7f);            // k
    glVertex2f(1.0f, 0.1f);            // f
    glVertex2f(0.85f, 0.1f);           // e
    glEnd();

    // 5th part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f, 0.7f);            // i
    glVertex2f(0.85f, 0.7f);           // j
    glVertex2f(0.85f, 0.1f);           // e
    glVertex2f(0.6f, 0.3f);            // b
    glEnd();

    // 1st_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.2f, 0.2f);  // l
    glVertex2f(0.4f, 0.2f);  // m
    glVertex2f(0.4f, -0.3f); // n
    glVertex2f(0.2f, -0.3f); // o
    glEnd();

    // Door 1st_class
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.22f, 0.05f); // t
    glVertex2f(0.3f, 0.05f);  // u
    glVertex2f(0.3f, -0.3f);  // v
    glVertex2f(0.22f, -0.3f); // w
    glEnd();

    // Window 1st_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.32f, 0.05f); // x
    glVertex2f(0.4f, 0.05f);  // y
    glVertex2f(0.4f, -0.1f);  // z
    glVertex2f(0.32f, -0.1f); // A1
    glEnd();

    // 2st_class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.43f, 0.2f);  // p
    glVertex2f(0.6f, 0.2f);   // q
    glVertex2f(0.6f, -0.3f);  // r
    glVertex2f(0.43f, -0.3f); // s
    glEnd();

    // Window 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.43f, 0.05f); // b1
    glVertex2f(0.5f, 0.05f);  // c1
    glVertex2f(0.5f, -0.1f);  // d1
    glVertex2f(0.43f, -0.1f); // e1
    glEnd();

    ////Door 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.52f, 0.05f); // f1
    glVertex2f(0.59f, 0.05f); // g1
    glVertex2f(0.59f, -0.3f); // h1
    glVertex2f(0.52f, -0.3f); // i1
    glEnd();

    // 3rd_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.62f, 0.2f);     // j1
    glVertex2f(0.75f, 0.1f);     // k1
    glVertex2f(0.75f, -0.4f);    // l1
    glVertex2f(0.62f, -0.3f);    // m1
    glEnd();

    // 3rd_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f, 0.0f);           // d2
    glVertex2f(0.69f, -0.05f);         // e2
    glVertex2f(0.69f, -0.355f);        // f2
    glVertex2f(0.64f, -0.32f);         // g2
    glEnd();

    // 3rd_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f, -0.05f);          // h2
    glVertex2f(0.75f, -0.05f);         // i2
    glVertex2f(0.75f, -0.18f);         // j2
    glVertex2f(0.7f, -0.17f);          // k2
    glEnd();

    // 4th class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.77f, 0.1f);     // n1
    glVertex2f(0.83f, 0.03f);    // o1
    glVertex2f(0.83f, -0.47);    // p1
    glVertex2f(0.77f, -0.4f);    // q1
    glEnd();

    // 4th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f, -0.05f);         // z1
    glVertex2f(0.81f, -0.07f);         // a2
    glVertex2f(0.81f, -0.45);          // b2
    glVertex2f(0.78f, -0.42f);         // c2
    glEnd();

    // 5th_class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.87f, 0.0f);     // r1
    glVertex2f(1.0f, 0.0f);      // s1
    glVertex2f(1.0f, -0.5f);     // t1
    glVertex2f(0.87f, -0.5f);    // u1
    glEnd();

    // 5th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f, -0.1f);          // v1
    glVertex2f(0.96f, -0.1f);          // w1
    glVertex2f(0.96f, -0.3f);          // x1
    glVertex2f(0.87f, -0.3f);          // y1
    glEnd();

    // 6th_class_

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.62f, 0.6f);     // m2
    glVertex2f(0.75f, 0.6f);     // n2
    glVertex2f(0.75f, 0.25f);    // o2
    glVertex2f(0.62f, 0.35f);    // p2
    glEnd();

    // 6th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f, 0.55f);          // y2
    glVertex2f(0.69f, 0.55f);          // z2
    glVertex2f(0.69f, 0.295f);         // a3
    glVertex2f(0.64f, 0.335f);         // b3
    glEnd();

    // 6th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f, 0.55f);           // c3
    glVertex2f(0.75f, 0.55f);          // d3
    glVertex2f(0.75f, 0.4225f);        // e3
    glVertex2f(0.7f, 0.4225f);         // f3
    glEnd();

    // 7th class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.77f, 0.6f);     // q2
    glVertex2f(0.83f, 0.6f);     // r2
    glVertex2f(0.83f, 0.2);      // s2
    glVertex2f(0.77f, 0.25f);    // t2
    glEnd();

    // 7th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f, 0.55f);          // z1
    glVertex2f(0.81f, 0.55f);          // a2
    glVertex2f(0.81f, 0.215);          // b2
    glVertex2f(0.78f, 0.24f);          // c2
    glEnd();

    // 8th_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.87f, 0.6f);     // u2
    glVertex2f(1.0f, 0.6f);      // v2
    glVertex2f(1.0f, 0.2f);      // w2
    glVertex2f(0.87f, 0.2f);     // x2
    glEnd();

    // 8th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f, 0.5f);           // v1
    glVertex2f(0.96f, 0.5f);           // w1
    glVertex2f(0.96f, 0.3f);           // x1
    glVertex2f(0.87f, 0.3f);           // y1
    glEnd();

    // Karnis_Design
    // 1st_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.19f, 0.3f); // a
    glVertex2f(0.6f, 0.3f);  // b
    glVertex2f(0.6f, 0.31f); //
    glVertex2f(0.19, 0.31);  //
    glEnd();

    // 2nd part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.6f, 0.3f);      // b
    glVertex2f(0.85f, 0.1f);     // e
    glVertex2f(0.85f, 0.11f);    //
    glVertex2f(0.6f, 0.31f);     //
    glEnd();

    // 3rd_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.85f, 0.1f);     // e
    glVertex2f(1.0f, 0.1f);      // f
    glVertex2f(1.0f, 0.11f);     // g
    glVertex2f(0.85f, 0.11f);    // h
    glEnd();

    // 4th_and_5th_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.59f, 0.7f);     // e
    glVertex2f(1.0f, 0.7f);      // f
    glVertex2f(1.0f, 0.71f);     // g
    glVertex2f(0.59f, 0.71f);    // h
    glEnd();

    // Flag_Base

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f); //
    glVertex2f(0.25f, -0.5f);    // e
    glVertex2f(0.3f, -0.5f);     // f
    glVertex2f(0.3f, -0.55f);    // g
    glVertex2f(0.25f, -0.55f);   // h
    glEnd();

    // flag line
    glBegin(GL_LINES);
    glColor3f(0.541, 0.518, 0.451);

    glVertex2f(0.275f, -0.5f);
    glVertex2f(0.275f, 0.52f);
    glEnd();

    // bd_flag
    // Quad
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.275f, 0.5f);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.275f, 0.4f);
    glEnd();

    // Circle
    int i;
    GLfloat x = 0.3375f;
    GLfloat y = 0.45f;
    GLfloat radius = 0.03f;
    int triangleAmount = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();

    // School_Name
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.3, 0.4);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(0.31f, 0.34f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "  Primary School");

    // Road

    // up
    glBegin(GL_QUADS);
    glColor3f(0.847, 0.811, 0.811); //
    glVertex2f(-0.1f, 0.37f);       // E
    glVertex2f(0.175f, 0.45f);
    glVertex2f(0.175f, -0.5f);  // G
    glVertex2f(-0.09f, -0.37f); // F
    glEnd();

    // Down
    glBegin(GL_QUADS);
    glColor3f(0.847, 0.811, 0.811); //
    glVertex2f(-0.32f, -1.0f);      // E
    glVertex2f(-0.09f, -0.37f);
    glVertex2f(0.175f, -0.5f); // G
    glVertex2f(0.275f, -1.0f); // F
    glEnd();

    // 2nd house

    // Roof
    glBegin(GL_POLYGON);
    glColor3f(0.823f, 0.537f, 0.294f); //
    glVertex2f(-0.4f, 0.2f);           // D
    glVertex2f(-0.22f, 0.2f);          // E
    glVertex2f(-0.1f, -0.1f);          // G
    glVertex2f(-0.43f, -0.1f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();

    // square
    glBegin(GL_QUADS);
    glColor3f(0.780f, 0.682f, 0.160f); //
    glVertex2f(-0.45f, -0.1f);         // E
    glVertex2f(-0.12f, -0.1f);
    glVertex2f(-0.12f, -0.35f); // G
    glVertex2f(-0.45f, -0.35f); // F
    glEnd();

    // Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.32f, -0.15f);        // E
    glVertex2f(-0.25f, -0.15f);
    glVertex2f(-0.25f, -0.35f); // G
    glVertex2f(-0.32f, -0.35f); // F
    glEnd();

    // Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.45f, -0.35f);        // F
    glVertex2f(-0.12f, -0.35f);        // G
    glVertex2f(-0.12f, -0.38f);
    glVertex2f(-0.45f, -0.38f); // E
    glEnd();

    // House 1

    // Roof
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.5f, 0.2f);           // E
    glVertex2f(-0.43f, -0.1f);         // G
    glVertex2f(-0.7f, -0.1f);          // F
    glEnd();

    // square
    glBegin(GL_QUADS);
    glColor3f(0.701f, 0.721f, 0.580f); //
    glVertex2f(-0.7f, -0.1f);          // D
    glVertex2f(-0.45f, -0.1f);         // E
    glVertex2f(-0.45f, -0.4f);         // G
    glVertex2f(-0.7f, -0.4f);          // F
    glEnd();

    // windowside polygon
    glBegin(GL_POLYGON);
    glColor3f(0.784f, 0.823f, 0.517f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.7f, -0.1f);          // E
    glVertex2f(-0.7f, -0.4f);          // G
    glVertex2f(-0.9F, -0.4F);          // F
    glVertex2f(-0.9F, -0.1F);          // F
    glEnd();

    // window
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.85f, -0.18f);        // D
    glVertex2f(-0.78f, -0.18f);        // E
    glVertex2f(-0.78f, -0.27f);        // G
    glVertex2f(-0.85f, -0.27f);        // F
    glEnd();

    // Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.6f, -0.2f);          // D
    glVertex2f(-0.53f, -0.2f);         // E
    glVertex2f(-0.53f, -0.4f);         // F
    glVertex2f(-0.6f, -0.4f);          // G
    glEnd();

    // Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.9f, -0.4f);          // F
    glVertex2f(-0.45f, -0.4f);         // G
    glVertex2f(-0.45f, -0.44f);
    glVertex2f(-0.9f, -0.44f); // E
    glEnd();

    // roof_stref

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.79f, 0.19f);         // E
    glVertex2f(-0.9f, -0.1f);          // F
    glVertex2f(-0.94f, -0.11f);        // G
    glEnd();

    // tree
    glBegin(GL_POLYGON);
    glColor3f(0.466f, 0.470f, 0.211f); //
    glVertex2f(-0.492f, 0.16f);        // D
    glVertex2f(-0.492f, 0.4f);         // E
    glVertex2f(-0.42f, 0.4f);          // G
    glVertex2f(-0.42f, 0.17f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();

    // Tree_Leaf_1

    int k;
    GLfloat e = -0.525f;
    GLfloat f = 0.425f;
    GLfloat radius_1 = 0.1f;
    int triangleAmount_1 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_1 = 2.0f * PI;

    glColor3f(0.203f, 0.498f, 0.274f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(e, f); // center of circle
    for (k = 0; k <= triangleAmount_1; k++)
    {
        glVertex2f(e + (radius_1 * cos(k * twicePi_1 / triangleAmount_1)),
                   f + (radius_1 * sin(k * twicePi_1 / triangleAmount_1)));
    }
    glEnd();

    // Tree_Leaf_2

    int l;
    GLfloat g = -0.530f;
    GLfloat h = 0.55f;
    GLfloat radius_2 = 0.1f;
    int triangleAmount_2 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_2 = 2.0f * PI;

    glColor3f(0.203f, 0.498f, 0.274f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(g, h); // center of circle
    for (l = 0; l <= triangleAmount_1; l++)
    {
        glVertex2f(g + (radius_1 * cos(l * twicePi_2 / triangleAmount_2)),
                   h + (radius_1 * sin(l * twicePi_2 / triangleAmount_2)));
    }
    glEnd();

    // Tree_Leaf_3

    int m;
    GLfloat q = -0.456f;
    GLfloat r = 0.65f;
    GLfloat radius_3 = 0.2f;
    int triangleAmount_3 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_3 = 2.0f * PI;

    glColor3f(0.203f, 0.498f, 0.274f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(q, r); // center of circle
    for (m = 0; m <= triangleAmount_1; m++)
    {
        glVertex2f(q + (radius_1 * cos(m * twicePi_3 / triangleAmount_3)),
                   r + (radius_1 * sin(m * twicePi_3 / triangleAmount_3)));
    }
    glEnd();

    // Tree_Leaf_4

    int n;
    GLfloat s = -0.41f;
    GLfloat t = 0.55f;
    GLfloat radius_4 = 0.1f;
    int triangleAmount_4 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_4 = 2.0f * PI;

    glColor3f(0.203f, 0.498f, 0.274f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(s, t); // center of circle
    for (n = 0; n <= triangleAmount_1; n++)
    {
        glVertex2f(s + (radius_1 * cos(n * twicePi_4 / triangleAmount_4)),
                   t + (radius_1 * sin(n * twicePi_4 / triangleAmount_4)));
    }
    glEnd();

    // Tree_Leaf_5

    int o;
    GLfloat u = -0.4f;
    GLfloat v = 0.425f;
    GLfloat radius_5 = 0.1f;
    int triangleAmount_5 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_5 = 2.0f * PI;

    glColor3f(0.203f, 0.498f, 0.274f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(u, v); // center of circle
    for (o = 0; o <= triangleAmount_1; o++)
    {
        glVertex2f(u + (radius_1 * cos(o * twicePi_5 / triangleAmount_4)),
                   v + (radius_1 * sin(o * twicePi_5 / triangleAmount_4)));
    }
    glEnd();
    glFlush();
}

void drawSona()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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
    // grass

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0, -1.0);
    glEnd();

    // Sky

    glBegin(GL_QUADS);
    glColor3f(0.53, 0.81, 0.92);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0, 0.5);
    glEnd();

    // sun
    glPushMatrix();
    glTranslatef(position_mosq_sun, 0.0f, 0.0f);
    int j;

    GLfloat a = -0.8f;
    GLfloat b = 0.8f;
    GLfloat radius_sun = 0.1f;
    int triangleAmount_sun = 100; // # of lines used to draw circle

    GLfloat twicePi_sun = 2.0f * PI;

    glColor3f(0.960f, 0.878f, 0.058f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b); // center of circle
    for (j = 0; j <= triangleAmount_sun; j++)
    {
        glVertex2f(a + (radius_sun * cos(j * twicePi_sun / triangleAmount_sun)),
                   b + (radius_sun * sin(j * twicePi_sun / triangleAmount_sun)));
    }
    glEnd();
    glPopMatrix();

    Draw_mosq_cloud();

    // first gomvuj
    int i;

    GLfloat x = -0.84f;
    GLfloat y = 0.51f;
    GLfloat radius = 0.1f;
    int triangleAmount = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();

    // second gomvuj
    int k;
    GLfloat e = -0.64f;
    GLfloat f = 0.51f;
    GLfloat radius_1 = 0.1f;
    int triangleAmount_1 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_1 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(e, f); // center of circle
    for (k = 0; k <= triangleAmount_1; k++)
    {
        glVertex2f(e + (radius_1 * cos(k * twicePi_1 / triangleAmount_1)),
                   f + (radius_1 * sin(k * twicePi_1 / triangleAmount_1)));
    }
    glEnd();

    // 3rd middle quad gomvoj
    glBegin(GL_QUADS);
    glColor3f(0.76, 0.52, 0.32);
    glVertex2f(-0.54f, 0.5f);
    glVertex2f(-0.48f, 0.63f);
    glVertex2f(-0.4f, 0.63f);
    glVertex2f(-0.34, 0.5);
    glEnd();

    // 3rd gombuj tiangles triangles
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.54, 0.5);
    glVertex2f(-0.44, 0.55);
    glVertex2f(-0.34, 0.5);
    glEnd();

    // 4th gombuj

    int l;
    GLfloat g = -0.24f;
    GLfloat h = 0.5f;
    GLfloat radius_2 = 0.1f;
    int triangleAmount_2 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_2 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(g, h); // center of circle
    for (l = 0; l <= triangleAmount_1; l++)
    {
        glVertex2f(g + (radius_1 * cos(l * twicePi_2 / triangleAmount_2)),
                   h + (radius_1 * sin(l * twicePi_2 / triangleAmount_2)));
    }
    glEnd();

    // 5th gombuj

    int m;
    GLfloat q = -0.05f;
    GLfloat r = 0.5f;
    GLfloat radius_3 = 0.1f;
    int triangleAmount_3 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_3 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(q, r); // center of circle
    for (m = 0; m <= triangleAmount_1; m++)
    {
        glVertex2f(q + (radius_1 * cos(m * twicePi_3 / triangleAmount_3)),
                   r + (radius_1 * sin(m * twicePi_3 / triangleAmount_3)));
    }
    glEnd();

    // whole quad
    glBegin(GL_QUADS);
    glColor3f(0.76, 0.52, 0.32);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-1.0, -0.2);
    glEnd();

    // Mosque
    // 1st pillar
    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-0.95f, 0.5f);
    glVertex2f(-0.95f, -0.2f);
    glVertex2f(-1.0, -0.2);
    glEnd();

    // 2nd pillar
    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(0.075f, 0.5f);
    glVertex2f(0.125f, 0.5f);
    glVertex2f(0.125f, -0.2f);
    glVertex2f(0.075, -0.2);
    glEnd();

    // roof
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.95f, 0.5f);
    glVertex2f(0.075f, 0.5f);
    glVertex2f(0.075f, 0.45f);
    glVertex2f(-0.95, 0.45);
    glEnd();

    // Divider
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.95f, 0.15f);
    glVertex2f(0.075f, 0.15f);
    glVertex2f(0.075f, 0.25f);
    glVertex2f(-0.95, 0.25);
    glEnd();

    // 1st door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1f, 0.35f);
    glVertex2f(0.03, 0.35);
    glEnd();

    // 1st door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(0.03f, 0.15f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1, 0.15);
    glVertex2f(-0.035, 0.25);
    glEnd();

    // 1st window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.11f, 0.0f);
    glVertex2f(-0.17f, 0.0f);
    glVertex2f(-0.17f, 0.1f);
    glVertex2f(-0.11, 0.1);
    glEnd();

    // 2nd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.18f, -0.2f);
    glVertex2f(-0.31f, -0.2f);
    glVertex2f(-0.31f, 0.35f);
    glVertex2f(-0.18f, 0.35f);
    glEnd();

    // 2nd door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.18f, 0.15f);
    glVertex2f(-0.18f, -0.2f);
    glVertex2f(-0.31f, -0.2f);
    glVertex2f(-0.31, 0.15);
    glVertex2f(-0.245, 0.25);
    glEnd();

    // 2nd window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.32f, 0.0f);
    glVertex2f(-0.38f, 0.0f);
    glVertex2f(-0.38f, 0.1f);
    glVertex2f(-0.32, 0.1);
    glEnd();

    // 3rd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.39f, -0.2f);
    glVertex2f(-0.52f, -0.2f);
    glVertex2f(-0.52f, 0.35f);
    glVertex2f(-0.39f, 0.35f);
    glEnd();

    // 3rd door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.39f, 0.15f);
    glVertex2f(-0.39f, -0.2f);
    glVertex2f(-0.52f, -0.2f);
    glVertex2f(-0.52, 0.15);
    glVertex2f(-0.455, 0.25);
    glEnd();

    // 3rd window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.53f, 0.0f);
    glVertex2f(-0.59f, 0.0f);
    glVertex2f(-0.59f, 0.1f);
    glVertex2f(-0.53, 0.1);
    glEnd();

    // 4rd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.725f, -0.2f);
    glVertex2f(-0.725f, 0.35f);
    glVertex2f(-0.6f, 0.35f);
    glEnd();

    // 4th door design

    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.6f, 0.15f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.725f, -0.2f);
    glVertex2f(-0.725, 0.15);
    glVertex2f(-0.6625, 0.25);
    glEnd();

    // 4th window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.73f, 0.0f);
    glVertex2f(-0.79f, 0.0f);
    glVertex2f(-0.79f, 0.1f);
    glVertex2f(-0.73, 0.1);
    glEnd();

    // 5th door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.925f, -0.2f);
    glVertex2f(-0.925f, 0.35f);
    glVertex2f(-0.8f, 0.35f);
    glEnd();

    // 5th door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.8f, 0.15f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.925f, -0.2f);
    glVertex2f(-0.925, 0.15);
    glVertex2f(-0.860, 0.25);
    glEnd();

    // front
    // Mosque front 1

    glBegin(GL_QUADS);
    glColor3f(0.63, 0.63, 0.63);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.2f);
    glEnd();

    // mosque front 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.4, 0.4);
    glVertex2f(-1.0f, -0.33f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.33f);
    glEnd();

    // mosque front 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.4, 0.4);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.33f);
    glVertex2f(0.135f, -0.2f);
    glVertex2f(0.15f, -0.2f);
    glEnd();

    // 4th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.77f, 0.0f);
    glVertex2f(0.81f, 0.02f);
    glVertex2f(0.81f, 0.47f);
    glVertex2f(0.77f, 0.47f);
    glEnd();

    // 4th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.77, 0.0);
    glVertex2f(0.74, -0.1);
    glVertex2f(0.79, 0.02);
    glEnd();

    // 4th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.795, 0.02);
    glVertex2f(0.83, -0.075);
    glVertex2f(0.8075, 0.02);
    glEnd();

    // 4th tree root 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.81, 0.02);
    glVertex2f(0.85, 0.02);
    glVertex2f(0.81, 0.04);
    glEnd();

    // 4th tree leaf 1
    int i32;

    GLfloat x32 = 0.79f;
    GLfloat y32 = 0.49f;
    GLfloat radius32 = 0.1f;
    int triangleAmount32 = 100;

    GLfloat twicePi32 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x32, y32);
    for (i32 = 0; i32 <= triangleAmount32; i32++)
    {
        glVertex2f(x32 + (radius32 * cos(i32 * twicePi32 / triangleAmount32)),
                   y32 + (radius32 * sin(i32 * twicePi32 / triangleAmount32)));
    }
    glEnd();

    // 5th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.69f, 0.0f);
    glVertex2f(0.73f, 0.03f);
    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.69, 0.45f);
    glEnd();

    // 5th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.69, 0.0);
    glVertex2f(0.64, -0.075);
    glVertex2f(0.69, 0.03);
    glEnd();

    // 5th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.7, 0.02);
    glVertex2f(0.73, -0.05);
    glVertex2f(0.72, 0.02);
    glEnd();

    // 5th tree root 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.72, 0.02);
    glVertex2f(0.78, 0.02);
    glVertex2f(0.73, 0.04);
    glEnd();

    // 6th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.47f, -0.07f);
    glVertex2f(0.51f, -0.05f);
    glVertex2f(0.51f, 0.47f);
    glVertex2f(0.47f, 0.47f);
    glEnd();

    // 6th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.47, -0.05);
    glVertex2f(0.44, -0.15);
    glVertex2f(0.49, -0.05);
    glEnd();

    // 6th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.51, -0.02);
    glVertex2f(0.55, -0.02);
    glVertex2f(0.51, -0.04);
    glEnd();

    // 7th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.39f, 0.03f);
    glVertex2f(0.39f, 0.45f);
    glVertex2f(0.35, 0.45f);
    glEnd();

    // 7th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.36, 0.0);
    glVertex2f(0.32, -0.075);
    glVertex2f(0.36, 0.03);
    glEnd();

    // tree 1 quad
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.55f, -0.5f);
    glVertex2f(0.625f, -0.5f);
    glVertex2f(0.625f, 0.4f);
    glVertex2f(0.55f, 0.4f);
    glEnd();

    // 4th branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.625f, -0.2f);
    glVertex2f(0.625f, -0.25f);
    glVertex2f(0.7f, -0.05f);
    glVertex2f(0.7f, -0.02f);
    glEnd();

    // 4th branch leaf 1 tree 1

    int i31;

    GLfloat x31 = 0.7f;
    GLfloat y31 = -0.03f;
    GLfloat radius31 = 0.1f;
    int triangleAmount31 = 100;

    GLfloat twicePi31 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x31, y31);
    for (i31 = 0; i31 <= triangleAmount31; i31++)
    {
        glVertex2f(x31 + (radius31 * cos(i31 * twicePi31 / triangleAmount31)),
                   y31 + (radius31 * sin(i31 * twicePi31 / triangleAmount31)));
    }
    glEnd();

    // 1st branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.56f, 0.40f);
    glVertex2f(0.45f, 0.48f);
    glVertex2f(0.44f, 0.47f);
    glEnd();

    // branch 1 leaf 1
    int count;

    GLfloat posX = 0.4f;
    GLfloat posY = 0.45f;
    GLfloat rad = 0.1f;
    int segments = 100;

    GLfloat fullCircle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(posX, posY);
    for (count = 0; count <= segments; count++)
    {
        glVertex2f(posX + (rad * cos(count * fullCircle / segments)),
                   posY + (rad * sin(count * fullCircle / segments)));
    }
    glEnd();

    // leaf 2 branch 1
    int index;

    GLfloat centerX = 0.35f;
    GLfloat centerY = 0.55f;
    GLfloat radSize = 0.1f;
    int numTriangles = 100;

    GLfloat fullAngle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);
    for (index = 0; index <= numTriangles; index++)
    {
        glVertex2f(centerX + (radSize * cos(index * fullAngle / numTriangles)),
                   centerY + (radSize * sin(index * fullAngle / numTriangles)));
    }
    glEnd();

    // leaf 3 branch 1
    int step;

    GLfloat pointX = 0.5f;
    GLfloat pointY = 0.5f;
    GLfloat circleRadius = 0.08f;
    int sides = 100;

    GLfloat twoPi = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(pointX, pointY);
    for (step = 0; step <= sides; step++)
    {
        glVertex2f(pointX + (circleRadius * cos(step * twoPi / sides)),
                   pointY + (circleRadius * sin(step * twoPi / sides)));
    }
    glEnd();

    // mango line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.48f, 0.57f);
    glVertex2f(0.48f, 0.53f);

    glEnd();

    // Adding Yellow Mango 1
    int mangoStep;
    GLfloat mangoX = 0.48f; // Mango position
    GLfloat mangoY = 0.52f;
    GLfloat mangoRadius = 0.015f; // Mango size
    int mangoSides = 100;
    GLfloat mangoAngle = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX, mangoY); // Mango center
    for (mangoStep = 0; mangoStep <= mangoSides; mangoStep++)
    {
        glVertex2f(mangoX + (mangoRadius * cos(mangoStep * mangoAngle / mangoSides)),
                   mangoY + (mangoRadius * sin(mangoStep * mangoAngle / mangoSides)));
    }
    glEnd();

    // mango line 2
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.4f, 0.61f);
    glVertex2f(0.4f, 0.58f);

    glEnd();

    // Adding Yellow Mango
    int mangoStep1;
    GLfloat mangoX1 = 0.4f; // Mango position
    GLfloat mangoY1 = 0.56f;
    GLfloat mangoRadius1 = 0.015f; // Mango size
    int mangoSides1 = 100;
    GLfloat mangoAngle1 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX1, mangoY1); // Mango center
    for (mangoStep1 = 0; mangoStep1 <= mangoSides1; mangoStep1++)
    {
        glVertex2f(mangoX1 + (mangoRadius1 * cos(mangoStep1 * mangoAngle1 / mangoSides1)),
                   mangoY1 + (mangoRadius1 * sin(mangoStep1 * mangoAngle1 / mangoSides1)));
    }
    glEnd();

    // mango line 3
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.4f, 0.50f);
    glVertex2f(0.4f, 0.48f);

    glEnd();

    // Adding Yellow Mango - Version 2
    int mangoStep2;
    GLfloat mangoX2 = 0.40f; // Mango position
    GLfloat mangoY2 = 0.46f;
    GLfloat mangoRadius2 = 0.015f; // Mango size
    int mangoSides2 = 100;
    GLfloat mangoAngle2 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX2, mangoY2); // Mango center
    for (mangoStep2 = 0; mangoStep2 <= mangoSides2; mangoStep2++)
    {
        glVertex2f(mangoX2 + (mangoRadius2 * cos(mangoStep2 * mangoAngle2 / mangoSides2)),
                   mangoY2 + (mangoRadius2 * sin(mangoStep2 * mangoAngle2 / mangoSides2)));
    }
    glEnd();

    // 2nd branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.58f, 0.37f);
    glVertex2f(0.6f, 0.37f);
    glVertex2f(0.61f, 0.5f);
    glVertex2f(0.6f, 0.49f);
    glEnd();

    // 2nd branch 1st leaf for tree 1

    int counter;

    GLfloat locX = 0.61f;
    GLfloat locY = 0.57f;
    GLfloat circRad = 0.1f;
    int totalSegments = 100;

    GLfloat doublePi = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(locX, locY);
    for (counter = 0; counter <= totalSegments; counter++)
    {
        glVertex2f(locX + (circRad * cos(counter * doublePi / totalSegments)),
                   locY + (circRad * sin(counter * doublePi / totalSegments)));
    }
    glEnd();

    // 2nd branch 2nd leaf for tree 1

    int iter;

    GLfloat originX = 0.56f;
    GLfloat originY = 0.65f;
    GLfloat sphereRadius = 0.1125f;
    int divisions = 100;

    GLfloat cycle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(originX, originY);
    for (iter = 0; iter <= divisions; iter++)
    {
        glVertex2f(originX + (sphereRadius * cos(iter * cycle / divisions)),
                   originY + (sphereRadius * sin(iter * cycle / divisions)));
    }
    glEnd();

    // 2nd branch 3rd leaf for tree 1

    int segmentIndex;

    GLfloat axisX = 0.7f;
    GLfloat axisY = 0.61f;
    GLfloat radValue = 0.1f;
    int partition = 100;

    GLfloat rotation = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(axisX, axisY);
    for (segmentIndex = 0; segmentIndex <= partition; segmentIndex++)
    {
        glVertex2f(axisX + (radValue * cos(segmentIndex * rotation / partition)),
                   axisY + (radValue * sin(segmentIndex * rotation / partition)));
    }
    glEnd();

    // mango line 1 branch 2 leaf 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.6f, 0.57f);

    glEnd();

    // Adding Yellow Mango - Version 4
    int mangoStep4;
    GLfloat mangoX4 = 0.6f;
    GLfloat mangoY4 = 0.56f;
    GLfloat mangoRadius4 = 0.015f;
    int mangoSides4 = 100;
    GLfloat mangoAngle4 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX4, mangoY4);
    for (mangoStep4 = 0; mangoStep4 <= mangoSides4; mangoStep4++)
    {
        glVertex2f(mangoX4 + (mangoRadius4 * cos(mangoStep4 * mangoAngle4 / mangoSides4)),
                   mangoY4 + (mangoRadius4 * sin(mangoStep4 * mangoAngle4 / mangoSides4)));
    }
    glEnd();

    // mango line 2 branch 2 leaf 3
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.74f, 0.62f);
    glVertex2f(0.74f, 0.59f);

    glEnd();

    //
    int i19;

    GLfloat x19 = 0.74f;
    GLfloat y19 = 0.58f;
    GLfloat radius19 = 0.015f;
    int triangleAmount19 = 100;

    GLfloat twicePi19 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x19, y19);
    for (i19 = 0; i19 <= triangleAmount19; i19++)
    {
        glVertex2f(x19 + (radius19 * cos(i19 * twicePi19 / triangleAmount19)),
                   y19 + (radius19 * sin(i19 * twicePi19 / triangleAmount19)));
    }
    glEnd();

    // 3rd branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.625f, 0.2f);
    glVertex2f(0.625f, 0.25f);
    glVertex2f(0.72f, 0.43f);
    glVertex2f(0.72f, 0.45f);
    glEnd();

    // 3rd branch 1st leaf for tree 1

    int ringIndex;

    GLfloat posA = 0.7;
    GLfloat posB = 0.4f;
    GLfloat radCircle = 0.1f;
    int ringCount = 100;

    GLfloat turn = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(posA, posB);
    for (ringIndex = 0; ringIndex <= ringCount; ringIndex++)
    {
        glVertex2f(posA + (radCircle * cos(ringIndex * turn / ringCount)),
                   posB + (radCircle * sin(ringIndex * turn / ringCount)));
    }
    glEnd();

    // mango line 1 branch 3 leaf 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.7f, 0.45f);
    glVertex2f(0.7f, 0.4f);

    glEnd();

    // mango tree 1 branch 3
    int i18;

    GLfloat x18 = 0.7f;
    GLfloat y18 = 0.4f;
    GLfloat radius18 = 0.015f;
    int triangleAmount18 = 100;

    GLfloat twicePi18 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x18, y18);
    for (i18 = 0; i18 <= triangleAmount18; i18++)
    {
        glVertex2f(x18 + (radius18 * cos(i18 * twicePi18 / triangleAmount18)),
                   y18 + (radius18 * sin(i18 * twicePi18 / triangleAmount18)));
    }
    glEnd();

    // tree 2 quad
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.25f, 0.2f);
    glEnd();

    // tree 2 leaf 1

    int circleSteps;

    GLfloat coordX = 0.22f;
    GLfloat coordY = 0.2f;
    GLfloat circleSize = 0.1f;
    int stepAmount = 100;

    GLfloat fullTurn = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(coordX, coordY);
    for (circleSteps = 0; circleSteps <= stepAmount; circleSteps++)
    {
        glVertex2f(coordX + (circleSize * cos(circleSteps * fullTurn / stepAmount)),
                   coordY + (circleSize * sin(circleSteps * fullTurn / stepAmount)));
    }
    glEnd();

    // tree 2 leaf 2

    int loopIndex;

    GLfloat refX = 0.32f;
    GLfloat refY = 0.2f;
    GLfloat radShape = 0.115f;
    int shapeSegments = 100;

    GLfloat cycleAngle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(refX, refY);
    for (loopIndex = 0; loopIndex <= shapeSegments; loopIndex++)
    {
        glVertex2f(refX + (radShape * cos(loopIndex * cycleAngle / shapeSegments)),
                   refY + (radShape * sin(loopIndex * cycleAngle / shapeSegments)));
    }
    glEnd();

    // tree 2 leaf 3

    int loopCounter;

    GLfloat px = 0.22f;
    GLfloat py = 0.35f;
    GLfloat radC = 0.1f;
    int polygonSides = 100;

    GLfloat totalRadian = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(px, py);
    for (loopCounter = 0; loopCounter <= polygonSides; loopCounter++)
    {
        glVertex2f(px + (radC * cos(loopCounter * totalRadian / polygonSides)),
                   py + (radC * sin(loopCounter * totalRadian / polygonSides)));
    }
    glEnd();

    // branch 2nd tree

    // 1st branch for tree 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.3f, -0.25f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.02f);
    glEnd();

    // 1st branch 1 leaf 1 for tree 2
    int i1;

    GLfloat x1 = 0.45;
    GLfloat y1 = 0.075f;
    GLfloat radius1 = 0.1f;
    int triangleAmount1 = 100; // # of lines used to draw circle

    GLfloat twicePi1 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1); // center of circle
    for (i1 = 0; i1 <= triangleAmount1; i1++)
    {
        glVertex2f(x1 + (radius1 * cos(i1 * twicePi1 / triangleAmount1)),
                   y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1)));
    }
    glEnd();

    // 1st branch 1 leaf 2 for tree 2

    int i2;

    GLfloat x2 = 0.43f;
    GLfloat y2 = 0.23f;
    GLfloat radius2 = 0.11f;
    int triangleAmount2 = 100;

    GLfloat twicePi2 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x2, y2);
    for (i2 = 0; i2 <= triangleAmount2; i2++)
    {
        glVertex2f(x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
                   y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2)));
    }
    glEnd();

    // tree 2 leaf 1 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.22f, 0.2f);
    glVertex2f(0.22f, 0.17f);

    glEnd();

    // tree 2 leaf 1 mango 1
    int i20;

    GLfloat x20 = 0.22f;
    GLfloat y20 = 0.16f;
    GLfloat radius20 = 0.015f;
    int triangleAmount20 = 100;

    GLfloat twicePi20 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x20, y20);
    for (i20 = 0; i20 <= triangleAmount20; i20++)
    {
        glVertex2f(x20 + (radius20 * cos(i20 * twicePi20 / triangleAmount20)),
                   y20 + (radius20 * sin(i20 * twicePi20 / triangleAmount20)));
    }
    glEnd();

    // tree 2 leaf 2 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.33f, 0.2f);
    glVertex2f(0.33f, 0.24f);

    glEnd();

    // tree 2 leaf 2 mango 1
    int i21;

    GLfloat x21 = 0.33f;
    GLfloat y21 = 0.18f;
    GLfloat radius21 = 0.015f;
    int triangleAmount21 = 100;

    GLfloat twicePi21 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x21, y21);
    for (i21 = 0; i21 <= triangleAmount21; i21++)
    {
        glVertex2f(x21 + (radius21 * cos(i21 * twicePi21 / triangleAmount21)),
                   y21 + (radius21 * sin(i21 * twicePi21 / triangleAmount21)));
    }
    glEnd();

    // tree 2 leaf 3 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.22f, 0.35f);
    glVertex2f(0.22f, 0.38f);

    glEnd();

    // tree 2 leaf 3 mango 1
    int i22;

    GLfloat x22 = 0.22f;
    GLfloat y22 = 0.35f;
    GLfloat radius22 = 0.015f;
    int triangleAmount22 = 100;

    GLfloat twicePi22 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x22, y22);
    for (i22 = 0; i22 <= triangleAmount22; i22++)
    {
        glVertex2f(x22 + (radius22 * cos(i22 * twicePi22 / triangleAmount22)),
                   y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22)));
    }
    glEnd();

    // 3rd tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.875f, -0.5f);
    glVertex2f(0.92f, -0.5f);
    glVertex2f(0.92f, 0.25f);
    glVertex2f(0.875f, 0.25f);
    glEnd();

    // 3rd tree leaf 1

    int i11;

    GLfloat x11 = 0.85f;
    GLfloat y11 = 0.3f;
    GLfloat radius11 = 0.1f;
    int triangleAmount11 = 100;

    GLfloat twicePi11 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x11, y11);
    for (i11 = 0; i11 <= triangleAmount11; i11++)
    {
        glVertex2f(x11 + (radius11 * cos(i11 * twicePi11 / triangleAmount11)),
                   y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11)));
    }
    glEnd();

    // 3rd tree 2nd leaf
    int i12;

    GLfloat x12 = 0.94f;
    GLfloat y12 = 0.31f;
    GLfloat radius12 = 0.1f;
    int triangleAmount12 = 100;

    GLfloat twicePi12 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x12, y12);
    for (i12 = 0; i12 <= triangleAmount12; i12++)
    {
        glVertex2f(x12 + (radius12 * cos(i12 * twicePi12 / triangleAmount12)),
                   y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12)));
    }
    glEnd();

    // 3rd tree 3rd leaf
    int i13;

    GLfloat x13 = 0.9f;
    GLfloat y13 = 0.43f;
    GLfloat radius13 = 0.1f;
    int triangleAmount13 = 100;

    GLfloat twicePi13 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x13, y13);
    for (i13 = 0; i13 <= triangleAmount13; i13++)
    {
        glVertex2f(x13 + (radius13 * cos(i13 * twicePi13 / triangleAmount13)),
                   y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13)));
    }
    glEnd();

    // tree 3 leaf 1 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.85f, 0.33f);

    glEnd();

    // tree 3 leaf 1 mango 1

    int i23;

    GLfloat x23 = 0.85f;
    GLfloat y23 = 0.28f;
    GLfloat radius23 = 0.0151f;
    int triangleAmount23 = 100;

    GLfloat twicePi23 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x23, y23);
    for (i23 = 0; i23 <= triangleAmount23; i23++)
    {
        glVertex2f(x23 + (radius23 * cos(i23 * twicePi23 / triangleAmount23)),
                   y23 + (radius23 * sin(i23 * twicePi23 / triangleAmount23)));
    }
    glEnd();

    // tree 3 leaf 2 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.94f, 0.35f);
    glVertex2f(0.94f, 0.32f);

    glEnd();

    // tree 3 leaf 2 mango 1

    int i24;

    GLfloat x24 = 0.94f;
    GLfloat y24 = 0.3f;
    GLfloat radius24 = 0.0115f;
    int triangleAmount24 = 100;

    GLfloat twicePi24 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x24, y24);
    for (i24 = 0; i24 <= triangleAmount24; i24++)
    {
        glVertex2f(x24 + (radius24 * cos(i24 * twicePi24 / triangleAmount24)),
                   y24 + (radius24 * sin(i24 * twicePi24 / triangleAmount24)));
    }
    glEnd();

    // tree 3 leaf 3 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.9f, 0.49f);
    glVertex2f(0.9f, 0.46f);

    glEnd();

    // tree 3 leaf 3 mango 1
    int i25;

    GLfloat x25 = 0.9f;
    GLfloat y25 = 0.44f;
    GLfloat radius25 = 0.015f;
    int triangleAmount25 = 100;

    GLfloat twicePi25 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x25, y25);
    for (i25 = 0; i25 <= triangleAmount25; i25++)
    {
        glVertex2f(x25 + (radius25 * cos(i25 * twicePi25 / triangleAmount25)),
                   y25 + (radius25 * sin(i25 * twicePi25 / triangleAmount25)));
    }
    glEnd();

    // road
    glBegin(GL_QUADS);
    glColor3f(0.38, 0.38, 0.38);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.5f);
    glEnd();

    // road diveder 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0, -0.69f);
    glVertex2f(-1.0f, -0.71);
    glVertex2f(-0.9f, -0.71f);
    glVertex2f(-0.9f, -0.69f);
    glEnd();

    // road diveder 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.85f, -0.69f);
    glVertex2f(-0.85f, -0.71f);
    glVertex2f(-0.75f, -0.71f);
    glVertex2f(-0.75f, -0.69f);
    glEnd();

    // road diveder 3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.7f, -0.69f);
    glVertex2f(-0.7f, -0.71f);
    glVertex2f(-0.6f, -0.71f);
    glVertex2f(-0.6f, -0.69f);
    glEnd();

    // road diveder 4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.55, -0.69f);
    glVertex2f(-0.55f, -0.71f);
    glVertex2f(-0.45f, -0.71f);
    glVertex2f(-0.45f, -0.69f);
    glEnd();

    // road diveder 5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.4, -0.69f);
    glVertex2f(-0.4f, -0.71f);
    glVertex2f(-0.3f, -0.71f);
    glVertex2f(-0.3f, -0.69f);
    glEnd();

    // road diveder 6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.25, -0.69f);
    glVertex2f(-0.25f, -0.71f);
    glVertex2f(-0.15f, -0.71f);
    glVertex2f(-0.15f, -0.69f);
    glEnd();
    // road diveder 7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.1, -0.69f);
    glVertex2f(-0.1f, -0.71f);
    glVertex2f(0.0f, -0.71f);
    glVertex2f(0.0f, -0.69f);
    glEnd();
    // road diveder 8
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.05, -0.69f);
    glVertex2f(0.05f, -0.71f);
    glVertex2f(0.15f, -0.71f);
    glVertex2f(0.15f, -0.69f);
    glEnd();
    // road diveder 9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.2, -0.69f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.3f, -0.71f);
    glVertex2f(0.3f, -0.69f);
    glEnd();
    // road diveder 10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.35, -0.69f);
    glVertex2f(0.35f, -0.71f);
    glVertex2f(0.45f, -0.71f);
    glVertex2f(0.45f, -0.69f);
    glEnd();
    // road diveder 11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.5, -0.69f);
    glVertex2f(0.5f, -0.71f);
    glVertex2f(0.6f, -0.71f);
    glVertex2f(0.6f, -0.69f);
    glEnd();
    // road diveder 12
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.65, -0.69f);
    glVertex2f(0.65f, -0.71f);
    glVertex2f(0.75f, -0.71f);
    glVertex2f(0.75f, -0.69f);
    glEnd();
    // road diveder 13
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.8, -0.69f);
    glVertex2f(0.8f, -0.71f);
    glVertex2f(0.9f, -0.71f);
    glVertex2f(0.9f, -0.69f);
    glEnd();
    // road diveder 14
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.95, -0.69f);
    glVertex2f(0.95f, -0.71f);
    glVertex2f(1.0f, -0.71f);
    glVertex2f(1.0f, -0.69f);
    glEnd();

    // Truck1 Body

    glPushMatrix();
    glTranslatef(position_track1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.4, 0.0);
    glVertex2f(-0.6f, -0.71f);
    glVertex2f(-0.6f, -0.85f);
    glVertex2f(-0.85f, -0.85f);
    glVertex2f(-0.85f, -0.71f);
    glEnd();

    // Truck1 Cabin
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.85f);
    glVertex2f(-0.56f, -0.85f);
    glVertex2f(-0.56f, -0.8f);
    glVertex2f(-0.58f, -0.75f);
    glEnd();

    // Truck1 Cabin door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.593f, -0.775f);
    glVertex2f(-0.593f, -0.83f);
    glVertex2f(-0.568f, -0.83f);
    glVertex2f(-0.568f, -0.8f);
    glVertex2f(-0.58f, -0.775f);
    glEnd();

    // truck1 wheel 1
    int i14;

    GLfloat x14 = -0.78f;
    GLfloat y14 = -0.85f;
    GLfloat radius14 = 0.03f;
    int triangleAmount14 = 100;

    GLfloat twicePi14 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x14, y14);
    for (i14 = 0; i14 <= triangleAmount14; i14++)
    {
        glVertex2f(x14 + (radius14 * cos(i14 * twicePi14 / triangleAmount14)),
                   y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14)));
    }
    glEnd();

    // truck1 wheel 2
    int i15;

    GLfloat x15 = -0.78f;
    GLfloat y15 = -0.85f;
    GLfloat radius15 = 0.015f;
    int triangleAmount15 = 100;

    GLfloat twicePi15 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x15, y15);
    for (i15 = 0; i15 <= triangleAmount15; i15++)
    {
        glVertex2f(x15 + (radius15 * cos(i15 * twicePi15 / triangleAmount15)),
                   y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15)));
    }
    glEnd();

    // truck1 wheel 3
    int i16;

    GLfloat x16 = -0.61f;
    GLfloat y16 = -0.85f;
    GLfloat radius16 = 0.03f;
    int triangleAmount16 = 100;

    GLfloat twicePi16 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x16, y16);
    for (i16 = 0; i16 <= triangleAmount16; i16++)
    {
        glVertex2f(x16 + (radius16 * cos(i16 * twicePi16 / triangleAmount16)),
                   y16 + (radius16 * sin(i16 * twicePi16 / triangleAmount16)));
    }
    glEnd();

    // truck1 wheel 4
    int i17;

    GLfloat x17 = -0.61f;
    GLfloat y17 = -0.85f;
    GLfloat radius17 = 0.015f;
    int triangleAmount17 = 100;

    GLfloat twicePi17 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x17, y17);
    for (i17 = 0; i17 <= triangleAmount17; i17++)
    {
        glVertex2f(x17 + (radius17 * cos(i17 * twicePi17 / triangleAmount17)),
                   y17 + (radius17 * sin(i17 * twicePi17 / triangleAmount17)));
    }
    glEnd();

    glPopMatrix();

    // 2nd truck

    glPushMatrix();
    glTranslatef(position_track2, 0.0f, 0.0f);

    // Truck2 Body
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.4);
    glVertex2f(0.6f, -0.51f);
    glVertex2f(0.6f, -0.65f);
    glVertex2f(0.85f, -0.65f);
    glVertex2f(0.85f, -0.51f);
    glEnd();

    // Truck2 Cabin
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.4);
    glVertex2f(0.6f, -0.55f);
    glVertex2f(0.6f, -0.65f);
    glVertex2f(0.56f, -0.65f);
    glVertex2f(0.56f, -0.6f);
    glVertex2f(0.58f, -0.55f);
    glEnd();

    // Truck1 Cabin door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.593f, -0.575f);
    glVertex2f(0.593f, -0.63f);
    glVertex2f(0.568f, -0.63f);
    glVertex2f(0.568f, -0.6f);
    glVertex2f(0.58f, -0.575f);
    glEnd();

    // truck2 wheel 1
    int i14_2;

    GLfloat x14_2 = 0.78f;
    GLfloat y14_2 = -0.65f;
    GLfloat radius14_2 = 0.03f;
    int triangleAmount14_2 = 100;

    GLfloat twicePi14_2 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x14_2, y14_2);
    for (i14_2 = 0; i14_2 <= triangleAmount14_2; i14_2++)
    {
        glVertex2f(x14_2 + (radius14_2 * cos(i14_2 * twicePi14_2 / triangleAmount14_2)),
                   y14_2 + (radius14_2 * sin(i14_2 * twicePi14_2 / triangleAmount14_2)));
    }
    glEnd();

    // truck2 wheel 2
    int i15_2;

    GLfloat x15_2 = 0.78f;
    GLfloat y15_2 = -0.65f;
    GLfloat radius15_2 = 0.015f;
    int triangleAmount15_2 = 100;

    GLfloat twicePi15_2 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x15_2, y15_2);
    for (i15_2 = 0; i15_2 <= triangleAmount15_2; i15_2++)
    {
        glVertex2f(x15_2 + (radius15_2 * cos(i15_2 * twicePi15_2 / triangleAmount15_2)),
                   y15_2 + (radius15_2 * sin(i15_2 * twicePi15_2 / triangleAmount15_2)));
    }
    glEnd();

    // truck2 wheel 3
    int i16_2;

    GLfloat x16_2 = 0.61f;
    GLfloat y16_2 = -0.65f;
    GLfloat radius16_2 = 0.03f;
    int triangleAmount16_2 = 100;

    GLfloat twicePi16_2 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x16_2, y16_2);
    for (i16_2 = 0; i16_2 <= triangleAmount16_2; i16_2++)
    {
        glVertex2f(x16_2 + (radius16_2 * cos(i16_2 * twicePi16_2 / triangleAmount16_2)),
                   y16_2 + (radius16_2 * sin(i16_2 * twicePi16_2 / triangleAmount16_2)));
    }
    glEnd();

    // truck2 wheel 4
    int i17_2;

    GLfloat x17_2 = 0.61f;
    GLfloat y17_2 = -0.65f;
    GLfloat radius17_2 = 0.015f;
    int triangleAmount17_2 = 100;

    GLfloat twicePi17_2 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x17_2, y17_2);
    for (i17_2 = 0; i17_2 <= triangleAmount17_2; i17_2++)
    {
        glVertex2f(x17_2 + (radius17_2 * cos(i17_2 * twicePi17_2 / triangleAmount17_2)),
                   y17_2 + (radius17_2 * sin(i17_2 * twicePi17_2 / triangleAmount17_2)));
    }
    glEnd();

    glPopMatrix();

    glFlush();
}

void drawLandRiver()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    // SKY
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.058f, 0.678f, 0.960f); //
    glVertex2f(-1.0f, 0.45f);          // D
    glVertex2f(-1.0f, 1.0f);           // E
    glVertex2f(1.0f, 1.0f);            // G
    glVertex2f(1.0f, 0.65f);

    glEnd();

    // Sun

    glPushMatrix();
    glTranslatef(position_land_sun, 0.0f, 0.0f);
    int j;

    GLfloat a = -0.8f;
    GLfloat b = 0.8f;
    GLfloat radius_sun = 0.1f;
    int triangleAmount_sun = 100; // # of lines used to draw circle

    GLfloat twicePi_sun = 2.0f * PI;

    glColor3f(0.960f, 0.878f, 0.058f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b); // center of circle
    for (j = 0; j <= triangleAmount_sun; j++)
    {
        glVertex2f(a + (radius_sun * cos(j * twicePi_sun / triangleAmount_sun)),
                   b + (radius_sun * sin(j * twicePi_sun / triangleAmount_sun)));
    }
    glEnd();
    glPopMatrix();

    // cloud
    Draw_land_cloud();

    // Road and ....
    glBegin(GL_QUADS);
    glColor3f(0.482, 0.458, 0.176); //
    glVertex2f(-1.0f, 0.0f);        // a
    glVertex2f(1.0f, 0.0f);         // b
    glVertex2f(1.0f, -1.0f);        // c
    glVertex2f(-1.0f, -1.0f);       // d
    glEnd();

    // land--1
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.7f, 0.0f);    // a
    glVertex2f(-0.31f, 0.0f);   // b
    glVertex2f(-0.31f, -0.13f); // c
    glVertex2f(-0.8f, -0.15f);  // d
    glEnd();

    // land--2
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.3f, 0.0f);    // a
    glVertex2f(-0.12f, 0.0f);   // b
    glVertex2f(-0.15f, -0.25f); // c
    glVertex2f(-0.3f, -0.4f);   // d
    glEnd();

    // land--3
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.11f, 0.0f);   // a
    glVertex2f(0.2f, 0.0f);     // b
    glVertex2f(0.19f, -0.24f);  // c
    glVertex2f(-0.13f, -0.24f); // d
    glEnd();

    // land--4
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(0.21f, 0.0f);    // a
    glVertex2f(0.41f, 0.0f);    // b
    glVertex2f(0.47f, -0.24f);  // c
    glVertex2f(0.21f, -0.24f);  // d
    glEnd();

    // land---5
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(0.43f, 0.0f);    // a
    glVertex2f(1.0f, 0.0f);     // b
    glVertex2f(1.0f, -0.6f);    // c
    glVertex2f(0.56f, -0.5f);   // d
    glEnd();

    // land--6
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.81f, -0.17f); // a
    glVertex2f(-0.61f, -0.16f); // b
    glVertex2f(-0.61f, -0.55f); // c
    glVertex2f(-1.0f, -0.7f);   // d
    glEnd();

    // land--7
    glBegin(GL_POLYGON);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.6f, -0.16f);  // a
    glVertex2f(-0.31f, -0.14f); // b
    glVertex2f(-0.31f, -0.41f); // c
    glVertex2f(-0.38f, -0.51f); // d
    glVertex2f(-0.6f, -0.55f);  // e
    glEnd();

    // land--8
    glBegin(GL_QUADS);
    glColor3f(0, 0.639, 0.023); //
    glVertex2f(-0.13f, -0.25f); // a
    glVertex2f(0.47f, -0.25f);  // b
    glVertex2f(0.54f, -0.5f);   // c
    glVertex2f(-0.37f, -0.51f); // d

    glEnd();

    // River
    glBegin(GL_TRIANGLES);
    glColor3f(0.235, 0.286, 0.925); //
    glVertex2f(-1.0f, 0.0f);        // a
    glVertex2f(-0.7f, 0.0f);        // b
    glVertex2f(-1.0f, -0.7f);       // c

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.235, 0.286, 0.925); //
    glVertex2f(-1.0f, 0.0f);        // a
    glVertex2f(-1.0f, 0.45f);       // b
    glVertex2f(1.0f, 0.65f);        // c
    glVertex2f(1.0f, 0.0f);         // d

    glEnd();

    // Boat 1
    glPushMatrix();
    glTranslatef(position_boat1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.392, 0.176, 0.105); //
    glVertex2f(-0.15f, 0.3f);       // a
    glVertex2f(0.15f, 0.3f);        // b
    glVertex2f(0.08f, 0.2f);        // c
    glVertex2f(-0.08f, 0.2f);       // d

    glEnd();

    // Roof
    glBegin(GL_QUADS);
    glColor3f(0.337, 0.301, 0.043); //
    glVertex2f(-0.08f, 0.3f);       // a
    glVertex2f(0.08f, 0.3f);        // b
    glVertex2f(0.08f, 0.35f);       // c
    glVertex2f(-0.08f, 0.35f);      // d
    glEnd();

    // pal 1
    glBegin(GL_QUADS);
    glColor3f(0.458, 0.121, 0.419); //
    glVertex2f(0.0f, 0.55f);        // a
    glVertex2f(0.1f, 0.46f);        // b
    glVertex2f(0.1f, 0.4f);         // c
    glVertex2f(0.0f, 0.35f);        // d

    glEnd();

    // BoiTHA 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.1f, 0.4f);
    glEnd();
    glPopMatrix();

    // Boat 2---still
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); //
    glVertex2f(0.58f, 0.05f); // a
    glVertex2f(0.72f, 0.05f); // b
    glVertex2f(0.8f, 0.15f);  // c
    glVertex2f(0.5f, 0.15f);  // d

    glEnd();

    // Bambo
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.05f);
    glVertex2f(0.45f, 0.2f);
    glEnd();

    // Dori
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.53f, 0.15f);
    glEnd();

    // Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.392, 0.176, 0.105); //
    glVertex2f(0.58f, 0.15f);       // a
    glVertex2f(0.72f, 0.15f);       // b
    glVertex2f(0.72f, 0.19f);       // c
    glVertex2f(0.58f, 0.19f);       // d
    glEnd();

    // Boat 3
    glPushMatrix();
    glTranslatef(position_boat3, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.392, 0.176, 0.105); //
    glVertex2f(-0.9f, 0.18f);       // a
    glVertex2f(-0.76f, 0.18f);      // b
    glVertex2f(-0.68f, 0.28f);      // c
    glVertex2f(-0.98f, 0.28f);      // d
    glEnd();

    // Boitha
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.99f, 0.12f);
    glVertex2f(-0.94f, 0.35f);
    glEnd();

    // Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.525, 0.094, 0.450); //
    glVertex2f(-0.9f, 0.28f);       // a
    glVertex2f(-0.76f, 0.28f);      // b
    glVertex2f(-0.76f, 0.32f);      // c
    glVertex2f(-0.9f, 0.32f);       // d
    glEnd();
    glPopMatrix();

    // tree--1
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.8f, -0.45f);      // a
    glVertex2f(-0.81f, -0.45f);     // b
    glVertex2f(-0.5f, 0.7f);        // c
    glVertex2f(-0.49f, 0.7f);       // d

    glEnd();

    // Tree-- 2
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.7f, -0.45f);      // a
    glVertex2f(-0.71f, -0.45f);     // b
    glVertex2f(-0.7f, 0.7f);        // c
    glVertex2f(-0.71f, 0.7f);       // d

    glEnd();

    // leaf for tree22
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

    // leaf for tree11
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

    // thelagari

    // circle 2
    int n;
    GLfloat a4 = 0.1f, b4 = -0.64f, radius4 = 0.1f;
    int triangleAmount4 = 100;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a4, b4);
    for (n = 0; n <= triangleAmount4; n++)
    {
        glVertex2f(a4 + (radius4 * cos(n * twicePi4 / triangleAmount4)),
                   b4 + (radius4 * sin(n * twicePi4 / triangleAmount4)));
    }
    glEnd();

    // inside circle 2
    int o;
    GLfloat a5 = 0.1f, b5 = -0.64f, radius5 = 0.08f;
    int triangleAmount5 = 100;
    GLfloat twicePi5 = 2.0f * PI;
    glColor3f(0.482, 0.458, 0.176);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a5, b5);
    for (o = 0; o <= triangleAmount5; o++)
    {
        glVertex2f(a5 + (radius5 * cos(o * twicePi5 / triangleAmount5)),
                   b5 + (radius5 * sin(o * twicePi5 / triangleAmount5)));
    }
    glEnd();

    // Rod
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

    // quad

    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.95f);       // a
    glVertex2f(0.6f, -0.7f);        // b
    glVertex2f(0.55f, -0.4f);       // c
    glVertex2f(-0.2f, -0.75f);      // d
    glEnd();

    // Wood in Thelagari
    glBegin(GL_LINES);
    glColor3f(0.482, 0.458, 0.176);
    glVertex2f(-0.2, -0.78f);
    glVertex2f(0.553f, -0.43f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.482, 0.458, 0.176);
    glVertex2f(-0.2, -0.82f);
    glVertex2f(0.56f, -0.47f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.482, 0.458, 0.176);
    glVertex2f(-0.2, -0.86f);
    glVertex2f(0.57f, -0.52f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.482, 0.458, 0.176);
    glVertex2f(-0.2, -0.9f);
    glVertex2f(0.59f, -0.57f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.482, 0.458, 0.176);
    glVertex2f(-0.2, -0.94f);
    glVertex2f(0.65f, -0.62f);
    glEnd();

    // Holder back
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.98f);       // a
    glVertex2f(-0.21f, -0.98f);     // b
    glVertex2f(-0.21f, -0.73f);     // c
    glVertex2f(-0.2f, -0.73f);      // d
    glEnd();

    // holder front
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.75f);       // a
    glVertex2f(0.62f, -0.75f);      // b
    glVertex2f(0.538f, -0.35f);     // c
    glVertex2f(0.501f, -0.35f);     // d
    glEnd();

    // holder 1
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.7f);        // a
    glVertex2f(0.75f, -0.61f);      // b
    glVertex2f(0.75f, -0.58f);      // c
    glVertex2f(0.59f, -0.67f);      // d
    glEnd();

    // holder 2
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.55f, -0.43f);      // a
    glVertex2f(0.7f, -0.37f);       // b
    glVertex2f(0.7f, -0.35f);       // c
    glVertex2f(0.54f, -0.4f);       // d
    glEnd();

    // circle 1
    int l;
    GLfloat a2 = 0.3f, b2 = -0.85f, radius2 = 0.1f;
    int triangleAmount2 = 100;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a2, b2);
    for (l = 0; l <= triangleAmount2; l++)
    {
        glVertex2f(a2 + (radius2 * cos(l * twicePi2 / triangleAmount2)),
                   b2 + (radius2 * sin(l * twicePi2 / triangleAmount2)));
    }
    glEnd();

    // inside the circle 1
    int m;
    GLfloat a3 = 0.3f, b3 = -0.85f, radius3 = 0.08f;
    int triangleAmount3 = 100;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3f(0.482, 0.458, 0.176);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a3, b3);
    for (m = 0; m <= triangleAmount3; m++)
    {
        glVertex2f(a3 + (radius3 * cos(m * twicePi3 / triangleAmount3)),
                   b3 + (radius3 * sin(m * twicePi3 / triangleAmount3)));
    }
    glEnd();

    // small cirlcle inside circle 1
    int q;
    GLfloat a7 = 0.3f, b7 = -0.85f, radius7 = 0.02f;
    int triangleAmount7 = 100;
    GLfloat twicePi7 = 2.0f * PI;
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a7, b7);
    for (q = 0; q <= triangleAmount7; q++)
    {
        glVertex2f(a7 + (radius7 * cos(q * twicePi7 / triangleAmount7)),
                   b7 + (radius7 * sin(q * twicePi7 / triangleAmount7)));
    }
    glEnd();

    // ROd for circle 1
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

// Night scenes
void drawGramNight()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    // grass
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-1.0f, 1.0f);        // D
    glVertex2f(1.0f, 1.0f);         // E
    glVertex2f(1.0f, -1.0f);        // G
    glVertex2f(-1.0f, -1.0f);

    glEnd();

    // SKY
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.027, 0.000, 0.345); //
    glVertex2f(-1.0f, 0.1f);        // D
    glVertex2f(-1.0f, 1.0f);        // E
    glVertex2f(1.0f, 1.0f);         // G
    glVertex2f(1.0f, 0.7f);

    glEnd();

    // stars
    glPointSize(3.0f); // Set the size of the stars
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.7f, 0.8f); // Star 1
    glVertex2f(0.3f, 0.6f);  // Star 2
    glVertex2f(0.6f, 0.9f);  // Star 4
    glVertex2f(-0.9f, 0.4f); // Star 5
    glVertex2f(0.2f, 0.7f);  // Star 6
    glVertex2f(-0.5f, 0.9f); // Star 7
    glVertex2f(0.8f, 0.5f);  // Star 8
    glVertex2f(-0.3f, 0.6f); // Star 9
    glVertex2f(0.1f, 0.85f);
    glVertex2f(-0.4f, 0.75f);  // Star 11
    glVertex2f(0.4f, 0.8f);    // Star 12
    glVertex2f(-0.8f, 0.6f);   // Star 13
    glVertex2f(0.7f, 0.7f);    // Star 14
    glVertex2f(-0.2f, 0.9f);   // Star 15
    glVertex2f(0.5f, 0.55f);   // Star 16
    glVertex2f(-0.6f, 0.5f);   // Star 17
    glVertex2f(0.9f, 0.85f);   // Star 18
    glVertex2f(-0.7f, 0.95f);  // Star 19
    glVertex2f(0.0f, 0.65f);   // Star 20
    glVertex2f(-0.85f, 0.7f);  // Star 21
    glVertex2f(0.15f, 0.95f);  // Star 22
    glVertex2f(-0.25f, 0.55f); // Star 23
    glVertex2f(0.35f, 0.75f);  // Star 24
    glVertex2f(-0.95f, 0.85f); // Star 25
    glVertex2f(0.55f, 0.65f);  // Star 26
    glVertex2f(-0.15f, 0.8f);  // Star 27
    glVertex2f(0.75f, 0.9f);   // Star 28

    glEnd();

    // Village_moon

    glPushMatrix();
    glTranslatef(position_village_moon, 0.0f, 0.0f);
    int j1;

    GLfloat a1 = -0.6f;
    GLfloat b1 = 0.7f;
    GLfloat radius_moon1 = 0.1f;
    int triangleAmount_moon1 = 100; // # of lines used to draw circle

    GLfloat twicePi_moon1 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a1, b1); // center of circle
    for (j1 = 0; j1 <= triangleAmount_moon1; j1++)
    {
        glVertex2f(a1 + (radius_moon1 * cos(j1 * twicePi_moon1 / triangleAmount_moon1)),
                   b1 + (radius_moon1 * sin(j1 * twicePi_moon1 / triangleAmount_moon1)));
    }
    glEnd();
    glPopMatrix();

    // Hill 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.098, 0.2, 0.0);
    glVertex2f(-1.3f, 0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.3f, 0.31f);
    glEnd();

    // Hill 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.098, 0.2, 0.0);
    glVertex2f(-0.5f, 0.25f);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.5f, 0.55f);

    glEnd();

    // Hill 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.098, 0.2, 0.0);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(1.3f, 0.65f);

    glEnd();

    // School
    // 1st part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f);
    glVertex2f(0.2f, 0.3f);  // a
    glVertex2f(0.6f, 0.3f);  // b
    glVertex2f(0.6f, -0.4f); // d
    glVertex2f(0.2, -0.4);   // c
    glEnd();
    // 2nd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f, 0.3f);            // b
    glVertex2f(0.85f, 0.1f);           // e
    glVertex2f(0.85f, -0.6f);          // h
    glVertex2f(0.6f, -0.4f);           // d
    glEnd();

    // 3rd part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f, 0.1f);           // E
    glVertex2f(1.0f, 0.1f);            // f
    glVertex2f(1.0f, -0.6f);           // g
    glVertex2f(0.85f, -0.6f);          // h
    glEnd();

    // 4th_part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.85f, 0.7f);           // j
    glVertex2f(1.0f, 0.7f);            // k
    glVertex2f(1.0f, 0.1f);            // f
    glVertex2f(0.85f, 0.1f);           // e
    glEnd();

    // 5th part
    glBegin(GL_QUADS);
    glColor3f(0.322f, 0.525f, 0.671f); //
    glVertex2f(0.6f, 0.7f);            // i
    glVertex2f(0.85f, 0.7f);           // j
    glVertex2f(0.85f, 0.1f);           // e
    glVertex2f(0.6f, 0.3f);            // b
    glEnd();

    // 1st_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.2f, 0.2f);  // l
    glVertex2f(0.4f, 0.2f);  // m
    glVertex2f(0.4f, -0.3f); // n
    glVertex2f(0.2f, -0.3f); // o
    glEnd();

    // Door 1st_class
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.22f, 0.05f); // t
    glVertex2f(0.3f, 0.05f);  // u
    glVertex2f(0.3f, -0.3f);  // v
    glVertex2f(0.22f, -0.3f); // w
    glEnd();

    // Window 1st_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.32f, 0.05f); // x
    glVertex2f(0.4f, 0.05f);  // y
    glVertex2f(0.4f, -0.1f);  // z
    glVertex2f(0.32f, -0.1f); // A1
    glEnd();

    // 2st_class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.43f, 0.2f);  // p
    glVertex2f(0.6f, 0.2f);   // q
    glVertex2f(0.6f, -0.3f);  // r
    glVertex2f(0.43f, -0.3f); // s
    glEnd();

    // Window 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.43f, 0.05f); // b1
    glVertex2f(0.5f, 0.05f);  // c1
    glVertex2f(0.5f, -0.1f);  // d1
    glVertex2f(0.43f, -0.1f); // e1
    glEnd();

    ////Door 2nd_class

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f);
    glVertex2f(0.52f, 0.05f); // f1
    glVertex2f(0.59f, 0.05f); // g1
    glVertex2f(0.59f, -0.3f); // h1
    glVertex2f(0.52f, -0.3f); // i1
    glEnd();

    // 3rd_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.62f, 0.2f);     // j1
    glVertex2f(0.75f, 0.1f);     // k1
    glVertex2f(0.75f, -0.4f);    // l1
    glVertex2f(0.62f, -0.3f);    // m1
    glEnd();

    // 3rd_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f, 0.0f);           // d2
    glVertex2f(0.69f, -0.05f);         // e2
    glVertex2f(0.69f, -0.355f);        // f2
    glVertex2f(0.64f, -0.32f);         // g2
    glEnd();

    // 3rd_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f, -0.05f);          // h2
    glVertex2f(0.75f, -0.05f);         // i2
    glVertex2f(0.75f, -0.18f);         // j2
    glVertex2f(0.7f, -0.17f);          // k2
    glEnd();

    // 4th class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.77f, 0.1f);     // n1
    glVertex2f(0.83f, 0.03f);    // o1
    glVertex2f(0.83f, -0.47);    // p1
    glVertex2f(0.77f, -0.4f);    // q1
    glEnd();

    // 4th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f, -0.05f);         // z1
    glVertex2f(0.81f, -0.07f);         // a2
    glVertex2f(0.81f, -0.45);          // b2
    glVertex2f(0.78f, -0.42f);         // c2
    glEnd();

    // 5th_class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.87f, 0.0f);     // r1
    glVertex2f(1.0f, 0.0f);      // s1
    glVertex2f(1.0f, -0.5f);     // t1
    glVertex2f(0.87f, -0.5f);    // u1
    glEnd();

    // 5th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f, -0.1f);          // v1
    glVertex2f(0.96f, -0.1f);          // w1
    glVertex2f(0.96f, -0.3f);          // x1
    glVertex2f(0.87f, -0.3f);          // y1
    glEnd();

    // 6th_class_

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.62f, 0.6f);     // m2
    glVertex2f(0.75f, 0.6f);     // n2
    glVertex2f(0.75f, 0.25f);    // o2
    glVertex2f(0.62f, 0.35f);    // p2
    glEnd();

    // 6th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.64f, 0.55f);          // y2
    glVertex2f(0.69f, 0.55f);          // z2
    glVertex2f(0.69f, 0.295f);         // a3
    glVertex2f(0.64f, 0.335f);         // b3
    glEnd();

    // 6th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.7f, 0.55f);           // c3
    glVertex2f(0.75f, 0.55f);          // d3
    glVertex2f(0.75f, 0.4225f);        // e3
    glVertex2f(0.7f, 0.4225f);         // f3
    glEnd();

    // 7th class
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.77f, 0.6f);     // q2
    glVertex2f(0.83f, 0.6f);     // r2
    glVertex2f(0.83f, 0.2);      // s2
    glVertex2f(0.77f, 0.25f);    // t2
    glEnd();

    // 7th_class_door

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.78f, 0.55f);          // z1
    glVertex2f(0.81f, 0.55f);          // a2
    glVertex2f(0.81f, 0.215);          // b2
    glVertex2f(0.78f, 0.24f);          // c2
    glEnd();

    // 8th_class

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.87f, 0.6f);     // u2
    glVertex2f(1.0f, 0.6f);      // v2
    glVertex2f(1.0f, 0.2f);      // w2
    glVertex2f(0.87f, 0.2f);     // x2
    glEnd();

    // 8th_class_window

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(0.87f, 0.5f);           // v1
    glVertex2f(0.96f, 0.5f);           // w1
    glVertex2f(0.96f, 0.3f);           // x1
    glVertex2f(0.87f, 0.3f);           // y1
    glEnd();

    // Karnis_Design
    // 1st_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.19f, 0.3f); // a
    glVertex2f(0.6f, 0.3f);  // b
    glVertex2f(0.6f, 0.31f); //
    glVertex2f(0.19, 0.31);  //
    glEnd();

    // 2nd part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.6f, 0.3f);      // b
    glVertex2f(0.85f, 0.1f);     // e
    glVertex2f(0.85f, 0.11f);    //
    glVertex2f(0.6f, 0.31f);     //
    glEnd();

    // 3rd_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.85f, 0.1f);     // e
    glVertex2f(1.0f, 0.1f);      // f
    glVertex2f(1.0f, 0.11f);     // g
    glVertex2f(0.85f, 0.11f);    // h
    glEnd();

    // 4th_and_5th_part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //
    glVertex2f(0.59f, 0.7f);     // e
    glVertex2f(1.0f, 0.7f);      // f
    glVertex2f(1.0f, 0.71f);     // g
    glVertex2f(0.59f, 0.71f);    // h
    glEnd();

    // Flag_Base

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f); //
    glVertex2f(0.25f, -0.5f);    // e
    glVertex2f(0.3f, -0.5f);     // f
    glVertex2f(0.3f, -0.55f);    // g
    glVertex2f(0.25f, -0.55f);   // h
    glEnd();

    // flag line
    glBegin(GL_LINES);
    glColor3f(0.541, 0.518, 0.451);

    glVertex2f(0.275f, -0.5f);
    glVertex2f(0.275f, 0.52f);
    glEnd();

    // bd_flag

    // School_Name
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.3, 0.4);

    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    renderBitmapString(0.31f, 0.34f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "  Primary School");

    // Road

    // up
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.25, 0.25); //
    glVertex2f(-0.1f, 0.37f);    // E
    glVertex2f(0.175f, 0.45f);
    glVertex2f(0.175f, -0.5f);  // G
    glVertex2f(-0.09f, -0.37f); // F
    glEnd();

    // Down
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.25, 0.25); //
    glVertex2f(-0.32f, -1.0f);   // E
    glVertex2f(-0.09f, -0.37f);
    glVertex2f(0.175f, -0.5f); // G
    glVertex2f(0.275f, -1.0f); // F
    glEnd();

    // 2nd house

    // Roof
    glBegin(GL_POLYGON);
    glColor3f(0.823f, 0.537f, 0.294f); //
    glVertex2f(-0.4f, 0.2f);           // D
    glVertex2f(-0.22f, 0.2f);          // E
    glVertex2f(-0.1f, -0.1f);          // G
    glVertex2f(-0.43f, -0.1f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();

    // square
    glBegin(GL_QUADS);
    glColor3f(0.780f, 0.682f, 0.160f); //
    glVertex2f(-0.45f, -0.1f);         // E
    glVertex2f(-0.12f, -0.1f);
    glVertex2f(-0.12f, -0.35f); // G
    glVertex2f(-0.45f, -0.35f); // F
    glEnd();

    // Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.32f, -0.15f);        // E
    glVertex2f(-0.25f, -0.15f);
    glVertex2f(-0.25f, -0.35f); // G
    glVertex2f(-0.32f, -0.35f); // F
    glEnd();

    // Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.45f, -0.35f);        // F
    glVertex2f(-0.12f, -0.35f);        // G
    glVertex2f(-0.12f, -0.38f);
    glVertex2f(-0.45f, -0.38f); // E
    glEnd();

    // House 1

    // Roof
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.5f, 0.2f);           // E
    glVertex2f(-0.43f, -0.1f);         // G
    glVertex2f(-0.7f, -0.1f);          // F
    glEnd();

    // square
    glBegin(GL_QUADS);
    glColor3f(0.701f, 0.721f, 0.580f); //
    glVertex2f(-0.7f, -0.1f);          // D
    glVertex2f(-0.45f, -0.1f);         // E
    glVertex2f(-0.45f, -0.4f);         // G
    glVertex2f(-0.7f, -0.4f);          // F
    glEnd();

    // windowside polygon
    glBegin(GL_POLYGON);
    glColor3f(0.784f, 0.823f, 0.517f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.7f, -0.1f);          // E
    glVertex2f(-0.7f, -0.4f);          // G
    glVertex2f(-0.9F, -0.4F);          // F
    glVertex2f(-0.9F, -0.1F);          // F
    glEnd();

    // window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //
    glVertex2f(-0.85f, -0.18f);  // D
    glVertex2f(-0.78f, -0.18f);  // E
    glVertex2f(-0.78f, -0.27f);  // G
    glVertex2f(-0.85f, -0.27f);  // F
    glEnd();

    // Door
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.6f, -0.2f);          // D
    glVertex2f(-0.53f, -0.2f);         // E
    glVertex2f(-0.53f, -0.4f);         // F
    glVertex2f(-0.6f, -0.4f);          // G
    glEnd();

    // Base
    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.9f, -0.4f);          // F
    glVertex2f(-0.45f, -0.4f);         // G
    glVertex2f(-0.45f, -0.44f);
    glVertex2f(-0.9f, -0.44f); // E
    glEnd();

    // roof_stref

    glBegin(GL_QUADS);
    glColor3f(0.560f, 0.415f, 0.058f); //
    glVertex2f(-0.8f, 0.2f);           // D
    glVertex2f(-0.79f, 0.19f);         // E
    glVertex2f(-0.9f, -0.1f);          // F
    glVertex2f(-0.94f, -0.11f);        // G
    glEnd();

    // tree
    glBegin(GL_POLYGON);
    glColor3f(0.2f, 0.0f, 0.0f); //
    glVertex2f(-0.492f, 0.16f);  // D
    glVertex2f(-0.492f, 0.4f);   // E
    glVertex2f(-0.42f, 0.4f);    // G
    glVertex2f(-0.42f, 0.17f);
    glVertex2f(-0.48f, 0.09f); // F
    glEnd();

    // Tree_Leaf_1

    int k;
    GLfloat e = -0.525f;
    GLfloat f = 0.425f;
    GLfloat radius_1 = 0.1f;
    int triangleAmount_1 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_1 = 2.0f * PI;

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(e, f); // center of circle
    for (k = 0; k <= triangleAmount_1; k++)
    {
        glVertex2f(e + (radius_1 * cos(k * twicePi_1 / triangleAmount_1)),
                   f + (radius_1 * sin(k * twicePi_1 / triangleAmount_1)));
    }
    glEnd();

    // Tree_Leaf_2

    int l;
    GLfloat g = -0.530f;
    GLfloat h = 0.55f;
    GLfloat radius_2 = 0.1f;
    int triangleAmount_2 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_2 = 2.0f * PI;

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(g, h); // center of circle
    for (l = 0; l <= triangleAmount_1; l++)
    {
        glVertex2f(g + (radius_1 * cos(l * twicePi_2 / triangleAmount_2)),
                   h + (radius_1 * sin(l * twicePi_2 / triangleAmount_2)));
    }
    glEnd();

    // Tree_Leaf_3

    int m;
    GLfloat q = -0.456f;
    GLfloat r = 0.65f;
    GLfloat radius_3 = 0.2f;
    int triangleAmount_3 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_3 = 2.0f * PI;

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(q, r); // center of circle
    for (m = 0; m <= triangleAmount_1; m++)
    {
        glVertex2f(q + (radius_1 * cos(m * twicePi_3 / triangleAmount_3)),
                   r + (radius_1 * sin(m * twicePi_3 / triangleAmount_3)));
    }
    glEnd();

    // Tree_Leaf_4

    int n;
    GLfloat s = -0.41f;
    GLfloat t = 0.55f;
    GLfloat radius_4 = 0.1f;
    int triangleAmount_4 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_4 = 2.0f * PI;

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(s, t); // center of circle
    for (n = 0; n <= triangleAmount_1; n++)
    {
        glVertex2f(s + (radius_1 * cos(n * twicePi_4 / triangleAmount_4)),
                   t + (radius_1 * sin(n * twicePi_4 / triangleAmount_4)));
    }
    glEnd();

    // Tree_Leaf_5

    int o;
    GLfloat u = -0.4f;
    GLfloat v = 0.425f;
    GLfloat radius_5 = 0.1f;
    int triangleAmount_5 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_5 = 2.0f * PI;

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(u, v); // center of circle
    for (o = 0; o <= triangleAmount_1; o++)
    {
        glVertex2f(u + (radius_1 * cos(o * twicePi_5 / triangleAmount_4)),
                   v + (radius_1 * sin(o * twicePi_5 / triangleAmount_4)));
    }
    glEnd();

    glFlush();
}

void drawSonaNight()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    // grass

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.19, 0.13);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0, -1.0);
    glEnd();

    // Sky

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.35);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0, 0.5);
    glEnd();

    // stars
    glPointSize(3.0f); // Set the size of the stars
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.7f, 0.8f); // Star 1
    glVertex2f(0.3f, 0.6f);  // Star 2
    glVertex2f(0.6f, 0.9f);  // Star 4
    glVertex2f(-0.9f, 0.4f); // Star 5
    glVertex2f(0.2f, 0.7f);  // Star 6
    glVertex2f(-0.5f, 0.9f); // Star 7
    glVertex2f(0.8f, 0.5f);  // Star 8
    glVertex2f(-0.3f, 0.6f); // Star 9
    glVertex2f(0.1f, 0.85f);
    glVertex2f(-0.4f, 0.75f);  // Star 11
    glVertex2f(0.4f, 0.8f);    // Star 12
    glVertex2f(-0.8f, 0.6f);   // Star 13
    glVertex2f(0.7f, 0.7f);    // Star 14
    glVertex2f(-0.2f, 0.9f);   // Star 15
    glVertex2f(0.5f, 0.55f);   // Star 16
    glVertex2f(-0.6f, 0.5f);   // Star 17
    glVertex2f(0.9f, 0.85f);   // Star 18
    glVertex2f(-0.7f, 0.95f);  // Star 19
    glVertex2f(0.0f, 0.65f);   // Star 20
    glVertex2f(-0.85f, 0.7f);  // Star 21
    glVertex2f(0.15f, 0.95f);  // Star 22
    glVertex2f(-0.25f, 0.55f); // Star 23
    glVertex2f(0.35f, 0.75f);  // Star 24
    glVertex2f(-0.95f, 0.85f); // Star 25
    glVertex2f(0.55f, 0.65f);  // Star 26
    glVertex2f(-0.15f, 0.8f);  // Star 27
    glVertex2f(0.75f, 0.9f);   // Star 28

    glEnd();

    // sun
    glPushMatrix();
    glTranslatef(position_mosq_moon, 0.0f, 0.0f);
    int j;

    GLfloat a = -0.8f;
    GLfloat b = 0.8f;
    GLfloat radius_moon = 0.1f;
    int triangleAmount_moon = 100; // # of lines used to draw circle

    GLfloat twicePi_moon = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b); // center of circle
    for (j = 0; j <= triangleAmount_moon; j++)
    {
        glVertex2f(a + (radius_moon * cos(j * twicePi_moon / triangleAmount_moon)),
                   b + (radius_moon * sin(j * twicePi_moon / triangleAmount_moon)));
    }
    glEnd();
    glPopMatrix();

    // first gomvuj
    int i;

    GLfloat x = -0.84f;
    GLfloat y = 0.51f;
    GLfloat radius = 0.1f;
    int triangleAmount = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();

    // second gomvuj
    int k;
    GLfloat e = -0.64f;
    GLfloat f = 0.51f;
    GLfloat radius_1 = 0.1f;
    int triangleAmount_1 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_1 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(e, f); // center of circle
    for (k = 0; k <= triangleAmount_1; k++)
    {
        glVertex2f(e + (radius_1 * cos(k * twicePi_1 / triangleAmount_1)),
                   f + (radius_1 * sin(k * twicePi_1 / triangleAmount_1)));
    }
    glEnd();

    // 3rd middle quad gomvoj
    glBegin(GL_QUADS);
    glColor3f(0.76, 0.52, 0.32);
    glVertex2f(-0.54f, 0.5f);
    glVertex2f(-0.48f, 0.63f);
    glVertex2f(-0.4f, 0.63f);
    glVertex2f(-0.34, 0.5);
    glEnd();

    // 3rd gombuj tiangles triangles
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.54, 0.5);
    glVertex2f(-0.44, 0.55);
    glVertex2f(-0.34, 0.5);
    glEnd();

    // 4th gombuj

    int l;
    GLfloat g = -0.24f;
    GLfloat h = 0.5f;
    GLfloat radius_2 = 0.1f;
    int triangleAmount_2 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_2 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(g, h); // center of circle
    for (l = 0; l <= triangleAmount_1; l++)
    {
        glVertex2f(g + (radius_1 * cos(l * twicePi_2 / triangleAmount_2)),
                   h + (radius_1 * sin(l * twicePi_2 / triangleAmount_2)));
    }
    glEnd();

    // 5th gombuj

    int m;
    GLfloat q = -0.05f;
    GLfloat r = 0.5f;
    GLfloat radius_3 = 0.1f;
    int triangleAmount_3 = 100; // # of lines used to draw circle

    // GLfloat radius = 0.8f; //radius
    GLfloat twicePi_3 = 2.0f * PI;

    glColor3f(0.76, 0.52, 0.32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(q, r); // center of circle
    for (m = 0; m <= triangleAmount_1; m++)
    {
        glVertex2f(q + (radius_1 * cos(m * twicePi_3 / triangleAmount_3)),
                   r + (radius_1 * sin(m * twicePi_3 / triangleAmount_3)));
    }
    glEnd();

    // whole quad
    glBegin(GL_QUADS);
    glColor3f(0.76, 0.52, 0.32);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-1.0, -0.2);
    glEnd();

    // Mosque
    // 1st pillar
    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-0.95f, 0.5f);
    glVertex2f(-0.95f, -0.2f);
    glVertex2f(-1.0, -0.2);
    glEnd();

    // 2nd pillar
    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(0.075f, 0.5f);
    glVertex2f(0.125f, 0.5f);
    glVertex2f(0.125f, -0.2f);
    glVertex2f(0.075, -0.2);
    glEnd();

    // roof
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.95f, 0.5f);
    glVertex2f(0.075f, 0.5f);
    glVertex2f(0.075f, 0.45f);
    glVertex2f(-0.95, 0.45);
    glEnd();

    // Divider
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.95f, 0.15f);
    glVertex2f(0.075f, 0.15f);
    glVertex2f(0.075f, 0.25f);
    glVertex2f(-0.95, 0.25);
    glEnd();

    // 1st door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1f, 0.35f);
    glVertex2f(0.03, 0.35);
    glEnd();

    // 1st door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(0.03f, 0.15f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1, 0.15);
    glVertex2f(-0.035, 0.25);
    glEnd();

    // 1st window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.11f, 0.0f);
    glVertex2f(-0.17f, 0.0f);
    glVertex2f(-0.17f, 0.1f);
    glVertex2f(-0.11, 0.1);
    glEnd();

    // 2nd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.18f, -0.2f);
    glVertex2f(-0.31f, -0.2f);
    glVertex2f(-0.31f, 0.35f);
    glVertex2f(-0.18f, 0.35f);
    glEnd();

    // 2nd door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.18f, 0.15f);
    glVertex2f(-0.18f, -0.2f);
    glVertex2f(-0.31f, -0.2f);
    glVertex2f(-0.31, 0.15);
    glVertex2f(-0.245, 0.25);
    glEnd();

    // 2nd window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.32f, 0.0f);
    glVertex2f(-0.38f, 0.0f);
    glVertex2f(-0.38f, 0.1f);
    glVertex2f(-0.32, 0.1);
    glEnd();

    // 3rd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.39f, -0.2f);
    glVertex2f(-0.52f, -0.2f);
    glVertex2f(-0.52f, 0.35f);
    glVertex2f(-0.39f, 0.35f);
    glEnd();

    // 3rd door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.39f, 0.15f);
    glVertex2f(-0.39f, -0.2f);
    glVertex2f(-0.52f, -0.2f);
    glVertex2f(-0.52, 0.15);
    glVertex2f(-0.455, 0.25);
    glEnd();

    // 3rd window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.53f, 0.0f);
    glVertex2f(-0.59f, 0.0f);
    glVertex2f(-0.59f, 0.1f);
    glVertex2f(-0.53, 0.1);
    glEnd();

    // 4rd door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.725f, -0.2f);
    glVertex2f(-0.725f, 0.35f);
    glVertex2f(-0.6f, 0.35f);
    glEnd();

    // 4th door design

    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.6f, 0.15f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.725f, -0.2f);
    glVertex2f(-0.725, 0.15);
    glVertex2f(-0.6625, 0.25);
    glEnd();

    // 4th window

    glBegin(GL_QUADS);
    glColor3f(0.592, 0.337, 0.168);
    glVertex2f(-0.73f, 0.0f);
    glVertex2f(-0.79f, 0.0f);
    glVertex2f(-0.79f, 0.1f);
    glVertex2f(-0.73, 0.1);
    glEnd();

    // 5th door
    glBegin(GL_QUADS);
    glColor3f(0.764, 0.690, 0.615);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.925f, -0.2f);
    glVertex2f(-0.925f, 0.35f);
    glVertex2f(-0.8f, 0.35f);
    glEnd();

    // 5th door design
    glBegin(GL_POLYGON);
    glColor3f(0.756, 0.580, 0.462);
    glVertex2f(-0.8f, 0.15f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.925f, -0.2f);
    glVertex2f(-0.925, 0.15);
    glVertex2f(-0.860, 0.25);
    glEnd();

    // Mosque front 1

    glBegin(GL_QUADS);
    glColor3f(0.63, 0.63, 0.63);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.2f);
    glEnd();

    // mosque front 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.4, 0.4);
    glVertex2f(-1.0f, -0.33f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.33f);
    glEnd();

    // mosque front 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.4, 0.4);
    glVertex2f(0.15f, -0.35f);
    glVertex2f(0.135f, -0.33f);
    glVertex2f(0.135f, -0.2f);
    glVertex2f(0.15f, -0.2f);
    glEnd();

    // 4th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.77f, 0.0f);
    glVertex2f(0.81f, 0.02f);
    glVertex2f(0.81f, 0.47f);
    glVertex2f(0.77f, 0.47f);
    glEnd();

    // 4th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.77, 0.0);
    glVertex2f(0.74, -0.1);
    glVertex2f(0.79, 0.02);
    glEnd();

    // 4th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.795, 0.02);
    glVertex2f(0.83, -0.075);
    glVertex2f(0.8075, 0.02);
    glEnd();

    // 4th tree root 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.81, 0.02);
    glVertex2f(0.85, 0.02);
    glVertex2f(0.81, 0.04);
    glEnd();

    // 4th tree leaf 1
    int i32;

    GLfloat x32 = 0.79f;
    GLfloat y32 = 0.49f;
    GLfloat radius32 = 0.1f;
    int triangleAmount32 = 100;

    GLfloat twicePi32 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x32, y32);
    for (i32 = 0; i32 <= triangleAmount32; i32++)
    {
        glVertex2f(x32 + (radius32 * cos(i32 * twicePi32 / triangleAmount32)),
                   y32 + (radius32 * sin(i32 * twicePi32 / triangleAmount32)));
    }
    glEnd();

    // 5th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.69f, 0.0f);
    glVertex2f(0.73f, 0.03f);
    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.69, 0.45f);
    glEnd();

    // 5th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.69, 0.0);
    glVertex2f(0.64, -0.075);
    glVertex2f(0.69, 0.03);
    glEnd();

    // 5th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.7, 0.02);
    glVertex2f(0.73, -0.05);
    glVertex2f(0.72, 0.02);
    glEnd();

    // 5th tree root 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.72, 0.02);
    glVertex2f(0.78, 0.02);
    glVertex2f(0.73, 0.04);
    glEnd();

    // 6th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.47f, -0.07f);
    glVertex2f(0.51f, -0.05f);
    glVertex2f(0.51f, 0.47f);
    glVertex2f(0.47f, 0.47f);
    glEnd();

    // 6th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.47, -0.05);
    glVertex2f(0.44, -0.15);
    glVertex2f(0.49, -0.05);
    glEnd();

    // 6th tree root 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.51, -0.02);
    glVertex2f(0.55, -0.02);
    glVertex2f(0.51, -0.04);
    glEnd();

    // 7th tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.39f, 0.03f);
    glVertex2f(0.39f, 0.45f);
    glVertex2f(0.35, 0.45f);
    glEnd();

    // 7th tree root 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.36, 0.0);
    glVertex2f(0.32, -0.075);
    glVertex2f(0.36, 0.03);
    glEnd();

    // tree 1 quad
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.55f, -0.5f);
    glVertex2f(0.625f, -0.5f);
    glVertex2f(0.625f, 0.4f);
    glVertex2f(0.55f, 0.4f);
    glEnd();

    // 4th branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.625f, -0.2f);
    glVertex2f(0.625f, -0.25f);
    glVertex2f(0.7f, -0.05f);
    glVertex2f(0.7f, -0.02f);
    glEnd();

    // 4th branch leaf 1 tree 1

    int i31;

    GLfloat x31 = 0.7f;
    GLfloat y31 = -0.03f;
    GLfloat radius31 = 0.1f;
    int triangleAmount31 = 100;

    GLfloat twicePi31 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x31, y31);
    for (i31 = 0; i31 <= triangleAmount31; i31++)
    {
        glVertex2f(x31 + (radius31 * cos(i31 * twicePi31 / triangleAmount31)),
                   y31 + (radius31 * sin(i31 * twicePi31 / triangleAmount31)));
    }
    glEnd();

    // 1st branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.56f, 0.40f);
    glVertex2f(0.45f, 0.48f);
    glVertex2f(0.44f, 0.47f);
    glEnd();

    // branch 1 leaf 1
    int count;

    GLfloat posX = 0.4f;
    GLfloat posY = 0.45f;
    GLfloat rad = 0.1f;
    int segments = 100;

    GLfloat fullCircle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(posX, posY);
    for (count = 0; count <= segments; count++)
    {
        glVertex2f(posX + (rad * cos(count * fullCircle / segments)),
                   posY + (rad * sin(count * fullCircle / segments)));
    }
    glEnd();

    // leaf 2 branch 1
    int index;

    GLfloat centerX = 0.35f;
    GLfloat centerY = 0.55f;
    GLfloat radSize = 0.1f;
    int numTriangles = 100;

    GLfloat fullAngle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);
    for (index = 0; index <= numTriangles; index++)
    {
        glVertex2f(centerX + (radSize * cos(index * fullAngle / numTriangles)),
                   centerY + (radSize * sin(index * fullAngle / numTriangles)));
    }
    glEnd();

    // leaf 3 branch 1
    int step;

    GLfloat pointX = 0.5f;
    GLfloat pointY = 0.5f;
    GLfloat circleRadius = 0.08f;
    int sides = 100;

    GLfloat twoPi = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(pointX, pointY);
    for (step = 0; step <= sides; step++)
    {
        glVertex2f(pointX + (circleRadius * cos(step * twoPi / sides)),
                   pointY + (circleRadius * sin(step * twoPi / sides)));
    }
    glEnd();

    // mango line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.48f, 0.57f);
    glVertex2f(0.48f, 0.53f);

    glEnd();

    // Adding Yellow Mango 1
    int mangoStep;
    GLfloat mangoX = 0.48f; // Mango position
    GLfloat mangoY = 0.52f;
    GLfloat mangoRadius = 0.015f; // Mango size
    int mangoSides = 100;
    GLfloat mangoAngle = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX, mangoY); // Mango center
    for (mangoStep = 0; mangoStep <= mangoSides; mangoStep++)
    {
        glVertex2f(mangoX + (mangoRadius * cos(mangoStep * mangoAngle / mangoSides)),
                   mangoY + (mangoRadius * sin(mangoStep * mangoAngle / mangoSides)));
    }
    glEnd();

    // mango line 2
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.4f, 0.61f);
    glVertex2f(0.4f, 0.58f);

    glEnd();

    // Adding Yellow Mango
    int mangoStep1;
    GLfloat mangoX1 = 0.4f; // Mango position
    GLfloat mangoY1 = 0.56f;
    GLfloat mangoRadius1 = 0.015f; // Mango size
    int mangoSides1 = 100;
    GLfloat mangoAngle1 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX1, mangoY1); // Mango center
    for (mangoStep1 = 0; mangoStep1 <= mangoSides1; mangoStep1++)
    {
        glVertex2f(mangoX1 + (mangoRadius1 * cos(mangoStep1 * mangoAngle1 / mangoSides1)),
                   mangoY1 + (mangoRadius1 * sin(mangoStep1 * mangoAngle1 / mangoSides1)));
    }
    glEnd();

    // mango line 3
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.4f, 0.50f);
    glVertex2f(0.4f, 0.48f);

    glEnd();

    // Adding Yellow Mango - Version 2
    int mangoStep2;
    GLfloat mangoX2 = 0.40f; // Mango position
    GLfloat mangoY2 = 0.46f;
    GLfloat mangoRadius2 = 0.015f; // Mango size
    int mangoSides2 = 100;
    GLfloat mangoAngle2 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0); // Mango yellow color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX2, mangoY2); // Mango center
    for (mangoStep2 = 0; mangoStep2 <= mangoSides2; mangoStep2++)
    {
        glVertex2f(mangoX2 + (mangoRadius2 * cos(mangoStep2 * mangoAngle2 / mangoSides2)),
                   mangoY2 + (mangoRadius2 * sin(mangoStep2 * mangoAngle2 / mangoSides2)));
    }
    glEnd();

    // 2nd branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.58f, 0.37f);
    glVertex2f(0.6f, 0.37f);
    glVertex2f(0.61f, 0.5f);
    glVertex2f(0.6f, 0.49f);
    glEnd();

    // 2nd branch 1st leaf for tree 1

    int counter;

    GLfloat locX = 0.61f;
    GLfloat locY = 0.57f;
    GLfloat circRad = 0.1f;
    int totalSegments = 100;

    GLfloat doublePi = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(locX, locY);
    for (counter = 0; counter <= totalSegments; counter++)
    {
        glVertex2f(locX + (circRad * cos(counter * doublePi / totalSegments)),
                   locY + (circRad * sin(counter * doublePi / totalSegments)));
    }
    glEnd();

    // 2nd branch 2nd leaf for tree 1

    int iter;

    GLfloat originX = 0.56f;
    GLfloat originY = 0.65f;
    GLfloat sphereRadius = 0.1125f;
    int divisions = 100;

    GLfloat cycle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(originX, originY);
    for (iter = 0; iter <= divisions; iter++)
    {
        glVertex2f(originX + (sphereRadius * cos(iter * cycle / divisions)),
                   originY + (sphereRadius * sin(iter * cycle / divisions)));
    }
    glEnd();

    // 2nd branch 3rd leaf for tree 1

    int segmentIndex;

    GLfloat axisX = 0.7f;
    GLfloat axisY = 0.61f;
    GLfloat radValue = 0.1f;
    int partition = 100;

    GLfloat rotation = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(axisX, axisY);
    for (segmentIndex = 0; segmentIndex <= partition; segmentIndex++)
    {
        glVertex2f(axisX + (radValue * cos(segmentIndex * rotation / partition)),
                   axisY + (radValue * sin(segmentIndex * rotation / partition)));
    }
    glEnd();

    // mango line 1 branch 2 leaf 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.6f, 0.57f);

    glEnd();

    // Adding Yellow Mango - Version 4
    int mangoStep4;
    GLfloat mangoX4 = 0.6f;
    GLfloat mangoY4 = 0.56f;
    GLfloat mangoRadius4 = 0.015f;
    int mangoSides4 = 100;
    GLfloat mangoAngle4 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mangoX4, mangoY4);
    for (mangoStep4 = 0; mangoStep4 <= mangoSides4; mangoStep4++)
    {
        glVertex2f(mangoX4 + (mangoRadius4 * cos(mangoStep4 * mangoAngle4 / mangoSides4)),
                   mangoY4 + (mangoRadius4 * sin(mangoStep4 * mangoAngle4 / mangoSides4)));
    }
    glEnd();

    // mango line 2 branch 2 leaf 3
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.74f, 0.62f);
    glVertex2f(0.74f, 0.59f);

    glEnd();

    //
    int i19;

    GLfloat x19 = 0.74f;
    GLfloat y19 = 0.58f;
    GLfloat radius19 = 0.015f;
    int triangleAmount19 = 100;

    GLfloat twicePi19 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x19, y19);
    for (i19 = 0; i19 <= triangleAmount19; i19++)
    {
        glVertex2f(x19 + (radius19 * cos(i19 * twicePi19 / triangleAmount19)),
                   y19 + (radius19 * sin(i19 * twicePi19 / triangleAmount19)));
    }
    glEnd();

    // 3rd branch for tree 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.625f, 0.2f);
    glVertex2f(0.625f, 0.25f);
    glVertex2f(0.72f, 0.43f);
    glVertex2f(0.72f, 0.45f);
    glEnd();

    // 3rd branch 1st leaf for tree 1

    int ringIndex;

    GLfloat posA = 0.7;
    GLfloat posB = 0.4f;
    GLfloat radCircle = 0.1f;
    int ringCount = 100;

    GLfloat turn = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(posA, posB);
    for (ringIndex = 0; ringIndex <= ringCount; ringIndex++)
    {
        glVertex2f(posA + (radCircle * cos(ringIndex * turn / ringCount)),
                   posB + (radCircle * sin(ringIndex * turn / ringCount)));
    }
    glEnd();

    // mango line 1 branch 3 leaf 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.7f, 0.45f);
    glVertex2f(0.7f, 0.4f);

    glEnd();

    // mango tree 1 branch 3
    int i18;

    GLfloat x18 = 0.7f;
    GLfloat y18 = 0.4f;
    GLfloat radius18 = 0.015f;
    int triangleAmount18 = 100;

    GLfloat twicePi18 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x18, y18);
    for (i18 = 0; i18 <= triangleAmount18; i18++)
    {
        glVertex2f(x18 + (radius18 * cos(i18 * twicePi18 / triangleAmount18)),
                   y18 + (radius18 * sin(i18 * twicePi18 / triangleAmount18)));
    }
    glEnd();

    // tree 2 quad
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.25f, 0.2f);
    glEnd();

    // tree 2 leaf 1

    int circleSteps;

    GLfloat coordX = 0.22f;
    GLfloat coordY = 0.2f;
    GLfloat circleSize = 0.1f;
    int stepAmount = 100;

    GLfloat fullTurn = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(coordX, coordY);
    for (circleSteps = 0; circleSteps <= stepAmount; circleSteps++)
    {
        glVertex2f(coordX + (circleSize * cos(circleSteps * fullTurn / stepAmount)),
                   coordY + (circleSize * sin(circleSteps * fullTurn / stepAmount)));
    }
    glEnd();

    // tree 2 leaf 2

    int loopIndex;

    GLfloat refX = 0.32f;
    GLfloat refY = 0.2f;
    GLfloat radShape = 0.115f;
    int shapeSegments = 100;

    GLfloat cycleAngle = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(refX, refY);
    for (loopIndex = 0; loopIndex <= shapeSegments; loopIndex++)
    {
        glVertex2f(refX + (radShape * cos(loopIndex * cycleAngle / shapeSegments)),
                   refY + (radShape * sin(loopIndex * cycleAngle / shapeSegments)));
    }
    glEnd();

    // tree 2 leaf 3

    int loopCounter;

    GLfloat px = 0.22f;
    GLfloat py = 0.35f;
    GLfloat radC = 0.1f;
    int polygonSides = 100;

    GLfloat totalRadian = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(px, py);
    for (loopCounter = 0; loopCounter <= polygonSides; loopCounter++)
    {
        glVertex2f(px + (radC * cos(loopCounter * totalRadian / polygonSides)),
                   py + (radC * sin(loopCounter * totalRadian / polygonSides)));
    }
    glEnd();

    // branch 2nd tree

    // 1st branch for tree 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.3f, -0.25f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.02f);
    glEnd();

    // 1st branch 1 leaf 1 for tree 2
    int i1;

    GLfloat x1 = 0.45;
    GLfloat y1 = 0.075f;
    GLfloat radius1 = 0.1f;
    int triangleAmount1 = 100; // # of lines used to draw circle

    GLfloat twicePi1 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1); // center of circle
    for (i1 = 0; i1 <= triangleAmount1; i1++)
    {
        glVertex2f(x1 + (radius1 * cos(i1 * twicePi1 / triangleAmount1)),
                   y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1)));
    }
    glEnd();

    // 1st branch 1 leaf 2 for tree 2

    int i2;

    GLfloat x2 = 0.43f;
    GLfloat y2 = 0.23f;
    GLfloat radius2 = 0.11f;
    int triangleAmount2 = 100;

    GLfloat twicePi2 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x2, y2);
    for (i2 = 0; i2 <= triangleAmount2; i2++)
    {
        glVertex2f(x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
                   y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2)));
    }
    glEnd();

    // tree 2 leaf 1 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.22f, 0.2f);
    glVertex2f(0.22f, 0.17f);

    glEnd();

    // tree 2 leaf 1 mango 1
    int i20;

    GLfloat x20 = 0.22f;
    GLfloat y20 = 0.16f;
    GLfloat radius20 = 0.015f;
    int triangleAmount20 = 100;

    GLfloat twicePi20 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x20, y20);
    for (i20 = 0; i20 <= triangleAmount20; i20++)
    {
        glVertex2f(x20 + (radius20 * cos(i20 * twicePi20 / triangleAmount20)),
                   y20 + (radius20 * sin(i20 * twicePi20 / triangleAmount20)));
    }
    glEnd();

    // tree 2 leaf 2 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.33f, 0.2f);
    glVertex2f(0.33f, 0.24f);

    glEnd();

    // tree 2 leaf 2 mango 1
    int i21;

    GLfloat x21 = 0.33f;
    GLfloat y21 = 0.18f;
    GLfloat radius21 = 0.015f;
    int triangleAmount21 = 100;

    GLfloat twicePi21 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x21, y21);
    for (i21 = 0; i21 <= triangleAmount21; i21++)
    {
        glVertex2f(x21 + (radius21 * cos(i21 * twicePi21 / triangleAmount21)),
                   y21 + (radius21 * sin(i21 * twicePi21 / triangleAmount21)));
    }
    glEnd();

    // tree 2 leaf 3 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.22f, 0.35f);
    glVertex2f(0.22f, 0.38f);

    glEnd();

    // tree 2 leaf 3 mango 1
    int i22;

    GLfloat x22 = 0.22f;
    GLfloat y22 = 0.35f;
    GLfloat radius22 = 0.015f;
    int triangleAmount22 = 100;

    GLfloat twicePi22 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x22, y22);
    for (i22 = 0; i22 <= triangleAmount22; i22++)
    {
        glVertex2f(x22 + (radius22 * cos(i22 * twicePi22 / triangleAmount22)),
                   y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22)));
    }
    glEnd();

    // 3rd tree
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.2);
    glVertex2f(0.875f, -0.5f);
    glVertex2f(0.92f, -0.5f);
    glVertex2f(0.92f, 0.25f);
    glVertex2f(0.875f, 0.25f);
    glEnd();

    // 3rd tree leaf 1

    int i11;

    GLfloat x11 = 0.85f;
    GLfloat y11 = 0.3f;
    GLfloat radius11 = 0.1f;
    int triangleAmount11 = 100;

    GLfloat twicePi11 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x11, y11);
    for (i11 = 0; i11 <= triangleAmount11; i11++)
    {
        glVertex2f(x11 + (radius11 * cos(i11 * twicePi11 / triangleAmount11)),
                   y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11)));
    }
    glEnd();

    // 3rd tree 2nd leaf
    int i12;

    GLfloat x12 = 0.94f;
    GLfloat y12 = 0.31f;
    GLfloat radius12 = 0.1f;
    int triangleAmount12 = 100;

    GLfloat twicePi12 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x12, y12);
    for (i12 = 0; i12 <= triangleAmount12; i12++)
    {
        glVertex2f(x12 + (radius12 * cos(i12 * twicePi12 / triangleAmount12)),
                   y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12)));
    }
    glEnd();

    // 3rd tree 3rd leaf
    int i13;

    GLfloat x13 = 0.9f;
    GLfloat y13 = 0.43f;
    GLfloat radius13 = 0.1f;
    int triangleAmount13 = 100;

    GLfloat twicePi13 = 2.0f * PI;

    glColor3f(0.1, 0.4, 0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x13, y13);
    for (i13 = 0; i13 <= triangleAmount13; i13++)
    {
        glVertex2f(x13 + (radius13 * cos(i13 * twicePi13 / triangleAmount13)),
                   y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13)));
    }
    glEnd();

    // tree 3 leaf 1 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.85f, 0.33f);

    glEnd();

    // tree 3 leaf 1 mango 1

    int i23;

    GLfloat x23 = 0.85f;
    GLfloat y23 = 0.28f;
    GLfloat radius23 = 0.0151f;
    int triangleAmount23 = 100;

    GLfloat twicePi23 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x23, y23);
    for (i23 = 0; i23 <= triangleAmount23; i23++)
    {
        glVertex2f(x23 + (radius23 * cos(i23 * twicePi23 / triangleAmount23)),
                   y23 + (radius23 * sin(i23 * twicePi23 / triangleAmount23)));
    }
    glEnd();

    // tree 3 leaf 2 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.94f, 0.35f);
    glVertex2f(0.94f, 0.32f);

    glEnd();

    // tree 3 leaf 2 mango 1

    int i24;

    GLfloat x24 = 0.94f;
    GLfloat y24 = 0.3f;
    GLfloat radius24 = 0.0115f;
    int triangleAmount24 = 100;

    GLfloat twicePi24 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x24, y24);
    for (i24 = 0; i24 <= triangleAmount24; i24++)
    {
        glVertex2f(x24 + (radius24 * cos(i24 * twicePi24 / triangleAmount24)),
                   y24 + (radius24 * sin(i24 * twicePi24 / triangleAmount24)));
    }
    glEnd();

    // tree 3 leaf 3 line 1
    glBegin(GL_LINES);
    glColor3f(0.4, 0.3, 0.2);

    glVertex2f(0.9f, 0.49f);
    glVertex2f(0.9f, 0.46f);

    glEnd();

    // tree 3 leaf 3 mango 1
    int i25;

    GLfloat x25 = 0.9f;
    GLfloat y25 = 0.44f;
    GLfloat radius25 = 0.015f;
    int triangleAmount25 = 100;

    GLfloat twicePi25 = 2.0f * PI;

    glColor3f(1.0, 0.84, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x25, y25);
    for (i25 = 0; i25 <= triangleAmount25; i25++)
    {
        glVertex2f(x25 + (radius25 * cos(i25 * twicePi25 / triangleAmount25)),
                   y25 + (radius25 * sin(i25 * twicePi25 / triangleAmount25)));
    }
    glEnd();

    // road
    glBegin(GL_QUADS);
    glColor3f(0.38, 0.38, 0.38);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.5f);
    glEnd();

    // road diveder 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0, -0.69f);
    glVertex2f(-1.0f, -0.71);
    glVertex2f(-0.9f, -0.71f);
    glVertex2f(-0.9f, -0.69f);
    glEnd();

    // road diveder 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.85f, -0.69f);
    glVertex2f(-0.85f, -0.71f);
    glVertex2f(-0.75f, -0.71f);
    glVertex2f(-0.75f, -0.69f);
    glEnd();

    // road diveder 3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.7f, -0.69f);
    glVertex2f(-0.7f, -0.71f);
    glVertex2f(-0.6f, -0.71f);
    glVertex2f(-0.6f, -0.69f);
    glEnd();

    // road diveder 4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.55, -0.69f);
    glVertex2f(-0.55f, -0.71f);
    glVertex2f(-0.45f, -0.71f);
    glVertex2f(-0.45f, -0.69f);
    glEnd();

    // road diveder 5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.4, -0.69f);
    glVertex2f(-0.4f, -0.71f);
    glVertex2f(-0.3f, -0.71f);
    glVertex2f(-0.3f, -0.69f);
    glEnd();

    // road diveder 6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.25, -0.69f);
    glVertex2f(-0.25f, -0.71f);
    glVertex2f(-0.15f, -0.71f);
    glVertex2f(-0.15f, -0.69f);
    glEnd();
    // road diveder 7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.1, -0.69f);
    glVertex2f(-0.1f, -0.71f);
    glVertex2f(0.0f, -0.71f);
    glVertex2f(0.0f, -0.69f);
    glEnd();
    // road diveder 8
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.05, -0.69f);
    glVertex2f(0.05f, -0.71f);
    glVertex2f(0.15f, -0.71f);
    glVertex2f(0.15f, -0.69f);
    glEnd();
    // road diveder 9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.2, -0.69f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.3f, -0.71f);
    glVertex2f(0.3f, -0.69f);
    glEnd();
    // road diveder 10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.35, -0.69f);
    glVertex2f(0.35f, -0.71f);
    glVertex2f(0.45f, -0.71f);
    glVertex2f(0.45f, -0.69f);
    glEnd();
    // road diveder 11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.5, -0.69f);
    glVertex2f(0.5f, -0.71f);
    glVertex2f(0.6f, -0.71f);
    glVertex2f(0.6f, -0.69f);
    glEnd();
    // road diveder 12
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.65, -0.69f);
    glVertex2f(0.65f, -0.71f);
    glVertex2f(0.75f, -0.71f);
    glVertex2f(0.75f, -0.69f);
    glEnd();
    // road diveder 13
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.8, -0.69f);
    glVertex2f(0.8f, -0.71f);
    glVertex2f(0.9f, -0.71f);
    glVertex2f(0.9f, -0.69f);
    glEnd();
    // road diveder 14
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.95, -0.69f);
    glVertex2f(0.95f, -0.71f);
    glVertex2f(1.0f, -0.71f);
    glVertex2f(1.0f, -0.69f);
    glEnd();

    // Truck1 Body

    glPushMatrix();
    glTranslatef(position_track1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.4, 0.0);
    glVertex2f(-0.6f, -0.71f);
    glVertex2f(-0.6f, -0.85f);
    glVertex2f(-0.85f, -0.85f);
    glVertex2f(-0.85f, -0.71f);
    glEnd();

    // Truck1 Cabin
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.85f);
    glVertex2f(-0.56f, -0.85f);
    glVertex2f(-0.56f, -0.8f);
    glVertex2f(-0.58f, -0.75f);
    glEnd();

    // truck 1 light
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);

    glVertex2f(-0.56f, -0.83f);
    glVertex2f(-0.56f, -0.8f);
    glVertex2f(-0.49f, -0.79f);
    glVertex2f(-0.49f, -0.88f);

    glEnd();

    // Truck1 Cabin door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.593f, -0.775f);
    glVertex2f(-0.593f, -0.83f);
    glVertex2f(-0.568f, -0.83f);
    glVertex2f(-0.568f, -0.8f);
    glVertex2f(-0.58f, -0.775f);
    glEnd();

    // truck1 wheel 1
    int i14;

    GLfloat x14 = -0.78f;
    GLfloat y14 = -0.85f;
    GLfloat radius14 = 0.03f;
    int triangleAmount14 = 100;

    GLfloat twicePi14 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x14, y14);
    for (i14 = 0; i14 <= triangleAmount14; i14++)
    {
        glVertex2f(x14 + (radius14 * cos(i14 * twicePi14 / triangleAmount14)),
                   y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14)));
    }
    glEnd();

    // truck1 wheel 2
    int i15;

    GLfloat x15 = -0.78f;
    GLfloat y15 = -0.85f;
    GLfloat radius15 = 0.015f;
    int triangleAmount15 = 100;

    GLfloat twicePi15 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x15, y15);
    for (i15 = 0; i15 <= triangleAmount15; i15++)
    {
        glVertex2f(x15 + (radius15 * cos(i15 * twicePi15 / triangleAmount15)),
                   y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15)));
    }
    glEnd();

    // truck1 wheel 3
    int i16;

    GLfloat x16 = -0.61f;
    GLfloat y16 = -0.85f;
    GLfloat radius16 = 0.03f;
    int triangleAmount16 = 100;

    GLfloat twicePi16 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x16, y16);
    for (i16 = 0; i16 <= triangleAmount16; i16++)
    {
        glVertex2f(x16 + (radius16 * cos(i16 * twicePi16 / triangleAmount16)),
                   y16 + (radius16 * sin(i16 * twicePi16 / triangleAmount16)));
    }
    glEnd();

    // truck1 wheel 4
    int i17;

    GLfloat x17 = -0.61f;
    GLfloat y17 = -0.85f;
    GLfloat radius17 = 0.015f;
    int triangleAmount17 = 100;

    GLfloat twicePi17 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x17, y17);
    for (i17 = 0; i17 <= triangleAmount17; i17++)
    {
        glVertex2f(x17 + (radius17 * cos(i17 * twicePi17 / triangleAmount17)),
                   y17 + (radius17 * sin(i17 * twicePi17 / triangleAmount17)));
    }
    glEnd();

    glPopMatrix();

    // 2nd truck

    glPushMatrix();
    glTranslatef(position_track2, 0.0f, 0.0f);

    // Truck2 Body
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.4);
    glVertex2f(0.6f, -0.51f);
    glVertex2f(0.6f, -0.65f);
    glVertex2f(0.85f, -0.65f);
    glVertex2f(0.85f, -0.51f);
    glEnd();

    // Truck2 Cabin
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.4);
    glVertex2f(0.6f, -0.55f);
    glVertex2f(0.6f, -0.65f);
    glVertex2f(0.56f, -0.65f);
    glVertex2f(0.56f, -0.6f);
    glVertex2f(0.58f, -0.55f);
    glEnd();

    // truck 2 light
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);

    glVertex2f(0.56f, -0.63f);
    glVertex2f(0.56f, -0.6f);
    glVertex2f(0.49f, -0.59f);
    glVertex2f(0.49f, -0.68f);

    glEnd();

    // Truck1 Cabin door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.593f, -0.575f);
    glVertex2f(0.593f, -0.63f);
    glVertex2f(0.568f, -0.63f);
    glVertex2f(0.568f, -0.6f);
    glVertex2f(0.58f, -0.575f);
    glEnd();

    // truck2 wheel 1
    int i14_2;

    GLfloat x14_2 = 0.78f;
    GLfloat y14_2 = -0.65f;
    GLfloat radius14_2 = 0.03f;
    int triangleAmount14_2 = 100;

    GLfloat twicePi14_2 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x14_2, y14_2);
    for (i14_2 = 0; i14_2 <= triangleAmount14_2; i14_2++)
    {
        glVertex2f(x14_2 + (radius14_2 * cos(i14_2 * twicePi14_2 / triangleAmount14_2)),
                   y14_2 + (radius14_2 * sin(i14_2 * twicePi14_2 / triangleAmount14_2)));
    }
    glEnd();

    // truck2 wheel 2
    int i15_2;

    GLfloat x15_2 = 0.78f;
    GLfloat y15_2 = -0.65f;
    GLfloat radius15_2 = 0.015f;
    int triangleAmount15_2 = 100;

    GLfloat twicePi15_2 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x15_2, y15_2);
    for (i15_2 = 0; i15_2 <= triangleAmount15_2; i15_2++)
    {
        glVertex2f(x15_2 + (radius15_2 * cos(i15_2 * twicePi15_2 / triangleAmount15_2)),
                   y15_2 + (radius15_2 * sin(i15_2 * twicePi15_2 / triangleAmount15_2)));
    }
    glEnd();

    // truck2 wheel 3
    int i16_2;

    GLfloat x16_2 = 0.61f;
    GLfloat y16_2 = -0.65f;
    GLfloat radius16_2 = 0.03f;
    int triangleAmount16_2 = 100;

    GLfloat twicePi16_2 = 2.0f * PI;

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x16_2, y16_2);
    for (i16_2 = 0; i16_2 <= triangleAmount16_2; i16_2++)
    {
        glVertex2f(x16_2 + (radius16_2 * cos(i16_2 * twicePi16_2 / triangleAmount16_2)),
                   y16_2 + (radius16_2 * sin(i16_2 * twicePi16_2 / triangleAmount16_2)));
    }
    glEnd();

    // truck2 wheel 4
    int i17_2;

    GLfloat x17_2 = 0.61f;
    GLfloat y17_2 = -0.65f;
    GLfloat radius17_2 = 0.015f;
    int triangleAmount17_2 = 100;

    GLfloat twicePi17_2 = 2.0f * PI;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x17_2, y17_2);
    for (i17_2 = 0; i17_2 <= triangleAmount17_2; i17_2++)
    {
        glVertex2f(x17_2 + (radius17_2 * cos(i17_2 * twicePi17_2 / triangleAmount17_2)),
                   y17_2 + (radius17_2 * sin(i17_2 * twicePi17_2 / triangleAmount17_2)));
    }
    glEnd();

    glPopMatrix();

    glFlush();
}

void drawLandRiverNight()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    // SKY
    glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    glColor3f(0.027, 0.000, 0.345); //
    glVertex2f(-1.0f, 0.45f);       // D
    glVertex2f(-1.0f, 1.0f);        // E
    glVertex2f(1.0f, 1.0f);         // G
    glVertex2f(1.0f, 0.65f);

    glEnd();

    glPointSize(3.0f); // Set the size of the stars
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.7f, 0.8f); // Star 1
    glVertex2f(0.3f, 0.6f);  // Star 2
    glVertex2f(-0.1f, 0.3f); // Star 3
    glVertex2f(0.6f, 0.9f);  // Star 4
    glVertex2f(-0.9f, 0.4f); // Star 5
    glVertex2f(0.2f, 0.7f);  // Star 6
    glVertex2f(-0.5f, 0.9f); // Star 7
    glVertex2f(0.8f, 0.5f);  // Star 8
    glVertex2f(-0.3f, 0.6f); // Star 9
    glVertex2f(0.1f, 0.85f);
    glVertex2f(-0.4f, 0.75f);  // Star 11
    glVertex2f(0.4f, 0.8f);    // Star 12
    glVertex2f(-0.8f, 0.6f);   // Star 13
    glVertex2f(0.7f, 0.7f);    // Star 14
    glVertex2f(-0.2f, 0.9f);   // Star 15
    glVertex2f(0.5f, 0.55f);   // Star 16
    glVertex2f(-0.6f, 0.5f);   // Star 17
    glVertex2f(0.9f, 0.85f);   // Star 18
    glVertex2f(-0.7f, 0.95f);  // Star 19
    glVertex2f(0.0f, 0.65f);   // Star 20
    glVertex2f(-0.85f, 0.7f);  // Star 21
    glVertex2f(0.15f, 0.95f);  // Star 22
    glVertex2f(-0.25f, 0.55f); // Star 23
    glVertex2f(0.35f, 0.75f);  // Star 24
    glVertex2f(-0.95f, 0.85f); // Star 25
    glVertex2f(0.55f, 0.65f);  // Star 26
    glVertex2f(-0.15f, 0.8f);  // Star 27
    glVertex2f(0.75f, 0.9f);   // Star 28
    glVertex2f(-0.65f, 0.65f); // Star 29
    glVertex2f(0.45f, 0.5f);
    glEnd();

    // moon

    glPushMatrix();
    glTranslatef(position_land_moon, 0.0f, 0.0f);
    int j;

    GLfloat a = -0.8f;
    GLfloat b = 0.8f;
    GLfloat radius_moon = 0.1f;
    int triangleAmount_moon = 100; // # of lines used to draw circle

    GLfloat twicePi_moon = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b); // center of circle
    for (j = 0; j <= triangleAmount_moon; j++)
    {
        glVertex2f(a + (radius_moon * cos(j * twicePi_moon / triangleAmount_moon)),
                   b + (radius_moon * sin(j * twicePi_moon / triangleAmount_moon)));
    }
    glEnd();
    glPopMatrix();

    // Road and ....
    glBegin(GL_QUADS);
    glColor3f(0.361, 0.251, 0.200); //
    glVertex2f(-1.0f, 0.0f);        // a
    glVertex2f(1.0f, 0.0f);         // b
    glVertex2f(1.0f, -1.0f);        // c
    glVertex2f(-1.0f, -1.0f);       // d
    glEnd();

    // land--1
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.7f, 0.0f);        // a
    glVertex2f(-0.31f, 0.0f);       // b
    glVertex2f(-0.31f, -0.13f);     // c
    glVertex2f(-0.8f, -0.15f);      // d
    glEnd();

    // land--2
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.3f, 0.0f);        // a
    glVertex2f(-0.12f, 0.0f);       // b
    glVertex2f(-0.15f, -0.25f);     // c
    glVertex2f(-0.3f, -0.4f);       // d
    glEnd();

    // land--3
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.11f, 0.0f);       // a
    glVertex2f(0.2f, 0.0f);         // b
    glVertex2f(0.19f, -0.24f);      // c
    glVertex2f(-0.13f, -0.24f);     // d
    glEnd();

    // land--4
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(0.21f, 0.0f);        // a
    glVertex2f(0.41f, 0.0f);        // b
    glVertex2f(0.47f, -0.24f);      // c
    glVertex2f(0.21f, -0.24f);      // d
    glEnd();

    // land---5
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(0.43f, 0.0f);        // a
    glVertex2f(1.0f, 0.0f);         // b
    glVertex2f(1.0f, -0.6f);        // c
    glVertex2f(0.56f, -0.5f);       // d
    glEnd();

    // land--6
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.81f, -0.17f);     // a
    glVertex2f(-0.61f, -0.16f);     // b
    glVertex2f(-0.61f, -0.55f);     // c
    glVertex2f(-1.0f, -0.7f);       // d
    glEnd();

    // land--7
    glBegin(GL_POLYGON);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.6f, -0.16f);      // a
    glVertex2f(-0.31f, -0.14f);     // b
    glVertex2f(-0.31f, -0.41f);     // c
    glVertex2f(-0.38f, -0.51f);     // d
    glVertex2f(-0.6f, -0.55f);      // e
    glEnd();

    // land--8
    glBegin(GL_QUADS);
    glColor3f(0.008, 0.188, 0.125); //
    glVertex2f(-0.13f, -0.25f);     // a
    glVertex2f(0.47f, -0.25f);      // b
    glVertex2f(0.54f, -0.5f);       // c
    glVertex2f(-0.37f, -0.51f);     // d

    glEnd();

    // River
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.6); //
    glVertex2f(-1.0f, 0.0f);  // a
    glVertex2f(-0.7f, 0.0f);  // b
    glVertex2f(-1.0f, -0.7f); // c

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.6); //
    glVertex2f(-1.0f, 0.0f);  // a
    glVertex2f(-1.0f, 0.45f); // b
    glVertex2f(1.0f, 0.65f);  // c
    glVertex2f(1.0f, 0.0f);   // d

    glEnd();

    // Boat 1
    glPushMatrix();
    glTranslatef(position_boat1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.0, 0.0); //
    glVertex2f(-0.15f, 0.3f); // a
    glVertex2f(0.15f, 0.3f);  // b
    glVertex2f(0.08f, 0.2f);  // c
    glVertex2f(-0.08f, 0.2f); // d

    glEnd();

    // Roof
    glBegin(GL_QUADS);
    glColor3f(0.337, 0.301, 0.043); //
    glVertex2f(-0.08f, 0.3f);       // a
    glVertex2f(0.08f, 0.3f);        // b
    glVertex2f(0.08f, 0.35f);       // c
    glVertex2f(-0.08f, 0.35f);      // d
    glEnd();

    // pal 1
    glBegin(GL_QUADS);
    glColor3f(0.458, 0.121, 0.419); //
    glVertex2f(0.0f, 0.55f);        // a
    glVertex2f(0.1f, 0.46f);        // b
    glVertex2f(0.1f, 0.4f);         // c
    glVertex2f(0.0f, 0.35f);        // d

    glEnd();

    // BoiTHA 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.1f, 0.4f);
    glEnd();
    glPopMatrix();

    // Boat 2---still
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); //
    glVertex2f(0.58f, 0.05f); // a
    glVertex2f(0.72f, 0.05f); // b
    glVertex2f(0.8f, 0.15f);  // c
    glVertex2f(0.5f, 0.15f);  // d

    glEnd();

    // Bambo
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.05f);
    glVertex2f(0.45f, 0.2f);
    glEnd();

    // Dori
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.53f, 0.15f);
    glEnd();

    // Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.392, 0.176, 0.105); //
    glVertex2f(0.58f, 0.15f);       // a
    glVertex2f(0.72f, 0.15f);       // b
    glVertex2f(0.72f, 0.19f);       // c
    glVertex2f(0.58f, 0.19f);       // d
    glEnd();

    // Boat 3
    glPushMatrix();
    glTranslatef(position_boat3, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.0, 0.0);  //
    glVertex2f(-0.9f, 0.18f);  // a
    glVertex2f(-0.76f, 0.18f); // b
    glVertex2f(-0.68f, 0.28f); // c
    glVertex2f(-0.98f, 0.28f); // d
    glEnd();

    // Boitha
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.99f, 0.12f);
    glVertex2f(-0.94f, 0.35f);
    glEnd();

    // Boat Roof
    glBegin(GL_QUADS);
    glColor3f(0.525, 0.094, 0.450); //
    glVertex2f(-0.9f, 0.28f);       // a
    glVertex2f(-0.76f, 0.28f);      // b
    glVertex2f(-0.76f, 0.32f);      // c
    glVertex2f(-0.9f, 0.32f);       // d
    glEnd();
    glPopMatrix();

    // tree--1
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.8f, -0.45f);      // a
    glVertex2f(-0.81f, -0.45f);     // b
    glVertex2f(-0.5f, 0.7f);        // c
    glVertex2f(-0.49f, 0.7f);       // d

    glEnd();

    // Tree-- 2
    glBegin(GL_QUADS);
    glColor3f(0.345, 0.231, 0.054); //
    glVertex2f(-0.7f, -0.45f);      // a
    glVertex2f(-0.71f, -0.45f);     // b
    glVertex2f(-0.7f, 0.7f);        // c
    glVertex2f(-0.71f, 0.7f);       // d

    glEnd();

    // leaf for tree22
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

    // leaf for tree11
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

    // thelagari

    // circle 2
    int n;
    GLfloat a4 = 0.1f, b4 = -0.64f, radius4 = 0.1f;
    int triangleAmount4 = 100;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a4, b4);
    for (n = 0; n <= triangleAmount4; n++)
    {
        glVertex2f(a4 + (radius4 * cos(n * twicePi4 / triangleAmount4)),
                   b4 + (radius4 * sin(n * twicePi4 / triangleAmount4)));
    }
    glEnd();

    // inside circle 2
    int o;
    GLfloat a5 = 0.1f, b5 = -0.64f, radius5 = 0.08f;
    int triangleAmount5 = 100;
    GLfloat twicePi5 = 2.0f * PI;
    glColor3f(0.361, 0.251, 0.200);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a5, b5);
    for (o = 0; o <= triangleAmount5; o++)
    {
        glVertex2f(a5 + (radius5 * cos(o * twicePi5 / triangleAmount5)),
                   b5 + (radius5 * sin(o * twicePi5 / triangleAmount5)));
    }
    glEnd();

    // Rod
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

    // quad

    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.95f);       // a
    glVertex2f(0.6f, -0.7f);        // b
    glVertex2f(0.55f, -0.4f);       // c
    glVertex2f(-0.2f, -0.75f);      // d
    glEnd();

    // Wood in Thelagari
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

    // Holder back
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(-0.2, -0.98f);       // a
    glVertex2f(-0.21f, -0.98f);     // b
    glVertex2f(-0.21f, -0.73f);     // c
    glVertex2f(-0.2f, -0.73f);      // d
    glEnd();

    // holder front
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.75f);       // a
    glVertex2f(0.62f, -0.75f);      // b
    glVertex2f(0.538f, -0.35f);     // c
    glVertex2f(0.501f, -0.35f);     // d
    glEnd();

    // holder 1
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.6f, -0.7f);        // a
    glVertex2f(0.75f, -0.61f);      // b
    glVertex2f(0.75f, -0.58f);      // c
    glVertex2f(0.59f, -0.67f);      // d
    glEnd();

    // holder 2
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.243, 0.137); //
    glVertex2f(0.55f, -0.43f);      // a
    glVertex2f(0.7f, -0.37f);       // b
    glVertex2f(0.7f, -0.35f);       // c
    glVertex2f(0.54f, -0.4f);       // d
    glEnd();

    // circle 1
    int l;
    GLfloat a2 = 0.3f, b2 = -0.85f, radius2 = 0.1f;
    int triangleAmount2 = 100;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a2, b2);
    for (l = 0; l <= triangleAmount2; l++)
    {
        glVertex2f(a2 + (radius2 * cos(l * twicePi2 / triangleAmount2)),
                   b2 + (radius2 * sin(l * twicePi2 / triangleAmount2)));
    }
    glEnd();

    // inside the circle 1
    int m;
    GLfloat a3 = 0.3f, b3 = -0.85f, radius3 = 0.08f;
    int triangleAmount3 = 100;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3f(0.361, 0.251, 0.200);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a3, b3);
    for (m = 0; m <= triangleAmount3; m++)
    {
        glVertex2f(a3 + (radius3 * cos(m * twicePi3 / triangleAmount3)),
                   b3 + (radius3 * sin(m * twicePi3 / triangleAmount3)));
    }
    glEnd();

    // small cirlcle inside circle 1
    int q;
    GLfloat a7 = 0.3f, b7 = -0.85f, radius7 = 0.02f;
    int triangleAmount7 = 100;
    GLfloat twicePi7 = 2.0f * PI;
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a7, b7);
    for (q = 0; q <= triangleAmount7; q++)
    {
        glVertex2f(a7 + (radius7 * cos(q * twicePi7 / triangleAmount7)),
                   b7 + (radius7 * sin(q * twicePi7 / triangleAmount7)));
    }
    glEnd();

    // ROd for circle 1
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

void sound()
{
    PlaySound("music.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1000);
    glutCreateWindow("Frame Switching with Right Arrow Key");
    glutDisplayFunc(display);

    //call keybord and mouse clickable function
    glutSpecialFunc(SpecialInput_keybord);
    glutMouseFunc(handleMouse_mouse);


    // village
    glutTimerFunc(15, update_village_cloud1, 0);
    glutTimerFunc(15, update_village_cloud2, 0);
    glutTimerFunc(15, update_village_sun, 0);

    // land
    glutTimerFunc(15, update_land_cloud1, 0);
    glutTimerFunc(15, update_land_cloud2, 0);
    glutTimerFunc(15, update_land_sun, 0);
    glutTimerFunc(15, update_boat1, 0);
    glutTimerFunc(15, update_boat3, 0);

    // sona mosq
    glutTimerFunc(15, update_mosq_cloud1, 0);
    glutTimerFunc(15, update_mosq_cloud2, 0);
    glutTimerFunc(15, update_mosq_sun, 0);
    glutTimerFunc(15, update_track1, 0);
    glutTimerFunc(15, update_track2, 0);

    // land night
    glutTimerFunc(15, update_land_moon, 0);
    glutTimerFunc(15, update_boat1, 0);
    glutTimerFunc(15, update_boat3, 0);

    // night sona
    glutTimerFunc(15, update_mosq_moon, 0);
    glutTimerFunc(15, update_track1, 0);
    glutTimerFunc(15, update_track2, 0);

    // gram night
    glutTimerFunc(15, update_village_moon, 0);

    glutKeyboardFunc(keyboardInput);
    glClearColor(1.0, 1.0, 1.0, 1.0);

    sound();
    glutMainLoop();
    return 0;
}
