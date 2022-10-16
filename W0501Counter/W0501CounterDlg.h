
// W0501CounterDlg.h: 헤더 파일
//

#pragma once


// CW0501CounterDlg 대화 상자
class CW0501CounterDlg : public CDialogEx
{
protected:
	int CountValue = 0;
	CString txtCount;
// 생성입니다.
public:
	CW0501CounterDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_W0501COUNTER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAdd();
protected:
	int editValue;
public:
	afx_msg void OnSet();
};
