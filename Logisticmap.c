#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

#define res        1                        
#define scrwidth   1000 * res                // screen width
#define scrheight  1000 * res                // screen height
#define pixelScale 0.5 / res	            // OpenGL pixel scale
#define GLSW       (scrwidth * pixelScale)  // OpenGL window width
#define GLSH       (scrheight * pixelScale) // OpenGL window height

#define maxr 			4
#define scalingfactor	(double)scrheight/1
#define multiplyx       (double)scrwidth/((maxr-1)*100)
#define detail       	5

typedef struct {
    int fr1, fr2; // frame 1 frame 2, to create constant frame rate
} time;
time T;

void pixel(int x, int y, int c) {
    int rgb[3];
    if (c == 0) { rgb[0] = 255; rgb[1] = 255; rgb[2] = 255; } // White
    if (c == 1) { rgb[0] = 0; rgb[1] = 0; rgb[2] = 0; } //Black 
    glColor3ub(rgb[0], rgb[1], rgb[2]);
    glBegin(GL_POINTS);
    glVertex2i(x * pixelScale + 2, y * pixelScale + 2);
    glEnd();
}

//formula
double calculateXnPlusOne(double r, double xx) {
    return r * xx * (1 - xx);
}

double xx = 0.8; //Between 0 and 1
double r = 1;
double rate = 0;
double xpos = 0;
double xnplusone = 0;

void calculateLogisticMap() {
	if(r < maxr - 0.01){
		r += 0.01;
		xpos += round(multiplyx*10)/10; //Round to 1 decimal place
		
		int i;
		for(i = 0; i < scrheight/detail; i++){
			double the = r * xnplusone * (1 - xnplusone);
			xnplusone = the;
			rate = (xnplusone + 1) / 2;
			pixel(xpos, rate*scalingfactor-scrheight/4, 0);
			printf("r: %f\n", r);
			
		}
	}
	
	
}

void drawmap() {
    calculateLogisticMap();
}

void display() {
    if (T.fr1 - T.fr2 >= 50) // only draw 20 frames/second
    {
        drawmap();
        T.fr2 = T.fr1;
        glutSwapBuffers();
        glutReshapeWindow(GLSW, GLSH); // prevent window scaling
    }
    
    T.fr1 = glutGet(GLUT_ELAPSED_TIME); // 1000 Milliseconds per second
    glutPostRedisplay();
}

void init() {
    drawmap();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(GLSW / 2, GLSH / 2);
    glutInitWindowSize(GLSW, GLSH);
    glutCreateWindow("");
    glPointSize(pixelScale); // pixel size
    gluOrtho2D(0, GLSW, 0, GLSH); // origin bottom left
    xnplusone = calculateXnPlusOne(r, xx);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

