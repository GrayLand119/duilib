//xuan
//QQ:879364810
#pragma once
#include <string>
#include "wke.h"

#ifdef _UNICODE
#define _tstring std::wstring
#else
#define _tstring std::string
#endif

#define EVENT_TICK_TIEMER_ID	42

_tstring ANSI2T(LPCSTR);
std::string T2ANSI(LPCTSTR);

class CWkeWebkitUI : public DuiLib::CControlUI, public wkeClientHandler
{
public:
	CWkeWebkitUI(void);
	~CWkeWebkitUI(void);

	static void InitializeWebkit();
	static void UninitializeWebkit();
	static void MapNativeFunction(LPCTSTR lpName, jsNativeFunction fn, UINT args);
	
	void Close();

	void ShowFile(LPCTSTR lpFile);
	void Navigate(LPCTSTR lpUrl);
	void ShowHtml(LPCTSTR lpHtml);
	
	_tstring GetTitle();
	_tstring GetWebkitName() const;
	void SetWebKitName(LPCTSTR lpName);

	void Stop();
	void Reload();
	BOOL IsLoadSucessed() const;
	BOOL IsDocumentReady() const;
	BOOL IsDocumentLoadCompleted() const;

	int GetContentsWidth() const;
	int GetContentsHeight() const;

	BOOL Back();
	BOOL Forward();

	void Cut();
	void Copy();
	void Paste();
	void Delete();
	void SelectAll();

	float GetScale() const;
	void Zoom(float fScale);

	BOOL IsCookieEnabled() const;
	void EnableCookie(BOOL bEnable = TRUE);

	float GetMediaVolume() const;
	void SetMediaVolume(float fVol);

	//__int64 ExecJavaScript(LPCTSTR lpScript);
	_tstring ExecJavaScript(LPCTSTR lpScript);

protected:
	virtual void DoInit();
	virtual LPCTSTR	GetClass() const;
	virtual LPVOID GetInterface(LPCTSTR pstrName);
	virtual void DoEvent(DuiLib::TEventUI& event);
	virtual void SetPos(RECT rc, bool bNeedInvalidate = false);
	virtual bool DoPaint(HDC hDC, const RECT& rcPaint, CControlUI* pStopControl);
	
private:
	wkeWebView	 m_pWebView;
	static void _onURLChanged(const struct _wkeClientHandler* clientHandler, const wkeString URL);
	static void _onTitleChanged(const struct _wkeClientHandler* clientHandler, const wkeString title);
};

