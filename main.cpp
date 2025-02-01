#include <GL/glut.h>
#include <iostream>
#include <GL/freeglut.h>
using namespace std;

// Prototipe function
void drawText(float x, float y, float z, string text, int fontSize);

// Pembuatan Variable global

// Kartesius True/False
bool varKartesius = false;

bool bukaPintu = false;

const int width = 600;
const int height = 800;

float rot = 101;

bool lampu = true;

float eyeX = 5;
float eyeY = 7;
float eyeZ = 25;

float lookX = 0;
float lookY = 7;
float lookZ = 0;

void makeObject(float merah = 0.0, float hijau = 0.0, float biru = 0.0, float kilauan = 0.0, string const &bentuk="balok") {
    glPushMatrix();
    // Atur properti material objek

    float mat_ambient[] = {merah*0.3, hijau*0.3, biru*0.3, 1.0f}; // Warna ambient
    float mat_diffuse[] = {merah, hijau, biru, 1.0f}; // Warna diffuse
    float mat_specular[] = {kilauan, kilauan, kilauan, 1.0f}; // Warna specular
    
    float mat_shininess[] = {35.0f}; // Tingkat kilauan
 
     // Atur material objek
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    // Transformasi objek
    glLineWidth(1);
    glTranslated(0.0, 0.0, 0.0);
    glRotated(0, 0, 0, 0);
    glScalef(1.0, 1.0, 1.0);

    
    if (bentuk == "balok"){
    glutSolidCube(1.0);	
	}
	if (bentuk == "kerucut"){
		
		glutSolidCone(0.5, 1.5, 30, 30);		
	}
    glPopMatrix();
}



void lapisanBawah1 (){
	glPushMatrix();
	glTranslatef(0.0, -2.0, 5.0);
	glScalef(10.0, 4.0, 10.0);
	makeObject(0.0f, 0.0f, 1.0f);
	glPopMatrix();
}

