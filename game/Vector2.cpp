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

	
};