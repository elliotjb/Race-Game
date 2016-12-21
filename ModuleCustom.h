#pragma once
#include "ModuleScene.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"
#include "p2List.h"

#define MAX_OBJECTS 100
struct PhysBody3D;
enum Direction;



class ModuleCustom : public ModuleScene
{
public:
	ModuleCustom(Application* app, bool start_enabled = false);
	~ModuleCustom();
	bool Start();
	update_status Update(float dt);
	bool CleanUp();
	void CreateWindmill(Windmill& windmill, float x, float y, float z, float w, float h);

public:




private:

	//Return to menu
	int time;
	int actualtime;
	bool test;
	Direction Last_save_dir;
	Windmill windmill[MAX_OBJECTS];
	uint num_windmill;
	float pos_x;
	float pos_z;

	bool change_direction = false;

};