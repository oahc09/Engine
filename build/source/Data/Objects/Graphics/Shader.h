/******************************************************************************/
/*!
 \file   Shader.h
 \author Manas Sudhir Kulkarni
 \par    Course: GAM250
 \par    All content ?2014 DigiPen (USA) Corporation, all rights reserved.
 \brief
 */
/******************************************************************************/

#pragma once


namespace Framework
{
/******************************************************************************/
/*!
 \class   sampleComponent
 \brief   sampleComponent Component
 Notes: 
 */
/******************************************************************************/
//@@ Only this 4 function is allowed in component class
  class Shader : public Resource
  {
  public:
    // Constructor - Destructor
    Shader();
    ~Shader();

    // Methods
    void DefineMeta();

    void UseShader ();
    void DisableShader ();

    GLuint attribLocation (const char* attribName);
    void bindAttribLocation (GLint location, const char* attribName);

    void enableVertexAttribArray (const char* attrName);
    void enableVertexAttribArray (GLint attr);

    void vertexAttribPtr (const char* attribName, GLint size, GLint stride, GLint offset, GLenum type = GL_FLOAT, GLboolean normalized = GL_FALSE);
    void vertexAttribPtr (GLint index, GLint size, GLint stride, GLint offset, GLenum type = GL_FLOAT, GLboolean normalized = GL_FALSE);

    GLuint uniLocation (const char* uniName);

    void uni1i (const char* uniName, int uniValue);
    void uni2i (const char* uniName, int uniValue1, int uniValue2);
    void uni3i (const char* uniName, int uniValue1, int uniValue2, int uniValue3);
    void uni4i (const char* uniName, int uniValue1, int uniValue2, int uniValue3, int uniValue4);

    void uni1i (GLuint uniLoc, int uniValue);
    void uni2i (GLuint uniLoc, int uniValue1, int uniValue2);
    void uni3i (GLuint uniLoc, int uniValue1, int uniValue2, int uniValue3);
    void uni4i (GLuint uniLoc, int uniValue1, int uniValue2, int uniValue3, int uniValue4);

    void uni1iv (const char* uniName, const int* uniValue, int _count = 1);
    void uni2iv (const char* uniName, const int* uniValue, int _count = 1);
    void uni3iv (const char* uniName, const int* uniValue, int _count = 1);
    void uni4iv (const char* uniName, const int* uniValue, int _count = 1);

    void uni1iv (GLuint uniLoc, const int* uniValue, int _count = 1);
    void uni2iv (GLuint uniLoc, const int* uniValue, int _count = 1);
    void uni3iv (GLuint uniLoc, const int* uniValue, int _count = 1);
    void uni4iv (GLuint uniLoc, const int* uniValue, int _count = 1);

    void uni1f (const char* uniName, float uniValue);
    void uni2f (const char* uniName, float uniValue1, float uniValue2);
    void uni3f (const char* uniName, float uniValue1, float uniValue2, float uniValue3);
    void uni4f (const char* uniName, float uniValue1, float uniValue2, float uniValue3, float uniValue4);

    void uni1f (GLuint uniLoc, float uniValue);
    void uni2f (GLuint uniLoc, float uniValue1, float uniValue2);
    void uni3f (GLuint uniLoc, float uniValue1, float uniValue2, float uniValue3);
    void uni4f (GLuint uniLoc, float uniValue1, float uniValue2, float uniValue3, float uniValue4);

    void uni1fv (const char* uniName, const float* uniValue, int _count = 1);
    void uni2fv (const char* uniName, const float* uniValue, int _count = 1);
    void uni3fv (const char* uniName, const float* uniValue, int _count = 1);
    void uni4fv (const char* uniName, const float* uniValue, int _count = 1);

    void uni1fv (GLuint uniLoc, const float* uniValue, int _count = 1);
    void uni2fv (GLuint uniLoc, const float* uniValue, int _count = 1);
    void uni3fv (GLuint uniLoc, const float* uniValue, int _count = 1);
    void uni4fv (GLuint uniLoc, const float* uniValue, int _count = 1);

    void uniMat2 (GLuint uniLoc, const float* uniValue, int _count = 1);
    void uniMat3 (GLuint uniLoc, const float* uniValue, int _count = 1);
    void uniMat4 (GLuint uniLoc, const float* uniValue, int _count = 1);

    void uniMat2 (const char* uniName, const float* uniValue, int _count = 1);
    void uniMat3 (const char* uniName, const float* uniValue, int _count = 1);
    void uniMat4 (const char* uniName, const float* uniValue, int _count = 1);

    GLuint Get_ID ();

    friend class ResourceManager;

  private:
    //DATA
    GLuint m_program;

    GLint checkAttrib (const char* attribName);
    GLuint checkUniform (const char* uniName);

    std::string Read_Shader (const char* sFile);
    GLuint Compile_Shader (const char* filename, const char* sSource, GLenum type);
    GLuint Link_Program (const char* sName, GLuint vShader, GLuint fShader, GLuint gShader = 0);
  };
}