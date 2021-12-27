#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WRP001::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        persona = Persona();
        ContentFrame().Navigate(xaml_typename<WRP001::Home>());            
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
         
    void MainPage::btn_MenuOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        SplitMenu().IsPaneOpen(!SplitMenu().IsPaneOpen());        
    }

    void MainPage::btn_HomeOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        ContentFrame().Navigate(xaml_typename<WRP001::Home>());
    }

    void MainPage::btn_ConfigOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        ContentFrame().Navigate(xaml_typename<WRP001::Config>());
    }

    void MainPage::btn_AboutOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        ContentFrame().Navigate(xaml_typename<WRP001::About>());
    }
}



