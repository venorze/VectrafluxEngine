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

#include <iostream>
#include <stdexcept>
#include <format>
#include <memory>

#include "EngineConfig.h"

#define SPORTS_ENGINE_NAME "NatureEngine"

#define SPORTS_LOGGER_INFO(fmt, ...) printf("%s\n", std::format(fmt, ##__VA_ARGS__).c_str())
#define SPORTS_LOGGER_ERROR(fmt, ...) printf("%s\n", std::format(fmt, ##__VA_ARGS__).c_str())
#define SPORTS_THROW_ERROR(fmt, ...) throw std::runtime_error(std::format(fmt, ##__VA_ARGS__))

#define SPORTS_FREE_POINTER(ptr) (ptr = nullptr)

/* Get total byte size of array. */
#define ARRAY_TOTAL_SIZE(a) (sizeof(a[0]) * std::size(a))