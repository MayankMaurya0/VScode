#include <xamlom.h>

// Include Windows SDK headers
#include <windows.h>
#include <xamlom.h> // Windows XAML Object Model header for UI diagnostics

#include <atomic>
#include <vector>

// Prevent name collision with WinRT
#undef GetCurrentTime

// Include WinRT XAML headers with proper path
#include <winrt/base.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Xaml.h>

struct ThemeTargetStyles
{
    PCWSTR target;
    std::vector<PCWSTR> styles;
};

struct Theme
{
    std::vector<ThemeTargetStyles> targetStyles;
};

// clang-format off

const Theme g_themeWinXP = {{
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#3168d5\" Offset=\"0.0\" /> <GradientStop Color=\"#4993E6\" Offset=\"0.1\" /> <GradientStop Color=\"#2157D7\" Offset=\"0.35\" /> <GradientStop Color=\"#2663E0\" Offset=\"0.8\" /> <GradientStop Color=\"#1941A5\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"VerticalAlignment=Stretch",
        L"Height=Auto"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#3168d5\" Offset=\"0.0\" /> <GradientStop Color=\"#4993E6\" Offset=\"0.1\" /> <GradientStop Color=\"#2157D7\" Offset=\"0.35\" /> <GradientStop Color=\"#2663E0\" Offset=\"0.8\" /> <GradientStop Color=\"#1941A5\" Offset=\"1.0\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton]", {
        L"CornerRadius=0",
        L"Margin=0,0,4,0",
        L"MaxWidth=48"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel", {
        L"Padding=0",
        L"Background:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#388238\" Offset=\"0.0\" /> <GradientStop Color=\"#71B571\" Offset=\"0.1\" /> <GradientStop Color=\"#71B571\" Offset=\"0.35\" /> <GradientStop Color=\"#47AA47\" Offset=\"0.8\" /> <GradientStop Color=\"#307443\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"MaxWidth=48"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Border#BackgroundElement", {
        L"Background:=<ImageBrush Stretch=\"None\" ImageSource=\"https://i.imgur.com/BvXJlkj.png\" />"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer#Icon", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"TextBlock#LabelControl", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Rectangle#RunningIndicator", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"Background@NoRunningIndicator=Transparent",
        L"Background@ActiveRunningIndicator:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#1B67D7\" Offset=\"0.0\" /> <GradientStop Color=\"#1542A8\" Offset=\"0.1\" /> <GradientStop Color=\"#1951BA\" Offset=\"0.15\" /> <GradientStop Color=\"#1951BA\" Offset=\"0.95\" /> <GradientStop Color=\"#1542A8\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"Background:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#3358B5\" Offset=\"0.0\" /> <GradientStop Color=\"#8AC4FD\" Offset=\"0.1\" /> <GradientStop Color=\"#56A3FF\" Offset=\"0.2\" /> <GradientStop Color=\"#56A3FF\" Offset=\"0.85\" /> <GradientStop Color=\"#378DF6\" Offset=\"0.9\" /> <GradientStop Color=\"#163E95\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"BorderThickness@ActiveRunningIndicator=1",
        L"BorderBrush@NoRunningIndicator=Transparent",
        L"BorderBrush@ActiveRunningIndicator=#1B67D7",
        L"BorderBrush=#3358B5"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton", {
        L"Margin=-1.5"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#16ADF0\" Offset=\"0.0\" /> <GradientStop Color=\"#19B9F3\" Offset=\"0.1\" /> <GradientStop Color=\"#118FE9\" Offset=\"0.35\" /> <GradientStop Color=\"#0E9EF0\" Offset=\"0.8\" /> <GradientStop Color=\"#1580D9\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"BorderThickness=1,1,0,1",
        L"BorderBrush=#095BC9",
        L"Padding=4,0,0,0"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0.5,1\"> <GradientStop Color=\"#3168d5\" Offset=\"0.0\" /> <GradientStop Color=\"#4993E6\" Offset=\"0.1\" /> <GradientStop Color=\"#2157D7\" Offset=\"0.35\" /> <GradientStop Color=\"#2663E0\" Offset=\"0.8\" /> <GradientStop Color=\"#1941A5\" Offset=\"1.0\" /></LinearGradientBrush>"}},
}};

const Theme g_themeBubbles = {{
    ThemeTargetStyles{L"Rectangle#BackgroundFill", {
        L"Fill=#EE080810"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Background@NoRunningIndicator=#40303030"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel@CommonStates > Border#BackgroundElement", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Background@ActivePointerOver=#202020",
        L"Background@InactivePointerOver=#202020",
        L"Background@ActivePressed=#101010",
        L"Background@InactivePressed=#101010"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Margin=0,5,4,5",
        L"Padding=10,0,0,0"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Rectangle#RunningIndicator", {
        L"Width=40",
        L"Height=40",
        L"Stroke@InactivePointerOver=#75A8E6",
        L"Stroke@InactivePressed=#7CB1F2",
        L"Stroke@ActiveNormal=#5F87B9",
        L"Stroke@ActivePointerOver=#75A8E6",
        L"Stroke@ActivePressed=#7CB1F2",
        L"Fill=Transparent",
        L"RadiusX=20",
        L"RadiusY=20",
        L"StrokeThickness=3",
        L"Margin=0",
        L"Stroke@MultiWindowPointerOver=#CCCCDD",
        L"Stroke@MultiWindowPressed=White",
        L"Stroke@MultiWindowActive=#BBBBCC",
        L"Fill@MultiWindowNormal=#88AAAABB",
        L"Fill@MultiWindowPointerOver=#88AAAABB",
        L"Fill@MultiWindowActive=#88AAAABB",
        L"Fill@MultiWindowPressed=#88AAAABB"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock#LabelControl", {
        L"Margin=4,0,0,0",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Height=48",
        L"Margin=0,-2,0,0"}},
    ThemeTargetStyles{L"TextBlock#SearchBoxTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Height=0"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background=#EE080810",
        L"BorderBrush=#303030",
        L"BorderThickness=2.5"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer#Icon", {
        L"Margin=1,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.Stack#ShowDesktopStack", {
        L"Padding=5,0,5,0",
        L"Margin=2,0,10,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Shapes.Rectangle#ShowDesktopPipe", {
        L"MinWidth=4",
        L"RadiusX=2",
        L"RadiusY=2"}},
    ThemeTargetStyles{L"SystemTray.Stack#NotifyIconStack > Windows.UI.Xaml.Controls.Grid > SystemTray.StackListView > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter > SystemTray.ChevronIconView > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"CornerRadius=16,5,5,16",
        L"Margin=-3,4,0,4"}},
}};

const Theme g_themeTranslucentTaskbar = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.15\" Opacity=\"1\" FallbackColor=\"#70262626\"/>"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill=#C444"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.12\" Opacity=\"1\" FallbackColor=\"#A0262626\"/>",
        L"BorderThickness=0,0,0,0",
        L"CornerRadius=14",
        L"Padding=3,4,3,4"}},
    ThemeTargetStyles{L"Border#OverflowFlyoutBackgroundBorder", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.12\" Opacity=\"1\" FallbackColor=\"#A0262626\"/>",
        L"BorderThickness=0,0,0,0",
        L"CornerRadius=15",
        L"Margin=-2,-2,-2,-2"}},
}};

const Theme g_themeSquircle = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill=#CC222222"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel@CommonStates > Border#BackgroundElement", {
        L"CornerRadius=5",
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\" />",
        L"Background@InactivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@ActivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.9\" FallbackColor=\"#CC222222\" />",
        L"Background@ActiveNormal:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@InactiveNormal:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.7\" FallbackColor=\"#BB222222\" />",
        L"Background@InactivePressed:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@ActivePressed:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\"/>",
        L"CornerRadius=5",
        L"Margin=0,5,14,5",
        L"Padding=10,0,0,0"}},
    ThemeTargetStyles{L"Rectangle#RunningIndicator", {
        L"Fill=Transparent",
        L"RadiusX=5",
        L"RadiusY=5",
        L"Height=38",
        L"Width=40"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock#LabelControl", {
        L"Margin=4,0,0,0",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Foreground=White",
        L"Margin=-11,0,0,0"}},
    ThemeTargetStyles{L"TextBlock#SearchBoxTextBlock", {
        L"FontSize=12",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton#TaskListButton[AutomationProperties.Name=Copilot] > Taskbar.TaskListLabeledButtonPanel#IconPanel > Border#BackgroundElement", {
        L"Background:=<AcrylicBrush TintColor=\"Red\" TintOpacity=\"0.8\" />"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"Margin=0,3,0,3",
        L"CornerRadius=5"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton > Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel > Border#BackgroundElement@CommonStates", {
        L"Background@InactivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" />",
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\" />"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Border#BackgroundElement", {
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton", {
        L"Margin=-11,0,0,0"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.Name=Task View]", {
        L"Margin=-12,0,0,0"}},
    ThemeTargetStyles{L"taskbar:TaskListLabeledButtonPanel@RunningIndicatorStates > Border", {
        L"Background@ActiveRunningIndicator:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />",
        L"Background@InactiveRunningIndicator:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />",
        L"Background@InactiveRunningIndicatorPointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Border#BackgroundElement", {
        L"Background@InactivePointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#DD222222\"/>",
        L"Background@ActivePointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#EE222222\"/>",
        L"Background@InactiveNormal:=<AcrylicBrush TintOpacity=\"0.2\" TintColor=\"Black\" FallbackColor=\"#BB222222\"/>",
        L"Background@ActiveNormal:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#CC222222\"/>",
        L"Background@ActivePressed:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"#333333\" FallbackColor=\"#BB333333\" />",
        L"Background@InactivePressed:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"#333333\" FallbackColor=\"#BB333333\" />",
        L"CornerRadius=5",
        L"Margin=1"}},
}};

const Theme g_themeSquircle_variant_WeatherOnTheRight = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill=#CC222222"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel@CommonStates > Border#BackgroundElement", {
        L"CornerRadius=5",
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\" />",
        L"Background@InactivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@ActivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@ActiveNormal:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@InactivePressed:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />",
        L"Background@ActivePressed:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#CC222222\" />"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\" />",
        L"CornerRadius=5",
        L"Margin=0,5,12,5",
        L"Padding=10,0,0,0"}},
    ThemeTargetStyles{L"Rectangle#RunningIndicator", {
        L"Fill=Transparent",
        L"RadiusX=5",
        L"RadiusY=5",
        L"Height=38",
        L"Width=40"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock#LabelControl", {
        L"Margin=4,0,0,0",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Foreground=White",
        L"Margin=0,0,-10,0"}},
    ThemeTargetStyles{L"TextBlock#SearchBoxTextBlock", {
        L"FontSize=12",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton#TaskListButton[AutomationProperties.Name=Copilot]", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" />",
        L"Margin=12,0,12,0",
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"Margin=0,3,0,3",
        L"CornerRadius=5"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton > Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel > Border#BackgroundElement@CommonStates", {
        L"Background@InactivePointerOver:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" />",
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\"/>",
        L"Width=125"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\" />"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Border#BackgroundElement", {
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton", {
        L"Margin=20,1,-20,1"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton", {
        L"Margin=0,0,-11,0",
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" FallbackColor=\"#BB222222\"/>"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton", {
        L"Margin=12,0,-10,0"}},
    ThemeTargetStyles{L"Grid#AugmentedEntryPointContentGrid", {
        L"Margin=10,0,-5,0"}},
    ThemeTargetStyles{L"taskbar:TaskListLabeledButtonPanel@RunningIndicatorStates > Border", {
        L"Background@ActiveRunningIndicator:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />",
        L"Background@InactiveRunningIndicator:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />",
        L"Background@InactiveRunningIndicatorPointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" />"}},
    ThemeTargetStyles{L"taskbar:TaskListLabeledButtonPanel@CommonStates > Border#BackgroundElement", {
        L"Background@InactivePointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#DD222222\" />",
        L"Background@ActivePointerOver:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#EE222222\" />",
        L"Background@InactiveNormal:=<AcrylicBrush TintOpacity=\"0.2\" TintColor=\"Black\" FallbackColor=\"#BB222222\" />",
        L"Background@ActiveNormal:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"Black\" FallbackColor=\"#CC222222\" />",
        L"Background@ActivePressed:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"#333333\" FallbackColor=\"#BB333333\" />",
        L"Background@InactivePressed:=<AcrylicBrush TintOpacity=\"0.8\" TintColor=\"#333333\" FallbackColor=\"#BB333333\" />",
        L"CornerRadius=5",
        L"Margin=1"}},
}};

