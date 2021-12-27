#include "pch.h"
#include "Home.h"
#if __has_include("Home.g.cpp")
#include "Home.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WRP001::implementation
{
    Home::Home()
    {
        InitializeComponent();

    }

    int32_t Home::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Home::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

        
    void Home::btn_SetOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        //persona.setName(winrt::to_string(lbl_setNombre().Text()));
        //persona.setSurname(winrt::to_string(lbl_setApellido().Text()));

        lbl_getNombre().Text(L"-");
        lbl_getApellido().Text(L"-");
    }
    void Home::btn_GetOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        lbl_setNombre().Text(L"-");
        lbl_setApellido().Text(L"-");

        //lbl_getNombre().Text(winrt::to_hstring(persona.getName()));
        //lbl_getApellido().Text(winrt::to_hstring(persona.getSurname()));
    }
    
}
