//
// MainPage.xaml.cpp
// Implémentation de la classe MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace PasswordGenerator_Uwp;

// Pour plus d'informations sur le modèle d'élément Page vierge, consultez la page https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

	ExtendTitleBar();
}

/// <summary>
/// extend view to titlebar
/// check that type API are present
/// </summary> 
void MainPage::ExtendTitleBar()
{
	if (Windows::Foundation::Metadata::ApiInformation::IsTypePresent("Windows.UI.ViewManagement.ApplicationView"))
	{
		Windows::UI::ViewManagement::ApplicationViewTitleBar^ titleBar = Windows::UI::ViewManagement::ApplicationView::GetForCurrentView()->TitleBar;

		if (titleBar != nullptr &&
			Windows::Foundation::Metadata::ApiInformation::IsTypePresent("Windows.UI.Xaml.Media.XamlCompositionBrushBase"))
		{
			Windows::ApplicationModel::Core::CoreApplication::GetCurrentView()->TitleBar->ExtendViewIntoTitleBar = true;
			titleBar->ButtonBackgroundColor = Windows::UI::Colors::Transparent;
			titleBar->ButtonInactiveBackgroundColor = Windows::UI::Colors::Transparent;
		}
	}
}