const Theme g_themeRosePine = {{
    ThemeTargetStyles{L"Taskbar.TaskListButton", {
        L"CornerRadius=3"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid#ContainerGrid > SystemTray.AdaptiveTextBlock#Base > TextBlock#InnerTextBlock", {
        L"FontSize=16"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
        L"MinWidth=25"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter[1] > SystemTray.IconView > Grid > Grid", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid#ContainerGrid", {
        L"Padding=2"}},
    ThemeTargetStyles{L"SystemTray.ChevronIconView", {
        L"MinWidth=27"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView#SystemTrayIcon > Grid > Grid > SystemTray.TextIconContent", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > Border#BackgroundElement", {
        L"Background:=#302d47",
        L"CornerRadius=6"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=#302d47",
        L"CornerRadius=6",
        L"Margin=0,5,4,4",
        L"Padding=3,0,-8,0"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Rectangle#RunningIndicator", {
        L"Height=27",
        L"RadiusX=5",
        L"RadiusY=5",
        L"StrokeThickness=2",
        L"Stroke@InactivePointerOver=#ebbcba",
        L"Stroke@InactivePressed=#ebbcba",
        L"Stroke@ActiveNormal=#ebbcba",
        L"Stroke@ActivePointerOver=#ebbcba",
        L"Stroke@ActivePressed=#ebbcba",
        L"Fill=Transparent",
        L"Width=37",
        L"VerticalAlignment=1",
        L"Canvas.ZIndex=1"}},
    ThemeTargetStyles{L"SystemTray.ImageIconContent > Grid#ContainerGrid > Image", {
        L"Width=13"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid#ContainerGrid > SystemTray.AdaptiveTextBlock#Base > TextBlock#InnerTextBlock", {
        L"FontSize=14"}},
    ThemeTargetStyles{L"TextBlock#LabelControl", {
        L"FontFamily=JetBrainsMono NF",
        L"Foreground=#e0def4",
        L"Padding=2,0,8,0"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton]", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock[Text=\uE971]", {
        L"Text=\uE712"}},
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill=#302d47"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel > Border#BackgroundElement", {
        L"Background=#302d47"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Margin=0,0,0,-2"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background=#302d47"}},
}};

const Theme g_themeDockLike = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame#TaskbarFrame", {
        L"Width=Auto",
        L"HorizontalAlignment=Center",
        L"Margin=250,0,250,0"}},
    ThemeTargetStyles{L"Taskbar.TaskbarFrame#TaskbarFrame > Grid#RootGrid", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeAltHighColor}\" TintOpacity=\"0.8\" FallbackColor=\"{ThemeResource SystemChromeLowColor}\" />",
        L"Padding=6,0,6,0",
        L"CornerRadius=8,8,0,0",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource SurfaceStrokeColorDefault}\" />"}},
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton > Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel", {
        L"Margin=0"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeAltHighColor}\" TintOpacity=\"0.8\" FallbackColor=\"{ThemeResource SystemChromeLowColor}\" />",
        L"Margin=-4,-8,-4,-8",
        L"CornerRadius=10",
        L"BorderThickness=12,12,12,12",
        L"BackgroundSizing=InnerBorderEdge"}},
    ThemeTargetStyles{L"SystemTray.ChevronIconView", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.OmniButton", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.CopilotIcon", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > systemtray:IconView#SystemTrayIcon > Grid", {
        L"Padding=4,0,4,0"}},
    ThemeTargetStyles{L"SystemTray.IconView#SystemTrayIcon > Grid#ContainerGrid > ContentPresenter#ContentPresenter > Grid#ContentGrid > SystemTray.TextIconContent > Grid#ContainerGrid", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.StackListView#IconStack > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView#SystemTrayIcon", {
        L"Padding=0"}},
    ThemeTargetStyles{L"SystemTray.Stack#ShowDesktopStack", {
        L"Margin=0,-4,-12,-4"}},
    ThemeTargetStyles{L"Taskbar.Gripper#GripperControl", {
        L"Width=Auto",
        L"MinWidth=24"}},
}};

const Theme g_themeWinVista = {{
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton", {
        L"CornerRadius=2"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"CornerRadius=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton", {
        L"CornerRadius=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Rectangle#RunningIndicator", {
        L"Height=2",
        L"Width@ActiveRunningIndicator=30",
        L"Width@InactiveRunningIndicator=8",
        L"Fill@ActiveRunningIndicator=#00BEE0",
        L"Fill@InactiveRunningIndicator=#DDDDDD"}},
    ThemeTargetStyles{L"Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\" Opacity=\"0.7\"><GradientStop Color=\"#B5B9BC\" Offset=\"0.0\" /><GradientStop Color=\"#B5B9BC\" Offset=\"0.03125\" /><GradientStop Color=\"#909296\" Offset=\"0.03125\" /><GradientStop Color=\"#464B51\" Offset=\"0.5\" /><GradientStop Color=\"#060F15\" Offset=\"0.5\" /><GradientStop Color=\"#040C11\" Offset=\"0.96875\" /><GradientStop Color=\"#000000\" Offset=\"0.96875\" /><GradientStop Color=\"#000000\" Offset=\"1.0\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border", {
        L"Background@ActiveRunningIndicator:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\" Opacity=\"0.2\"><GradientStop Color=\"#111111\" Offset=\"0.0\" /><GradientStop Color=\"#111111\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"CornerRadius=2",
        L"Background@RequestingAttentionRunningIndicator:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\" Opacity=\"0.2\"><GradientStop Color=\"#D53300\" Offset=\"0.0\" /><GradientStop Color=\"#111111\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"BorderBrush=#33101010",
        L"BorderThickness=1",
        L"BorderBrush@NoRunningIndicator=Transparent",
        L"Background@NoRunningIndicator=Transparent",
        L"Background@ActiveRunningIndicator=#55BBBBBB",
        L"BorderBrush@ActiveRunningIndicator=#55212121"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Border#BackgroundElement", {
        L"Margin=0,0,0,2",
        L"BorderThickness=1",
        L"Background@ActivePointerOver=#88DDDDDD",
        L"Background@ActiveNormal=#33BBBBBB",
        L"Background@InactivePointerOver=#33BBBBBB",
        L"BorderBrush@ActiveNormal=#44AAAAAA",
        L"BorderBrush@ActivePointerOver=#FF888888",
        L"BorderBrush@InactiveNormal=Transparent"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock", {
        L"FontFamily=Segoe UI"}},
    ThemeTargetStyles{L"SystemTray.AdaptiveTextBlock#LanguageInnerTextBlock > TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe UI"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"FontFamily=Segoe UI"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#BackgroundControl > Grid", {
        L"Background:=<AcrylicBrush TintColor=\"Transparent\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Background=#BB212121",
        L"BorderThickness=0",
        L"Margin=0,2,1,4"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\" Opacity=\"0.7\"><GradientStop Color=\"#B5B9BC\" Offset=\"0.0\" /><GradientStop Color=\"#B5B9BC\" Offset=\"0.03125\" /><GradientStop Color=\"#909296\" Offset=\"0.03125\" /><GradientStop Color=\"#464B51\" Offset=\"0.5\" /><GradientStop Color=\"#060F15\" Offset=\"0.5\" /><GradientStop Color=\"#040C11\" Offset=\"0.96875\" /><GradientStop Color=\"#000000\" Offset=\"0.96875\" /><GradientStop Color=\"#000000\" Offset=\"1.0\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid", {
        L"Background:=<AcrylicBrush TintColor=\"Transparent\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.1\" Opacity=\"1\" />",
        L"Padding=-1",
        L"Margin=0,6,0,6",
        L"CornerRadius=8"}},
}};

const Theme g_themeCleanSlate = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark2}\" TintOpacity=\"0.4\" FallbackColor=\"{ThemeResource SystemAccentColorDark1}\" />"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel@CommonStates > Border#BackgroundElement", {
        L"CornerRadius=100",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark2}\" TintOpacity=\"0.4\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"Background@InactivePointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark1}\" TintOpacity=\"0.4\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\"/>",
        L"Background@ActivePointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark1}\" TintOpacity=\"0.6\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"Background@ActiveNormal:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark1}\" TintOpacity=\"0.6\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\"/>",
        L"Background@InactivePressed:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark1}\" TintOpacity=\"0.6\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"Background@ActivePressed:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" />"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark2}\" TintOpacity=\"0.5\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"CornerRadius=5",
        L"Margin=0,5,5,5",
        L"Padding=1,0,-10,0"}},
    ThemeTargetStyles{L"Rectangle#RunningIndicator", {
        L"Fill=Transparent",
        L"RadiusX=5",
        L"RadiusY=5",
        L"Height=40",
        L"Margin=0,-4,0,0",
        L"Canvas.ZIndex=1",
        L"MinWidth=40"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock#LabelControl", {
        L"Margin=8,0,0,0",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Foreground=White",
        L"Margin=-11,0,0,0"}},
    ThemeTargetStyles{L"TextBlock#SearchBoxTextBlock", {
        L"FontSize=12",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListButton#TaskListButton[AutomationProperties.Name=Copilot] > Taskbar.TaskListLabeledButtonPanel#IconPanel > Border#BackgroundElement", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" />"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"Margin=0,3,0,3",
        L"CornerRadius=5"}},
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton#AugmentedEntryPointButton > Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel > Border#BackgroundElement@CommonStates", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark2}\" TintOpacity=\"0.4\" FallbackColor=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0.8\" />"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Border#BackgroundElement", {
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Rectangle#RunningIndicator", {
        L"StrokeThickness=1",
        L"Stroke@InactivePointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColor}\" />",
        L"Stroke@InactivePressed:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorDark2}\" />",
        L"Stroke@ActiveNormal:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight2}\" />",
        L"Stroke@ActivePointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight1}\" />",
        L"Stroke@ActivePressed:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight3}\" />"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"Background@InactiveRunningIndicator:=<SolidColorBrush Color=\"Black\" Opacity=\"0.4\" />",
        L"Background@InactiveRunningIndicator:=<SolidColorBrush Color=\"Black\" Opacity=\"0.4\" />",
        L"Background@ActiveRunningIndicator:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorDark2}\" Opacity=\"0.4\" />",
        L"Background@NoRunningIndicator:=Transparent",
        L"Background@RequestingAttentionRunningIndicator:=<SolidColorBrush Color=\"#ffdf5e\" Opacity=\"0.4\" />",
        L"Margin=1"}},
    ThemeTargetStyles{L"Rectangle#ShowDesktopPipe", {
        L"Width=12",
        L"Height=38",
        L"Margin=-6,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.Stack#ShowDesktopStack", {
        L"Width=12"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel", {
        L"Margin=-3,0,0,0"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColorDark2}\" TintOpacity=\"0.4\" FallbackColor=\"{ThemeResource SystemAccentColorDark1}\" />"}},
}};

