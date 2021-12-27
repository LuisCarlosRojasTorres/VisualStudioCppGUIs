#pragma once

#include "About.g.h"

namespace winrt::WRP001::implementation
{
    struct About : AboutT<About>
    {
        About();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WRP001::factory_implementation
{
    struct About : AboutT<About, implementation::About>
    {
    };
}
