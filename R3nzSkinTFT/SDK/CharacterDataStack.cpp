#include <Windows.h>
#include <cstdint>

#include "../CheatManager.hpp"
#include "../RetSpoofInvoker.hpp"
#include "../offsets.hpp"

#include "CharacterDataStack.hpp"

void CharacterDataStack::push(const char* model, const std::int32_t skin) noexcept
{	
	invoker.invokeThiscall<int>(std::uintptr_t(this), cheatManager.memory->moduleBase + offsets::functions::FnCharacterDataStack__Push, model, skin, 0, false, false, false, false, true, false, std::int8_t(-1), "\x00", 0, "\x00", 0, false, 1);
}
