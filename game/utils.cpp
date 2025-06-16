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
	Vector3 operator+(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x + vec.x;
		newVec.y = y + vec.y;
		newVec.z = z + vec.z;
	}
	Vector3 operator-(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		newVec.z = z - vec.z;
	}
	Vector3 operator*(float scal) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		newVec.z = z * scal;
	}
	float operator%(Vector3 vec) {
		float product = 0;
		product = x * vec.x + y * vec.y + z * vec.z;
	}
	Vector3 operator/(Vector3 vec) {
		Vector3 newVec = Vector3(0, 0, 0);
		newVec.x = y * vec.z - z * vec.y;
		newVec.y = z * vec.x - x * vec.z;
		newVec.z = x * vec.y - y * vec.x;
	}
};