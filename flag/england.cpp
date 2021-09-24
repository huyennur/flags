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
    
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 195);
    glVertex2d(0, 255);
    glVertex2d(800, 255);
    glVertex2d(800, 195);
    
    glEnd();
    
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(370, 0);
    glVertex2d(370, 450);
    glVertex2d(430, 450);
    glVertex2d(430, 0);
    
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
