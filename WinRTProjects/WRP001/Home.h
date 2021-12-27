#pragma once

#include "Home.g.h"

namespace winrt::WRP001::implementation
{
    struct Home : HomeT<Home>
    {
        Home();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void btn_SetOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void btn_GetOnClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    };
}

namespace winrt::WRP001::factory_implementation
{
    struct Home : HomeT<Home, implementation::Home>
    {
    };
}