const Theme g_themeLucent = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#00000000\" Offset=\"0.3\" /><GradientStop Color=\"#AA000000\" Offset=\"0.9\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#ee000000\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Rectangle#RunningIndicator", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"CornerRadius=15",
        L"Background@ActiveRunningIndicator:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight3}\"/>",
        L"Background@InactiveRunningIndicator:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#3300290c\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"Margin@ActiveRunningIndicator=-4",
        L"Margin=0,-1,0,-1",
        L"CornerRadius@ActiveRunningIndicator=2",
        L"CornerRadius@InactiveRunningIndicator=0",
        L"Margin@InactiveRunningIndicator=-4",
        L"Margin@RequestingAttentionRunningIndicator=0,-4,0,-4",
        L"CornerRadius@RequestingAttentionRunningIndicator=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > TextBlock#LabelControl", {
        L"Foreground@ActiveNormal=Black",
        L"Foreground@ActivePointerOver=Black",
        L"Margin=0,0,3,0"}},
    ThemeTargetStyles{L"SystemTray.SystemTrayFrame > Grid", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#50000000\" Offset=\"0.3\" /><GradientStop Color=\"#EE000000\" Offset=\"0.9\" /></LinearGradientBrush>",
        L"Margin=0,0,0,2",
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"SystemTray.ChevronIconView", {
        L"Padding=20"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
        L"Padding=2"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#80000000\" Offset=\"0.0\" /><GradientStop Color=\"#FF000000\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"Padding=0",
        L"CornerRadius=0",
        L"Margin=0"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#ee000000\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>"}},
}};

/**
 * Light variant of the Lucent theme
 * Provides a translucent appearance with light accents for the taskbar
 */
const Theme g_themeLucent_variant_Light = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#00000000\" Offset=\"0.3\" /><GradientStop Color=\"#AA000000\" Offset=\"0.9\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#ee000000\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Rectangle#RunningIndicator", {
        L"Fill=Transparent"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"CornerRadius=15",
        L"Background@ActiveRunningIndicator:=#FCFCFC",
        L"Background@InactiveRunningIndicator:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#3300290c\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"Margin@ActiveRunningIndicator=-4",
        L"Margin=0,-1,0,-1",
        L"CornerRadius@ActiveRunningIndicator=2",
        L"CornerRadius@InactiveRunningIndicator=0",
        L"Margin@InactiveRunningIndicator=-4",
        L"Margin@RequestingAttentionRunningIndicator=0,-4,0,-4",
        L"CornerRadius@RequestingAttentionRunningIndicator=2"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > TextBlock#LabelControl", {
        L"Foreground@ActiveNormal=Black",
        L"Foreground@ActivePointerOver=Black",
        L"Margin=0,0,3,0"}},
    ThemeTargetStyles{L"SystemTray.SystemTrayFrame > Grid", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#50000000\" Offset=\"0.3\" /><GradientStop Color=\"#EE000000\" Offset=\"0.9\" /></LinearGradientBrush>",
        L"Margin=0,0,0,2",
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"SystemTray.ChevronIconView", {
        L"Padding=20"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
        L"Padding=2"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0\" EndPoint=\"0,1\"><GradientStop Color=\"#80000000\" Offset=\"0.0\" /><GradientStop Color=\"#FF000000\" Offset=\"1.0\" /></LinearGradientBrush>",
        L"Padding=0",
        L"CornerRadius=0",
        L"Margin=0"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background:=<LinearGradientBrush StartPoint=\"0,0.5\" EndPoint=\"0,1\"><GradientStop Color=\"#ee000000\" Offset=\"0.1\" /><GradientStop Color=\"{ThemeResource SystemAccentColorDark2}\" Offset=\"0.9\" /><GradientStop Color=\"#AAFFFFFF\" Offset=\"1.0\" /></LinearGradientBrush>"}},
}};

/**
 * Windows 21996 Taskbar theme
 * Mimics the appearance of early Windows 11 builds (21996) taskbar
 */
const Theme g_theme21996Taskbar = {{
    ThemeTargetStyles{L"Taskbar.SearchBoxButton#SearchBoxButton > Taskbar.TaskListButtonPanel#ExperienceToggleButtonRootPanel > Windows.UI.Xaml.Controls.Border#BackgroundElement", {
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Height=48"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView#SystemTrayIcon > Grid > Grid > SystemTray.TextIconContent > Windows.UI.Xaml.Controls.Grid > SystemTray.AdaptiveTextBlock > Windows.UI.Xaml.Controls.TextBlock", {
        L"Visibility=Visible",
        L"Text=\u200E \u200E\u200E\u200E\uE91C ",
        L"FontSize=16.4",
        L"FontFamily=Segoe MDL2 Assets",
        L"Width=30",
        L"FontWeight=ExtraLight",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource SystemBaseHighColor}\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon#SearchBoxFontIcon", {
        L"FontFamily=Segoe Fluent Icons",
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"16\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#SearchBoxTextBlock", {
        L"Text=Search",
        L"FontSize=14"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
        L"CornerRadius=0",
        L"Height=61",
        L"Margin=0,-5,0,0",
        L"Width=22"}},
    ThemeTargetStyles{L"SystemTray.ChevronIconView", {
        L"CornerRadius=0",
        L"Height=61",
        L"Margin=-7,-6,0,0",
        L"Width=24",
        L"FontFamily=Segoe MDL2 Assets"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton#SearchBoxButton[AutomationProperties.AutomationId=SearchButton] > Taskbar.TaskListButtonPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer#Icon", {
        L"FlowDirection=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Button#GleamEntryPointButton > Windows.UI.Xaml.Controls.Border", {
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#DynamicSearchBoxGleamContainer", {
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton", {
        L"CornerRadius=0",
        L"Padding=0,0,0,0",
        L"Margin=0,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.Stack#NonActivatableStack", {
        L"Visibility=Collapsed",
        L"Height=61",
        L"CornerRadius=0",
        L"Margin=0,-7.5,0,0",
        L"Width=36"}},
    ThemeTargetStyles{L"Rectangle#ShowDesktopPipe@CommonStates", {
        L"Width=9",
        L"Margin=0,0,-10,0",
        L"Height=500",
        L"Fill@Active:=<AcrylicBrush TintColor=\"{ThemeResource SystemBaseLowColor}\" TintOpacity=\"0.5\" Opacity=\"0\"/>",
        L"Stroke:=<SolidColorBrush Color=\"{ThemeResource SystemBaseHighColor}\" Opacity=\"0.5\"/>"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton", {
        L"Padding=0,0,0,0",
        L"CornerRadius=0",
        L"Margin=0,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.AdaptiveTextBlock#LanguageInnerTextBlock > TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe UI",
        L"Margin=-8,0,0,0",
        L"FontSize=12"}},
    ThemeTargetStyles{L"SystemTray.SystemTrayFrame > Windows.UI.Xaml.Controls.Grid#SystemTrayFrameGrid > SystemTray.Stack#NotifyIconStack > Windows.UI.Xaml.Controls.Grid#Content > SystemTray.StackListView#IconStack > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter > SystemTray.ChevronIconView > Windows.UI.Xaml.Controls.Grid#ContainerGrid > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.Grid#ContentGrid > SystemTray.TextIconContent > Windows.UI.Xaml.Controls.Grid#ContainerGrid > SystemTray.AdaptiveTextBlock#Base > Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe MDL2 Assets",
        L"FontSize=12.4",
        L"Width=22"}},
    ThemeTargetStyles{L"SystemTray.SystemTrayFrame > Windows.UI.Xaml.Controls.Grid#SystemTrayFrameGrid > SystemTray.Stack#NotifyIconStack > Windows.UI.Xaml.Controls.Grid#Content > SystemTray.StackListView#IconStack > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter", {
        L"Width=30"}},
    ThemeTargetStyles{L"SystemTray.AdaptiveTextBlock#Base > Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe MDL2 Assets"}},
    ThemeTargetStyles{L"SystemTray.AdaptiveTextBlock#AccentOverlay > Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe MDL2 Assets"}},
    ThemeTargetStyles{L"SystemTray.AdaptiveTextBlock#Underlay > Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock", {
        L"FontFamily=Segoe MDL2 Assets"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter[1] > SystemTray.IconView > Grid > Grid", {
        L"Margin=-5,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.Stack#MainStack > Windows.UI.Xaml.Controls.Grid#Content", {
        L"CornerRadius=0",
        L"Height=61",
        L"Margin=0,-7,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock#TimeInnerTextBlock", {
        L"FontFamily=Segoe UI",
        L"TextAlignment=0",
        L"FontSize=12",
        L"Margin=0,-1,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock#DateInnerTextBlock", {
        L"FontFamily=Segoe UI",
        L"TextAlignment=0",
        L"FontSize=12",
        L"Margin=0,2,0,0"}},
    ThemeTargetStyles{L"SystemTray.NotificationAreaIcons#NotificationAreaIcons > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter", {
        L"Width=23",
        L"Margin=0,-2,0,0"}},
    ThemeTargetStyles{L"SystemTray.NotificationAreaIcons#NotificationAreaIcons > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter > SystemTray.NotifyIconView#NotifyItemIcon > Windows.UI.Xaml.Controls.Grid#ContainerGrid", {
        L"Margin=-9,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.Stack#NotifyIconStack", {
        L"Width=24"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView#SystemTrayIcon > Grid > Grid > SystemTray.TextIconContent > Windows.UI.Xaml.Controls.Grid > SystemTray.AdaptiveTextBlock > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE115",
        L"FontSize=16.5",
        L"Margin=0,-1,0,0",
        L"FontWeight=0"}},
    ThemeTargetStyles{L"SystemTray.CopilotIcon#CopilotIcon", {
        L"Visibility=Collapsed",
        L"Margin=0,-7,0,0",
        L"Height=61"}},
    ThemeTargetStyles{L"SystemTray.NotificationAreaOverflow > Windows.UI.Xaml.Controls.Grid#OverflowRootGrid > Windows.UI.Xaml.Controls.Border#OverflowFlyoutBackgroundBorder", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"SystemTray.NotificationAreaOverflow > Windows.UI.Xaml.Controls.Grid#OverflowRootGrid > Windows.UI.Xaml.Controls.ItemsControl > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.WrapGrid", {
        L"Margin=0,0,0,0"}},
    ThemeTargetStyles{L"SystemTray.NotifyIconView", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ScrollViewer > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.Border > SystemTray.NotificationAreaOverflow", {
        L"Transform3D:=<CompositeTransform3D TranslateY=\"15\" />"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter[1] > SystemTray.IconView > Grid > Grid", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter[3] > SystemTray.IconView > Grid > Grid", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton", {
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#RootGrid", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeMediumHighColor}\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.8\" FallbackColor=\"{ThemeResource SystemChromeMediumColor}\" />"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#BackgroundControl > Grid > Windows.UI.Xaml.Shapes.Rectangle#BackgroundFill", {
        L"Opacity=0.5"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Shapes.Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
}};

// clang-format on
// End of theme definitions

/**
 * Thread tracking and customization state variables
 */

std::atomic<DWORD> g_targetThreadId = 0;

/**
 * Function declarations for customization application and cleanup
 *
 * ApplyCustomizations: Applies visual customizations to a UI element
 * CleanupCustomizations: Removes customizations and restores original appearance
 */
void ApplyCustomizations(InstanceHandle handle,
                         winrt::Windows::UI::Xaml::FrameworkElement element,
                         PCWSTR fallbackClassName);
void CleanupCustomizations(InstanceHandle handle);

HMODULE GetCurrentModuleHandle()
{
    HMODULE module;
    if (!GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           L"", &module))
    {
        return nullptr;
    }

    return module;
}

////////////////////////////////////////////////////////////////////////////////
// clang-format off

#pragma region winrt_hpp

#include <Unknwn.h>
// Base WinRT header already included above

// forward declare namespaces we alias
namespace winrt {
    namespace Windows {
        namespace Foundation {}
        namespace UI::Xaml {}
    }
}

// alias some long namespaces for convenience
namespace wf = winrt::Windows::Foundation;
namespace wux = winrt::Windows::UI::Xaml;

#pragma endregion  // winrt_hpp

#pragma region visualtreewatcher_hpp
/**
 * VisualTreeWatcher class declaration
 * 
 * This class monitors the XAML visual tree for changes and applies
 * customizations to elements as they are added or removed.
 */
#include <winrt/Windows.UI.Xaml.h>

class VisualTreeWatcher : public winrt::implements<VisualTreeWatcher, IVisualTreeServiceCallback2, winrt::non_agile>
{
public:
    VisualTreeWatcher(winrt::com_ptr<IUnknown> site);

    VisualTreeWatcher(const VisualTreeWatcher&) = delete;
    VisualTreeWatcher& operator=(const VisualTreeWatcher&) = delete;

    VisualTreeWatcher(VisualTreeWatcher&&) = delete;
    VisualTreeWatcher& operator=(VisualTreeWatcher&&) = delete;

    ~VisualTreeWatcher();

    void UnadviseVisualTreeChange();

private:
    HRESULT STDMETHODCALLTYPE OnVisualTreeChange(ParentChildRelation relation, VisualElement element, VisualMutationType mutationType) override;
    HRESULT STDMETHODCALLTYPE OnElementStateChanged(InstanceHandle element, VisualElementState elementState, LPCWSTR context) noexcept override;

    wf::IInspectable FromHandle(InstanceHandle handle)
    {
        wf::IInspectable obj;
        winrt::check_hresult(m_XamlDiagnostics->GetIInspectableFromHandle(handle, reinterpret_cast<::IInspectable**>(winrt::put_abi(obj))));
        return obj;
    }

    winrt::com_ptr<IXamlDiagnostics> m_XamlDiagnostics = nullptr;
};

#pragma endregion  // visualtreewatcher_hpp

#pragma region visualtreewatcher_cpp
/**
 * VisualTreeWatcher implementation
 * 
 * Handles visual tree change events and applies customizations
 * to UI elements as they are created or destroyed.
 */
VisualTreeWatcher::VisualTreeWatcher(winrt::com_ptr<IUnknown> site) :
    m_XamlDiagnostics(site.as<IXamlDiagnostics>())
{
    Wh_Log(L"Constructing VisualTreeWatcher");
    // winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->AdviseVisualTreeChange(this));

    // Calling AdviseVisualTreeChange from the current thread causes the app to
    // hang in Advising::RunOnUIThread sometimes. Creating a new thread and
    // calling it from there fixes it.
    HANDLE thread = CreateThread(
        nullptr, 0,
        [](LPVOID lpParam) -> DWORD {
            auto watcher = reinterpret_cast<VisualTreeWatcher*>(lpParam);
            HRESULT hr = watcher->m_XamlDiagnostics.as<IVisualTreeService3>()->AdviseVisualTreeChange(watcher);
            watcher->Release();
            if (FAILED(hr)) {
                Wh_Log(L"Error %08X", hr);
            }
            return 0;
        },
        this, 0, nullptr);
    if (thread) {
        AddRef();
        CloseHandle(thread);
    }
}

VisualTreeWatcher::~VisualTreeWatcher()
{
    Wh_Log(L"Destructing VisualTreeWatcher");
}

void VisualTreeWatcher::UnadviseVisualTreeChange()
{
    Wh_Log(L"UnadviseVisualTreeChange VisualTreeWatcher");
    winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->UnadviseVisualTreeChange(this));
}

HRESULT VisualTreeWatcher::OnVisualTreeChange(ParentChildRelation, VisualElement element, VisualMutationType mutationType) try
{
    if (GetCurrentThreadId() != g_targetThreadId)
    {
        return S_OK;
    }

    Wh_Log(L"========================================");

    switch (mutationType)
    {
    case Add:
        Wh_Log(L"Mutation type: Add");
        break;

    case Remove:
        Wh_Log(L"Mutation type: Remove");
        break;

    default:
        Wh_Log(L"Mutation type: %d", static_cast<int>(mutationType));
        break;
    }

    Wh_Log(L"Element type: %s", element.Type);

    if (mutationType == Add)
    {
        const auto inspectable = FromHandle(element.Handle);
        auto frameworkElement = inspectable.try_as<wux::FrameworkElement>();
        if (frameworkElement)
        {
            Wh_Log(L"FrameworkElement name: %s", frameworkElement.Name().c_str());
            ApplyCustomizations(element.Handle, frameworkElement, element.Type);
        }
        else
        {
            Wh_Log(L"Skipping non-FrameworkElement");
        }
    }
    else if (mutationType == Remove)
    {
        CleanupCustomizations(element.Handle);
    }

    return S_OK;
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);

    // Returning an error prevents (some?) further messages, always return
    // success.
    // return hr;
    return S_OK;
}

HRESULT VisualTreeWatcher::OnElementStateChanged(InstanceHandle, VisualElementState, LPCWSTR) noexcept
{
    return S_OK;
}

#pragma endregion  // visualtreewatcher_cpp

#pragma region tap_hpp
/**
 * Test Automation Provider (TAP) implementation
 * 
 * Implements the COM interfaces needed to hook into the XAML diagnostics
 * system and receive visual tree change notifications.
 */
#include <ocidl.h>

winrt::com_ptr<VisualTreeWatcher> g_visualTreeWatcher;

// {C85D8CC7-5463-40E8-A432-F5916B6427E5}
static constexpr CLSID CLSID_WindhawkTAP = { 0xc85d8cc7, 0x5463, 0x40e8, { 0xa4, 0x32, 0xf5, 0x91, 0x6b, 0x64, 0x27, 0xe5 } };

class WindhawkTAP : public winrt::implements<WindhawkTAP, IObjectWithSite, winrt::non_agile>
{
public:
    HRESULT STDMETHODCALLTYPE SetSite(IUnknown *pUnkSite) override;
    HRESULT STDMETHODCALLTYPE GetSite(REFIID riid, void **ppvSite) noexcept override;

private:
    winrt::com_ptr<IUnknown> site;
};

#pragma endregion  // tap_hpp

#pragma region tap_cpp

HRESULT WindhawkTAP::SetSite(IUnknown *pUnkSite) try
{
    // Only ever 1 VTW at once.
    if (g_visualTreeWatcher)
    {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    site.copy_from(pUnkSite);

    if (site)
    {
        // Decrease refcount increased by InitializeXamlDiagnosticsEx.
        FreeLibrary(GetCurrentModuleHandle());

        g_visualTreeWatcher = winrt::make_self<VisualTreeWatcher>(site);
    }

    return S_OK;
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);
    return hr;
}

HRESULT WindhawkTAP::GetSite(REFIID riid, void **ppvSite) noexcept
{
    return site.as(riid, ppvSite);
}

#pragma endregion  // tap_cpp

#pragma region simplefactory_hpp

#include <Unknwn.h>

template<class T>
struct SimpleFactory : winrt::implements<SimpleFactory<T>, IClassFactory, winrt::non_agile>
{
    HRESULT STDMETHODCALLTYPE CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppvObject) override try
    {
        if (!pUnkOuter)
        {
            *ppvObject = nullptr;
            return winrt::make<T>().as(riid, ppvObject);
        }
        else
        {
            return CLASS_E_NOAGGREGATION;
        }
    }
    catch (...)
    {
        HRESULT hr = winrt::to_hresult();
        Wh_Log(L"Error %08X", hr);
        return hr;
    }

    HRESULT STDMETHODCALLTYPE LockServer(BOOL) noexcept override
    {
        return S_OK;
    }
};

#pragma endregion  // simplefactory_hpp

#pragma region module_cpp

#include <combaseapi.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdll-attribute-on-redeclaration"

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv) try
{
    if (rclsid == CLSID_WindhawkTAP)
    {
        *ppv = nullptr;
        return winrt::make<SimpleFactory<WindhawkTAP>>().as(riid, ppv);
    }
    else
    {
        return CLASS_E_CLASSNOTAVAILABLE;
    }
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);
    return hr;
}

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllCanUnloadNow(void)
{
    if (winrt::get_module_lock())
    {
        return S_FALSE;
    }
    else
    {
        return S_OK;
    }
}

