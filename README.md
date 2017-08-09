# Duilib

[作者原版本地址](https://github.com/duilib/duilib)

## 修复 WKWebView 闪烁问题

[WKWebView闪屏修复版本地址](https://github.com/GrayLand119/DuiLib_Redrain)

替换 CWkeWebkitUI.cpp **DoPaint** 函数

```cpp
// CWkeWebkitUI.cpp
void CWkeWebkitUI::DoPaint(HDC hDC, const RECT& rcPaint, CControlUI* pStopControl)
{
     CControlUI::DoPaint(hDC, rcPaint, pStopControl);
    RECT rc = GetClientPos();
    BitBlt(hDC, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, m_pWebView->getViewDC(), 0, 0, SRCCOPY);
}
```

若出现 **找不到m_pWebView->getViewDC()函数** 提示, 请使用 [WKWebView闪屏修复版本地址](https://github.com/GrayLand119/DuiLib_Redrain) 版本.

## Duilib 界面编辑器

原版的 DuiDesigner 存在很多 BUG, 使用起来非常不方便, 在此添加了一个第三方开发的 ZnDuiDesigner 相比原版稳定很多.

[ZnDuiDesigner.rar](https://github.com/GrayLand119/duilib/ZnDuiDesigner.rar)
