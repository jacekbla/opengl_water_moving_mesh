#include "RawModel.h"

#ifndef WATER_TILE_H
#define WATER_TILE_H

class WaterTile
{
public:
	explicit WaterTile() : WaterTile(0.0f, 0.0f, 0.0f, RawModel()) {};
	explicit WaterTile(float p_centerX, float p_centerZ, float p_height, RawModel p_quad) : _height(p_height), _x(p_centerX), _z(p_centerZ), _quad(p_quad) {};
	~WaterTile();

	static const float TILE_SIZE;

	float getHeight() const;
	float getX() const;
	float getZ() const;
	int getVertexCount() const;
	int getVaoID() const;

private:
	float _height;
	float _x;
	float _z;
	RawModel _quad;
};

#endif WATER_TILE_H