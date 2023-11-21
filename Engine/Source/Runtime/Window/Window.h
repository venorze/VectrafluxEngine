/* ************************************************************************
 *
 * Copyright (C) 2022 Vincent Luo All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ************************************************************************/

/* Creates on 2023/11/21. */
#pragma once

#include <GLFW/glfw3.h>

class FourierWindow;

typedef void (* FnFourierResizableWindowCallback)(FourierWindow *FourierWindow, int width, int height);

class FourierWindow {
public:
    /* Init and create window. */
    FourierWindow(int width, int height, const char *title);
    ~FourierWindow();
    /* Support functions. */
    bool WindowShouldClose();

public:
    /* Get/Set member variables. */
    int GetWidth() const { return m_Width; }
    int GetHeight() const { return m_Height; }
    void SetWidth(int width) { m_Width = width; }
    void SetHeight(int height) { m_Height = height; }
    void SetFourierResizableWindowCallback(FnFourierResizableWindowCallback fnFourierResizableWindowCallback) /* Set resizable callback. */
      { m_FnFourierResizableWindowCallback = fnFourierResizableWindowCallback; };

private:
    int m_Width;
    int m_Height;
    GLFWwindow *m_Window;
    FnFourierResizableWindowCallback m_FnFourierResizableWindowCallback;
};

static void FourierPollEvents() {
    glfwPollEvents();
}