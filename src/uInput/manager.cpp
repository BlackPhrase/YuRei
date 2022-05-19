#include "uinput.hpp"

#include "dinput/inputdinput8.hpp"

namespace uinput
{

manager::manager(configuration *pConfig)
{
	mpImpl->init(pConfig->pWindow, pConfig->nScreenWidth, pConfig->nScreenHeight);
};

void manager::frame()
{
	mpImpl->frame();
};

bool manager::is_key_down(int key) const
{
	return mpImpl->is_key_down(key);
};

}; // namespace uinput