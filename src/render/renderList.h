#ifndef RENDER_LIST_INCLUDED
#define RENDER_LIST_INCLUDED

#include <vector>
#include "glUtil.h"

class Render;

class RenderList
{
public:
   RenderList(Render &render);
   void addPoint(float x, float y, float z, float textX,float textY);
   void addRect(float x1,float y1, float z1, float textX1, float textY1,
                float x2,float y2, float z2, float textX2, float textY2);
   void draw() const;
   void clear();

   Render &renderer;
private:
   std::vector<inputData> vertices;

};

#endif
