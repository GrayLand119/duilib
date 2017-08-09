# Duilib

[官方地址](https://github.com/duilib/duilib)

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

