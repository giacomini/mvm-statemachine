/*
 * HAL.h
 *
 *  Created on: 7 mag 2020
 *      Author: AngeloGargantini
 */

#ifndef HAL_H_
#define HAL_H_

typedef enum {
    P_CONTROLLED_V, P_SUPPORTED_V
} MVM_mode;



class HAL {
public:
	HAL();
	virtual ~HAL();
	void startExpiration();
	void startInspiration();
	void endExpiration();
	void endInspiration();
	double getPressure();
	bool flowDrop();

};

#endif /* HAL_H_ */
