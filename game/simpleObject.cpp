//this class is a beta of the object object
//it has rectangle values and color values
class simpleObject {
public:
	float x;
	float y;
	float w;
	float h;
	unsigned int r;
	unsigned int g;
	unsigned int b;
	unsigned int a;

	simpleObject() {
		//set defaults
		x = 0.;
		y = 0.;
		w = 10.;
		h = 10.;
		r = 255;
		g = 255;
		b = 255;
		a = 255;
	}
	simpleObject(float X, float Y, float W, float H) {
		//set defaults
		x = X;
		y = Y;
		w = W;
		h = H;
		r = 255;
		g = 255;
		b = 255;
		a = 255;
	}
	simpleObject(float X, float Y, float W, float H, int R, int G, int B, int A) {
		//set defaults
		x = X;
		y = Y;
		w = W;
		h = H;
		r = R;
		g = G;
		b = B;
		a = A;
	}
	

};