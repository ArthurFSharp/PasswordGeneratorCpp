#include "pch.h"

using namespace PasswordGenerator_Uwp::ViewModel;

ViewModelLocator::ViewModelLocator()
{
	m_mainViewModel = ref new PasswordGenerator_Uwp::ViewModel::MainViewModel();
}

MainViewModel^ ViewModelLocator::MainViewModel::get()
{
	return m_mainViewModel;
}
