#pragma once

#include "Config.g.h"

namespace winrt::WRP001::implementation
{
    struct Config : ConfigT<Config>
    {
        Config();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WRP001::factory_implementation
{
    struct Config : ConfigT<Config, implementation::Config>
    {
    };
}
