#include "cinput_manager.hpp"
#include "cinput_dispatcher.hpp"

#include "dinput/inputdinput8.hpp"

#include "dummy_receiver.hpp"

//namespace uinput
//{

std::unordered_map<uinput::Keys, const char*> cinput_manager::mKeyNameMap =
{
	{uinput::Keys::Invalid, "Invalid key"},
	
	{uinput::Keys::Escape, "kESCAPE"},
	//{uinput::Keys::Tilde, "kGRAVE"},
	{uinput::Keys::Tab, "kTAB"},
	{uinput::Keys::CapsLock, "kCAPITAL"},
	
	{uinput::Keys::Enter, "kRETURN"},
	
	{uinput::Keys::LShift, "kLSHIFT"},
	{uinput::Keys::RShift, "kRSHIFT"},
	
	{uinput::Keys::LCtrl, "kLCONTROL"},
	{uinput::Keys::RCtrl, "kRCONTROL"},
	
	{uinput::Keys::LAlt, "kLMENU"},
	{uinput::Keys::RAlt, "kRMENU"},
	//{uinput::Keys::Menu, ""},
	
	{uinput::Keys::Up, "kUP"},
	{uinput::Keys::Down, "kDOWN"},
	{uinput::Keys::Left, "kLEFT"},
	{uinput::Keys::Right, "kRIGHT"},
	
	{uinput::Keys::Equals, "kEQUALS"},
	{uinput::Keys::Minus, "kMINUS"},
	
	{uinput::Keys::Space, "kSPACE"},
	{uinput::Keys::BackSpace, "kBACK"},
	
	{uinput::Keys::Home, "kHOME"},
	{uinput::Keys::End, "kEND"},
	
	{uinput::Keys::Insert, "kINSERT"},
	{uinput::Keys::Delete, "kDELETE"},
	
	{uinput::Keys::PageUp, "kPRIOR"},
	{uinput::Keys::PageDown, "kNEXT"},
	
	{uinput::Keys::LBracket, "kLBRACKET"},
	{uinput::Keys::RBracket, "kRBRACKET"},
	
	{uinput::Keys::Slash, "kSLASH"},
	{uinput::Keys::BackSlash, "kBACKSLASH"},
	
	{uinput::Keys::Period, "kPERIOD"},
	{uinput::Keys::Comma, "kCOMMA"},
	{uinput::Keys::SemiColon, "kSEMICOLON"},
	{uinput::Keys::Quote, "kAPOSTROPHE"},
	
	{uinput::Keys::A, "kA"},
	{uinput::Keys::B, "kB"},
	{uinput::Keys::C, "kC"},
	{uinput::Keys::D, "kD"},
	{uinput::Keys::E, "kE"},
	{uinput::Keys::F, "kF"},
	{uinput::Keys::G, "kG"},
	{uinput::Keys::H, "kH"},
	{uinput::Keys::I, "kI"},
	{uinput::Keys::J, "kJ"},
	{uinput::Keys::K, "kK"},
	{uinput::Keys::L, "kL"},
	{uinput::Keys::M, "kM"},
	{uinput::Keys::N, "kN"},
	{uinput::Keys::O, "kO"},
	{uinput::Keys::P, "kP"},
	{uinput::Keys::Q, "kQ"},
	{uinput::Keys::R, "kR"},
	{uinput::Keys::S, "kS"},
	{uinput::Keys::T, "kT"},
	{uinput::Keys::U, "kU"},
	{uinput::Keys::V, "kV"},
	{uinput::Keys::W, "kW"},
	{uinput::Keys::X, "kX"},
	{uinput::Keys::Y, "kY"},
	{uinput::Keys::Z, "kZ"},
	
	{uinput::Keys::F1, "kF1"},
	{uinput::Keys::F2, "kF2"},
	{uinput::Keys::F3, "kF3"},
	{uinput::Keys::F4, "kF4"},
	{uinput::Keys::F5, "kF5"},
	{uinput::Keys::F6, "kF6"},
	{uinput::Keys::F7, "kF7"},
	{uinput::Keys::F8, "kF8"},
	{uinput::Keys::F9, "kF9"},
	{uinput::Keys::F10, "kF10"},
	{uinput::Keys::F11, "kF11"},
	{uinput::Keys::F12, "kF12"},
	
	{uinput::Keys::k0, "k0"},
	{uinput::Keys::k1, "k1"},
	{uinput::Keys::k2, "k2"},
	{uinput::Keys::k3, "k3"},
	{uinput::Keys::k4, "k4"},
	{uinput::Keys::k5, "k5"},
	{uinput::Keys::k6, "k6"},
	{uinput::Keys::k7, "k7"},
	{uinput::Keys::k8, "k8"},
	{uinput::Keys::k9, "k9"},
	
	{uinput::Keys::NumPlus, "kADD"},
	{uinput::Keys::NumMinus, "kSUBTRACT"},
	{uinput::Keys::NumMultiply, "kMULTIPLY"},
	{uinput::Keys::NumDivide, "kDIVIDE"},
	{uinput::Keys::NumPeriod, "kDECIMAL"},
	{uinput::Keys::NumEnter, "kNUMPADENTER"},
	
	{uinput::Keys::Num0, "kNUMPAD0"},
	{uinput::Keys::Num1, "kNUMPAD1"},
	{uinput::Keys::Num2, "kNUMPAD2"},
	{uinput::Keys::Num3, "kNUMPAD3"},
	{uinput::Keys::Num4, "kNUMPAD4"},
	{uinput::Keys::Num5, "kNUMPAD5"},
	{uinput::Keys::Num6, "kNUMPAD6"},
	{uinput::Keys::Num7, "kNUMPAD7"},
	{uinput::Keys::Num8, "kNUMPAD8"},
	{uinput::Keys::Num9, "kNUMPAD9"}
};

cinput_manager::cinput_manager(uinput::cinput_dispatcher *pDispatcher, uinput::cinputdinput8 *pImpl, uinput::configuration *pConfig) : mpDispatcher(pDispatcher), mpImpl(pImpl)
{
	mpDummyReceiver = std::make_unique<dummy_receiver>(this);
	
	add_receiver(mpDummyReceiver.get());
	
	mpImpl->init(pConfig->pWindow, pConfig->nScreenWidth, pConfig->nScreenHeight);
};

void cinput_manager::frame()
{
	mpImpl->frame();
};

void cinput_manager::add_receiver(uinput::receiver *pReceiver)
{
	mpDispatcher->add_receiver(pReceiver);
};

void cinput_manager::remove_receiver(uinput::receiver *pReceiver)
{
	mpDispatcher->remove_receiver(pReceiver);
};

bool cinput_manager::is_key_down(uinput::Keys eKey) const
{
	return mpImpl->is_key_down(eKey);
};

const char *cinput_manager::key_to_string(uinput::Keys eKey) const
{
	return mKeyNameMap[eKey];
};

//}; // namespace uinput