//******************************************************************************/
//*!
// \file   Sprite.h
// \author Aji Suprana
// \par    Course: GAM250
// \par    All content ?2014 DigiPen (USA) Corporation, all rights reserved.
// \brief
// */
//******************************************************************************/

#pragma once

namespace Framework
{
  class VertexBufferObject;
  typedef VertexBufferObject VBO;

//******************************************************************************/
//*!
// \macros   Sprite
// \brief   Sprite Component
// Notes: 
// */
//******************************************************************************/
  class Sprite: public Drawable
  {
  public:
    Sprite();
    ~Sprite();

    void DefineMeta ();
    void Initialize ();
    void Draw (unsigned instanceID, VBO* posVbo, VBO* texVbo = nullptr);

  private:
    bool m_batched;
  };
}