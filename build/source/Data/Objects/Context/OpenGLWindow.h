/******************************************************************************/
/*!
\file   EngineWindow.h
\author Manas Sudhir Kulkarni
\par    Course: GAM250
\par    All content ?2014 DigiPen (USA) Corporation, all rights reserved.
\brief
*/
/******************************************************************************/

#pragma once

namespace Framework
{
  class OpenGLWindow
  {
  public:
    OpenGLWindow ();
    ~OpenGLWindow ();

    void Create_Context (int w, int h, const char* wName);
    void Viewport (int x, int y, int w, int h);
    void SwapBuffers ();
    void Resize (int w, int h);
    void ResizeFrameBuffer (int w, int h);
    void RenameWindow (const char* wName);

    GLFWwindow* GetWindow ();
    int GetWindowWidth ();
    int GetWindowHeight ();
    Vector2 GetMousePosition ();

  private:
    GLFWwindow* m_window;
    int m_width;
    int m_height;

    Vector2 m_mousePosition;
  };
}