//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1
//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(200, 100); //atur sumbu x dan y
 glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
 glutCreateWindow("Kubus [ Adam Ramdan ]");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}
void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.5, 05, 1.0, 0.5);
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5

 //Awal Huruf L
 glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-5.0, 7.0, 0.0);
    glVertex3f(-5.0, -7.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-7.0, -7.0, 0.0);
    glVertex3f(-7.0, 7.0, 0.0);
    glEnd();
glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
    glVertex3f(5.0, -5.0, 0.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(5.0, -7.0, 0.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-5.0, -7.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0, -5.0, 0.0);
    glEnd();
//Akhir Huruf L

//Awal Kubus
    glBegin(GL_QUADS); //Depan
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(10.0, 10.0, 0.0);
    glVertex3f(10.0, -10.0, 0.0);
    glVertex3f(-10.0, -10.0, 0.0);
    glVertex3f(-10.0, 10.0, 0.0);
    glEnd();

    glBegin(GL_QUADS); //Belakang
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(10.0, 10.0, -20.0);
    glVertex3f(10.0, -10.0, -20.0);
    glVertex3f(-10.0, -10.0, -20.0);
    glVertex3f(-10.0, 10.0, -20.0);
    glEnd();

    glBegin(GL_QUADS);  //Samping Kanan
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(10.0, 10.0, 0.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(10.0, -10.0, 0.0);
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(10.0, -10.0, -20.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(10.0, 10.0, -20.0);
    glEnd();

    glBegin(GL_QUADS);  //Samping Kiri
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-10.0, 10.0, -20.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-10.0, -10.0, -20.0);
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-10.0, -10.0, 0.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-10.0, 10.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);  //Atas
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(10.0, 10.0, 0.0);
    glVertex3f(10.0, 10.0, -20.0);
    glVertex3f(-10.0, 10.0, -20.0);
    glVertex3f(-10.0, 10.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);  //Bawah
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(10.0, -10.0, -20.0);
    glVertex3f(10.0, -10.0, 0.0);
    glVertex3f(-10.0, -10.0, 0.0);
    glVertex3f(-10.0, -10.0, -20.0);
    glEnd();
//Akhir Kubus

//Awal Huruf I
 glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-31.0, 48.0, -10.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-31.0, 32.0, -10.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-29.0, 32.0, -10.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-29.0, 48.0, -10.0);
    glEnd();
//Akhir Huruf I

//Awal Kubus Atas Kiri
glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-40.0, 50.0, -10.0);
    glVertex3f(-40.0, 30.0, -10.0);
    glVertex3f(-20.0, 30.0, -10.0);
    glVertex3f(-20.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Belakang
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-40.0, 50.0, -30.0);
    glVertex3f(-40.0, 30.0, -30.0);
    glVertex3f(-20.0, 30.0, -30.0);
    glVertex3f(-20.0, 50.0, -30.0);
    glEnd();

    glBegin(GL_QUADS); //Kanan
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-20.0, 50.0, -10.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-20.0, 30.0, -10.0);
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-20.0, 30.0, -30.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-20.0, 50.0, -30.0);
    glEnd();

    glBegin(GL_QUADS); //Kiri
        glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-40.0, 50.0, -30.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-40.0, 30.0, -30.0);
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-40.0, 30.0, -10.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-40.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Atas
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-40.0, 50.0, -10.0);
    glVertex3f(-40.0, 50.0, -30.0);
    glVertex3f(-20.0, 50.0, -30.0);
    glVertex3f(-20.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Bawah
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-40.0, 30.0, -30.0);
    glVertex3f(-40.0, 30.0, -10.0);
    glVertex3f(-20.0, 30.0, -10.0);
    glVertex3f(-20.0, 30.0, -30.0);
    glEnd();
//Akhir Kubus Atas Kiri

