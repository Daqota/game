class Vector3 {
public:
	float x;
	float y;
	float z;
	Vector3(float X, float Y, float Z) {
		x = X;
		y = Y;
		z = Z;
	}
	//vector addition
	Vector3 operator+(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x + vec.x;
		newVec.y = y + vec.y;
		newVec.z = z + vec.z;
	}
	//vector subtraction
	Vector3 operator-(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
	}
	//scalar multiplication
	Vector3 operator*(float scal) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		newVec.z = z * scal;
	}
	//dot product
	float operator%(Vector3 vec) {
		float product = 0;
		product = x * vec.x + y * vec.y + z * vec.z;
	}
	//cross product
	Vector3 operator/(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = y * vec.z - z * vec.y;
		newVec.y = z * vec.x - x * vec.z;
		newVec.z = x * vec.y - y * vec.x;
	}
};

class Vector4 {
public:
	float x;
	float y;
	float z;
	float w;
	Vector4(float X, float Y, float Z, float W) {
		x = X;
		y = Y;
		z = Z;
		w = W;
	}
	//vector addition
	Vector4 operator+(Vector4 vec) {
		Vector4 newVec = Vector4(0, 0, 0, 0);
		newVec.x = x + vec.x;
		newVec.y = y + vec.y;
		newVec.z = z + vec.z;
		newVec.w = w + vec.w;
	}
	//vector subtraction
	Vector4 operator-(Vector4 vec) {
		Vector4 newVec = Vector4(0, 0, 0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
		newVec.w = w - vec.w;
	}
	//scalar multiplication
	Vector4 operator*(float scal) {
		Vector4 newVec = Vector4(0, 0, 0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		newVec.z = z * scal;
		newVec.w = w * scal;
	}
	//dot product
	float operator%(Vector4 vec) {
		float product = 0;
		product = x * vec.x + y * vec.y + z * vec.z + w * vec.w;
	}
};