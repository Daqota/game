class Vector2 {
public:
	float x;
	float y;
	
	Vector2(float X, float Y){
		x = X;
		y = Y;
	}

	Vector2 operator+(Vector2 vec) {
		Vector2 newVec = Vector2(0, 0);
		newVec.x = x + vec.x;
		newVec.y = y + vec.y;
		return newVec;
	}
	Vector2 operator-(Vector2 vec) {
		Vector2 newVec = Vector2(0, 0);
		newVec.x = x - vec.x;
		newVec.y = y - vec.y;
		return newVec;
	}
	Vector2 operator*(float scal) {
		Vector2 newVec = Vector2(0, 0);
		newVec.x = x * scal;
		newVec.y = y * scal;
		return newVec;
	}
	Vector2 operator*(Vector2 vec) {
		Vector2 newVec = Vector2(0, 0);
		newVec.x = x * vec.x;
		newVec.y = y * vec.y;
		return newVec;
	}
	Vector2 operator/(Vector2 vec) {
		Vector2 newVec = Vector2(0, 0);
		newVec.x = x / vec.x;
		newVec.y = y / vec.y;
		return newVec;
	}

	float dot(Vector2 vec1, Vector2 vec2) {
		float product;
		product = vec1.x * vec2.x + vec1.y * vec2.y;
		return product;
	}

	float cross(Vector2 vec1, Vector2 vec2) {
		float product;
		product = vec1.x * vec2.y - vec2.x * vec1.y;
		return product;
	}
};