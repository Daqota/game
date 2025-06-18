
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
		return newVec;
	}
	//vector subtraction
	Vector4 operator-(Vector4 vec) {
		Vector4 newVec = Vector4(0, 0, 0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
		newVec.w = w - vec.w;
		return newVec;
	}
	//scalar multiplication
	Vector4 operator*(float scal) {
		Vector4 newVec = Vector4(0, 0, 0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		newVec.z = z * scal;
		newVec.w = w * scal;
		return newVec;
	}
	//dot product
	float dot(Vector4 vec1, Vector4 vec2) {
		float product = 0;
		product = vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z + vec1.w * vec2.w;
		return product;
	}
};