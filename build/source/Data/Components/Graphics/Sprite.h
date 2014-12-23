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

    bool m_batched = false;

  private:
    Vector2 m_texcoord;

  };
}