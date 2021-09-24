#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 800, 0, 450);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1, 0.8, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 150);
    glVertex2d(800, 150);
    glVertex2d(800, 0);

    glEnd();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 150);
    glVertex2d(0, 300);
    glVertex2d(800, 300);
    glVertex2d(800, 150);

    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 300);
    glVertex2d(0, 450);
    glVertex2d(800, 450);
    glVertex2d(800, 300);

    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800,450);
    glutCreateWindow("Flag of Germany");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
