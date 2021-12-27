#include "pch.h"
#include "About.h"
#if __has_include("About.g.cpp")
#include "About.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WRP001::implementation
{
    About::About()
    {
        InitializeComponent();
    }

    int32_t About::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void About::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    /*
    void About::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
    */
}