#pragma clang diagnostic pop

#pragma endregion  // module_cpp

#pragma region api_cpp
/**
 * API implementation for XAML diagnostics integration
 * 
 * Provides functions to inject the WindhawkTAP into the XAML diagnostics
 * system to receive visual tree change notifications.
 */
using PFN_INITIALIZE_XAML_DIAGNOSTICS_EX = decltype(&InitializeXamlDiagnosticsEx);

HRESULT InjectWindhawkTAP() noexcept
{
    HMODULE module = GetCurrentModuleHandle();
    if (!module)
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    WCHAR location[MAX_PATH];
    switch (GetModuleFileName(module, location, ARRAYSIZE(location)))
    {
    case 0:
    case ARRAYSIZE(location):
        return HRESULT_FROM_WIN32(GetLastError());
    }

    const HMODULE wux(LoadLibraryEx(L"Windows.UI.Xaml.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32));
    if (!wux) [[unlikely]]
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    const auto ixde = reinterpret_cast<PFN_INITIALIZE_XAML_DIAGNOSTICS_EX>(GetProcAddress(wux, "InitializeXamlDiagnosticsEx"));
    if (!ixde) [[unlikely]]
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    // I didn't find a better way than trying many connections until one works.
    // Reference:
    // https://github.com/microsoft/microsoft-ui-xaml/blob/d74a0332cf0d5e58f12eddce1070fa7a79b4c2db/src/dxaml/xcp/dxaml/lib/DXamlCore.cpp#L2782
    HRESULT hr;
    for (int i = 0; i < 10000; i++)
    {
        WCHAR connectionName[256];
        wsprintf(connectionName, L"VisualDiagConnection%d", i + 1);

        hr = ixde(connectionName, GetCurrentProcessId(), L"", location, CLSID_WindhawkTAP, nullptr);
        if (hr != HRESULT_FROM_WIN32(ERROR_NOT_FOUND))
        {
            break;
        }
    }

    return hr;
}

#pragma endregion  // api_cpp

// clang-format on
////////////////////////////////////////////////////////////////////////////////

/**
 * Core implementation section
 *
 * This section contains the main implementation of the taskbar customization
 * system, including element matching, style application, and property management.
 */
#include <list>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <variant>
#include <vector>

#include <commctrl.h>
#include <roapi.h>
#include <winstring.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Markup.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.h>

using namespace winrt::Windows::UI::Xaml;

/**
 * Utility types and helper functions
 */
// https://stackoverflow.com/a/51274008
template <auto fn>
struct deleter_from_fn
{
    template <typename T>
    constexpr void operator()(T *arg) const
    {
        fn(arg);
    }
};
using string_setting_unique_ptr =
    std::unique_ptr<const WCHAR[], deleter_from_fn<Wh_FreeStringSetting>>;

using PropertyKeyValue =
    std::pair<DependencyProperty, winrt::Windows::Foundation::IInspectable>;

using PropertyValuesUnresolved =
    std::vector<std::pair<std::wstring, std::wstring>>;
using PropertyValues = std::vector<PropertyKeyValue>;
using PropertyValuesMaybeUnresolved =
    std::variant<PropertyValuesUnresolved, PropertyValues>;

/**
 * ElementMatcher struct
 *
 * Used to identify UI elements based on type, name, and property values
 * for applying customizations to specific elements in the visual tree.
 */
struct ElementMatcher
{
    std::wstring type;
    std::wstring name;
    std::optional<std::wstring> visualStateGroupName;
    int oneBasedIndex = 0;
    PropertyValuesMaybeUnresolved propertyValues;
};

/**
 * StyleRule struct
 *
 * Represents a single style customization rule with property name,
 * visual state, and value to be applied to matched elements.
 */
struct StyleRule
{
    std::wstring name;
    std::wstring visualState;
    std::wstring value;
    bool isXamlValue = false;
};

using PropertyOverridesUnresolved = std::vector<StyleRule>;

// Property -> visual state -> value.
using PropertyOverrides = std::unordered_map<
    DependencyProperty,
    std::unordered_map<std::wstring, winrt::Windows::Foundation::IInspectable>>;

using PropertyOverridesMaybeUnresolved =
    std::variant<PropertyOverridesUnresolved, PropertyOverrides>;

struct ElementCustomizationRules
{
    ElementMatcher elementMatcher;
    std::vector<ElementMatcher> parentElementMatchers;
    PropertyOverridesMaybeUnresolved propertyOverrides;
};

std::vector<ElementCustomizationRules> g_elementsCustomizationRules;

struct ElementPropertyCustomizationState
{
    std::optional<winrt::Windows::Foundation::IInspectable> originalValue;
    std::optional<winrt::Windows::Foundation::IInspectable> customValue;
    int64_t propertyChangedToken = 0;
};

struct ElementCustomizationStateForVisualStateGroup
{
    std::unordered_map<DependencyProperty, ElementPropertyCustomizationState>
        propertyCustomizationStates;
    winrt::event_token visualStateGroupCurrentStateChangedToken;
};

struct ElementCustomizationState
{
    winrt::weak_ref<FrameworkElement> element;

    // Use list to avoid reallocations on insertion, as pointers to items are
    // captured in callbacks and stored.
    std::list<std::pair<std::optional<winrt::weak_ref<VisualStateGroup>>,
                        ElementCustomizationStateForVisualStateGroup>>
        perVisualStateGroup;
};

std::unordered_map<InstanceHandle, ElementCustomizationState>
    g_elementsCustomizationState;

bool g_elementPropertyModifying;

struct BackgroundFillDelayedApplyData
{
    UINT_PTR timer = 0;
    winrt::weak_ref<wux::FrameworkElement> element;
    std::wstring fallbackClassName;
};

std::unordered_map<InstanceHandle, BackgroundFillDelayedApplyData>
    g_backgroundFillDelayedApplyData;

winrt::Windows::Foundation::IInspectable ReadLocalValueWithWorkaround(
    DependencyObject elementDo,
    DependencyProperty property)
{
    const auto value = elementDo.ReadLocalValue(property);
    if (value && winrt::get_class_name(value) ==
                     L"Windows.UI.Xaml.Data.BindingExpressionBase")
    {
        // BindingExpressionBase was observed to be returned for XAML properties
        // that were declared as following:
        //
        // <Border ... CornerRadius="{TemplateBinding CornerRadius}" />
        //
        // Calling SetValue with it fails with an error, so we won't be able to
        // use it to restore the value. As a workaround, we use
        // GetAnimationBaseValue to get the value.
        return elementDo.GetAnimationBaseValue(property);
    }

    return value;
}

void SetOrClearValue(DependencyObject elementDo,
                     DependencyProperty property,
                     winrt::Windows::Foundation::IInspectable value)
{
    if (value == DependencyProperty::UnsetValue())
    {
        elementDo.ClearValue(property);
        return;
    }

    // This might fail. See `ReadLocalValueWithWorkaround` for an example (which
    // we now handle but there might be other cases).
    try
    {
        // `setter.Value()` returns font weight as an int. Using it with
        // `SetValue` results in the following error: 0x80004002 (No such
        // interface supported). Box it as `Windows.UI.Text.FontWeight` as a
        // workaround.
        if (property == Controls::TextBlock::FontWeightProperty() ||
            property == Controls::Control::FontWeightProperty())
        {
            auto valueInt = value.try_as<int>();
            if (valueInt && *valueInt >= std::numeric_limits<uint16_t>::min() &&
                *valueInt <= std::numeric_limits<uint16_t>::max())
            {
                value = winrt::box_value(winrt::Windows::UI::Text::FontWeight{
                    static_cast<uint16_t>(*valueInt)});
            }
        }

        elementDo.SetValue(property, value);
    }
    catch (winrt::hresult_error const &ex)
    {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    }
}

// https://stackoverflow.com/a/5665377
std::wstring EscapeXmlAttribute(std::wstring_view data)
{
    std::wstring buffer;
    buffer.reserve(data.size());
    for (const auto c : data)
    {
        switch (c)
        {
        case '&':
            buffer.append(L"&amp;");
            break;
        case '\"':
            buffer.append(L"&quot;");
            break;
        // case '\'':
        //     buffer.append(L"&apos;");
        //     break;
        case '<':
            buffer.append(L"&lt;");
            break;
        case '>':
            buffer.append(L"&gt;");
            break;
        default:
            buffer.push_back(c);
            break;
        }
    }

    return buffer;
}

// https://stackoverflow.com/a/54364173
std::wstring_view TrimStringView(std::wstring_view s)
{
    s.remove_prefix(std::min(s.find_first_not_of(L" \t\r\v\n"), s.size()));
    s.remove_suffix(
        std::min(s.size() - s.find_last_not_of(L" \t\r\v\n") - 1, s.size()));
    return s;
}

// https://stackoverflow.com/a/46931770
std::vector<std::wstring_view> SplitStringView(std::wstring_view s,
                                               std::wstring_view delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::wstring_view token;
    std::vector<std::wstring_view> res;

    while ((pos_end = s.find(delimiter, pos_start)) !=
           std::wstring_view::npos)
    {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

Style GetStyleFromXamlSetters(const std::wstring_view type,
                              const std::wstring_view xamlStyleSetters)
{
    std::wstring xaml =
        LR"(<ResourceDictionary
    xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
    xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
    xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
    xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
    xmlns:muxc="using:Microsoft.UI.Xaml.Controls")";

    if (auto pos = type.rfind('.'); pos != type.npos)
    {
        auto typeNamespace = std::wstring_view(type).substr(0, pos);
        auto typeName = std::wstring_view(type).substr(pos + 1);

        xaml += L"\n    xmlns:windhawkstyler=\"using:";
        xaml += EscapeXmlAttribute(typeNamespace);
        xaml +=
            L"\">\n"
            L"    <Style TargetType=\"windhawkstyler:";
        xaml += EscapeXmlAttribute(typeName);
        xaml += L"\">\n";
    }
    else
    {
        xaml +=
            L">\n"
            L"    <Style TargetType=\"";
        xaml += EscapeXmlAttribute(type);
        xaml += L"\">\n";
    }

    xaml += xamlStyleSetters;

    xaml +=
        L"    </Style>\n"
        L"</ResourceDictionary>";

    Wh_Log(L"======================================== XAML:");
    std::wstringstream ss(xaml);
    std::wstring line;
    while (std::getline(ss, line, L'\n'))
    {
        Wh_Log(L"%s", line.c_str());
    }
    Wh_Log(L"========================================");

    auto resourceDictionary =
        Markup::XamlReader::Load(xaml).as<ResourceDictionary>();

    auto [styleKey, styleInspectable] = resourceDictionary.First().Current();
    return styleInspectable.as<Style>();
}

Style GetStyleFromXamlSettersWithFallbackType(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    const std::wstring_view xamlStyleSetters)
{
    try
    {
        return GetStyleFromXamlSetters(type, xamlStyleSetters);
    }
    catch (winrt::hresult_error const &ex)
    {
        constexpr HRESULT kStowedException = 0x802B000A;
        if (ex.code() != kStowedException || fallbackType.empty() ||
            fallbackType == type)
        {
            throw;
        }

        // For some types such as JumpViewUI.JumpListListViewItem, the following
        // error is returned:
        //
        // Error 802B000A: Failed to create a 'System.Type' from the text
        // 'windhawkstyler:JumpListListViewItem'. [Line: 8 Position: 12]
        //
        // Retry with a fallback type, which will allow to at least use the
        // basic properties.
        Wh_Log(L"Retrying with fallback type type due to error %08X: %s",
               ex.code(), ex.message().c_str());
        return GetStyleFromXamlSetters(fallbackType, xamlStyleSetters);
    }
}

const PropertyOverrides &GetResolvedPropertyOverrides(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    PropertyOverridesMaybeUnresolved *propertyOverridesMaybeUnresolved)
{
    if (const auto *resolved =
            std::get_if<PropertyOverrides>(propertyOverridesMaybeUnresolved))
    {
        return *resolved;
    }

    PropertyOverrides propertyOverrides;

    try
    {
        const auto &styleRules = std::get<PropertyOverridesUnresolved>(
            *propertyOverridesMaybeUnresolved);
        if (!styleRules.empty())
        {
            std::wstring xaml;

            for (const auto &rule : styleRules)
            {
                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(rule.name);
                xaml += L"\"";
                if (rule.isXamlValue && rule.value.empty())
                {
                    xaml += L" Value=\"{x:Null}\" />\n";
                }
                else if (!rule.isXamlValue)
                {
                    xaml += L" Value=\"";
                    xaml += EscapeXmlAttribute(rule.value);
                    xaml += L"\" />\n";
                }
                else
                {
                    xaml +=
                        L">\n"
                        L"            <Setter.Value>\n";
                    xaml += rule.value;
                    xaml +=
                        L"\n"
                        L"            </Setter.Value>\n"
                        L"        </Setter>\n";
                }
            }

            auto style = GetStyleFromXamlSettersWithFallbackType(
                type, fallbackType, xaml);

            uint32_t i = 0;
            for (const auto &rule : styleRules)
            {
                const auto setter = style.Setters().GetAt(i++).as<Setter>();
                propertyOverrides[setter.Property()][rule.visualState] =
                    rule.isXamlValue && rule.value.empty()
                        ? DependencyProperty::UnsetValue()
                        : setter.Value();
            }
        }

        Wh_Log(L"%.*s: %zu override styles", static_cast<int>(type.length()),
               type.data(), propertyOverrides.size());
    }
    catch (winrt::hresult_error const &ex)
    {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    }
    catch (std::exception const &ex)
    {
        Wh_Log(L"Error: %S", ex.what());
    }

    *propertyOverridesMaybeUnresolved = std::move(propertyOverrides);
    return std::get<PropertyOverrides>(*propertyOverridesMaybeUnresolved);
}

const PropertyValues &GetResolvedPropertyValues(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    PropertyValuesMaybeUnresolved *propertyValuesMaybeUnresolved)
{
    if (const auto *resolved =
            std::get_if<PropertyValues>(propertyValuesMaybeUnresolved))
    {
        return *resolved;
    }

    PropertyValues propertyValues;

    try
    {
        const auto &propertyValuesStr =
            std::get<PropertyValuesUnresolved>(*propertyValuesMaybeUnresolved);
        if (!propertyValuesStr.empty())
        {
            std::wstring xaml;

            for (const auto &[property, value] : propertyValuesStr)
            {
                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(property);
                xaml += L"\" Value=\"";
                xaml += EscapeXmlAttribute(value);
                xaml += L"\" />\n";
            }

            auto style = GetStyleFromXamlSettersWithFallbackType(
                type, fallbackType, xaml);

            for (size_t i = 0; i < propertyValuesStr.size(); i++)
            {
                const auto setter = style.Setters().GetAt(i).as<Setter>();
                propertyValues.push_back({
                    setter.Property(),
                    setter.Value(),
                });
            }
        }

        Wh_Log(L"%.*s: %zu matcher styles", static_cast<int>(type.length()),
               type.data(), propertyValues.size());
    }
    catch (winrt::hresult_error const &ex)
    {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    }
    catch (std::exception const &ex)
    {
        Wh_Log(L"Error: %S", ex.what());
    }

    *propertyValuesMaybeUnresolved = std::move(propertyValues);
    return std::get<PropertyValues>(*propertyValuesMaybeUnresolved);
}

// https://stackoverflow.com/a/12835139
VisualStateGroup GetVisualStateGroup(FrameworkElement element,
                                     std::wstring_view visualStateGroupName)
{
    // The TaskListButtonPanel child element of the search box (with "Icon and
    // label" configuration) returns a list of size 1, but accessing the first
    // item leads to a null dereference crash. Skip this element.
    if (winrt::get_class_name(element) == L"Taskbar.TaskListButtonPanel" &&
        element.Name() == L"ExperienceToggleButtonRootPanel")
    {
        auto parent = Media::VisualTreeHelper::GetParent(element)
                          .try_as<FrameworkElement>();
        if (parent &&
            winrt::get_class_name(parent) ==
                L"Taskbar.SearchBoxLaunchListButton" &&
            parent.Name() == L"SearchBoxLaunchListButton")
        {
            return nullptr;
        }
    }

    auto list = VisualStateManager::GetVisualStateGroups(element);

    for (const auto &v : list)
    {
        if (v.Name() == visualStateGroupName)
        {
            return v;
        }
    }

    return nullptr;
}

bool TestElementMatcher(FrameworkElement element,
                        ElementMatcher &matcher,
                        VisualStateGroup *visualStateGroup,
                        PCWSTR fallbackClassName)
{
    if (!matcher.type.empty() &&
        matcher.type != winrt::get_class_name(element) &&
        (!fallbackClassName || matcher.type != fallbackClassName))
    {
        return false;
    }

    if (!matcher.name.empty() && matcher.name != element.Name())
    {
        return false;
    }

    if (matcher.oneBasedIndex)
    {
        auto parent = Media::VisualTreeHelper::GetParent(element);
        if (!parent)
        {
            return false;
        }

        int index = matcher.oneBasedIndex - 1;
        if (index < 0 ||
            index >= Media::VisualTreeHelper::GetChildrenCount(parent) ||
            Media::VisualTreeHelper::GetChild(parent, index) != element)
        {
            return false;
        }
    }

    auto elementDo = element.as<DependencyObject>();

    for (const auto &propertyValue : GetResolvedPropertyValues(
             matcher.type,
             fallbackClassName ? fallbackClassName
                               : winrt::name_of<FrameworkElement>(),
             &matcher.propertyValues))
    {
        const auto value =
            ReadLocalValueWithWorkaround(elementDo, propertyValue.first);
        if (!value)
        {
            Wh_Log(L"Null property value");
            return false;
        }

        const auto className = winrt::get_class_name(value);
        const auto expectedClassName =
            winrt::get_class_name(propertyValue.second);
        if (className != expectedClassName)
        {
            Wh_Log(L"Different property class: %s vs. %s", className.c_str(),
                   expectedClassName.c_str());
            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<String>")
        {
            if (winrt::unbox_value<winrt::hstring>(propertyValue.second) ==
                winrt::unbox_value<winrt::hstring>(value))
            {
                continue;
            }

            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Double>")
        {
            if (winrt::unbox_value<double>(propertyValue.second) ==
                winrt::unbox_value<double>(value))
            {
                continue;
            }

            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Boolean>")
        {
            if (winrt::unbox_value<bool>(propertyValue.second) ==
                winrt::unbox_value<bool>(value))
            {
                continue;
            }

            return false;
        }

        Wh_Log(L"Unsupported property class: %s", className.c_str());
        return false;
    }

    if (matcher.visualStateGroupName && visualStateGroup)
    {
        *visualStateGroup =
            GetVisualStateGroup(element, *matcher.visualStateGroupName);
    }

    return true;
}

std::unordered_map<VisualStateGroup, PropertyOverrides>
FindElementPropertyOverrides(FrameworkElement element,
                             PCWSTR fallbackClassName)
{
    std::unordered_map<VisualStateGroup, PropertyOverrides> overrides;
    std::unordered_set<DependencyProperty> propertiesAdded;

    for (auto it = g_elementsCustomizationRules.rbegin();
         it != g_elementsCustomizationRules.rend(); ++it)
    {
        auto &override = *it;

        VisualStateGroup visualStateGroup = nullptr;

        if (!TestElementMatcher(element, override.elementMatcher,
                                &visualStateGroup, fallbackClassName))
        {
            continue;
        }

        auto parentElementIter = element;
        bool parentElementMatchFailed = false;

        for (auto &matcher : override.parentElementMatchers)
        {
            // Using parentElementIter.Parent() was sometimes returning null.
            parentElementIter =
                Media::VisualTreeHelper::GetParent(parentElementIter)
                    .try_as<FrameworkElement>();
            if (!parentElementIter)
            {
                parentElementMatchFailed = true;
                break;
            }

            if (!TestElementMatcher(parentElementIter, matcher,
                                    &visualStateGroup, nullptr))
            {
                parentElementMatchFailed = true;
                break;
            }
        }

        if (parentElementMatchFailed)
        {
            continue;
        }

        auto &overridesForVisualStateGroup = overrides[visualStateGroup];
        for (const auto &[property, valuesPerVisualState] :
             GetResolvedPropertyOverrides(
                 override.elementMatcher.type,
                 fallbackClassName ? fallbackClassName
                                   : winrt::name_of<FrameworkElement>(),
                 &override.propertyOverrides))
        {
            bool propertyInserted = propertiesAdded.insert(property).second;
            if (!propertyInserted)
            {
                continue;
            }

            auto &propertyOverrides = overridesForVisualStateGroup[property];
            for (const auto &[visualState, value] : valuesPerVisualState)
            {
                propertyOverrides.insert({visualState, value});
            }
        }
    }

    std::erase_if(overrides, [](const auto &item)
                  {
        auto const& [key, value] = item;
        return value.empty(); });

    return overrides;
}

void ApplyCustomizationsForVisualStateGroup(
    FrameworkElement element,
    VisualStateGroup visualStateGroup,
    PropertyOverrides propertyOverrides,
    ElementCustomizationStateForVisualStateGroup *
        elementCustomizationStateForVisualStateGroup)
{
    auto elementDo = element.as<DependencyObject>();

    VisualState currentVisualState(
        visualStateGroup ? visualStateGroup.CurrentState() : nullptr);

    std::wstring currentVisualStateName(
        currentVisualState ? currentVisualState.Name() : L"");

    for (const auto &[property, valuesPerVisualState] : propertyOverrides)
    {
        const auto [propertyCustomizationStatesIt, inserted] =
            elementCustomizationStateForVisualStateGroup
                ->propertyCustomizationStates.insert({property, {}});
        if (!inserted)
        {
            continue;
        }

        auto &propertyCustomizationState =
            propertyCustomizationStatesIt->second;

        auto it = valuesPerVisualState.find(currentVisualStateName);
        if (it == valuesPerVisualState.end() &&
            !currentVisualStateName.empty())
        {
            it = valuesPerVisualState.find(L"");
        }

        if (it != valuesPerVisualState.end())
        {
            propertyCustomizationState.originalValue =
                ReadLocalValueWithWorkaround(element, property);
            propertyCustomizationState.customValue = it->second;
            SetOrClearValue(element, property, it->second);
        }

        propertyCustomizationState.propertyChangedToken =
            elementDo.RegisterPropertyChangedCallback(
                property,
                [&propertyCustomizationState](DependencyObject sender,
                                              DependencyProperty property)
                {
                    if (g_elementPropertyModifying)
                    {
                        return;
                    }

                    auto element = sender.try_as<FrameworkElement>();
                    if (!element)
                    {
                        return;
                    }

                    if (!propertyCustomizationState.customValue)
                    {
                        return;
                    }

                    Wh_Log(L"Re-applying style for %s",
                           winrt::get_class_name(element).c_str());

                    auto localValue =
                        ReadLocalValueWithWorkaround(element, property);

                    if (*propertyCustomizationState.customValue != localValue)
                    {
                        propertyCustomizationState.originalValue = localValue;
                    }

                    g_elementPropertyModifying = true;
                    SetOrClearValue(element, property,
                                    *propertyCustomizationState.customValue);
                    g_elementPropertyModifying = false;
                });
    }

    if (visualStateGroup)
    {
        winrt::weak_ref<FrameworkElement> elementWeakRef = element;
        elementCustomizationStateForVisualStateGroup
            ->visualStateGroupCurrentStateChangedToken =
            visualStateGroup.CurrentStateChanged(
                [elementWeakRef, propertyOverrides,
                 elementCustomizationStateForVisualStateGroup](
                    winrt::Windows::Foundation::IInspectable const &sender,
                    VisualStateChangedEventArgs const &e)
                {
                    auto element = elementWeakRef.get();
                    if (!element)
                    {
                        return;
                    }

                    Wh_Log(L"Re-applying all styles for %s",
                           winrt::get_class_name(element).c_str());

                    g_elementPropertyModifying = true;

                    auto &propertyCustomizationStates =
                        elementCustomizationStateForVisualStateGroup
                            ->propertyCustomizationStates;

                    for (const auto &[property, valuesPerVisualState] :
                         propertyOverrides)
                    {
                        auto &propertyCustomizationState =
                            propertyCustomizationStates.at(property);

                        auto newState = e.NewState();
                        auto newStateName =
                            std::wstring{newState ? newState.Name() : L""};
                        auto it = valuesPerVisualState.find(newStateName);
                        if (it == valuesPerVisualState.end())
                        {
                            it = valuesPerVisualState.find(L"");
                            if (it != valuesPerVisualState.end())
                            {
                                auto oldState = e.OldState();
                                auto oldStateName = std::wstring{
                                    oldState ? oldState.Name() : L""};
                                if (!valuesPerVisualState.contains(
                                        oldStateName))
                                {
                                    continue;
                                }
                            }
                        }

                        if (it != valuesPerVisualState.end())
                        {
                            if (!propertyCustomizationState.originalValue)
                            {
                                propertyCustomizationState.originalValue =
                                    ReadLocalValueWithWorkaround(element,
                                                                 property);
                            }

                            propertyCustomizationState.customValue = it->second;
                            SetOrClearValue(element, property, it->second);
                        }
                        else
                        {
                            if (propertyCustomizationState.originalValue)
                            {
                                SetOrClearValue(
                                    element, property,
                                    *propertyCustomizationState.originalValue);
                                propertyCustomizationState.originalValue
                                    .reset();
                            }

                            propertyCustomizationState.customValue.reset();
                        }
                    }

                    g_elementPropertyModifying = false;
                });
    }
}

void RestoreCustomizationsForVisualStateGroup(
    FrameworkElement element,
    std::optional<winrt::weak_ref<VisualStateGroup>>
        visualStateGroupOptionalWeakPtr,
    const ElementCustomizationStateForVisualStateGroup &
        elementCustomizationStateForVisualStateGroup)
{
    if (element)
    {
        for (const auto &[property, state] :
             elementCustomizationStateForVisualStateGroup
                 .propertyCustomizationStates)
        {
            element.UnregisterPropertyChangedCallback(
                property, state.propertyChangedToken);

            if (state.originalValue)
            {
                SetOrClearValue(element, property, *state.originalValue);
            }
        }
    }

    auto visualStateGroupIter = visualStateGroupOptionalWeakPtr
                                    ? visualStateGroupOptionalWeakPtr->get()
                                    : nullptr;
    if (visualStateGroupIter && elementCustomizationStateForVisualStateGroup
                                    .visualStateGroupCurrentStateChangedToken)
    {
        visualStateGroupIter.CurrentStateChanged(
            elementCustomizationStateForVisualStateGroup
                .visualStateGroupCurrentStateChangedToken);
    }
}

/**
 * Applies customizations to an element immediately
 *
 * This function finds and applies all matching style rules to the given element
 * without any delay, handling property overrides and visual state changes.
 */
void ApplyCustomizationsWithNoDelay(InstanceHandle handle,
                                    FrameworkElement element,
                                    PCWSTR fallbackClassName)
{
    auto overrides = FindElementPropertyOverrides(element, fallbackClassName);
    if (overrides.empty())
    {
        return;
    }

    Wh_Log(L"Applying styles");

    auto &elementCustomizationState = g_elementsCustomizationState[handle];

    for (const auto &[visualStateGroupOptionalWeakPtrIter, stateIter] :
         elementCustomizationState.perVisualStateGroup)
    {
        RestoreCustomizationsForVisualStateGroup(
            element, visualStateGroupOptionalWeakPtrIter, stateIter);
    }

    elementCustomizationState.element = element;
    elementCustomizationState.perVisualStateGroup.clear();

    for (auto &[visualStateGroup, overridesForVisualStateGroup] : overrides)
    {
        std::optional<winrt::weak_ref<VisualStateGroup>>
            visualStateGroupOptionalWeakPtr;
        if (visualStateGroup)
        {
            visualStateGroupOptionalWeakPtr = visualStateGroup;
        }

        elementCustomizationState.perVisualStateGroup.push_back(
            {visualStateGroupOptionalWeakPtr, {}});
        auto *elementCustomizationStateForVisualStateGroup =
            &elementCustomizationState.perVisualStateGroup.back().second;

        ApplyCustomizationsForVisualStateGroup(
            element, visualStateGroup, std::move(overridesForVisualStateGroup),
            elementCustomizationStateForVisualStateGroup);
    }
}

void ApplyCustomizations(InstanceHandle handle,
                         FrameworkElement element,
                         PCWSTR fallbackClassName)
{
    if (winrt::get_class_name(element) == L"Windows.UI.Xaml.Shapes.Rectangle" &&
        element.Name() == L"BackgroundFill")
    {
        // If customized before
        // `winrt::Taskbar::implementation::TaskbarBackground::OnApplyTemplate`
        // is executed, it can lead to a crash, or the customization may be
        // overridden. See:
        // https://github.com/ramensoftware/windows-11-taskbar-styling-guide/issues/4
        Wh_Log(L"Delaying customization of BackgroundFill");

        auto &delayedApplyData = g_backgroundFillDelayedApplyData[handle];

        auto previousTimer = delayedApplyData.timer;

        delayedApplyData.element = element;
        delayedApplyData.fallbackClassName = fallbackClassName;

        delayedApplyData.timer = SetTimer(
            nullptr, previousTimer, 0,
            [](HWND hwnd,        // handle of window for timer messages
               UINT uMsg,        // WM_TIMER message
               UINT_PTR idEvent, // timer identifier
               DWORD dwTime      // current system time
            )
            {
                Wh_Log(L"Running delayed customization of BackgroundFill");

                for (auto it = g_backgroundFillDelayedApplyData.begin();
                     it != g_backgroundFillDelayedApplyData.end(); ++it)
                {
                    auto &delayedApplyData = it->second;
                    if (delayedApplyData.timer != idEvent)
                    {
                        continue;
                    }

                    InstanceHandle handle = it->first;

                    if (auto element = delayedApplyData.element.get())
                    {
                        ApplyCustomizationsWithNoDelay(
                            handle, std::move(element),
                            delayedApplyData.fallbackClassName.c_str());
                    }
                    else
                    {
                        Wh_Log(L"Element no longer exists");
                    }

                    KillTimer(nullptr, delayedApplyData.timer);
                    g_backgroundFillDelayedApplyData.erase(it);
                    break;
                }
            });

        return;
    }

    ApplyCustomizationsWithNoDelay(handle, std::move(element),
                                   fallbackClassName);
}

void CleanupCustomizations(InstanceHandle handle)
{
    if (auto it = g_backgroundFillDelayedApplyData.find(handle);
        it != g_backgroundFillDelayedApplyData.end())
    {
        KillTimer(nullptr, it->second.timer);
        g_backgroundFillDelayedApplyData.erase(it);
    }

    if (auto it = g_elementsCustomizationState.find(handle);
        it != g_elementsCustomizationState.end())
    {
        auto &elementCustomizationState = it->second;

        auto element = elementCustomizationState.element.get();

        for (const auto &[visualStateGroupOptionalWeakPtrIter, stateIter] :
             elementCustomizationState.perVisualStateGroup)
        {
            RestoreCustomizationsForVisualStateGroup(
                element, visualStateGroupOptionalWeakPtrIter, stateIter);
        }

        g_elementsCustomizationState.erase(it);
    }
}

ElementMatcher ElementMatcherFromString(std::wstring_view str)
{
    ElementMatcher result;
    PropertyValuesUnresolved propertyValuesUnresolved;

    auto i = str.find_first_of(L"#@[");
    result.type = TrimStringView(str.substr(0, i));
    if (result.type.empty())
    {
        throw std::runtime_error("Bad target syntax, empty type");
    }

    while (i != str.npos)
    {
        auto iNext = str.find_first_of(L"#@[", i + 1);
        auto nextPart =
            str.substr(i + 1, iNext == str.npos ? str.npos : iNext - (i + 1));

        switch (str[i])
        {
        case L'#':
            if (!result.name.empty())
            {
                throw std::runtime_error(
                    "Bad target syntax, more than one name");
            }

            result.name = TrimStringView(nextPart);
            if (result.name.empty())
            {
                throw std::runtime_error("Bad target syntax, empty name");
            }
            break;

        case L'@':
            if (result.visualStateGroupName)
            {
                throw std::runtime_error(
                    "Bad target syntax, more than one visual state group");
            }

            result.visualStateGroupName = TrimStringView(nextPart);
            break;

        case L'[':
        {
            auto rule = TrimStringView(nextPart);
            if (rule.length() == 0 || rule.back() != L']')
            {
                throw std::runtime_error("Bad target syntax, missing ']'");
            }

            rule = TrimStringView(rule.substr(0, rule.length() - 1));
            if (rule.length() == 0)
            {
                throw std::runtime_error(
                    "Bad target syntax, empty property");
            }

            if (rule.find_first_not_of(L"0123456789") == rule.npos)
            {
                result.oneBasedIndex = std::stoi(std::wstring(rule));
                break;
            }

            auto ruleEqPos = rule.find(L'=');
            if (ruleEqPos == rule.npos)
            {
                throw std::runtime_error(
                    "Bad target syntax, missing '=' in property");
            }

            auto ruleKey = TrimStringView(rule.substr(0, ruleEqPos));
            auto ruleVal = TrimStringView(rule.substr(ruleEqPos + 1));

            if (ruleKey.length() == 0)
            {
                throw std::runtime_error(
                    "Bad target syntax, empty property name");
            }

            propertyValuesUnresolved.push_back(
                {std::wstring(ruleKey), std::wstring(ruleVal)});
            break;
        }

        default:
            throw std::runtime_error("Bad target syntax");
        }

        i = iNext;
    }

    result.propertyValues = std::move(propertyValuesUnresolved);

    return result;
}

StyleRule StyleRuleFromString(std::wstring_view str)
{
    StyleRule result;

    auto eqPos = str.find(L'=');
    if (eqPos == str.npos)
    {
        throw std::runtime_error("Bad style syntax, '=' is missing");
    }

    auto name = str.substr(0, eqPos);
    auto value = str.substr(eqPos + 1);

    result.value = TrimStringView(value);

    if (name.size() > 0 && name.back() == L':')
    {
        result.isXamlValue = true;
        name = name.substr(0, name.size() - 1);
    }

    auto atPos = name.find(L'@');
    if (atPos != name.npos)
    {
        result.visualState = TrimStringView(name.substr(atPos + 1));
        name = name.substr(0, atPos);
    }

    result.name = TrimStringView(name);
    if (result.name.empty())
    {
        throw std::runtime_error("Bad style syntax, empty name");
    }

    return result;
}

std::wstring AdjustTypeName(std::wstring_view type)
{
    if (type.find_first_of(L".:") == type.npos)
    {
        if (type == L"Rectangle")
        {
            return L"Windows.UI.Xaml.Shapes.Rectangle";
        }

        return L"Windows.UI.Xaml.Controls." + std::wstring{type};
    }

    static const std::vector<std::pair<std::wstring_view, std::wstring_view>>
        adjustments = {
            {L"taskbar:", L"Taskbar."},
            {L"systemtray:", L"SystemTray."},
            {L"udk:", L"WindowsUdk.UI.Shell."},
            {L"muxc:", L"Microsoft.UI.Xaml.Controls."},
        };

    for (const auto &adjustment : adjustments)
    {
        if (type.starts_with(adjustment.first))
        {
            auto result = std::wstring{adjustment.second};
            result += type.substr(adjustment.first.size());
            return result;
        }
    }

    return std::wstring{type};
}

void AddElementCustomizationRules(std::wstring_view target,
                                  std::vector<std::wstring> styles)
{
    ElementCustomizationRules elementCustomizationRules;

    auto targetParts = SplitStringView(target, L" > ");

    bool first = true;
    bool hasVisualStateGroup = false;
    for (auto i = targetParts.rbegin(); i != targetParts.rend(); ++i)
    {
        const auto &targetPart = *i;

        auto matcher = ElementMatcherFromString(targetPart);
        matcher.type = AdjustTypeName(matcher.type);

        if (matcher.visualStateGroupName)
        {
            if (hasVisualStateGroup)
            {
                throw std::runtime_error(
                    "Element type can't have more than one visual state group");
            }

            hasVisualStateGroup = true;
        }

        if (first)
        {
            std::vector<StyleRule> styleRules;
            for (const auto &style : styles)
            {
                styleRules.push_back(StyleRuleFromString(style));
            }

            elementCustomizationRules.elementMatcher = std::move(matcher);
            elementCustomizationRules.propertyOverrides = std::move(styleRules);
        }
        else
        {
            elementCustomizationRules.parentElementMatchers.push_back(
                std::move(matcher));
        }

        first = false;
    }

    g_elementsCustomizationRules.push_back(
        std::move(elementCustomizationRules));
}

bool ProcessSingleTargetStylesFromSettings(int index)
{
    string_setting_unique_ptr targetStringSetting(
        Wh_GetStringSetting(L"controlStyles[%d].target", index));
    if (!*targetStringSetting.get())
    {
        return false;
    }

    Wh_Log(L"Processing styles for %s", targetStringSetting.get());

    std::vector<std::wstring> styles;

    for (int styleIndex = 0;; styleIndex++)
    {
        string_setting_unique_ptr styleSetting(Wh_GetStringSetting(
            L"controlStyles[%d].styles[%d]", index, styleIndex));
        if (!*styleSetting.get())
        {
            break;
        }

        // Skip if commented.
        if (styleSetting[0] == L'/' && styleSetting[1] == L'/')
        {
            continue;
        }

        styles.push_back(styleSetting.get());
    }

    if (styles.size() > 0)
    {
        AddElementCustomizationRules(targetStringSetting.get(),
                                     std::move(styles));
    }

    return true;
}

std::optional<bool> IsOsFeatureEnabled(UINT32 featureId)
{
    enum FEATURE_ENABLED_STATE
    {
        FEATURE_ENABLED_STATE_DEFAULT = 0,
        FEATURE_ENABLED_STATE_DISABLED = 1,
        FEATURE_ENABLED_STATE_ENABLED = 2,
    };

#pragma pack(push, 1)
    struct RTL_FEATURE_CONFIGURATION
    {
        unsigned int featureId;
        unsigned __int32 group : 4;
        FEATURE_ENABLED_STATE enabledState : 2;
        unsigned __int32 enabledStateOptions : 1;
        unsigned __int32 unused1 : 1;
        unsigned __int32 variant : 6;
        unsigned __int32 variantPayloadKind : 2;
        unsigned __int32 unused2 : 16;
        unsigned int payload;
    };
#pragma pack(pop)

    using RtlQueryFeatureConfiguration_t =
        int(NTAPI *)(UINT32, int, INT64 *, RTL_FEATURE_CONFIGURATION *);
    static RtlQueryFeatureConfiguration_t pRtlQueryFeatureConfiguration = []()
    {
        HMODULE hNtDll = LoadLibraryW(L"ntdll.dll");
        return hNtDll ? (RtlQueryFeatureConfiguration_t)GetProcAddress(
                            hNtDll, "RtlQueryFeatureConfiguration")
                      : nullptr;
    }();

    if (!pRtlQueryFeatureConfiguration)
    {
        Wh_Log(L"RtlQueryFeatureConfiguration not found");
        return std::nullopt;
    }

    RTL_FEATURE_CONFIGURATION feature = {0};
    INT64 changeStamp = 0;
    HRESULT hr =
        pRtlQueryFeatureConfiguration(featureId, 1, &changeStamp, &feature);
    if (SUCCEEDED(hr))
    {
        Wh_Log(L"RtlQueryFeatureConfiguration result for %u: %d", featureId,
               feature.enabledState);

        switch (feature.enabledState)
        {
        case FEATURE_ENABLED_STATE_DISABLED:
            return false;
        case FEATURE_ENABLED_STATE_ENABLED:
            return true;
        case FEATURE_ENABLED_STATE_DEFAULT:
            return std::nullopt;
        }
    }
    else
    {
        Wh_Log(L"RtlQueryFeatureConfiguration error for %u: %08X", featureId,
               hr);
    }

    return std::nullopt;
}

void ProcessAllStylesFromSettings()
{
    PCWSTR themeName = Wh_GetStringSetting(L"theme");
    const Theme *theme = nullptr;
    if (wcscmp(themeName, L"WinXP") == 0)
    {
        theme = &g_themeWinXP;
    }
    else if (wcscmp(themeName, L"Bubbles") == 0)
    {
        theme = &g_themeBubbles;
    }
    else if (wcscmp(themeName, L"TranslucentTaskbar") == 0)
    {
        theme = &g_themeTranslucentTaskbar;
    }
    else if (wcscmp(themeName, L"Squircle") == 0)
    {
        // Weather widget on the right.
        // https://www.reddit.com/r/Windows11/comments/1dnew8x/my_weather_widget_is_on_the_right_side/
        constexpr UINT32 kExtendedModeAEPForTaskbar = 48660958;
        theme = IsOsFeatureEnabled(kExtendedModeAEPForTaskbar).value_or(false)
                    ? &g_themeSquircle_variant_WeatherOnTheRight
                    : &g_themeSquircle;
    }
    else if (wcscmp(themeName, L"RosePine") == 0)
    {
        theme = &g_themeRosePine;
    }
    else if (wcscmp(themeName, L"DockLike") == 0)
    {
        theme = &g_themeDockLike;
    }
    else if (wcscmp(themeName, L"WinVista") == 0)
    {
        theme = &g_themeWinVista;
    }
    else if (wcscmp(themeName, L"CleanSlate") == 0)
    {
        theme = &g_themeCleanSlate;
    }
    else if (wcscmp(themeName, L"Lucent") == 0)
    {
        theme = &g_themeLucent;
    }
    else if (wcscmp(themeName, L"Lucent_variant_Light") == 0)
    {
        theme = &g_themeLucent_variant_Light;
    }
    else if (wcscmp(themeName, L"21996Taskbar") == 0)
    {
        theme = &g_theme21996Taskbar;
    }
    Wh_FreeStringSetting(themeName);

    if (theme)
    {
        for (const auto &themeTargetStyle : theme->targetStyles)
        {
            try
            {
                std::vector<std::wstring> styles{
                    themeTargetStyle.styles.begin(),
                    themeTargetStyle.styles.end()};
                AddElementCustomizationRules(themeTargetStyle.target,
                                             std::move(styles));
            }
            catch (winrt::hresult_error const &ex)
            {
                Wh_Log(L"Error %08X", ex.code());
            }
            catch (std::exception const &ex)
            {
                Wh_Log(L"Error: %S", ex.what());
            }
        }
    }

    for (int i = 0;; i++)
    {
        try
        {
            if (!ProcessSingleTargetStylesFromSettings(i))
            {
                break;
            }
        }
        catch (winrt::hresult_error const &ex)
        {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        }
        catch (std::exception const &ex)
        {
            Wh_Log(L"Error: %S", ex.what());
        }
    }
}

bool ProcessSingleResourceVariableFromSettings(int index)
{
    string_setting_unique_ptr variableKeyStringSetting(
        Wh_GetStringSetting(L"resourceVariables[%d].variableKey", index));
    if (!*variableKeyStringSetting.get())
    {
        return false;
    }

    Wh_Log(L"Processing resource variable %s", variableKeyStringSetting.get());

    std::wstring_view variableKey = variableKeyStringSetting.get();

    auto resources = Application::Current().Resources();

    auto resource = resources.Lookup(winrt::box_value(variableKey));

    // Example: Windows.Foundation.IReference`1<Windows.UI.Xaml.Thickness>
    auto resourceClassName = winrt::get_class_name(resource);
    if (resourceClassName.starts_with(L"Windows.Foundation.IReference`1<") &&
        resourceClassName.ends_with(L'>'))
    {
        size_t prefixSize = sizeof("Windows.Foundation.IReference`1<") - 1;
        resourceClassName =
            winrt::hstring(resourceClassName.data() + prefixSize,
                           resourceClassName.size() - prefixSize - 1);
    }

    auto resourceTypeName = Interop::TypeName{resourceClassName};

    string_setting_unique_ptr valueStringSetting(
        Wh_GetStringSetting(L"resourceVariables[%d].value", index));

    std::wstring_view value = valueStringSetting.get();

    resources.Insert(winrt::box_value(variableKey),
                     Markup::XamlBindingHelper::ConvertValue(
                         resourceTypeName, winrt::box_value(value)));

    return true;
}

void ProcessResourceVariablesFromSettings()
{
    for (int i = 0;; i++)
    {
        try
        {
            if (!ProcessSingleResourceVariableFromSettings(i))
            {
                break;
            }
        }
        catch (winrt::hresult_error const &ex)
        {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        }
        catch (std::exception const &ex)
        {
            Wh_Log(L"Error: %S", ex.what());
        }
    }
}

void UninitializeSettingsAndTap()
{
    for (auto &[handle, data] : g_backgroundFillDelayedApplyData)
    {
        KillTimer(nullptr, data.timer);
    }

    g_backgroundFillDelayedApplyData.clear();

    for (const auto &[handle, elementCustomizationState] :
         g_elementsCustomizationState)
    {
        auto element = elementCustomizationState.element.get();

        for (const auto &[visualStateGroupOptionalWeakPtrIter, stateIter] :
             elementCustomizationState.perVisualStateGroup)
        {
            RestoreCustomizationsForVisualStateGroup(
                element, visualStateGroupOptionalWeakPtrIter, stateIter);
        }
    }

    g_elementsCustomizationState.clear();

    g_elementsCustomizationRules.clear();

    g_targetThreadId = 0;
}

void InitializeSettingsAndTap()
{
    DWORD kNoThreadId = 0;
    if (!g_targetThreadId.compare_exchange_strong(kNoThreadId,
                                                  GetCurrentThreadId()))
    {
        return;
    }

    ProcessAllStylesFromSettings();
    ProcessResourceVariablesFromSettings();

    HRESULT hr = InjectWindhawkTAP();
    if (FAILED(hr))
    {
        Wh_Log(L"Error %08X", hr);
    }
}

using CreateWindowExW_t = decltype(&CreateWindowExW);
CreateWindowExW_t CreateWindowExW_Original;
HWND WINAPI CreateWindowExW_Hook(DWORD dwExStyle,
                                 LPCWSTR lpClassName,
                                 LPCWSTR lpWindowName,
                                 DWORD dwStyle,
                                 int X,
                                 int Y,
                                 int nWidth,
                                 int nHeight,
                                 HWND hWndParent,
                                 HMENU hMenu,
                                 HINSTANCE hInstance,
                                 PVOID lpParam)
{
    HWND hWnd = CreateWindowExW_Original(dwExStyle, lpClassName, lpWindowName,
                                         dwStyle, X, Y, nWidth, nHeight,
                                         hWndParent, hMenu, hInstance, lpParam);
    if (!hWnd)
    {
        return hWnd;
    }

    WCHAR className[64];
    if (!g_targetThreadId && hWndParent &&
        GetClassName(hWnd, className, ARRAYSIZE(className)) &&
        _wcsicmp(className,
                 L"Windows.UI.Composition.DesktopWindowContentBridge") == 0 &&
        GetClassName(hWndParent, className, ARRAYSIZE(className)) &&
        _wcsicmp(className, L"Shell_TrayWnd") == 0)
    {
        Wh_Log(L"Initializing - Created DesktopWindowContentBridge window");
        InitializeSettingsAndTap();
    }

    return hWnd;
}

using RunFromWindowThreadProc_t = void(WINAPI *)(PVOID parameter);

bool RunFromWindowThread(HWND hWnd,
                         RunFromWindowThreadProc_t proc,
                         PVOID procParam)
{
    static const UINT runFromWindowThreadRegisteredMsg =
        RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);

    struct RUN_FROM_WINDOW_THREAD_PARAM
    {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
    };

    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0)
    {
        return false;
    }

    if (dwThreadId == GetCurrentThreadId())
    {
        proc(procParam);
        return true;
    }

    HHOOK hook = SetWindowsHookEx(
        WH_CALLWNDPROC,
        [](int nCode, WPARAM wParam, LPARAM lParam) -> LRESULT
        {
            if (nCode == HC_ACTION)
            {
                const CWPSTRUCT *cwp = (const CWPSTRUCT *)lParam;
                if (cwp->message == runFromWindowThreadRegisteredMsg)
                {
                    RUN_FROM_WINDOW_THREAD_PARAM *param =
                        (RUN_FROM_WINDOW_THREAD_PARAM *)cwp->lParam;
                    param->proc(param->procParam);
                }
            }

            return CallNextHookEx(nullptr, nCode, wParam, lParam);
        },
        nullptr, dwThreadId);
    if (!hook)
    {
        return false;
    }

    RUN_FROM_WINDOW_THREAD_PARAM param;
    param.proc = proc;
    param.procParam = procParam;
    SendMessage(hWnd, runFromWindowThreadRegisteredMsg, 0, (LPARAM)&param);

    UnhookWindowsHookEx(hook);

    return true;
}

HWND GetTaskbarUiWnd()
{
    DWORD dwProcessId;
    DWORD dwCurrentProcessId = GetCurrentProcessId();

    HWND hTaskbarWnd = FindWindow(L"Shell_TrayWnd", nullptr);
    if (!hTaskbarWnd || !GetWindowThreadProcessId(hTaskbarWnd, &dwProcessId) ||
        dwProcessId != dwCurrentProcessId)
    {
        return nullptr;
    }

    return FindWindowEx(hTaskbarWnd, nullptr,
                        L"Windows.UI.Composition.DesktopWindowContentBridge",
                        nullptr);
}

/**
 * Windhawk module initialization function
 *
 * Sets up hooks and initializes the module when loaded by Windhawk.
 */
BOOL Wh_ModInit()
{
    Wh_Log(L">");

    Wh_SetFunctionHook((void *)CreateWindowExW, (void *)CreateWindowExW_Hook,
                       (void **)&CreateWindowExW_Original);

    return TRUE;
}

void Wh_ModAfterInit()
{
    Wh_Log(L">");

    HWND hTaskbarUiWnd = GetTaskbarUiWnd();
    if (hTaskbarUiWnd)
    {
        Wh_Log(L"Initializing - Found DesktopWindowContentBridge window");
        RunFromWindowThread(
            hTaskbarUiWnd, [](PVOID)
            { InitializeSettingsAndTap(); }, nullptr);
    }
}

void Wh_ModUninit()
{
    Wh_Log(L">");

    if (g_visualTreeWatcher)
    {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    HWND hTaskbarUiWnd = GetTaskbarUiWnd();
    if (hTaskbarUiWnd)
    {
        Wh_Log(L"Uninitializing - Found DesktopWindowContentBridge window");
        RunFromWindowThread(
            hTaskbarUiWnd, [](PVOID)
            { UninitializeSettingsAndTap(); },
            nullptr);
    }
}

void Wh_ModSettingsChanged()
{
    Wh_Log(L">");

    if (g_visualTreeWatcher)
    {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    HWND hTaskbarUiWnd = GetTaskbarUiWnd();
    if (hTaskbarUiWnd)
    {
        Wh_Log(L"Reinitializing - Found DesktopWindowContentBridge window");
        RunFromWindowThread(
            hTaskbarUiWnd,
            [](PVOID)
            {
                UninitializeSettingsAndTap();
                InitializeSettingsAndTap();
            },
            nullptr);
    }
}
