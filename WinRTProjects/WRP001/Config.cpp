#include "pch.h"
#include "Config.h"
#if __has_include("Config.g.cpp")
#include "Config.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WRP001::implementation
{
    Config::Config()
    {
        InitializeComponent();
    }

    int32_t Config::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Config::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    /*
    void Config::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
    */
}
