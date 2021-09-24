#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>

void init() {
    glClearColor(1.0, 0.0, 0.0, 0.0);
    //glOrtho(0, 800, 0, 450, -1, 1);
    gluOrtho2D(0, 800, 0, 450);
}

void display() {
    printf("Hello World!!!\n\n");
    system("pause");
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,1,0);
    //ABK
    glBegin(GL_POLYGON);
    glVertex2d(300, 150);
    glVertex2d(337.5, 237.5);
    glVertex2d(400, 200);
    glEnd();
    //BCD
    glBegin(GL_POLYGON);
    glVertex2d(337.5, 237.5);
    glVertex2d(275, 275);
    glVertex2d(362.5, 275);
    glEnd();
    //DEF
    glBegin(GL_POLYGON);
    glVertex2d(362.5, 275);
    glVertex2d(400, 350);
    glVertex2d(437.5, 275);
    glEnd();
    //FGH
    glBegin(GL_POLYGON);
    glVertex2d(437.5, 275);
    glVertex2d(525, 275);
    glVertex2d(457.5, 237.5);
    glEnd();
    //KHI
    glBegin(GL_POLYGON);
    glVertex2d(400, 200);
    glVertex2d(457.5, 237.5);
    glVertex2d(500, 150);
    glEnd();
    //BDFHK
    glBegin(GL_POLYGON);
    glVertex2d(337.5, 237.5);
    glVertex2d(362.5, 275);
    glVertex2d(437.5, 275);
    glVertex2d(457.5, 237.5);
    glVertex2d(400, 200);

    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800,450);
    glutCreateWindow("Flag of VietNam");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
