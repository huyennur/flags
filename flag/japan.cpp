#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <math.h>

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 800, 0, 450);
}

void display() {
    float radius;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    
    for(int i=0; i<360; i++) {
        radius = (i*3.14)/180;
        glVertex2d(400+100*cos(radius), 250+100*sin(radius));
    }
    
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800,450);
    glutCreateWindow("Flag of Japan");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
