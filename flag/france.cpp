#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 810, 0, 450);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0, 0, 0.4);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 450);
    glVertex2d(270, 450);
    glVertex2d(270, 0);
    
    glEnd();
    
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(540, 0);
    glVertex2d(540, 450);
    glVertex2d(810, 450);
    glVertex2d(810, 0);
    
    glEnd();
    
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800,450);
    glutCreateWindow("Flag of France");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
