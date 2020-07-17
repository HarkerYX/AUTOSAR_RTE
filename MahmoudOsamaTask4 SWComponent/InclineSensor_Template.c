/**
 *
 * \file InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/17/2020 08:30 م
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_InclineSensor.h"
#include "Adc.h"

/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_GetPosition
 *
 */

void InclineSensor_GetPosition (SensorPositionType* position)
{
	SensorPositionType p;
	Rte_call_rpIOGetIncline_IOGet(&p);
	
	if(P==0)
		p=SENSOR_POSITION_0;
	else if(p>0 &&p<=60)
		p=SENSOR_POSITION_1;
	else if(p>60&&p<100)
		p=SENSOR_POSITION_2;
	else 
		p=SENSOR_POSITION_3;
	position =p;
	Std_ReturnType status;

}

