//
// Created by ycpeng on 6/18/2024.
//

#ifndef ENGINE_SHAPE_H
#define ENGINE_SHAPE_H

class Shape
{
public:
	virtual void SetId(int id);
	int			 GetId();
private:
	int m_id;
};

class Circle : public Shape
{
private:
	float m_radius;
};

#endif //ENGINE_SHAPE_H