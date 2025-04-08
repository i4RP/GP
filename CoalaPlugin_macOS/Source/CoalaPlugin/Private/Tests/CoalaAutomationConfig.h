// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

constexpr auto ALL_TEST_CONTEXTS{ EAutomationTestFlags::ClientContext | EAutomationTestFlags::EditorContext | EAutomationTestFlags::ServerContext | EAutomationTestFlags::CommandletContext };
constexpr auto STANDARD_TEST_FLAGS{ EAutomationTestFlags::ProductFilter };

constexpr bool TEST_SUCCEEDED{ true };
constexpr bool TEST_FAILED{ false };
