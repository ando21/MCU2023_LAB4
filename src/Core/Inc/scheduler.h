/*
 * scheduler.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ADMIN
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "stdint.h"


#define SCH_MAX_TASKS 			10
#define	NO_TASK_ID				0

#define RED GPIO_PIN_5

/* ERROR_CODE */
#define ERROR_SCH_TOO_MANY_TASKS 0
#define ERROR_SCH_WAITING_FOR_SLAVE_TO_ACK 2
#define ERROR_SCH_WAITING_FOR_START_COMMAND_FROM_MASTER 2
#define ERROR_SCH_ONE_OR_MORE_SLAVES_DID_NOT_START 3
#define ERROR_SCH_LOST_SLAVE 4
#define ERROR_SCH_CAN_BUS_ERROR 5
#define ERROR_I2C_WRITE_BYTE_AT24C64 6

#ifdef __cplusplus
extern "C" {
#endif

    void SCH_Init(void);
    void SCH_Update(void);
    uint32_t SCH_Add_Task(void (*p_function)(), uint32_t DELAY, uint32_t PERIOD);
    void SCH_Dispatch_Tasks(void);
    uint8_t SCH_Delete_Task(uint32_t TASK_ID);

#ifdef __cplusplus
}
#endif



#endif /* INC_SCHEDULER_H_ */
