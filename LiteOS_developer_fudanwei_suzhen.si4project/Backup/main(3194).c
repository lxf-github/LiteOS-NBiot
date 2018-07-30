#include "define_all.h"  

int main (void)
{	
  UINT32 uwRet = LOS_OK;
	Init_System();				//ϵͳ��ʼ��
	Init_PrintUartx();   //printf
	
  uwRet = LOS_KernelInit();
  if (uwRet != LOS_OK)
  {
      return LOS_NOK;
  }
	
  LOS_Inspect_Entry();
		
	//pzh - test liteos api examples
	Example_TskCaseEntry();
	Example_MsgQueue();
	Example_Semphore();
	Example_MutexLock();
	Example_GetTick();
	Example_swTimer();
	Example_list();	
	Example_StaticMem();
  Example_Dyn_Mem();
	Example_Event();
  Example_SndRcvEvent();
	Example_TransformTime();

//Example_Interrupt();

  LOS_Start();
}