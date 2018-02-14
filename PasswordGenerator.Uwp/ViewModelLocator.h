#pragma once

#include "MainViewModel.h"

namespace PasswordGenerator_Uwp
{
	namespace ViewModel
	{
		[Windows::UI::Xaml::Data::Bindable]
		public ref class ViewModelLocator sealed
		{
		public:
			ViewModelLocator();

		public:
			property MainViewModel^ MainViewModel
			{
				PasswordGenerator_Uwp::ViewModel::MainViewModel^ get();
			}

		private:
			PasswordGenerator_Uwp::ViewModel::MainViewModel ^ m_mainViewModel;
		};
	}
}
