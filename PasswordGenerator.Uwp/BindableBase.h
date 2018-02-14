#pragma once

namespace PasswordGenerator_Uwp
{
	namespace Common
	{
		public ref class BindableBase : public Windows::UI::Xaml::Data::INotifyPropertyChanged, Windows::UI::Xaml::DependencyObject
		{
		public:
			// Hérité via INotifyPropertyChanged
			virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler ^ PropertyChanged;

		internal:
			Platform::String^ getCallerName(const char* funName);

		protected:
			virtual void OnPropertyChanged(Platform::String^ value);
		};
	}
}



