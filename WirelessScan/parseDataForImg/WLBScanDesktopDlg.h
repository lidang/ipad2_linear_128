
// WLBScanDesktopDlg.h : ͷ�ļ�
//

#pragma once

#include "TransSocket.h"
// CWLBScanDesktopDlg �Ի���
class CWLBScanDesktopDlg
{
   
// ����
public:
    
	 CWLBScanDesktopDlg();
		// DDX/DDV ֧��

//	����ӿ�
	
	bool		m_bRunning;

	CTransSocket m_TransSocket;


//	ͼ��DSC
	typedef struct _tagDSC_INDEX{
		bool bIn;
		int  nLine;
		int	 nPixel;
		float fPartLine;
		float fPartPixel;
        unsigned long ulPartLine;
        unsigned long ulPartPixel;
	} DSC_INDEX;

	DSC_INDEX* m_pDscIndex;
	//	��ʼ��DSCϵ��
	void InitDscIndex();

	unsigned char* m_pImage;
	//	����DSC����������� m_pImage ��
	void DscImage(unsigned char* pRawData);
	
	
};
