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

/* Creates on 2022/9/14. */
#include "Window/Window.h"
#include "Render/RenderAPI.h"
#include <iostream>

int main() {
    auto window = FourierWindow(600, 800, "FourierEngine(vulkan)");

    FourierInitRenderAPI();

    while (!window.WindowShouldClose()) {
        FourierPollEvents();
    }
    return 0;
}
