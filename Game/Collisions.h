#include "Entity.h"

#include <SFML/System.hpp>
using sf::Vector2f;
#include <Memory>
using std::shared_ptr;
#include <list>
using std::list;

using std::begin;
using std::end;
using std::next;
using std::pair;
using std::numeric_limits;

#include <cmath>

class Collision{
	
	public:		
		//Collision();
		
		bool collision(shared_ptr<Entity> entity1_ptr, shared_ptr<Entity> entity2_ptr);
		
	private:
	
		list<Vector2f> normals(const list<Vector2f>& polygon_points);
		float maximumProjection(const list<Vector2f>& polygon_points, const Vector2f& polygon_normal);
		float minimumProjection(const list<Vector2f>& polygon_points, const Vector2f& polygon_normal);
		float dotProduct(const Vector2f& vector1, const Vector2f& vector2);
	
};

// May need to add a vector class depending on Boost, for now will use sfml
// class Vector2f{
	
	// public:
	
	// private:
	
// };

// Will add this when there is time, will make the collisions more efficient
// class QuadTree {
	
	// public:
	
	// private:
	
// };