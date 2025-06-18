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
		return newVec;
	}
	//vector subtraction
	Vector3 operator-(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
		return newVec;
	}
	//scalar multiplication
	Vector3 operator*(float scal) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		newVec.z = z * scal;
		return newVec;
	}
	//dot product
	float dot(Vector3 vec1, Vector3 vec2) {
		float product = 0;
		product = vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
		return product;
	}
	//cross product
	Vector3 cross(Vector3 vec1, Vector3 vec2) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = vec1.y * vec2.z - vec1.z * vec2.y;
		newVec.y = vec1.z * vec2.x - vec1.x * vec2.z;
		newVec.z = vec1.x * vec2.y - vec1.y * vec2.x;
		return newVec;
	}
};