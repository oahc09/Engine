@echo off

GOTO EndComment
/******************************************************************************/
/*!
 \file   _build_exec_vs2012.bat
 \author Jack Chang
 \date   10/25/2014
 \par    All content 2014 DigiPen (USA) Corporation, all rights reserved.
 \brief
    Generate and Excute Visual Studio 2013 Project
 */
/******************************************************************************/
:EndComment

cd premake
.\premake5 vs2012
cd ..
start "" "Irradiance.sln"