void lapisanBawah2 (){
	glPushMatrix();
	glTranslatef(0.0, -4.0, 5.0);
	glScalef(16.0, 1.0, 16.0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
}

void lapisanBawah3 (){
	glPushMatrix();
	glTranslatef(0.0, -4.5, 5.0);
	glScalef(25.0, 0.2, 20.0);
	makeObject(0.3f, 0.3f, 0.0f);
	glPopMatrix();
}


void lantai (){
	glPushMatrix();
	glTranslatef(0.0, 0.0, 5.0);
	glScalef(14.0, 1.0, 14.0);
	makeObject(0.0f, 1.0f, 0.0f);
	glPopMatrix();
}

void dinding_kiri1 (){
	glPushMatrix();
	glTranslatef(-4.5, 5.5, 8.0);
	glScalef(1.2, 10.0, 3.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void dinding_kiri2 (){
	glPushMatrix();
	glTranslatef(-4.5, 5.5, 2.0);
	glScalef(1.2, 10.0, 3.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void dinding_kanan(){
	glPushMatrix();
	glTranslatef(4.5, 5.5, 5.0);
	glScalef(1.0, 10.0, 10.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void dinding_belakang(){
	glPushMatrix();
	glTranslatef(0.0, 5.5, 0.5);
	glScalef(10.0, 10.0, 1.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void dinding_depan(){
	glPushMatrix();
	glTranslatef(0.0, 5.5, 9.5);
	glScalef(10.0, 10.0, 1.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void atap (){
	glPushMatrix();
	glTranslatef(0.0, 9.5, 5.0);
	glScalef(10.0, 2.0, 10.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void lapisanAtap1 (){
	glPushMatrix();
	glTranslatef(0.0, 12.0, 5.0);
	glScalef(7.0, 6.0, 7.0);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void lapisanAtap2 (){
	glPushMatrix();
	glTranslatef(0.0, 17.0, 5.0);
	glScalef(4.5, 5.0, 4.5);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void lapisanAtap3 (){
	glPushMatrix();
	glTranslatef(0.0, 20.0, 5.0);
	glScalef(1.5, 5.0, 1.5);
	makeObject(1.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void lapisanAtap4 (){
	glPushMatrix();
	glTranslatef(0.0, 22.0, 5.0);
	glScalef(1.0, 3.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 1.0f, 0, "kerucut");
	glPopMatrix();
}

void KerucutLapisanAtap3 (){
	glPushMatrix();
	glTranslatef(-1.5, 19.0, 3.5);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 1.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(1.5, 19.0, 3.5);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 1.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-1.5, 19.0, 6.5);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 1.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(1.5, 19.0, 6.5);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 1.0f, 0, "kerucut");
	glPopMatrix();
}

void KerucutLapisanAtap2 (){
	glPushMatrix();
	glTranslatef(-3.0, 16.0, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-3.0, 15.5, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.0, 0.0, 3.0);
	
	glPushMatrix();
	glTranslatef(-3.0, 16.0, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-3.0, 15.5, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.0, 0.0, -3.0);
	
	glPushMatrix();
	glTranslatef(-3.0, 16.0, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-3.0, 15.5, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(6.0, 0.0, -3.0);
	
	glPushMatrix();
	glTranslatef(-3.0, 16.0, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-3.0, 15.5, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(6.0, 0.0, 3.0);
	
	glPushMatrix();
	glTranslatef(-3.0, 16.0, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-3.0, 15.5, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPopMatrix();
}

void KerucutLapisanAtap1 (){
	glPushMatrix();
	glTranslatef(-4.0, 11.5, 5.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4.0, 11.0, 5.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4.0, 11.5, 9.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4.0, 11.0, 9.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4.0, 11.5, 1.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4.0, 11.0, 1.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(4.0, 11.5, 1.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(4.0, 11.0, 1.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(4.0, 11.5, 9.0);
	glScalef(1.0, 2.0, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 1.0f, 0.0f, 0, "kerucut");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(4.0, 11.0, 9.0);
	glScalef(0.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 1.0f);
	glPopMatrix();
	
	
	
}


void dindingPintuKiri(){
	glPushMatrix();
	glTranslatef(-5.0, 4.0, 3.0);
	glScalef(2.0, 8.0, 1.0);
	makeObject(0.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void dindingPintuKanan(){
	glPushMatrix();
	glTranslatef(-5.0, 4.0, 7.0);
	glScalef(2.0, 8.0, 1.0);
	makeObject(0.0f, 1.0f, 1.0f);
	glPopMatrix();
}

void atapPintu(){
	glPushMatrix();
	glTranslatef(-5.0, 8.0, 5.0);
	glScalef(2.0, 1.0, 6.0);
	makeObject(0.0f, 1.0f, 1.0f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-5.5, 8.5, 5.0);
	glScalef(1.0, 3.0, 7.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(0.2f, 0.3f, 0.0f, 0, "kerucut");
	glPopMatrix();
}

void tangga() {
	// bidak tangga 1
	glPushMatrix();
	glTranslatef(-6.0, -1.0, 5.0);
	glScalef(4.0, 1.0, 4.0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// bidak tangga 2
	glPushMatrix();
	glTranslatef(-6.0, -2.0, 5.0);
	glScalef(6.0, 1.0, 4.0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// bidak tangga 3
	glPushMatrix();
	glTranslatef(-6.0, -2.0, 5.0);
	glScalef(6.0, 1.0, 4.0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// bidak tangga 4
	glPushMatrix();
	glTranslatef(-6.5, -3.0, 5.0);
	glScalef(7.0, 1.0, 4.0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// bidak tangga 5
	glPushMatrix();
	glTranslatef(-7.0, -4.0, 5.0);
	glScalef(8.0, 1.0, 4.0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// pagar tangga kanan
	glPushMatrix();
	glTranslatef(-7.0, -2.0, 7.0);
	glScalef(8.0, 4.9, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
	
	// pagar tangga kiri
	glPushMatrix();
	glTranslatef(-7.0, -2.0, 3.0);
	glScalef(8.0, 4.9, 1.0);
	glRotatef(-90, 1, 0, 0);
	makeObject(1.0f, 0.0f, 0.0f);
	glPopMatrix();
}

void pintu (){
	glPushMatrix();
	glTranslatef(-5.0, 4.0, 5.0);
	glScalef(0.2, 7.0, 3.0);
	if (bukaPintu) {
		glTranslatef(-5.0, 0.0, -0.5);
		glScalef(15.0, 1.0, 0.2);
	}
	
	makeObject(0.001f, 0.001f, 0.001f);
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-5.1, 4.0, 6.0);
	glScalef(0.1, 0.8, 0.1);
	if (bukaPintu) {
		glTranslatef(-21.0, 0.0, -28.0);
	}
	makeObject(0.8f, 0.8f, 0.8f);
	glPopMatrix();
}


void drawCartecius() {
	glDisable(GL_LIGHTING);
	
    glLineWidth(5);
    // Gambar teks untuk sumbu
    drawText(13.0, 0.5, 0.0, "X", 60);
    drawText(-13.0, 0.5, 0.0, "-X", 60);
    drawText(0.5, 30.0, 0.5, "Y", 60);
    drawText(0.5, -13.0, 0.0, "-Y", 60);
    drawText(0.0, 0.5, 23.0, "Z", 60);
    drawText(0.0, 0.5, -13.0, "-Z", 60);

    // Gambar garis untuk sumbu
    glBegin(GL_LINES);
    // x line
    glVertex3f(-50.0, 0.0, 0.0);
    glVertex3f(50.0, 0.0, 0.0);

    // y line
    glVertex3f(0.0, -50.0, 0.0);
    glVertex3f(0.0, 50.0, 0.0);

    // z line
    glVertex3f(0.0, 0.0, -50.0);
    glVertex3f(0.0, 0.0, 50.0);
    glEnd();

	glEnable(GL_LIGHTING);
}

void light(){
	glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    // Atur posisi sumber cahaya
    GLfloat light_position[] = {-30.0f, 30.0f, 0.0f, 1.0f};
    GLfloat light_ambient[] = {0.1f, 0.1f, 0.1f, 1.0f}; // Warna ambient
    GLfloat light_diffuse[] = {0.9f, 0.9f, 0.9f, 1.0f}; // Warna diffuse
    GLfloat light_specular[] = {1.0f, 1.0f, 1.0f, 1.0f}; // Warna specular
    GLfloat light_off[] = {0.0f, 0.0f, 0.0f, 0.0f}; // lampu mati
    
    
    if (lampu == true){
    	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
		glLightfv(GL_LIGHT0,  GL_SPECULAR, light_specular);	
	}else{
		glLightfv(GL_LIGHT0, GL_POSITION, light_off);
    	glLightfv(GL_LIGHT0, GL_AMBIENT, light_off);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, light_off);
		glLightfv(GL_LIGHT0,  GL_SPECULAR, light_off);		
	}
    
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90.0, 1, 2.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(eyeX, eyeY, eyeZ, lookX, lookY, lookZ, 0, 1, 0);
	glRotatef(rot, 0, 1, 0);
	if (varKartesius == true ){
    	drawCartecius();
	}    
    
    
    
    light();
    
	glPushMatrix();
	glTranslatef(0.0, 0.0, -5.0);
	

	lantai();
	dinding_kiri1();
	dinding_kiri2();
	dinding_kanan();
	dinding_belakang();
	dinding_depan();
	atap();
	
	lapisanBawah1();
	lapisanBawah2();
	lapisanBawah3();
	
	lapisanAtap1();
	lapisanAtap2();
	lapisanAtap3();
	lapisanAtap4();
	
	KerucutLapisanAtap3 ();
	KerucutLapisanAtap2 ();
	KerucutLapisanAtap1 ();
	
	dindingPintuKiri ();
	dindingPintuKanan ();
	
	atapPintu();
	
		
	tangga();
	
	pintu();
	
	
	glPopMatrix();
	
//	cout <<"Mata X :"<<eyeX<<" Lihat X :"<<lookX<<endl;
//	cout <<"Mata Y :"<<eyeY<<" Lihat Y :"<<lookY<<endl;
//	cout <<"Mata Z :"<<eyeZ<<" Lihat Z :"<<lookZ<<endl;
    glFlush();
    glutSwapBuffers();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'q':
    	rot++;
        break;
    case 'e':
        rot--;
        break;	
    case 'd':
    	eyeX++;
    	lookX++;
        break;
    case 'a':
        eyeX--;
    	lookX--;
        break;
    case 'w':
        eyeY++;
        lookY++;
        break;
    case 's':
        eyeY--;
        lookY--;
        break;
    case 'z':
        eyeZ++;
        lookZ++;
        break;
    case 'x':
        eyeZ--;
        lookZ--;
        break;
	case 'k':
		if (varKartesius == false){
			varKartesius = true;
		}else{
			varKartesius = false;	
		}
        break;
    case 'l':
    	if (lampu == false){
    		lampu = true;
		}else if(lampu == true){
			lampu = false;
		}
		break;
		
	case 'p':
		if (bukaPintu == true){
			bukaPintu = false;
		}else{
			bukaPintu = true;	
		}
        break;
	}
    glutPostRedisplay();
}

void drawText(float x, float y, float z, string text, int fontSize)
{
	glColor3ub(255, 255, 255); // ubah warna
	glPushMatrix();
	glTranslatef(x, y, z);
	// Set Ukuran font sesuai dengan paramenter fontsize
	glScalef(fontSize / 8.0f, fontSize / 13.0f, 1.0f);
	// Tentukan posisi raster sesuai dengan ukuran font yang disesuaikan
	glRasterPos2f(0, 0);	
	glutBitmapString(GLUT_BITMAP_8_BY_13, (const unsigned char *)text.c_str());
	glPopMatrix();
	glEnd();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(height, width);
    glutCreateWindow("Candi Cangkuang Project");
    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    glEnable(GL_NORMALIZE);
    glutKeyboardFunc(myKeyboardFunc);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


