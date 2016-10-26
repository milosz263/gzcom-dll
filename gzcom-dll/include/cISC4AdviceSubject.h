#pragma once
#include "cIGZUnknown.h"

class cISC4AdviceSubject : public cIGZUnknown
{
	public:
		virtual bool SetLocation(float x, float z) = 0;
		virtual float GetLocationX(void) = 0;
		virtual float GetLocationZ(void) = 0;
		virtual bool HasLocation(void) = 0;

		virtual bool SetObject(cIGZUnknown* pObject) = 0;
		virtual cIGZUnknown* GetObjectA(void) = 0;

		virtual uint32_t GetData1(void) = 0;
		virtual bool SetData1(uint32_t dwData) = 0;

		virtual uint32_t GetData2(void) = 0;
		virtual bool SetData2(uint32_t dwData) = 0;
};