//Awal Huruf Y
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
    glVertex3f(31.0, 40.0, -10.0);
    glVertex3f(31.0, 32.0, -10.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(29.0, 32.0, -10.0);
    glVertex3f(29.0, 40.0, -10.0);
    glEnd();
    glBegin(GL_POLYGON);
       glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0, 48.0, -10.0);
    glVertex3f(31.0, 40.0, -10.0);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(29.0, 40.0, -10.0);
    glVertex3f(23.0, 48.0, -10.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.5);
    glVertex3f(37.0, 48.0, -10.0);
    glVertex3f(31.0, 40.0, -10.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(29.0, 40.0, -10.0);
    glVertex3f(35.0, 48.0, -10.0);
    glEnd();
//Akhir Huruf Y

//Awal Kubus Kanan
glBegin(GL_QUADS); //Depan
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(40.0, 50.0, -10.0);
    glVertex3f(40.0, 30.0, -10.0);
    glVertex3f(20.0, 30.0, -10.0);
    glVertex3f(20.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Belakang
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(40.0, 50.0, -30.0);
    glVertex3f(40.0, 30.0, -30.0);
    glVertex3f(20.0, 30.0, -30.0);
    glVertex3f(20.0, 50.0, -30.0);
    glEnd();

    glBegin(GL_QUADS); //Kiri
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(20.0, 50.0, -10.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(20.0, 30.0, -10.0);
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(20.0, 30.0, -30.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(20.0, 50.0, -30.0);
    glEnd();

    glBegin(GL_QUADS); //Kanan
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(40.0, 50.0, -30.0);
        glColor3f(1.0, 1.0, 0.0);
    glVertex3f(40.0, 30.0, -30.0);
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(40.0, 30.0, -10.0);
        glColor3f(0.0, 1.0, 0.0);
    glVertex3f(40.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Atas
        glColor3f(0.0, 0.0, 1.0);
    glVertex3f(40.0, 50.0, -10.0);
    glVertex3f(40.0, 50.0, -30.0);
    glVertex3f(20.0, 50.0, -30.0);
    glVertex3f(20.0, 50.0, -10.0);
    glEnd();

    glBegin(GL_QUADS); //Bawah
        glColor3f(1.0, 0.0, 0.0);
    glVertex3f(40.0, 30.0, -30.0);
    glVertex3f(40.0, 30.0, -10.0);
    glVertex3f(20.0, 30.0, -10.0);
    glVertex3f(20.0, 30.0, -30.0);
    glEnd();
//Akhir Kubus Kiri

    glFlush();
    glutSwapBuffers();
}
//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(45.0, w / h, 1.0, 200.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -20.0, -110.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
 the x and y parameters are the mouse
 coordinates when the key was struck */
/* Program Keyboard Untuk Rotate & Translate [ Memutar & Menggeser ] */
switch (key)
{
    //Geser Or Translate
        case 'w':
        case 'W':
        glTranslated(0.0, 0.0, 3.0); //geser ke Dalam
     break;
        case 's':
        case 'S':
        glTranslated(0.0, 0.0, -3.0); //geser ke Luar
     break;
        case 'd':
        case 'D':
        glTranslated(3.0, 0.0, 0.0); //geser ke Kanan
     break;
        case 'a':
        case 'A':
        glTranslated(-3.0, 0.0, 0.0); //geser ke Kiri
     break;
        case 'o':
        case 'O':
        glTranslated(0.0, 3.0, 0.0); //geser ke Atas
     break;
        case 'u':
        case 'U':
        glTranslated(0.0, -3.0, 0.0); //geser ke Bawah
     break;

    //Rotate Or Memutar
        case 'j':
        case 'J':
        glRotatef(3.0, 1.0, 0.0, 0.0); /* rotate Atas */
    break;
        case 'k':
        case 'K':
        glRotatef(-3.0, 1.0, 0.0, 0.0); /* rotate Bawah */
    break;
        case 'r':
        case 'R':
        glRotatef(3.0, 0.0, 1.0, 0.0); /* rotate Kanan Sumbu Y */
    break;
        case 'l':
        case 'L':
        glRotatef(-3.0, 0.0, 1.0, 0.0); /* rotate Kiri Sumbu Y */
    break;
        case 'n':
        case 'N':
        glRotatef(-3.0, 0.0, 0.0, 1.0); /* rotate Kanan Sumbu Z */
    break;
        case 'b':
        case 'B':
        glRotatef(3.0, 0.0, 0.0, 1.0); /* rotate Kiri Sumbu Z */
    break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
