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
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    void MainPage::setValuesClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        persona.setName(winrt::to_string(lbl_setNombre().Text()));
        persona.setSurname(winrt::to_string(lbl_setApellido().Text()));

        lbl_getNombre().Text(L"-");
        lbl_getApellido().Text(L"-");

    }
    void MainPage::getValuesClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        lbl_setNombre().Text(L"-");
        lbl_setApellido().Text(L"-");

        lbl_getNombre().Text(winrt::to_hstring(persona.getName()));
        lbl_getApellido().Text(winrt::to_hstring(persona.getSurname()));
    }    
}
