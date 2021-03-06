#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;

void Idle()
{
    glutPostRedisplay();
}
void SHIP_PORT_AREA()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ///SKY
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2f(-1.0, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, .95f);
    glVertex2f(-1.0f, .95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 163, 255);
    glVertex2f(-1.0, .95f);
    glVertex2f(1.0f, .95f);
    glVertex2f(1.0f, .90f);
    glVertex2f(-1.0f, .90f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(51, 173, 255);
    glVertex2f(-1.0, .90f);
    glVertex2f(1.0f, .90f);
    glVertex2f(1.0f, .85f);
    glVertex2f(-1.0f, .85f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(77, 184, 255);
    glVertex2f(-1.0, .85f);
    glVertex2f(1.0f, .85f);
    glVertex2f(1.0f, .80f);
    glVertex2f(-1.0f, .80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2f(-1.0, .80f);
    glVertex2f(1.0f, .80f);
    glVertex2f(1.0f, .70f);
    glVertex2f(-1.0f, .70f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2f(-1.0, .70f);
    glVertex2f(1.0f, .70f);
    glVertex2f(1.0f, .60f);
    glVertex2f(-1.0f, .60f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 214, 255);
    glVertex2f(-1.0, .60f);
    glVertex2f(1.0f, .60f);
    glVertex2f(1.0f, .40f);
    glVertex2f(-1.0f, .40f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 224, 255);
    glVertex2f(-1.0, .40f);
    glVertex2f(1.0f, .40f);
    glVertex2f(1.0f, .15f);
    glVertex2f(-1.0f, .15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 235, 255);
    glVertex2f(-1.0, .15f);
    glVertex2f(1.0f, .15f);
    glVertex2f(1.0f, -.15f);
    glVertex2f(-1.0f, -.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 245, 255);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();


    ///WATER
    glBegin(GL_QUADS);
    glColor3ub(0, 191, 255);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 172, 230);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 204);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 134, 179);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 115, 153);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 96, 128);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 77, 102);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();
    glTranslatef(0.0f,-0.05f,0.0f); ///TRANSFORM
    glBegin(GL_QUADS);
    glColor3ub(0, 57, 77);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    ///SUN
    int is;
	GLfloat xs=-0.7f;
	GLfloat ys=0.7f;
	GLfloat radiuss =.20f;
	int triangleAmounts = 100;
	GLfloat twicePis = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 209, 26);
    glVertex2f(xs, ys);
    for(is = 0; is <= triangleAmounts; is++)
    {
        glVertex2f(xs+(radiuss*cos(is*twicePis/triangleAmounts)), ys+(radiuss*sin(is*twicePis/triangleAmounts)));
    }
	glEnd();
	///CLOUD
	float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();


	glTranslatef(0.5f,0.1,0);
	xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
    glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();

	glTranslatef(0.5f,-0.19,0);
	xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
    glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	glLoadIdentity();

    ///MILL
    glScalef(.35,.4, 1); ///SCALE
    glTranslatef(0.12f,1.0f,0.0f); ///TRANSLATE
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, -0.20f);
    glVertex2f( -0.05f, -0.20f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.05, -.20f);
    glVertex2f(0.05f, -.20f);
    glVertex2f(0.05f, -0.92f);
    glVertex2f(-0.05f, -0.92f);
    glEnd();
    glPushMatrix();
    glRotatef(i,0.0,0.0,0.1);
    int iw;
	GLfloat xw=-0.0f;
	GLfloat yw=0.0f;
	GLfloat radiusw =.05f;
	int triangleAmountw = 100;
	GLfloat twicePiw = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 153);
    glVertex2f(xw, yw);
    for(iw = 0; iw <= triangleAmounts; iw++)
    {
        glVertex2f(xw+(radiusw*cos(iw*twicePiw/triangleAmountw)), yw+(radiusw*sin(iw*twicePiw/triangleAmountw)));
    }
	glEnd();
	glScalef(.7,.7, 1); ///SCALE
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.225f, -0.225f);
    glVertex2f( 0.6f, -0.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.225f, -0.225f);
    glVertex2f( -0.6f, -0.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.3f);
    glVertex2f( 0.0f, 0.6f);
    glEnd();
    glPopMatrix();
    i+=-0.30f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    ///PORT
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2f(-1.0, .15f);
    glVertex2f(0.15f, .15f);
    glVertex2f(0.15f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 34);
    glVertex2f(-1.0, .40f);
    glVertex2f(-0.75f, .40f);
    glVertex2f(-0.75f, 0.15f);
    glVertex2f(-1.0f, 0.15f);
    glEnd();

    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(134, 89, 45);
    glVertex2f(-1.0, .30f); // top left
    glVertex2f(-0.70f, .30f); // top right
    glVertex2f(-0.70f, 0.15f); // bottom right
    glVertex2f(-1.0f, 0.15f); // bottom left
    glEnd();
    glLoadIdentity();

    ///SHIP 1
    glBegin(GL_QUADS);
    glColor3ub(179, 143, 0);
    glVertex2f(0.25, .25f); // top left
    glVertex2f(1.0f, .25f); // top right
    glVertex2f(1.0f, -0.2f); // bottom right
    glVertex2f(0.5f, -0.2f); // bottom left
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 235, 153);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(0.7f, 0.25f);
    glVertex2f(1.0f, 0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.44, -.1f); // top left
    glVertex2f(1.0f, -.1f); // top right
    glVertex2f(1.0f, -0.2f); // bottom right
    glVertex2f(0.5f, -0.2f); // bottom left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();

    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();

    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(0.40, .15f); // top left
    glVertex2f(0.45f, .15f); // top right
    glVertex2f(0.45f, 0.10f); // bottom right
    glVertex2f(0.40f, 0.10f); // bottom left
    glEnd();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    ///SHIP 2
    glBegin(GL_QUADS);
    glColor3ub(255, 112, 77);
    glVertex2f(-0.25, -.55f); // top left
    glVertex2f(-1.0f, -.55f); // top right
    glVertex2f(-1.0f, -1.0f); // bottom right
    glVertex2f(-0.5f, -1.0f); // bottom left
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 235, 153);
    glVertex2f(-1.0, -.35f); // top left
    glVertex2f(-.75, -.55f); // top right
    glVertex2f(-0.75f, -.55); // bottom right
    glVertex2f(-1.00f, -.55);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50, -1.0f); // top left
    glVertex2f(-1.0f, -1.0f); // top right
    glVertex2f(-1.0f, -0.90f); // bottom right
    glVertex2f(-0.44f, -0.90f); // bottom left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f); // top left
    glVertex2f(-0.92f, -.60f); // top right
    glVertex2f(-0.92f, -0.65f); // bottom right
    glVertex2f(-0.97f, -0.65f); // bottom left
    glEnd();

    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f); // top left
    glVertex2f(-0.92f, -.60f); // top right
    glVertex2f(-0.92f, -0.65f); // bottom right
    glVertex2f(-0.97f, -0.65f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f); // top left
    glVertex2f(-0.92f, -.60f); // top right
    glVertex2f(-0.92f, -0.65f); // bottom right
    glVertex2f(-0.97f, -0.65f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f); // top left
    glVertex2f(-0.92f, -.60f); // top right
    glVertex2f(-0.92f, -0.65f); // bottom right
    glVertex2f(-0.97f, -0.65f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f); // top left
    glVertex2f(-0.92f, -.60f); // top right
    glVertex2f(-0.92f, -0.65f); // bottom right
    glVertex2f(-0.97f, -0.65f); // bottom left
    glEnd();
    glTranslatef(0.1f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(179, 255, 255);
    glVertex2f(-0.97, -.60f);
    glVertex2f(-0.92f, -.60f);
    glVertex2f(-0.92f, -0.65f);
    glVertex2f(-0.97f, -0.65f);
    glEnd();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 540);
    glutCreateWindow("SHIP PORT AREA (17-35860-3)");
    glutDisplayFunc(SHIP_PORT_AREA);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}


