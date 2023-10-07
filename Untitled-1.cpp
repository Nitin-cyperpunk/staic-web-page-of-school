#include <GL/glut.h>// Includes the header file
// depending on the system in use, this may change)
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 0.0); // Set display-window color to white
glMatrixMode (GL_PROJECTION); // Set projection parameters
gluOrtho2D (0.0, 150.0, 0.0, 120.0);
}
void lineSegment (void)
{
glClear (GL_COLOR_BUFFER_BIT); // Clear display window
glColor3f (0.0, 0.0, 1.0); // Set line segment color to blue
glBegin (GL_LINES);
glVertex2i (110, 25); // Specify line-segment geometry.
glVertex2i (20, 100);
glEnd ( );
glFlush ( ); // Process all OpenGL routines as quickly as
possible.
}
void main (int argc, char** argv)
{
glutInit (&argc, argv); //Initialize GLUT
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // Set display mode
glutInitWindowPosition (50, 80); // Set top-left position of display-window
glutInitWindowSize (300, 200); // Set width and height of display-window
glutCreateWindow ("Draw Line"); // Create display window
init ( ); // Execute initialization procedure.
glutDisplayFunc (lineSegment); // Send graphics to display window.
glutMainLoop ( ); // Display everything and wait.
}