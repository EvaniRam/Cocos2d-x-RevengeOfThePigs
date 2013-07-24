#ifndef _UILOADRESOURCES_H_
#define _UILOADRESOURCES_H_

#include "GameIncludeHeader.h"

class UILoadResources: public CCLayer
{
public:
	UILoadResources();
	virtual ~UILoadResources();

	static CCScene* scene();
	virtual bool init();
	LAYER_NODE_FUNC(UILoadResources);

	/** Ԥ����һЩ������Դ�Լ���ʼ����ı���ͼƬloadingͼƬ */
	void LoadBegin();
	/** Ԥ����������Դ�Լ���ת����ʼ���� */
	void LoadFinished();
private:
	

private:
	CCSprite* CloudGameLogoSprite;  //������logoͼƬ����;
	CCSprite* loading_Sprite;   //loadingͼƬ�ľ���;
	CCSprite* bgSprite;        //����ͼƬ�ľ���;
	CCSprite* logoSprite;      //����DС��logo����;
	//bool b;

};

#endif