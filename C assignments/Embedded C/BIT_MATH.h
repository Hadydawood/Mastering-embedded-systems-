/*
 * BIT_MATH.h
 *
 * Created: 8/10/2023 9:54:17 AM
 *  Author: G3
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SET_BIT(REG,BIT_NUM)        (REG=REG|(1<<BIT_NUM))
#define CLR_BIT(REG,BIT_NUM)        (REG=REG&(~(1<<BIT_NUM)))
#define TOG_BIT(REG,BIT_NUM)        (REG=REG^(1<<BIT_NUM))
#define GET_BIT(REG,BIT_NUM)        (((REG)>>(BIT_NUM)) &1)

#endif /* BIT_MATH_H_ */